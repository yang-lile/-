#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

void print(struct Node* head) {
    Node* s = NULL;
    s = head;
    while (s != NULL) {
        printf("%d#", s->data);
        s = s->next;
    }
}
Node* creat() {
    Node *head = NULL, *p = NULL, *q = NULL;
    int n;
    while (1) {
        scanf("%d", &n);
        if (n == -1) {
            break;
        }
        p = (Node*)malloc(sizeof(Node*));
        p->data = n;
        if (head == NULL) {
            head = p;
            q = p;
        } else {
            q->next = p;
            q = p;
        }
    }
    if (head != 0) {
        q->next = NULL;
    }
    return head;
}
Node* insertnode(Node* head, int i, int j) {
    Node *p = NULL, *q = NULL, *s = NULL;

    p = head;
    s = (Node*)malloc(sizeof(Node*));
    s->data = j;
    if (i == 1) {
        s->next = p;
        free(q);
        return s;
    }
    for (int index = 1; index < i; index++) {
        q = p;
        p->next;
    }
    if (p == NULL) {
        q->next = s;
        s->next = NULL;
    }
    q->next = s;
    s->next = p;

    return head;
}
int main() {
    struct Node* node = creat();
    int i, j;
    scanf("%d %d", &i, &j);

    print(insertnode(node, i, j));
    getchar();
    return 0;
}