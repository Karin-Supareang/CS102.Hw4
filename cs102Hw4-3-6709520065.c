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
int where_the_frick_is_that_customer = -1, user_bunchee_input;
int i;

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
    printf("Enter account number for deposit: ");
      scanf("%d", &user_bunchee_input);

    for(i=0; i<tracking; i++)
    {
     if(where_the_frick_is_that_customer == -1 && user_bunchee_input == record[i].accountNumber )
      {
        where_the_frick_is_that_customer == i;
      }
    }

    deposit(record, where_the_frick_is_that_customer);
  if(user_choice == 3)
    withdraw(record, tracking);
  if(user_choice == 4)
    {
     if(tracking == 0)
     {
      printf("No Mother lover using our bank! We doom FrFr brother\n");
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

void addCustomer(struct custidy record[], int n)
{
  printf("Enter account number: ");
    scanf("%d", &record[n].accountNumber);
  getchar();
  printf("Enter customer name: ");
    fgets(record[n].name, 50, stdin);
      record[n].name[strcspn(record[n].name, "\n")] = '\0';
  printf("Enter initial balance: ");
    scanf("%f", &record[n].balance);
}

void deposit(struct custidy record[], int n)
{

}