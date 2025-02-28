#include<stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    
    for (int i = 1; i <= num; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%c ", 'A' + j - 1);
        }
        printf("\n");
    }

    return 0;
}
