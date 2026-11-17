#include <stdio.h>
#include <stdlib.h>

int get_what_todo(char *str,int *times);

int main ()
{
   // int i = 0,j = 0;
    int n,numof;
    scanf("%d %d",&n,&numof);

    int times = 0;
    int todo;

    char *total;
    total = malloc(10);


    int finloc= 0;


    while (times < numof) {

        scanf("%s",total);

        todo = get_what_todo(total, &times);
        if (todo == 1) {
            finloc = finloc - n;
        }else if (todo == 2) {
            finloc = finloc + 1;

        }else if (todo == 3) {
            finloc = finloc + n;

        }else if (todo == 4) {
            finloc = finloc - 1;

        }

        
    }

    free(total);

    printf("%d",finloc);

    return 0;
}


int get_what_todo(char *str,int *times)
{

  //  printf("%s",str);
    if (str[0] == 'U' ){

        *times +=1;
        return 1;
    }else if (str[0] == 'R' ){

        *times +=1;
        return 2;
    }else if(str[0] == 'D' ) {

        *times +=1;
        return 3;

    }else if (str[0] == 'L') {
        *times +=1;
        return 4;
    
    }
    printf("ERROR");
}
