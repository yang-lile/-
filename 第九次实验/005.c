#include <stdio.h>

typedef struct Stu
{
    int score[3];
    int max[3];
    int sum[3];
}Stu;

int main(int argc, char const *argv[])
{
    Stu stu=(Stu){.sum = {0}};
    int len =0;
    scanf("%d",&len);
    size_t i;
    for ( i = 0; i < len; i++)
    {
        scanf("%*d%*s%d%d%d",&stu.score[0],&stu.score[1],&stu.score[2]);
        if (stu.score[0]>stu.max[0])
        {
            stu.max[0] = stu.score[0];
        }
        stu.sum[0] += stu.score[0];
        if (stu.score[1]>stu.max[1])
        {
            stu.max[1] = stu.score[1];
        }
        stu.sum[1] += stu.score[1];
        if (stu.score[2]>stu.max[2])
        {
            stu.max[2] = stu.score[2];
        }
        stu.sum[2] += stu.score[2];
    }
    printf("aver=%dmax=%d\n",stu.sum[0]/len,stu.max[0]);
    printf("aver=%dmax=%d\n",stu.sum[1]/len,stu.max[1]);
    printf("aver=%dmax=%d\n",stu.sum[2]/len,stu.max[2]);
    return 0;
}
