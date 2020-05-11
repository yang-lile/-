#include <stdio.h>

void mySwap(char *a, char *b) {
    char t;
    t = *a;
    *a = *b;
    *b = t;
}
void itob(int n, char *s, int b) {
    int len = 0;
    int t;
    while (n != 0) {
        t = n % b;
        n /= b;
        if (t > 9) {
            s[len++] = t + 'a' - 10;
        } else {
            s[len++] = t + '0';
        }
    }
    s[len] = '\0';
    t = 0;
    len--;
    while (len > t) {
        mySwap(s + len, s + t);
        len--;
        t++;
    }
}

int main(int argc, char const *argv[]) {
    int n, b;
    char s[100];
    scanf("%d%d", &n, &b);
    itob(n < 0 ? -n : n, s, b);
    if (n < 0) putchar('-');
    printf("%s\n", s);
    return 0;
}
