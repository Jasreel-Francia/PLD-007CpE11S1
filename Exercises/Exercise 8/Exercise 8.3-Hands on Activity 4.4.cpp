#include <stdio.h>
#include <stdlib.h>

int main() {
    char str1[20], str2[20], str3[20], str4[20];
    int num1, num2, num3, num4;
    int total;

    //Input
    printf("Enter first integer: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second integer: ");
    fgets(str2, sizeof(str2), stdin);
    printf("Enter third integer: ");
    fgets(str3, sizeof(str3), stdin);
    printf("Enter fourth integer: ");
    fgets(str4, sizeof(str4), stdin);

    //strings to integers
    num1 = atoi(str1);
    num2 = atoi(str2);
    num3 = atoi(str3);
    num4 = atoi(str4);

    //Calculate
    total = num1 + num2 + num3 + num4;

    //Print
    printf("The total of the four values is: %d\n", total);

    return 0;
}
