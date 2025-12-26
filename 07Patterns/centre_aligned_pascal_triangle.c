#include<stdio.h>

int main() {

    int rows , space , coef = 1 , i , j;
    
    printf("Enter the number of rows\n");
    scanf("%d" , &rows);

    for(i=0; i<rows; i++) {

        for(space=1; space <= rows-i; space++) {
            printf(" ");
        }

        coef = 1;

        for(j=0; j<=i; j++) {

            if(j==0) {
                coef = 1;
            }

            else {
                coef = coef * (i-j + 1)/j;
            }

            printf("%d ", coef);
        }

        printf("\n");
    }


    return 0;
}
