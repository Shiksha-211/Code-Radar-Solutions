// Your code here...
#include <stdio.h>
#include <limits.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i =0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max = INT_MIN;
    int max_sec= -1;
    for(int i =1;i<n;i++){
        if(arr[i]>max){
            max_sec = max;
            max= arr[i];
        }
        if((arr[i]>max_sec) && (arr[i] != max)){
            max_sec = arr[i];
            printf("%d",max_sec);
        }
        else{
            printf("-1");
            break;
        }
    }

}