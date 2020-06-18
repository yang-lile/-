#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Students {
    int id, age;
    char name[8];
} Students;

int comp1(const void *a, const void *b) {
    return strcmp(((Students *)a)->name, ((Students *)b)->name);
}
int comp2(const void *a, const void *b) {
    return ((Students *)a)->age > ((Students *)b)->age;
}
int main(int argc, char const *argv[]) {
    int len;
    scanf("%d", &len);
    int i;
    Students *stu = malloc(sizeof(Students) * len);
    for (i = 0; i < len; i++) {
        scanf("%d%s%d", &stu[i].id, stu[i].name, &stu[i].age);
    }
    qsort(stu, len, sizeof(Students), comp1);
    for (i = 0; i < len; i++) {
        printf("%3d%6s%3d\n", stu[i].id, stu[i].name, stu[i].age);
    }
    putchar('\n');
    qsort(stu, len, sizeof(Students), comp2);
    for (i = 0; i < len; i++) {
        printf("%3d%6s%3d\n", stu[i].id, stu[i].name, stu[i].age);
    }

    return 0;
}
