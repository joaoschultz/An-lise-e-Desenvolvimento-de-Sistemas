#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

// Insere um novo nó no final da lista
void inserir(struct Node** head_ref, int new_data)
{
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));

    new_node->data = new_data;
    new_node->next = NULL;

    // Se a lista estiver vazia
    if (*head_ref == NULL) {
        *head_ref = new_node;
    }
    else {
        struct Node* temp = *head_ref;

        // Percorre até o último nó
        while (temp->next != NULL) {
            temp = temp->next;
        }

        temp->next = new_node;
    }
}

// Mostra a lista
void printList(struct Node* head)
{
    struct Node* temp = head;

    while (temp != NULL) {
        printf("Dados = %d\n", temp->data);
        temp = temp->next;
    }
}

int main()
{
    // Lista vazia
    struct Node* head = NULL;

    int quantidade;
    int valor;

    printf("Quantidade de nos: ");
    scanf("%d", &quantidade);

    // Insere os dados
    for (int i = 0; i < quantidade; i++) {

        printf("No %d: numero ", i + 1);
        scanf("%d", &valor);

        inserir(&head, valor);
    }

    printf("\nDados inseridos na lista:\n");

    printList(head);

    return 0;
}