#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n]; 
    int key =0;
    int freq =0;
    for(int i =0;i<n;i++){
        scanf("%d",&a);
    }
    for(int i =0;i<n;i++){
        for(int j=i;j<n-i-1;j++){
            if(arr[i]==arr[j]){
                key++;
            }
        }
        freq++;   
        }
   
    
    printf("%d %d \n",key,freq++ );
    return 0;
}