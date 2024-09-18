#include <stdio.h>
#define MAX_LENGHT 30

typedef struct Person{
    char id;
    char name[MAX_LENGHT];
    char surname[MAX_LENGHT];
    char middleName[MAX_LENGHT];
    char email[MAX_LENGHT];
}person;

typedef struct SocialNetwork{
    char vk[MAX_LENGHT];
    char ok[MAX_LENGHT];
    char telegram[MAX_LENGHT];
}SN;

void enterStruct(person *user){
    printf("----------------------------------\n");
    printf("Enter your name: ");
    scanf("%s", user->name);
    printf("Enter your surname: ");
    scanf("%s", user->surname);
    printf("Enter your middlename: ");
    scanf("%s", user->middleName);
    printf("Enter your email: ");
    scanf("%s", user->email);
    printf("----------------------------------\n");
}


int main(){
    struct Person people[3];
    for(int i = 0; i < 3; i++){
        enterStruct(&people[i]);
        printf("Name: %s\nSurname: %s\nMiddlename: %s\nEmail: %s\nSaved\n", people[i].name, people[i].surname, people[i].middleName, people[i].email);
        //printf("Saved: ");
    }
    return 0;
}