#include<stdio.h>
void palindrome(int len,char str[]){
    char *start=str;
    char *end=str+len;
    while(start<end){
        if(*start!=*end){
            printf("Not palindrome");
            return 0;
        }
        start++;
        end--;
    }
    printf("Palindrome");
    return 0;

}
int main(){
    char str[100];
    scanf("%s",str);
    int len=strlen(str)-1;
    palindrome(len,str);
    return 0;


}