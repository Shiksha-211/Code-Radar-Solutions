// Your code here...
#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int n=a/2;
    for(int i=1;i<=a;i++){
        for(int j=1;j<=a;j++){
            if(j == n - i || j == n + i || j == i - n || j == 3 * n - i){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}