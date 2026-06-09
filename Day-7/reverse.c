#include <stdio.h>
#include <math.h>
int reverse(int n, int digits)
{
 if (n == 0)
        return 0;
return (n % 10) * pow(10, digits - 1) +
           reverse(n / 10, digits - 1);
}
int main()
{
    int num, digits = 0, temp;
printf("Enter a number: ");
    scanf("%d", &num);
 temp = num;
while (temp != 0)
    {
        digits++;
        temp /= 10;
    }
 printf("Reversed number = %d\n", reverse(num, digits));

    return 0;
}