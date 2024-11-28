#include<stdio.h>
#include<string.h>

void read_data(){};
void write_data();
struct identity
{
int id;
char name[50];
int age;
float income;

};

int main(void)
{

struct identity record[100];
int user_choice, tracking=-1;
printf("==\n");
printf("Poverty Registration System\n");
printf("1. Register New Person\n");
 scanf("%d", user_choice);
printf("2. Display All Registered Persons\n");
 scanf("%d", user_choice);
printf("3. Exit\n");
 scanf("%d", user_choice);

while(user_choice != 3)
{
 if(user_choice == 1)

  tracking++;
  write_data(record, tracking);



  printf("==\n");
  printf("Poverty Registration System\n");
  printf("1. Register New Person\n");
   scanf("%d", user_choice);
  printf("2. Display All Registered Persons\n");
    scanf("%d", user_choice);
  printf("3. Exit\n");
    scanf("%d", user_choice);
}
printf("Exiting program.");
return 0;
}

void read_data()
{

}

void write_data(struct identity record[], int n)
{

printf("Enter ID: ");
scanf("%d", record[n].id);
printf("Enter Name: ");
fgets(record[n].name, 50, stdin);
record[n].name[strcspn(record[n].name, "\n")] = '\0';
printf("Enter Age: ");
scanf("%d", record[n].age);
printf("Enter Monthly Income: ");
scanf("%f", record[n].income);
}