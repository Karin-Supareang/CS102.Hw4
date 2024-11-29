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
int Customer_index = -1, user_bunchee_input;
int i;

printf("Bank Management System\n");
printf("1. Add New Customer\n");
printf("2. Deposit Money\n");
printf("3. Withdraw Money\n");
printf("4. Display All Customers\n");
printf("5. Exit\n");
printf("Enter your choice: ");
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
  {
   if(tracking == 0)
     {
      printf("\n");
      printf("Regrettably, I possess no account within this institution.\nOur culinary prowess is, indeed, commendable. Alas,\nI find myself devoid of funds to satisfy my rental obligations henceforth.\n");
     }else do{
        Customer_index = -1;
        printf("Enter account number for deposit: ");
          scanf("%d", &user_bunchee_input);

        for(i=0; i<tracking; i++)
        {
        if(record[i].accountNumber ==  user_bunchee_input)
          {
            Customer_index = i;
            break;
          }
        
        }
        if (Customer_index == -1)
              printf("Alas, it appears that the account in question cannot be located within our esteemed records. I humbly beseech you to make another attempt.\n");
     }while(Customer_index == -1);
     if(tracking != 0)
     {
        deposit(record, Customer_index);
     }
        
     }
     
  

  if(user_choice == 3)
  {
    if(tracking == 0)
     {
      printf("\n");
      printf("Regrettably, I possess no account within this institution.\nOur culinary prowess is, indeed, commendable. Alas,\nI find myself devoid of funds to satisfy my rental obligations henceforth.\n");
     }else do
      {
        Customer_index = -1;
        printf("Enter account number for Withdraw: ");
        scanf("%d", &user_bunchee_input);

          for(i=0; i<tracking; i++)
          {
          if(record[i].accountNumber ==  user_bunchee_input)
            {
              Customer_index = i;
              break;
            }
          }
          if(Customer_index == -1)
            printf("Alas, it appears that the account in question cannot be located within our esteemed records. I humbly beseech you to make another attempt.\n");
           
      }while (Customer_index == -1);
      
     if(tracking != 0)
     {
       withdraw(record, Customer_index);
     }

    }
  

  if(user_choice == 4)
    {
     if(tracking == 0)
     {
      printf("\n");
      printf("Regrettably, I possess no account within this institution.\nOur culinary prowess is, indeed, commendable. Alas,\nI find myself devoid of funds to satisfy my rental obligations henceforth.\n");

     }else if(tracking != 0)
       displayCustomer(record, tracking);
    }
    printf("\n");
    printf("Bank Management System\n");
    printf("1. Add New Customer\n");
    printf("2. Deposit Money\n");
    printf("3. Withdraw Money\n");
    printf("4. Display All Customers\n");
    printf("5. Exit\n");
    printf("Enter your choice: ");
      scanf("%d", &user_choice);
  if(user_choice == 5)
   printf("Exiting program");

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
  printf("Customer added successfully.\n");
}

void deposit(struct custidy record[], int n)
{
   float add_money;
   printf("Enter amount to deposit: ");
     scanf("%f", &add_money);
   do
   {
    printf("It is hereby stated with utmost clarity that one is unequivocally prohibited from depositing\ndepositing an amount that is equal to or less than zero\n. I earnestly beseech you to attempt once more with utmost diligence.");
    printf("Enter amount to deposit: ");
     scanf("%f", &add_money);
   }while(add_money < 1);
   
   record[n].balance += add_money;
   printf("Deposit successful. New balance: %.2f\n", record[n].balance);
}

void withdraw(struct custidy record[], int n)
{
  float rem_money;
   printf("Enter amount to Withdraw: ");
     scanf("%f", &rem_money);
  do
  {
    printf("It is explicitly prohibited for you to withdraw an amount that is equal to or less than zero\n. I earnestly beseech you to attempt once more with utmost diligence.");
    printf("Enter amount withdraw: ");
     scanf("%f", &rem_money);
  } while (rem_money < 1);
  
   record[n].balance -= rem_money;
   printf("Withdraw successful. New balance: %.2f\n", record[n].balance);
}

void displayCustomer(struct custidy record[], int n)
{
  int i;
    for(i=0; i<n; i++)
    {
      printf("Account Number: %d, Name: %s, Balance: %.2f\n", record[i].accountNumber, record[i].name, record[i].balance);
    }
}