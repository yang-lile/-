#include <stdio.h>
#include <stdlib.h>

typedef int Elem;
typedef int Status;

typedef struct LinkListNode {
    Elem data;
    struct LinkListNode *next;
} LLNode;

typedef struct LinkList LL;

struct LinkList {
    int length;
    LLNode *head;

    Status (*createLinkList)(LL *, Elem *, int);
    Status (*disposeLinkList)(LL *);
    Status (*removeLinkList)(LL *, int, Elem *);
    void (*printLinkList)(LL *);
};

Status _createLinkList(LL *ll, Elem *arr, int length) {
    // keep ll is clear or empty
    if (ll->head == NULL) return 1;

    ll->length = length;

    LLNode *p = ll->head;
    for (int i = 0; i < length; i++) {
        LLNode *n = (LLNode *)malloc(sizeof(LLNode));
        p->next = n;
        p = p->next;
        p->data = arr[i];
    }
    p->next = NULL;
    return 0;
}

Status _disposeLinkList(LL *ll) {
    if (ll->length == 0) {
        free(ll->head);
        return 0;
    }

    LLNode *p = NULL;
    do {
        p = ll->head->next;
        ll->head->next = p->next;
        free(p);
    } while (ll->head->next != NULL);

    free(ll->head);
    return 0;
}

Status _removeLinkList(LL *ll, int p, Elem *e) {
    // remove point error
    if (p >= ll->length || p < 0) return 2;

    LLNode *aim = ll->head;
    for (int i = 0; i < p; i++) {
        aim = aim->next;
    }
    LLNode *n = aim->next;
    *e = n->data;
    aim->next = n->next;
    ll->length--;
    free(n);
    return 0;
}

void _printLinkList(LL *ll) {
    printf("LinkList:\n\n");
    LLNode *p = ll->head;
    int i = 0;
    while (p->next != NULL) {
        p = p->next;
        i++;
        printf("node:%d is %d\n", i, p->data);
    }
    printf("\nLinkList END\n\n");
}

void LinkList_init(LL *ll) {
    ll->length = 0;
    ll->head = (LLNode *)malloc(sizeof(LLNode));

    ll->createLinkList = _createLinkList;
    ll->disposeLinkList = _disposeLinkList;
    ll->removeLinkList = _removeLinkList;
    ll->printLinkList = _printLinkList;
}