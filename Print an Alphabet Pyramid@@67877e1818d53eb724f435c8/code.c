// Your code here...
#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        char * a = "A";
        for(int j=1;j<=i;j++){
            printf("%c ",a);
            a = a+1;
        }
        printf("\n");
    }
}