// 5. Write a program to calculate sum of cubes of first N natural numbers
#include <stdio.h>
int main()
{
    int n, sum = 0;
    printf("Enter any number\n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum = sum + (i * i * i);
    }
    printf("sum of cube of first N natural numbers : %d ", sum);
    return 0;
}
