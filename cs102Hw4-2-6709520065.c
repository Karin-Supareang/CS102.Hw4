#include<stdio.h>
#include<string.h>


struct identity
{
int id;
char name[50];
int age;
float income;

};
struct identity record[100];
void read_data(struct identity record[], int n);
void write_data(struct identity record[], int n);

int main(void)
{

struct identity record[100];
int user_choice, tracking=0;

printf("==\n");
printf("Poverty Registration System\n");
printf("1. Register New Person\n");
printf("2. Display All Registered Persons\n");
printf("3. Exit\n");
printf("==\n");
printf("Enter your choice: ");
 scanf("%d", &user_choice);

if(user_choice == 3)
{
  printf("Exiting program.");
  return 0;
}
do
{
  if (user_choice == 1) 
    {
      write_data(record, tracking);
      tracking++;
    } else if (user_choice == 2 && tracking == 0) 
        {
          printf("No registered persons to display.\n");
        } else if(user_choice == 2 && tracking != 0)
        {
   
            read_data(record, tracking);

        }

    printf("Poverty Registration System\n");
    printf("1. Register New Person\n");
    printf("2. Display All Registered Persons\n");
    printf("3. Exit\n");
    printf("==\n");
    printf("Enter your choice: ");
      scanf("%d", &user_choice);
    }while(user_choice != 3);

printf("Exiting program.");
return 0;
}



void read_data(struct identity record[], int n)
{
  int i;
   for(i=0; i<n; i++)
   {
    
     printf("Member's ID: %d\n", record[i].id);
     printf("Menber's Name: %s\n", record[i].name);
     printf("Members age: %d\n", record[i].age);
     printf("Member's mountly income: %.2f\n", record[i].income);
     printf("==\n");
   }

}

void write_data(struct identity record[], int n)
{
printf("Enter ID: ");
scanf("%d", &record[n].id);
getchar();
printf("Enter Name: ");
fgets(record[n].name, 50, stdin);
record[n].name[strcspn(record[n].name, "\n")] = '\0';
printf("Enter Age: ");
scanf("%d", &record[n].age);
printf("Enter Monthly Income: ");
scanf("%f", &record[n].income);
printf("Person registered successfully\n");
printf("==\n");
}