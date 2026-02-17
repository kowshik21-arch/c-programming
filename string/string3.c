#include<stdio.h>
#include<string.h>

int main()
{   

    char str1[20];
    char str2[20];
    scanf("%s",str1);
    scanf("%s",str2);
    strcpy(str1, strcat(strcat(str1, " "), str2));
    printf("%s", str1);
    return 0;
}