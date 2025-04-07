// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for( int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int arr2[n];
    for(int i = 0;i<n;i++){
        arr[i]=arr2[n-i-1];
    }
    for(int i=0;i<n;i++){
        if(arr[i]==arr2[i]){
            printf("Yes");
        }
        else{
            printf("No");
        }
    }
    return 0;
}