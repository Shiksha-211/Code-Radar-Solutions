// Your code here...
#include <stdio.h>
int main(){
    int num;
    scanf("%d\n",&num);
    int a;
    for (i=0;i<num;i++){
        scanf("%d",&a);
         int count =0;
    for (int i=1;i<=num;i++){
        if(num%i==0){ 
            count++;
        }
    }
    if (count>2){
       printf("0");
    }
    else{
        printf("1");
    }
}
return 0;
}

    