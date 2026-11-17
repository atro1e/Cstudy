#include <stdio.h>
#include <stdlib.h>


typedef struct room {
    int id;
    int start;
    int end;
    int length;
} room;


int cmp(const void *a,const void *b);
void nextpick(room *a,int length,int *nowtime, int *oriid,int *nowid,int num_of_room,int *outputn);

int main ()
{
    int number_of_room;
    scanf("%d",&number_of_room);

    room arr[number_of_room];
    for (int i = 0;i<number_of_room;i++){
        scanf("%d %d",&arr[i].start,&arr[i].end);
        arr[i].length = arr[i].end - arr[i].start;
    }

    qsort(arr, number_of_room, sizeof(room), cmp);

    for (int i =0; i < number_of_room; i++) {
        arr[i].id = i;
    
    }

    int outputn = 1;// 最后报给oj的数

    int nowtime; // 当前的时间 
    nowtime = arr[0].start;

    int nowid = 0; //
    int oriid = 0;

    while (nowid <= number_of_room -1) {  //nowid等于number_of_room -1时就代表到了最后一个数
        if (nowid == number_of_room - 1) {
        break;
        }
        nextpick(arr, arr[oriid].length, &nowtime ,&oriid, &nowid,number_of_room, &outputn);
    }


    printf("%d",outputn);
    return 0;
}


int cmp(const void *a,const void *b)
{
    const room *x = a;
    const room *y = b;
    if(x->start != y->start){
    return x->start - y->start;
    }

    return x->length - y->length;
}

void nextpick(room *a,int length,int *nowtime,int *oriid,int *nowid,int num_of_room,int *outputn)//你的目的是找到下一个开始时间加最短持续时间之后数组里的第一个start值
{
    for (; *nowid <= num_of_room - 1;*nowid +=1) {
        if ((a + *nowid)->start >= *nowtime + (a+*oriid)->length ) {
            *outputn +=1;
            *nowtime = *nowtime + (a+*oriid)->length; 
            *oriid = *nowid;
            return;
        }
    }
}