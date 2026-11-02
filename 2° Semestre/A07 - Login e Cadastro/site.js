(() => {
    const params = new URLSearchParams(window.location.search);
    const packageId = params.get('pacote');
    const packages = {
        '1': {
            title: 'Pacote 1',
            image: 'img/pacote1.jpg',
            description: 'Uma viagem especial para descobrir novos lugares e aproveitar cada momento.'
        },
        '2': {
            title: 'Pacote 2',
            image: 'img/pacote2.jpg',
            description: 'Uma experiência completa para descansar, passear e criar boas lembranças.'
        },
        '3': {
            title: 'Pacote 3',
            image: 'img/pacote3.jpg',
            description: 'Escolha seu próximo roteiro e aproveite uma aventura do seu jeito.'
        }
    };

    const selectedPackage = packages[packageId] || packages['1'];
    const title = document.getElementById('package-title');
    const image = document.getElementById('package-image');
    const description = document.getElementById('package-description');
    const buyButton = document.getElementById('buy-button');
    if (title && image && description && buyButton) {
        title.textContent = selectedPackage.title;
        image.src = selectedPackage.image;
        image.alt = `Destino do ${selectedPackage.title}`;
        description.textContent = selectedPackage.description;
        buyButton.href = `login.html?pacote=${encodeURIComponent(packages[packageId] ? packageId : '1')}`;
    }

    const packageQuery = packageId && packages[packageId]
        ? `?pacote=${encodeURIComponent(packageId)}`
        : '';
    document.querySelectorAll('[data-register-link]').forEach((link) => {
        link.href = `cadastro.html${packageQuery}`;
    });
    document.querySelectorAll('[data-login-link]').forEach((link) => {
        link.href = `login.html${packageQuery}`;
    });

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

    document.querySelectorAll('[data-demo-form]').forEach((form) => {
        form.addEventListener('submit', (event) => {
            event.preventDefault();
            if (!form.reportValidity()) return;
            const feedback = form.querySelector('.form-feedback');
            if (!feedback) return;
            feedback.textContent = form.dataset.demoForm === 'cadastro'
                ? 'Cadastro demonstrativo: os dados não foram enviados nem armazenados. Para ativar, conecte o formulário a um serviço de cadastro.'
                : 'Tela demonstrativa: a autenticação ainda não está conectada a um servidor.';
        });
    });
})();
