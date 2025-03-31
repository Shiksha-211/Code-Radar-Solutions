#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n]; 
    for(int i =0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int num = 0;
    int num_rep =0;
    for(int i =0;i<n;i++){
        for(int j =i+1;j<=n;j++){
            num_rep ++;
            if(arr[i]==arr[j]){
                num++;
                break;
            }
        }
    }
    printf("%d %d \n",num,num_rep );
    return 0;
}