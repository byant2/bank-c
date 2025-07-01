#include <stdio.h>
#include <string.h>

typedef struct {
        // Define your key type (e.g., char*, int)
        // Define your value type (e.g., char*, int)
        char name[30];
        int balance;
    } Account;

int main()
{
    char name[30];
    int num;
    Account account[3];
    int i = 0;
    
    while (i < 3){
        printf("Enter a name\n");
        scanf("%s", name);

        printf("The User Entered Name = %s\n", name); 
        printf("Enter an amount to deposit\n"); 
        scanf("%d", &num);
        
        strncpy(account[i].name, name, sizeof(account[i].name) - 1);
        account[i].balance = num;

        printf("Name = %s\n", account[i].name); 
        printf("Deposit = %d\n", account[i].balance);
        i++;
    }

    int j;
    for (j = 0; j < 3; j++){
        printf("Name = %s ", account[j].name); 
        printf("Deposit = %d\n", account[j].balance);
    }
 

    return 0;
}

