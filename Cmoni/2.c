    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>

    void whatnum(char *str,int *loc); //*(str + loc)must be a letter


    int main ()
    {
        char *str = malloc(100001);
        scanf("%s",str);

        int size = strlen(str);

        int ltrnum = 0; //letter number
        for(int i = 0;i < size;i++){
            if (str[i] >= 'a' && str[i] <='z'){
                ltrnum ++;
            }
        }

        int loc =0;

        for (int i = 0; i < ltrnum; i++) {
            whatnum(str, &loc);
        }

        return 0;

    }


    void whatnum(char *str,int *loc) //*(str + loc)must be a letter
    {
        char letter=*(str + *loc);
        printf("%c",*(str + *loc));
        
        int num;

        num = *(str + *loc + 1) - '0' + 0;

        *loc +=1;

        if(*(str + *loc + 1) >= '0' && *(str + *loc + 1) <= '9'){
            num = 10*num + *(str + *loc + 1) - '0' + 0;
            *loc +=2;
        }else {
        *loc +=1;
        }

        for (int j = 0; j<num - 1; j++) {
            printf("%c",letter);
        }
    }

