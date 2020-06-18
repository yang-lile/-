#include <stdio.h>

int main(int argc, char const *argv[]) {
    int a, b;
    int f[6] = {4,3,4,3,3,3};
    char name[30];
    int s = 0;
    scanf("%d %s %d", &a, name, &b);
    printf("%d %s %d\n", a, name, b);
    for (a = 0; a < 6; a++) {
        scanf("%d", &b);
        if (b>=60)
        {
            s += f[a];
        }
    }
    printf("%d\n", s);
    return 0;
}
