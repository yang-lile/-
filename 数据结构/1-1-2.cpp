#include <stdio.h>

int arr[10000] = {-1};

int fun1(int n) {
    if (arr[n - 1] == -1)
        return arr[n - 1] = n * fun1(n - 1);
    else
        return arr[n - 1];
}

int fun2(int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += fun1(i + 1);
    }
    return sum;
}

int main(int argc, char const *argv[]) {
    arr[0] = 1;
    arr[1] = 1;
    printf("请输入要求的n的阶乘和：\n");
    int n;
    scanf("%d", &n);
    printf("阶乘和为:%d\n", fun2(n));
    return 0;
}
