#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        for (int space =0;space <=a-1;space++){
            printf(" ");
        }
        for(int j=1;j<=a;j++){
            printf("*");
        }
        printf("\n");
    }
   
    return 0;
}