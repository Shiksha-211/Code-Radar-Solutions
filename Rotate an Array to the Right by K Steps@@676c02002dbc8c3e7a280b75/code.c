// Your code here...
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int k;
    scanf("%d",&k);
    int q;
    if(k>n){
        q=k%n;
    }
    else{
        q=k;
    }
    for (int i =0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0;i<q;i++){
        printf("%d ",arr[i]);
    }
    for(int i =q;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}