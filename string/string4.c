#include<stdio.h>
#include<string.h>

int main()
{
    char str[20];
    int i = 0;
    int hasUpper = 0;

    printf("Enter the password : ");
    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i]>'A' && str[i]<'Z')
        {
            hasUpper = 1;
            break;
        }
        
    }

    if(hasUpper)
        printf("Valid");
    else
        printf("Invalid");

    return 0;
}
