#include<stdio.h>
#include<string.h>


struct custidy //Imnotso english
{
int accountNumber;
char name[50];
float balance;
};
struct custidy record[100];
void addCustomer(struct custidy record[], int n);
void deposit(struct custidy record[], int n);
void withdraw(struct custidy record[], int n);
void displayCustomer(struct custidy record[], int n);

int main(void)
{

int user_choice, tracking=0;

printf("Bank Management System\n");
printf("1. Add New Customer\n");
printf("2. Deposit Money\n");
printf("3. Withdraw Money\n");
printf("4. Display All Customers\n");
printf("5. Exit");
  scanf("%d", &user_choice);
if(user_choice == 5)
{
  printf("Exiting program.");
  return -1;
}
do
{
  if(user_choice == 1)
  {
    addCustomer(record, tracking);
    tracking++;
  }
  if(user_choice == 2)
    deposit(record, tracking);
  if(user_choice == 3)
    withdraw(record, tracking);
  if(user_choice == 3)
    {
     if(tracking == 0)
     {
      printf("No MF Using our bank! We doom FrFr brother\n");
      printf("==\n");
     }else if(tracking != 0)
       displayCustomer(record, tracking);
    }

    printf("Bank Management System\n");
    printf("1. Add New Customer\n");
    printf("2. Deposit Money\n");
    printf("3. Withdraw Money\n");
    printf("4. Display All Customers\n");
    printf("5. Exit");
    scanf("%d", &user_choice);

}while(user_choice != 5);
  return 0;
}

