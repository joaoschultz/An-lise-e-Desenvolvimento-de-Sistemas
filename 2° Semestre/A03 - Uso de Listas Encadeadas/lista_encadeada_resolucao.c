/**************************************************************************************************/
/**************************************************************************************************/
/************************************DESAFIO DA LISTA ENCADEADA************************************/
/*Nesse desafio você irá receber uma lista encadeada simples, e deverá inverter o seu fluxo, ******/
/*então se ela estiver com os valores 1,2,3,4,5 você deve fazer com que ela fique como 5,4,3,2,1.**/
/**você pode atingir esse objetivo por loop, recursão, recursao inversa, e diversas maneiras*******/
/********************utilizem oque se sentirem mais avontade, boa diversao*************************/
/**************************************************************************************************/
/**************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>


struct Node {
    int data;
    struct Node* next;
};


void push(struct Node** head_ref, int new_data)
{
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = *head_ref;
    *head_ref = new_node;
}

void printList(struct Node* head)
{
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

struct Node* reverse(struct Node* head_ref)
{
    if(head_ref == NULL || head_ref -> next == NULL){
        return head_ref;
    }

    struct Node* result =  reverse(head_ref -> next);

    head_ref -> next -> next = head_ref;

    head_ref -> next = NULL;

    return result;
}


int main()
{
    //Lista Vazia
    struct Node* head = NULL;

    //Insere os dados na lista
    push(&head, 20);
    push(&head, 4);
    push(&head, 15);
    push(&head, 85);

    printf("Data  lista encadeada\n");
    printList(head);
    head = reverse(head);
    printf("\nTemos essa lista invertida\n");
    printList(head);
    getchar();
}