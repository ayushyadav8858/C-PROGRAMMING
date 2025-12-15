#include<stdio.h>

int main() {


    int n , count = 0;

    printf("enter the number\n");
    scanf("%d", &n);

    for(int i = 1 ; i<=n; i++) {

        if(n%i == 0) {
            count = count + 1;
        }
    }

    if(count == 2) {

        printf("This number is prime number\n");
    }

    else {

        printf("This number is not prime number\n");
    }

    return 0;
}
