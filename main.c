#include <stdio.h>
#include <string.h>
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

void delete(person *user){
    memset(user, 0, sizeof(person));
    printf("User data cleared\n");
}


int main(){
    int choose, expression;
    struct Person people[2];
    for(int i = 0; i < 2; i++){
        enterStruct(&people[i]);
        printf("Name: %s\nSurname: %s\nMiddlename: %s\nEmail: %s\nSaved\n", people[i].name, people[i].surname, people[i].middleName, people[i].email);
    }
    printf("Do you want to cleare user data?\n 1 - Yes\n 2 - No\n");
    scanf("%d",&choose);
    switch (choose)
    {
    case 1:
        printf("Choose who u want to delete in massive\n 1 - First data\n 2 - Second data\n");
        scanf("%d",&expression);
        switch (expression)
        {
        case 1:
            delete(&people[0]);
            break;
        case 2:
            delete(&people[1]);
            break;
        }
        break;
    case 2:
        break;
    }
    printf(people[0].name);
    return 0;
}