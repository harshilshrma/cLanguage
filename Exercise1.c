#include <stdio.h>

/*
Print multiplication table of a number entered by the user in pretty form

Input
Enter the number you want multiplication table of:
6

Output:
Table of 6:
6 X 1 = 6
6 X 2 = 12
.
.
.
6 X 10 = 60
*/
 
int main()
{
    int a, b;
    printf("Enter the number you want multiplication table of:\n");
    scanf("%d", &a);

    printf("The multiplication table of %d is:\n", a);
    printf("%d X 1 = %d\n", a, a*1);
    printf("%d X 2 = %d\n", a, a*2);
    printf("%d X 3 = %d\n", a, a*3);
    printf("%d X 4 = %d\n", a, a*4);
    printf("%d X 5 = %d\n", a, a*5);
    printf("%d X 6 = %d\n", a, a*6);
    printf("%d X 7 = %d\n", a, a*7);
    printf("%d X 8 = %d\n", a, a*8);
    printf("%d X 9 = %d\n", a, a*9);
    printf("%d X 10 = %d\n", a, a*10);

    printf("Thank you!");

    return 0;
}