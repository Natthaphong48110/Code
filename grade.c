#include <stdio.h>
int main() {
    //variable
    char name[20];
    int score;

    //input
    printf("Enter Your Name : ");
    scanf("%s",&name);
    printf("Enter Your Score : ");
    scanf("%d",&score);

    //output
    printf("Hello %s\n",name);
    if(score>=80) {
        printf("Your Grade is A");
    } else if(score>=70) {
        printf("Your Grade is B");
    } else if(score>=60) {
        printf("Your Grade is C");
    } else if(score>=50) {
        printf("Your Grade is D");
    } else {
        printf("Your Grade is F");
    }

    return 0;

}