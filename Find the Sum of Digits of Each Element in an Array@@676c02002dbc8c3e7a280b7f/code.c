// Your code here...
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int j=0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    // while (j<n){
    //     arr[j]=arr[j]
    // }
    for(int i=0;i<n;i++){
        int temp=arr[i],sum=0;;
        while(temp!=0){
            int a=temp%10;
            sum+=a;
            temp/=10;
        }
        if(sum<0){
            printf("%d ",-sum);
        }else{
            printf("%d ",sum);
        }
        
    }
}