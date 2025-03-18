// Your code here...
#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int c=~(1<<b);
    int t=a&c;
    printf("%d",t);
    return 0;
}