#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

static Node* insert_front(Node *head, int value);
static Node* insert_end(Node *head, int value);
static Node* delete_value(Node *head, int value);
static void    traverse(const Node *head);
static void    free_list(Node *head);

int main(void) {
    Node *head = NULL;
    int choice, value;

    while (1) {
        printf("\n========== LINKED LIST MENU ==========\n");
        printf("1. Insert at Front\n");
        printf("2. Insert at End\n");
        printf("3. Delete Value\n");
        printf("4. Traverse List\n");
        printf("5. Exit\n");
        printf("=======================================\n");
        printf("Enter your choice: ");
        
        if (scanf("%d", &choice) != 1) {
            fprintf(stderr, "Invalid input. Exiting.\n");
            break;
        }

        switch (choice) {
            case 1:
                printf("Enter value: ");
                scanf("%d", &value);
                head = insert_front(head, value);
                break;

            case 2:
                printf("Enter value: ");
                scanf("%d", &value);
                head = insert_end(head, value);
                break;

            case 3:
                printf("Enter value to delete: ");
                scanf("%d", &value);
                head = delete_value(head, value);
                break;

            case 4:
                traverse(head);
                break;

            case 5:
                free_list(head);
                printf("Exiting. Memory freed.\n");
                return 0;

            default:
                printf("Invalid choice. Try again.\n");
        }
    }

    free_list(head);
    return 0;
}

static Node* insert_front(Node *head, int value) {
    Node *new_node = (Node*)malloc(sizeof(Node));
    if (!new_node) {
        perror("Memory allocation failed");
        return head;
    }
    new_node->data = value;
    new_node->next = head;
    return new_node;
}

static Node* insert_end(Node *head, int value) {
    Node *new_node = (Node*)malloc(sizeof(Node));
    if (!new_node) {
        perror("Memory allocation failed");
        return head;
    }

    new_node->data = value;
    new_node->next = NULL;

    if (!head) return new_node;

    Node *temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = new_node;
    return head;
}

static Node* delete_value(Node *head, int value) {
    if (!head) {
        printf("List is empty.\n");
        return head;
    }

    if (head->data == value) {
        Node *temp = head;
        head = head->next;
        free(temp);
        printf("Value %d deleted from list.\n", value);
        return head;
    }

    Node *curr = head;
    while (curr->next != NULL && curr->next->data != value)
        curr = curr->next;

    if (curr->next == NULL) {
        printf("Value %d not found.\n", value);
        return head;
    }

    Node *to_delete = curr->next;
    curr->next = curr->next->next;
    free(to_delete);

    printf("Value %d deleted successfully.\n", value);
    return head;
}

static void traverse(const Node *head) {
    if (!head) {
        printf("List is empty.\n");
        return;
    }

    printf("Linked List: ");
    for (const Node *temp = head; temp != NULL; temp = temp->next) {
        printf("%d ", temp->data);
    }
    printf("\n");
}

static void free_list(Node *head) {
    while (head) {
        Node *temp = head;
        head = head->next;
        free(temp);
    }
}
