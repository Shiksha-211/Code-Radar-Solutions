// Your code here...
#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        for(j=1;j<=a;j++){
            if(i==0 || j==0 ||i==a || j==a){
                printf(" ");
            }
            else{
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}