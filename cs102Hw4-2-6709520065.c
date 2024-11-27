#include<stdio.h>
#include<string.h>

void read_data();
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

    struct identity sussybaka[100];
    int user_choice, count=-1;
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
      write_data();
      
    }
    printf("Exiting program.");
    return 0;
}

void read_data()
{

}

void write_data()
{
    
}