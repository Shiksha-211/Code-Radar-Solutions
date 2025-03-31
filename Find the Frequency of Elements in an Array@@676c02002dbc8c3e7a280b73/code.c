#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int arr2[n]; 
    int c=1;
    for(int i =0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i =0;i<n;i++){
        if(arr[i]!=-1){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                c++;
            arr[j]=-1;
        }
        }
        arr2[i]=c;
    }   
    }
   
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=-1){
            printf("%d %d \n",arr[i],arr2[i]);
        }
    
    }
    return 0;
}