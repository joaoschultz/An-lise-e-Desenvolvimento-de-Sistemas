(() => {
    const params = new URLSearchParams(window.location.search);
    const aliases = { '1': 'rio', '2': 'foz', '3': 'salvador', '4': 'gramado' };
    const packages = {
        rio: {
            title: 'Rio de Janeiro',
            description: 'Praias da Zona Sul, mirantes do Pão de Açúcar e a paisagem da Baía de Guanabara.',
            image: 'img/rio-pao-acucar.jpg',
            page: 'pacote-rio.html',
            highlights: ['Pão de Açúcar e os mirantes do Morro da Urca.', 'Praias e calçadões da Zona Sul.', 'Paisagens da Baía de Guanabara e culinária carioca.']
        },
        foz: {
            title: 'Foz do Iguaçu',
            description: 'Cataratas, passarelas panorâmicas e floresta subtropical no oeste do Paraná.',
            image: 'img/foz-iguacu.jpg',
            page: 'pacote-foz.html',
            highlights: ['Cataratas do Iguaçu e mirantes panorâmicos.', 'Trilhas e floresta subtropical no parque nacional.', 'Paisagem de fronteira entre Brasil e Argentina.']
        },
        salvador: {
            title: 'Salvador',
            description: 'Pelourinho, Centro Histórico e a cultura, música e culinária da Bahia.',
            image: 'img/salvador-pelourinho.jpg',
            page: 'pacote-salvador.html',
            highlights: ['Pelourinho e as ruas do Centro Histórico.', 'Arquitetura colonial, igrejas e largos históricos.', 'Culinária, música e tradições culturais da Bahia.']
        },
        gramado: {
            title: 'Gramado',
            description: 'Lago Negro, jardins e cafés em um passeio pela Serra Gaúcha.',
            image: 'img/gramado-lago-negro.jpg',
            page: 'pacote-gramado.html',
            highlights: ['Volta a pé e passeio de pedalinho no Lago Negro.', 'Rua Coberta, cafés e atrações do centro.', 'Sabores da serra e passeios entre parques e jardins.']
        }
    };
    let requestedId = params.get('pacote') || 'rio';
    requestedId = aliases[requestedId] || requestedId;
    const packageId = Object.prototype.hasOwnProperty.call(packages, requestedId) ? requestedId : 'rio';
    const selectedPackage = packages[packageId];
    const packageQuery = `?pacote=${encodeURIComponent(packageId)}`;

    // Mantém o destino escolhido ao atravessar login, cadastro e pagamento.
    document.querySelectorAll('[data-register-link]').forEach((link) => {
        link.href = `cadastro.html${packageQuery}`;
    });
    document.querySelectorAll('[data-login-link]').forEach((link) => {
        link.href = `login.html${packageQuery}`;
    });
    document.querySelectorAll('[data-package-back]').forEach((link) => {
        link.href = selectedPackage.page;
    });

    // Compatibilidade com a página dinâmica de detalhes da versão anterior.
    const legacyTitle = document.getElementById('package-title');
    const legacyImage = document.getElementById('package-image');
    const legacyDescription = document.getElementById('package-description');
    const legacyBuyButton = document.getElementById('buy-button');
    if (legacyTitle && legacyImage && legacyDescription && legacyBuyButton) {
        legacyTitle.textContent = selectedPackage.title;
        legacyImage.src = selectedPackage.image;
        legacyImage.alt = `Destino do pacote: ${selectedPackage.title}`;
        legacyDescription.textContent = selectedPackage.description;
        legacyBuyButton.href = `login.html${packageQuery}`;
        const highlights = document.getElementById('package-highlights');
        if (highlights) {
            highlights.replaceChildren(...selectedPackage.highlights.map((text) => {
                const item = document.createElement('li');
                item.textContent = text;
                return item;
            }));
        }
    }

    // Preenche o resumo do pedido na etapa de pagamento e na tela de conclusão.
    document.querySelectorAll('[data-package-name]').forEach((element) => {
        element.textContent = selectedPackage.title;
    });
    document.querySelectorAll('[data-package-short]').forEach((element) => {
        element.textContent = selectedPackage.title;
    });
    document.querySelectorAll('[data-package-description]').forEach((element) => {
        element.textContent = selectedPackage.description;
    });
    const summaryImage = document.querySelector('[data-package-image]');
    if (summaryImage) {
        summaryImage.src = selectedPackage.image;
        summaryImage.alt = selectedPackage.title;
    }

    // Validação cruzada para a confirmação de senha no cadastro.
    const password = document.getElementById('nova-senha');
    const confirmation = document.querySelector('[data-password-confirmation]');
    if (password && confirmation) {
        const checkPasswords = () => {
            confirmation.setCustomValidity(
                confirmation.value && confirmation.value !== password.value
                    ? 'As senhas precisam ser iguais.'
                    : ''
            );
        };
        password.addEventListener('input', checkPasswords);
        confirmation.addEventListener('input', checkPasswords);
    }

    // Alterna os campos obrigatórios conforme a forma de pagamento selecionada.
    const cardFields = document.getElementById('card-fields');
    const pixInfo = document.getElementById('pix-info');
    const paymentOptions = document.querySelectorAll('input[name="metodo"]');
    const updatePaymentMethod = () => {
        if (!cardFields || !pixInfo) return;
        const method = document.querySelector('input[name="metodo"]:checked')?.value || 'cartao';
        const isPix = method === 'pix';
        cardFields.disabled = isPix;
        pixInfo.hidden = !isPix;
    };
    paymentOptions.forEach((option) => option.addEventListener('change', updatePaymentMethod));
    updatePaymentMethod();

    // Este protótipo apenas demonstra a navegação: não envia nem armazena dados.
    document.querySelectorAll('[data-demo-form]').forEach((form) => {
        form.addEventListener('submit', (event) => {
            event.preventDefault();
            if (!form.reportValidity()) return;
            const kind = form.dataset.demoForm;
            if (kind === 'cadastro' || kind === 'login') {
                window.location.assign(`pagamento.html${packageQuery}`);
                return;
            }
            if (kind === 'pagamento') {
                const method = document.querySelector('input[name="metodo"]:checked')?.value || 'cartao';
                const result = new URLSearchParams({ pacote: packageId, pagamento: method });
                window.location.assign(`finalizacao.html?${result.toString()}`);
            }
        });
    });

    const paymentLabel = document.querySelector('[data-payment-name]');
    if (paymentLabel) {
        paymentLabel.textContent = params.get('pagamento') === 'pix' ? 'Pix (demonstração)' : 'Cartão de crédito (demonstração)';
    }
})();
