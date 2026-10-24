#include <stdio.h>

int main()
{
    // type variablename = Value ;

    // int myNum=15;

    // int myNum2; // Declare a Variable

    // myNum2=15; // Assign a value later

    // printf("%d" , myNum2);

    // Format Specifier
    // int myNum = 15; // Integer (whole Number )
    // float myFloatNum = 5.99; // Floating point number
    // char myLetter = 'D'; // Character

    // printf("%d\n",myNum);
    // printf("%f\n",myFloatNum);
    // printf("%c\n",myLetter);

    // printf(" My Favorite number is : %d", myNum);
    // printf(" my Number is %d and my Letter is %c",myNum,myLetter);

    // printf(" My Number is %d", 8);
    // printf(" My name character is %c",'M');

    // Change Variable name
    // int myNum = 15;
    // int myOtherNum = 23;
    // myNum = myOtherNum;
    // printf("%d",myNum);

    // int x = 5;
    // int y = 6;
    // int sum = x + y;
    // printf("%d",sum);

    // int x = 5 ;
    // x = x + 1;
    // printf("%d" , x);

    // int x = 5 , y = 6 , z = 50;
    // printf("%d", x+y+z);

    // int x , y, z;
    // x = y = z = 50;
    // printf("%d", x+y+z);

    // int a = 5 ;
    // int b = 10;
    // int temp;

    // temp = a;
    // a = b ;
    // b = temp;

    // printf( "a is %d , b is %d ",a,b);

    //  Identifiers are unique names
    // int minusPerHour  = 60;
    // int m = 60;

    // Example
    // int studentID = 15;
    // int studentAge = 23;
    // float studentfee = 75.25;
    // char studentGrade  = 'B';

    // printf(" Student ID : %d\n ",studentID);
    // printf(" Student age : %d\n", studentAge);
    // printf(" Student fee : %f\n",studentfee);
    // printf(" Student Grade : %c\n",studentGrade);

    // int length= 4;
    // int width = 6;
    // int area ;

    // area = length * width;

    // printf(" Length is %d\n" , length);
    // printf(" Width is %d\n", width );
    // printf(" Area of the rectangle is %d\n", area);

    // Data Types
    // int myNum = 5;
    // float myFloatNum=5.99;
    // char myLetter = 'D';

    // printf("%d\n" , myNum);
    // printf("%f\n",myFloatNum);
    // printf("%c\n",myLetter);

    // char myGrade = 'A';
    // printf("%c", myGrade);

    // char a = 65 , b = 66 , c = 67 ;
    // printf("%c\n",a);
    // printf("%c\n",b);
    // printf("%c\n",c);

    // char myLetter = 'A';
    // printf("%c\n",myLetter);
    // printf("%d\n",myLetter);

    // int myNum = 1000;
    // printf("%d\n",myNum);

    // float myNum1 = 5.75 ;
    // printf("%f",myNum1);

    // double myNum2 = 19.99;
    // printf("%lf",myNum2);

    // float myFloat = 1234567.89;
    // double myDouble = 1234567.89;

    // printf("%f\n",myFloat);
    // printf("%lf", myDouble);

    // float f1 = 35e3;
    // double d1 = 12E4;

    // printf("%f\n" , f1);
    // printf("%lf",d1);

    // float myFloatNum = 3.5;

    // printf("%f\n",myFloatNum);
    // printf("%.1f\n",myFloatNum);
    // printf("%.2f\n",myFloatNum);
    // printf("%.4f",myFloatNum);

    // int myInt ;
    // float myFloat ;
    // double myDouble ;
    // char myChar ;

    // printf("%zu\n" , sizeof(myInt));
    // printf("%zu\n", sizeof(myFloat));
    // printf("%zu\n", sizeof(myDouble));
    // printf("%zu\n", sizeof(myChar));

    // int a = 0;
    // double d = 10.21;
    // printf("%lu", sizeof(a + d));

    // int items = 50;
    // float cost_per_item = 9.99 ;
    // float total_cost = items * cost_per_item ;
    // char currency = '$';

    // printf(" Number of items : %d\n",items);
    // printf(" Cost per item : %.2f %c\n" , cost_per_item,currency);
    // printf(" Total cost = %.2f %c\n", total_cost,currency);

    int normalInt = 1000;
    double normalDouble = 3.14;

    short int small = -100;
    unsigned int count = 25;
    long int big = 1234567890L;
    long long int veryBig = 98765432112345678LL;
    unsigned long long int huge = 12345678909876543ULL;
    long double precise = 3.1411123456789L;

      printf("Normal int: %d\n", normalInt);
      printf("Normal double: %f\n", normalDouble);
      printf("Small: %hd\n", small);
      printf("Count: %u\n", count);
      printf("Big: %ld\n", big);
      printf("Very Big: %lld\n", (long long)veryBig);
      printf("Huge: %llu\n", huge);
      printf("Precise: %.18Lf\n", precise);

      printf("\n--- Data Type Sizes ---\n");

      printf("Size of int: %zu bytes\n", sizeof(int));
      printf("Size of double: %zu bytes\n", sizeof(double));
      printf("Size of short int: %zu bytes\n", sizeof(short int));
      printf("Size of unsigned int: %zu bytes\n", sizeof(unsigned int));
      printf("Size of long int: %zu bytes\n", sizeof(long int));
      printf("Size of long long int: %zu bytes\n", sizeof(long long int));
      printf("Size of unsigned long long int: %zu bytes\n",
           sizeof(unsigned long long int));
      printf("Size of long double: %zu bytes\n", sizeof(long double));

    return 0;
}
