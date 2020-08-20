#include <stdio.h>
#include <conio.h>
int i;
int j;
int function1(int k) {
    for (i = 1; i <= k; i++) {
        for (j = 1; j <= k; j++) {
                printf("*");
            }
            printf("\n");
        }
       

    }


int main() {
    int k, x = 2;
    scanf_s("%d", &k);
    function1(k);
    while (k != 1) {
        while (k % x == 0) {
            printf("%d "" ", x);
            k = k / x;
        }
        x++;
    }
    
    return 0;
}
