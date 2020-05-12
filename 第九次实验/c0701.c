#include <stdio.h>

typedef struct Time {
    int year, month, day;
} Time;

int myMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int toTimeStamp(Time *t) {
    int flag = 0;
    if ((!(t->year % 4) && t->year % 100) || !(t->year % 400)) {
        flag++;
    }
    return (t->year - 1900 - 1) / 4 - (t->year - 1900 - 1) / 100 +
           (t->year - 1900 - 1) / 400 + t->year * 365 + myMonth[t->month] +
           (t->month > 2 ? flag : 0) + t->day;
}

int main(int argc, char const *argv[]) {
    Time a, b;
    scanf("%d%d%d", &a.year, &a.month, &a.day);
    scanf("%d%d%d", &b.year, &b.month, &b.day);
    size_t i;
    for (i = 1; i < 12; i++) {
        myMonth[i] += myMonth[i - 1];
    }
    // 自制1900年伪时间戳
    printf("%d\n", toTimeStamp(&b) - toTimeStamp(&a));
    return 0;
}

