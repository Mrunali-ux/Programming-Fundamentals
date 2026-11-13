#include <stdio.h>

int main() {
    
    int num , original , digit1 , digit2 , digit3 , sum ;

    printf(" Enter a 3 digit number : ");
    scanf("%d", &num);

    original = num ;

    digit1 = num%10;
    num = num / 10;

    digit2 = num%10;
    num = num / 10;

    digit3 = num %10;

    sum = digit1 + digit2 + digit3 ;

    printf(" Sum is %d\n",sum);

     return 0;
}