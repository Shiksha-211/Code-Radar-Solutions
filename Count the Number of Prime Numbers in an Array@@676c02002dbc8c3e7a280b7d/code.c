// Your code here...
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
     int count =0;
    for(int i = 0;i<n;i++){
        for(int j=1;j<arr[i]+1;j++){
            if(arr[j]%i==0){
                count++;
            }
        }
    
    }
    if(count ==2){
        printf("%d",&count );
    }
    return 0;
}