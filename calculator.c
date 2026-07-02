#include <stdio.h>
int main() {
    //variable
    char operator;
    double num1 , num2 , result;

    //input
    printf("Enter Your Operator (= , - , * , /) ");
    scanf("%c",&operator);
    printf("Enter Your Num1 ");
    scanf("%lf",&num1);
    printf("Enter Your Num2 ");
    scanf("%lf",&num2);

    //output
    switch (operator){
        case '+' :
            result = num1 + num2;
            printf("Result is %.2lf + %.2lf = %.2lf",num1,num2,result);
        break;
        case '-' :
            result = num1 - num2;
            printf("Result is %.2lf - %.2lf = %.2lf",num1,num2,result);
        break;
        case '*' :
            result = num1 * num2;
            printf("Result is %.2lf X %.2lf = %.2lf",num1,num2,result);
        break;
        case '/' :
        if (num2 == 0) {
            printf("You can't divide by 0");
        } else {
            result = num1 / num2;
            printf("Result is %.2lf / %.2lf = %.2lf",num1,num2,result);
        break;
        }
        default : 
            printf(" Error");
    }
    return 0;
}