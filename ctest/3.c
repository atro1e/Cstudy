#include <stdio.h>
#include <stdlib.h>


typedef struct team {
        int id;
        int zhong;
        int bu;
        int shao;
        int wu;
        int total;
        int rank;
    }team;

int cmp(const void *a, const void *b);
int cmp2(const void *a, const void *b);


int main()
{

    int num;
    scanf("%d",&num);

    team each[num];
    for (int i = 0;i < num;i++){
        scanf("%d %d %d %d",&each[i].zhong,&each[i].bu,&each[i].shao,&each[i].wu);
        each[i].id = i + i;
        each[i].total = each[i].zhong + each[i].bu + each[i].shao + each[i].wu;
    }

    qsort(each, num, sizeof(team), cmp);

    for(int i =0;i<num;i++){
        each[i].rank = i + 1;
    }

    qsort(each, num, sizeof(team), cmp2);

    for (int i = 0; i<num; i++) {
        printf("%d\n",each[i].rank);
    }

    return 0;

    
}

int cmp(const void *a, const void *b)
{
    const team *x = a;
    const team *y = b;

    if (x->total != y->total)
        return (x->total > y->total) - (x->total < y->total);

    if (x->zhong != y->zhong)
        return (x->zhong > y->zhong) - (x->zhong < y->zhong);

    if (x->bu != y->bu)
        return (x->bu > y->bu) - (x->bu < y->bu);

    if (x->shao != y->shao)
        return (x->shao > y->shao) - (x->shao < y->shao);

    return (x->wu > y->wu) - (x->wu < y->wu);
}


int cmp2(const void *a, const void *b)
{
    const team *x = a;
    const team *y = b;

    return (x->id > y->id) - (x->id < y->id);
}