#include <stdio.h>

int main(int argc, char const *argv[]) {
    int len, min, num, min_p;
    min = 99999;
    min_p = 0;
    scanf("%d", &len);
    for (int i = 0; i < len; i++) {
        scanf("%d", &num);
        if (num < min) {
            min = num;
            min_p = i;
        }
    }
    printf("%d\n%d\n", min, min_p);
    return 0;
}
