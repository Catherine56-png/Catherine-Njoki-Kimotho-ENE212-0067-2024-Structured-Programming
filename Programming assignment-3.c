#include <stdio.h>
#include <stdlib.h>


int main(){
  int pin;
  int attempts=0;
  int correctPin=456;
  int balance=15000;
  int amount;
  int choice;

  while(attempts<3){
    printf("Enter your pin:");
    scanf("%d",&pin);

    if(pin==correctPin){
        printf("Login successful!\n");
        break;
    }else{
        attempts++;
        printf("Incorrect pin!Attempts left:%d\n",3-attempts);
    }
   }
   if(attempts==3){
  printf("Maximum attempts reached .Access denied.\n");

}

while(1){
    int choice;
    printf("\n---ATM MENU---\n");
    printf("1.Balance Inquiry\n");
    printf("2.Deposit\n");
    printf("3.Withdraw\n");
    printf("4.Exit\n");
    printf("Enter your choice:");
    scanf("%d",&choice);

    switch(choice){
        case 1:
            printf("Your balance is:%d\n",balance);
            break;
    case 2:
        printf("Enter amount to deposit:");
        scanf("%d",&amount);
        balance+=amount;
        printf("Deposit successful.New balance:%d\n",balance);
        break;
    case 3:
        printf("Enter withdrawal amount:");
        scanf("%d",&amount);
        if(amount>balance)
            printf("Insufficient balance");
        else{
            balance-=amount;
            printf("Withdrawal successful.New account balance is:%d\n",balance);
            }
        break;
    case 4:
        printf("Thank you for using our ATM.\n");
        return 0;
    default:
        printf("invalid choice.Try again\n");

    }
   }
   return 0;
   }
