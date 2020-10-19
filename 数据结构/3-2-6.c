#include "3-2-6.h"

#include <stdio.h>

/// n为总人数，m为各m人一出队
void Joseph(int n, int m) {
    MyQueue q;
    initMyQueue(&q);
    for (int i = 0; i < n; i++) q.push(&q, i + 1);
    int p = 1;
    int x;
    while (q.getLength(&q) != 0) {
        for (int i = 1; i < m; i++) {
            q.pop(&q, &x);
            q.push(&q, x);
        }
        q.pop(&q, &x);
        printf("第%d个出队的人是原来的%d\n", p++, x);
    }
}

int main(int argc, char const *argv[]) {
    Joseph(5,30);
    Joseph(20, 5);
    Joseph(30, 7);
    return 0;
}
