#include<stdio.h>
#include<string.h>

int main()
{
    char str [100];
    int i=0;
    printf("Enter the string ");
    fgets(str,sizeof(str),stdin);

    while (str[i]!='@' && str[i]!='\0')
    {
        printf("%c",str[i]);
        i++;
    }
    
    return 0;
    
}