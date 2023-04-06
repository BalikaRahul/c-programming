#include <stdio.h>

int check_prime(int num);

int main() {
    int num, i, j, flag;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    printf("%d = ", num);

    for(i=2; i<=num/2; i++) {
        if(check_prime(i) == 1) {
            for(j=2; j<=num/2; j++) {
                if(check_prime(j) == 1) {
                    if(i+j == num) {
                        printf("%d + %d\n", i, j);
                    }
                }
            }
        }
    }

    return 0;
}

int check_prime(int num) {
    int i, flag = 1;

    for(i=2; i<=num/2; i++) {
        if(num % i == 0) {
            flag = 0;
            break;
        }
    }

    return flag;
}
