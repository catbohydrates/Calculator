#include <stdio.h>
#include <stdlib.h>

//And add function for adding numbers together. 
double add(double *a, double *b){
    return (*a) + (*b); //Does the same thing as: return *a + *b; it just looks nice.
}
double subtract(double *a, double *b){
    return (*a) - (*b); 
}
double multiply(double *a, double *b){
    return (*a) * (*b);
}
double divide(double *a, double *b){
    if(*a == 0 || *b == 0){
        printf("Cannot devide by 0!\n");
        return 1; //We will return 1 because there is an error.
    }
    else{
        return (*a) / (*b); 
    }
}

int main(){
    double num1; 
    double num2; 
    double result;
    char operator; 

    printf("Enter an operator: "); 
    scanf("%c", &operator); //Getting input and asigning it to operator.

    printf("Enter your first number: ");
    scanf("%lf", &num1); //Assigning userinput to number 1's memory address?

    printf("Enter your second number: ");
    scanf("%lf", &num2); //Assigning userinput to number 2's memory address?

    switch(operator){
        case '+': 
            result = add(&num1, &num2);
            printf("Sum: %lf", result);
            break;

        case '-': 
            result = subtract(&num1, &num2);
            printf("Sum: %lf", result); 
            break;

        case '*':
            result = multiply(&num1, &num2);
            printf("Sum: %lf", result);
            break;
        
        case '/': 
            result = divide(&num1, &num2);
            printf("Sum: %lf", result);
            break;

        default: 
            printf("That operator doesnt exist."); 
            return 1; 
    }

    return 0;
}
