#include <stdio.h>

int main() {
    int num1, num2, num3;
    scanf_s("%d %d %d", &num1, &num2, &num3);
    printf("1st Number = %d\n2nd Number = %d\n3rd Number = %d\n", num1, num2, num3);

    if ((num1 > num2) && (num1 > num3))
        printf("The 1st Number is the greatest among three.");

    if ((num2 > num3) && (num2 > num1))
        printf("The 2nd Number is the greatest among three.");

    if ((num3 > num1) && (num3 > num2))
        printf("The 3rd Number is the greatest among three.");

    return 0;
}
