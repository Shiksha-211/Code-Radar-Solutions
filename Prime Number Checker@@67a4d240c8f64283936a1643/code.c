#include <stdio.h>
int isPrime(){
    int a;
    int count =0;
    for (int i=1;i<=a;i++){
        if(a%i==0){ 
            count++;
        }
    }
    if (count>2){
        printf("composite");
    }
    else{
        printf("prime");
    }
}
int main() {
   int t;
   scanf("%d",&t);
   while(t--){
    int num;
    scanf("%d",&num);
    printf("%d\n",isPrime(num));
   }
   return 0;
   }