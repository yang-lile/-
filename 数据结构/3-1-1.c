#include "3-1-1.h"

#include <stdio.h>

void dec2Bin(int d, char* s, int* len) {
    MyStack stack;
    initMyStack(&stack);
    *len = 0;
    while (d != 0) {
        char y = d % 8 + '0';
        d /= 8;
        stack.push(&stack, y);
    }
    *len = stack.len;
    for (int i = 0; i < *len; i++) {
        char x;
        stack.pop(&stack, &x);
        s[i] = x;
    }
}

int main(int argc, char const* argv[]) {
    int len;
    char s[100];

    dec2Bin(87532, s, &len);
    for (int i = 0; i < len; i++) {
        printf("%c", s[i]);
    }
    printf("\n");

    return 0;
}
