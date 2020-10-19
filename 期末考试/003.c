#include <stdio.h>

int main(int argc, char const *argv[]) {
    int len, t;
    char n[30];
    float a, b, c;
    float sa, sb, sc;
    sa = sb = sc = 0;
    scanf("%d", &len);
    for (int i = 0; i < len; i++) {
        // cin >> t >> n;
        scanf("%d", &t);
        scanf("%s",n);
        // cout << t << ' ' << n << ' ';
        printf("%d %s ", t, n);
        // cin >> a >> b >> c;
        scanf("%f%f%f", &a, &b, &c);
        sa += a;
        sb += b;
        sc += c;
        printf("%.2f\n", (a + b + c) / 3);
    }
    printf("%.2f ", sa / len);
    printf("%.2f ", sb / len);
    printf("%.2f\n", sc / len);

    return 0;
}
