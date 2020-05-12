#include <stdio.h>

typedef struct Time {
    int year, month, day;
} Time;

int myMonth[13] = {0,31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int toTimeStamp(Time *t) {
    int flag = 0;
    if ((!(t->year % 4) && t->year % 100) || !(t->year % 400)) {
        flag++;
    }
    return myMonth[t->month-1] + (t->month > 2 ? flag : 0) + t->day;
}

int main(int argc, char const *argv[]) {
    Time a;
    scanf("%d%d%d", &a.year, &a.month, &a.day);
    size_t i;
    for (i = 1; i < 13; i++) {
        myMonth[i] += myMonth[i - 1];
    }
    printf("%d\n", toTimeStamp(&a));
    return 0;
}
