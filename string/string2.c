#include<stdio.h>
#include<string.h>

int main()
{
    char str [100];
    printf("Enter the Name : ");
    scanf("%s",&str);
     int length = strlen(str);
    printf("%d",length,sizeof(length));
}