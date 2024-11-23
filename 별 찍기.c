#include <stdio.h>

int main(void)
{
    int N;

    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        for (int j = N - i; j > 0; j--) {
            printf(" ");
        }
        for (int k = 2 * i - 1; k > 0; k--) {
            printf("*");
        }
        printf("\n");
    }

    for (int l = N - 1; l >= 0; l--) {
        for (int m = N - l; m > 0; m--) {
            printf(" ");
        }
        for (int n = 2 * l - 1; n > 0; n--) {
            printf("*");
        }
        printf("\n");
    }
}