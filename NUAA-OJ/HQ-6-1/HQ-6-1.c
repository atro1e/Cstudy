#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[105];
    int i, n;

    scanf("%s", s);
    n = (int)strlen(s);
    for (i = 0; i < n; i++) {
        if (s[i] >= 'a' && s[i] <= 'z') //如果这个小萝莉是小写字母?!
            s[i] = s[i] - 'a' + 'A';
        else if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] = s[i] - 'A' + 'a';//如果他是大写字母?!
    }
    printf("%s\n", s);
    return 0;
}
