#include <stdio.h>

struct Stu {
    int id;
    char name[30];
    int score[3];
} stu;

int main(int argc, char const *argv[]) {
    int len;
    size_t i;
    scanf("%d", &len);
    for (i = 0; i < len; i++) {
        scanf("%d%s%d%d%d", &stu.id, stu.name, &stu.score[0], &stu.score[1],
              &stu.score[2]);
        printf("%d %s %d %d %d\n", stu.id, stu.name, stu.score[0], stu.score[1],
               stu.score[2]);
    }

    return 0;
}
