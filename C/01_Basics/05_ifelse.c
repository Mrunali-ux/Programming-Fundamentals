#include <stdio.h>
#include <stdbool.h>

int main() {
    
    // if Statement

    // if  (20 > 18) {
    //     printf(" 20 is greater than 18 ");
    // }

    // int x = 20;
    // int y = 18;
    // if(x>y) {
    //     printf(" x is greater than y ");
    // }

    // int x = 20;
    // int y = 18;

    // bool isGreater = x > y;

    // if (isGreater) {
    //     printf(" x is greater than y ");
    // }

    // else 

    // int time = 20;

    // if ( time < 18) {
    //     printf(" Good Day ");
    // }
    // else {
    //     printf(" Good evening ");
    // }

    // int time = 20;
    // bool isDay = time < 18;

    // if (isDay) {
    //     printf(" Good Day ");
    // }
    // else {
    //     printf(" Good evening ");
    // }

    //  else if

    // int time = 16 ;
    // if ( time < 12) {
    //     printf(" Good Morning ");
    // }
    // else if ( time < 18) {
    //     printf(" Good Day ");
    // }
    // else {
    //     printf(" Good evening ");
    // }

    // int time = 16 ;
    // bool isMorning = time < 12;
    // bool isDay = time < 18;

    // if( isMorning ) {
    //     printf(" Good Morning ");
    // }

    // else if (isDay ) {
    //     printf(" Good Day ");
    // }

    // else {
    //     printf(" Good evening ");
    // }

    //  short hand if else
    // int time = 20;
    // (time < 18) ? printf("Good day ") : printf("Good evening");

    // int a = 10;
    // int b = 20;
    // int max = (a>b) ? a:b;
    // printf(" The largest number is %d" , max);

    // nested if 

    // int x = 15;
    // int y = 25;
    // if( x > 10) {
    //     printf(" x is greater than 10 \n");

    //     if ( y > 20) {
    //         printf(" y is also greater than 20 \n");
    //     }
    // }

    // int age = 20;
    // bool isCitizen = true ;

    // if ( age >= 18) {
    //     printf(" Old enough to vote ");

    //     if (isCitizen) {
    //         printf(" And you are a citizen , so you can vote \n");
    //     }
    //     else {
    //         printf(" But you must be a citizen to vote \n");
    //     }
    // }
    // else {
    //     printf(" Not old enough to vote \n");
    // }

    // int a = 200;
    // int b = 33;
    // int c = 500;

    // if( a>b && c> a){
    //     printf(" Both conditions are true \n");
    // }


    // int a = 200;
    // int b = 33 ;
    // int c = 500;

    // if ( a>b || a>c){
    //     printf(" At least one condiion is true \n");
    // }

    // int a = 33;
    // int b = 200;

    // if  ( !(a>b)) {
    //     printf(" a is Not greate than b \n");
    // }

    // bool isLoggedIn = true ;
    // bool isAdmin = false ;
    // int securityLevel = 3;

    // if ( isLoggedIn && ( isAdmin || securityLevel <= 2)) {
    //     printf(" Access Granted \n");
    // } else {
    //     printf(" Access denied \n");
    // }

    // Switch 

    // int day = 4;

    // switch (day)
    // {
    // case 1:
    //     printf("Monday");
    //     break;
    // case 2 :
    // printf(" Tuesday ");
    // break ;
    // case 3 :
    // printf("Wednesday ");
    // break;
    // case 4 :
    // printf("Thursday");
    // break;
    // case 5 :
    // printf("Friday");
    // break;
    // case 6:
    // printf("Saturday");
    // break;
    // case 7:
    // printf("Sunday");
    // break;

    
    // default:
    //  printf(" None of this");
    //     break;
    // }

    // int day = 2 ;

    // switch (day) {
    //     case 1 :
    //     printf("Monday \n");
    //     break;
    //     case 2 :
    //     printf(" Tuesday \n");
    //     case 3:
    //     printf(" Wednesday \n");
    //     break;
    //     case 4:
    //     printf("Thursday \n");
    //     break;

    // }

    // int day = 4;

    // switch (day) {
    //     case 6 :
    //     printf("today is saturday ");
    //     break;
    //     case 7 :
    //     printf("Today is sunday");
    //     break;
    //     default :
    //     printf(" Lookinf forward ");
    // }

    // int day = 6;

    // switch (day) {
    //     case 6 :
    //     case 7:
    //     printf("Weekend ");
    //     break;
    //     default :
    //     printf("Weekday");
    // }

    int choice = 1;

    switch (choice)
    {
    case 1:
        printf("You ordered coffee");
        break;
    case 2 :
    printf("You ordered Tea ");
    break;
    
    default:
    printf("Invalid Choice");
        break;
    }
     return 0;
}