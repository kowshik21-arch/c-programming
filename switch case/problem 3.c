#include <stdio.h>
int main() {
    int account;
    scanf("%d",&account);
    int balance;
    scanf("%d",&balance);
    int widthdraw;
    scanf("%d",&widthdraw);
    switch (account) {
        case 1:
            if (balance>=widthdraw) {
                printf("transaction succesfull");
                break;
            }
            else {
                printf("transaction failed");
                break;
            }
        case 2:
            if (widthdraw<=5000)
            {
                printf("transaction successfull");
                break;
            }
            else {
                printf("limit exceeds");
                break;
            }
    }
}