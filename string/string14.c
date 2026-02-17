#include<stdio.h>
int main()
{   
    int count =0;
    char str[200];
    printf("Enter the Word : ");
    fgets(str,sizeof(str),stdin);

    for (int  i = 0; str[i] !='\0'; i++)
    {
        if (str[i] == ' ')
        {
             count ++;
        }
        
    }
    printf("The space Count is the : %d",count);
    
    return 0;
}