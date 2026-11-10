#include <stdio.h>

int main() {
    
    // while loop
    // int i = 0;
    // while (i<5) {
    //     printf("%d\n",i);
    //     i++;

    // }

    // int countdown = 3;
    // while( countdown > 0) {
    //     printf("%d\n" , countdown);
    //     countdown--;
    // }
    // printf("Go \n");

    // int i = 10;
    // while (i < 5){
    //     printf("This will never be printed \n");
    //     i++;
    // }

    // do while loop

    // int i = 0;

    // do {
    //     printf("%d\n",i);
    //     i++;
    // }
    // while( i < 5);

    // int i = 10;

    // do {
    //     printf(" i is %d\n" , i);
    //     i++;
    // } while (i<5);

    // int number ;

    // do {
    //     printf("Enter a positive number : ");
    //     scanf("%d",&number);
    // } while ( number > 0);

    // int countdown = 3;

    // while ( countdown > 0) {
    //     printf("%d\n",countdown);
    //     countdown --;
    // }
    // printf("Happy New year \n");


    // int i = 0;
    // while( i <= 10) {
    //     printf("%d\n",i);
    //     i+=2;
    // }

    // int numbers = 12345;

    // int revnumbers = 0;

    // while ( numbers) {
    //     revnumbers = revnumbers * 10 + numbers % 10;

    //     numbers /= 10;
    // }
    // printf("%d\n",revnumbers);

    // int dice = 1;

    // while ( dice <= 6) {
    //     if ( dice < 6){
    //         printf("No yatzy ");
    //     } else {
    //         printf("Yatzy");
    //     }
    //     dice++;
    // }

    // for loop
    // int i ;
    // for ( i=0 ; i <5 ; i++){
    //     printf("%d\n",i);
    // }

    // int i;
    // for ( i =0 ; i <= 10 ; i = i + 2){
    //     printf("%d\n",i);
    // }

    // int sum = 0;
    // int i ;

    // for ( i = 1 ; i <= 5 ; i++){
    //     sum = sum + i;
    // }
    // printf("Sum is %d", sum);

    // int i;
    // for ( i = 5 ; i > 0 ; i--){
    //     printf("%d\n", i);
    // }

    // int i , j;

    // for ( i = 1 ; i <= 2 ; ++i){
    //     printf("Outer %d\n",i);

    //     for ( j = 1 ; j<= 3 ; ++j) {
    //         printf("Inner %d\n",j);
    //     }
    // }

    // int i , j;

    // for ( i =1 ; i <= 3 ; i++){
    //     for (j = 1 ; j <= 3 ;j++){
    //         printf("%d\t",i*j);
    //     }
    //     printf("\n");
    // }

    // for ( int i=0; i<= 100 ; i+=100){
    //     printf("%d\n",i);
    // }

    // for ( int i =1 ; i < 10 ; i = i+2){
    //     printf("%d\n",i);
    // }

    // int number = 2;
    // int i ;

    // for ( i = 1 ; i <= 10 ; i++){
    //     printf(" %d x %d = %d\n" , number , i , number * i);
    // }

    //  break

    // int i ;
    //  for ( i = 0 ; i < 10 ; i++){
    //     if ( i==4){
    //         break;
    //     }
    //     printf("%d\n",i);
    //  }

    // int i ;
    // for ( i = 0 ; i < 10 ;i ++){
    //     if ( i ==4) {
    //         continue;
    //     }
    //     printf("%d\n",i);
    // }

    // int i ;
    // for ( i=0 ; i<6 ; i++){
    //     if( i ==2){
    //         continue;
    //     }
    //     if ( i ==4){
    //         break;
    //     }
    //     printf("%d\n",i);
    // }

    // int i = 0;
    // while ( i < 10) {
    //     if ( i ==4){
    //         break;
    //     }
    //     printf("%d\n",i);
    //     i++;
    // }

    // int i = 0;
    // while ( i < 10){
    //     if ( i ==4) {
    //         i++;
    //        continue;
    //     }
    //     printf("%d\n",i);
    //     i++;
    // }

    int myNumbers[] = {3,-1,7,0,9};
    int length = sizeof(myNumbers)/sizeof(myNumbers[0]);
    int i;

    for ( i = 0 ; i < length ; i++){
        if( myNumbers[i] < 0){
            continue;
        }
        if (myNumbers[i] == 0){
            break;
        }
        printf("%d\n",myNumbers[i]);
    }
     return 0;
}