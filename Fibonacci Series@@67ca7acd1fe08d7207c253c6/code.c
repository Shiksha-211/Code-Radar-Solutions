// Your code here...
#include <stdio.h>
int fibonacciSeries(int n){
    int a=0,b=1;
// while(a<c){
for(int i=1;i<=n;i++){
    printf("%d ",a);
    int temp=b;
    b=a+b;
    a=temp;
}
return 0;
}