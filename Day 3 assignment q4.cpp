#include <stdio.h>

int find_gcd(int num1, int num2);

int main()
 {
    int num1, num2, lcm;

    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    lcm = (num1 * num2) / find_gcd(num1, num2);

    printf("LCM of %d and %d is %d", num1, num2, lcm);

    return 0;
}

int find_gcd(int num1, int num2) 
{
    if(num2 == 0) 
	{
        return num1;
    } else 
	{
        return find_gcd(num2, num1 % num2);
    }
}
