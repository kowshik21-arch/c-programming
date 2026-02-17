#include<stdio.h>

int main()

{
    int i=0;
    char src[100], dest[100];
    
fgets(src, sizeof(src), stdin);

for ( i = 0; src[i] != '\0'; i++)
{
    dest[i] = src[i];
}
dest[i] = '\0';

    

    printf("%s", dest);

    return 0;
}
