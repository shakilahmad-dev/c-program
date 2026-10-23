#include <stdio.h>
int main() {
    char firstName[100], secondName[100];
    printf("enter your first name: ");
    scanf("%s", firstName);
    printf("enter your last name: ");
    scanf("%s", secondName);
    printf("your full name is: %s %s\n", firstName, secondName);

    return 0;
}