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
          printf("==\n");
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
  printf("ID\tName\t\t\tAge\tMonthly Income\n");
   for(i=0; i<n; i++)
   {
     printf("%d\t", record[i].id);
     printf("%s\t\t", record[i].name);
     printf("%3d\t", record[i].age);
     printf("%5.2f", record[i].income);
     printf("\n");
   }
      printf("==\n");
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