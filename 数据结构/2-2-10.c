#include "2-2-10.h"

void deduplication(LL *l) {
    // 如果表里只有一个甚至没有，那就没有继续的必要了
    if (l->length < 2) return;

    // _ 是缺省使用，无意义的
    // index 总是指向p的下一位的坐标
    int _, index = 1;
    LLNode *p = l->head->next;
    do {
        // 有删除，直接下一次判断
        if (p->data == p->next->data) {
            l->removeLinkList(l, index, &_);
            continue;
        }
        // 没有删除则换下一个数字
        index++;
        p = p->next;
    } while (p->next != NULL);
    return;
}

int main(int argc, char const *argv[]) {
    LL l;
    // 初始化
    LinkList_init(&l);
    int arr[16] = {
        1, 1, 2, 2, 2, 2, 3, 4, 7, 8, 8, 9, 9, 10, 11, 11,
    };
    // 创建并查看当前的情况
    l.createLinkList(&l, arr, 16);
    l.printLinkList(&l);

    // 使用去重算法并查看情况
    deduplication(&l);
    l.printLinkList(&l);
    return 0;
}
