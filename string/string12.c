#include<stdio.h>

int main()
{
    char str[100];
    int count = 0;

    gets(str);

    for(int i=0; str[i]!='\0'; i++)
    {
        if(!( (str[i]>='A'&&str[i]<='Z') ||
              (str[i]>='a'&&str[i]<='z') ||
              (str[i]>='0'&&str[i]<='9') ||
               str[i]==' ' ))
        {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}
