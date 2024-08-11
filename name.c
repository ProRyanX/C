#include <stdio.h>
#include <stdlib.h>


int main(){
    int age;    // It prints out a random integer
    double percentage;  // It prints out 0
    char grade; // It prints out a random character
    char name[20];  // String length is necessary. It prints out an emply string.
    char fname[30];  // String length is necessary. It prints out an emply string.
    
    printf("Enter your grade: ");
    scanf("%c", &grade);    // 'scanf()' is the function for the user to input data.
    printf("Good grade. You got %c.\n", grade);
    printf("Enter your full name: ");
    fgets(fname, 30, stdin);
    printf("Your full name is %s.", fname); // It generates a new line due to using fgets(), this also not working
    printf("Enter your name: ");
    scanf("%s", name);  // No need of '&'
    printf("Your name is %s.\n", name);
    printf("Enter your age: ");
    scanf("%d", &age);    
    printf("You are %d years old!\n", age);
    printf("Enter your 12th board percentage: ");
    scanf("%lf", &percentage);
    printf("WOW! You got %f!\n", percentage);

    return 0;
}

/*
Inside the scanf(), there are two parameters:
1.) The data type of the data entered by the user.
2.) The place/variable where the entered data is stored.

NOTE: There are some problems after the entered data that C prints out later if the data type is different from
      the required data type. Also if a character data type value is entered by the user after any other data 
      of any other data type, it malfunctions.
      Reason: Unknown
*/