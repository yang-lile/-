#include "2-1-1.h"

#include <stdio.h>

int main(int argc, char const *argv[]) {
    printf("init & create:\n");
    LL list;
    LinkList_init(&list);
    int arr[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    list.createLinkList(&list, arr, 9);
    list.printLinkList(&list);

    printf("insert:\n");
    list.insertLinkList(&list, 23, 0);
    list.insertLinkList(&list, 10, list.length);
    list.printLinkList(&list);

    printf("remove:\n");
    int elem = 0;
    list.removeLinkList(&list, list.length - 1, &elem);
    printf("out elem %d\n", elem);
    list.removeLinkList(&list, 0, &elem);
    printf("out elem %d\n", elem);
    list.printLinkList(&list);

    printf("replace:\n");
    list.replaceLinkList(&list, 5, elem);
    list.printLinkList(&list);

    printf("find:\n");
    int position;
    if (list.findLinkList(&list, 3, &position)) {
        printf("found it! it at %d\n", position);
    } else {
        printf("404!\n");
    }

    printf("at:\n");
    list.atLinkList(&list, list.length - 1, &elem);
    printf("list[%d] is %d\n", list.length, elem);

    printf("clear & dispose:\n");
    list.clearLinkList(&list);
    list.printLinkList(&list);
    list.disposeLinkList(&list);

    return 0;
}
