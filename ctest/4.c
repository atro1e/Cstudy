#include <stdio.h>

typedef struct timeft {
    int start;
    int end;
}timeft;

int inin(timeft *each,int t,int i);


int main()
{
    int number;
    scanf("%d",&number);

    timeft each[number];

    for(int i =0;i<number;i++){
        scanf("%d %d",&each[i].start,&each[i].end);
    }

    int maxend = each->end;

    for (int i =0; i<number; i++) {
        if(each[i].end > maxend){
            maxend = each[i].end;
        }
    }

//以上OK////////////////////



    int maxt = 0;
    int maxt_total = 0;
    for (int t = 0; t <= maxend; t++) {
    
    int t_total = 0;

    for (int i = 0;i < number; i++) {
        t_total += inin(each, t, i);
    }

    if (t_total > maxt_total) {
        maxt = t;
        maxt_total = t_total;
    }
    }

    for (int i = 0; i<number; i++) {
        printf("%d\n",inin(each, maxt, i));
    }

}

int inin(timeft *each,int t,int i)
{
    if ( ( (each[i].start - t) * (each[i].end - t) ) <= 0){
        return 1;
    }else {
    return 0;
    }
}