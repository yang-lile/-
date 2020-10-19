#include <stdio.h>

int main(int argc, char const *argv[]) {
    int len;
    float salary[50];
    scanf("%d", &len);
    float s = 0;
    for (int i = 0; i < len; i++) {
        scanf("%f", &salary[i]);
        s += salary[i];
    }
    printf("%.2f", s / len);
    return 0;
}
