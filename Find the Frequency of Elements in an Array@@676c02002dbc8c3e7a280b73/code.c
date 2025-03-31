#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n]; 
    int num = 0;
    int num_rep =0;
    for(int i =0;i<n;i++){
        for(int j =0;j<=n-i-1;j++){
            if(arr[j]==arr[j+1]){
                num+=1;
            }
        }
        num_rep+=1;
    }
    return 0;
}