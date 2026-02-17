#include<stdio.h>
#include<string.h>
int main()
{
    // char name []= {'m','a','i','c','k','\0'};
    // printf("%s",name);

//     char str[29];
//    fgets(str,sizeof(str),stdin);
//     printf("%s",str);

        char str[100];
        fgets(str,sizeof(str),stdin);
        printf("%s",str);
        int lenght =strlen(str);
        printf("%d",lenght,sizeof(lenght));
}


