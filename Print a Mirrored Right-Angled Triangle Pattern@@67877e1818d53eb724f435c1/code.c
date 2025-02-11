#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    for (int i=1;i<=a;i++){
        for(int j=1;j<=a;j++){
            if(i==a || j ==a){
            printf("*");
            //else if()
        }
        printf("\n");
    }
    }
    printf("%s", welcome());
    return 0;
}