// Your code here...
#include <stdio.h>
int main() {
    int a,flag,j,n;
    scanf("%d",&a);
    flag=1;
    for (n=2;n<=a/2;n++){
        if(a%n==0){
            flag=0;
            break;
        }
    }
    if(flag==1){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
    return 0;
}