// Your code here...
#include<stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    
    for (int i = 1; i <= num; i++) {
    
        for (int j = i+1; j <= num; j++) {
            printf(" ");
        }
        
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        
        printf("\n");
    }

    return 0;
}
