/*#include <stdio.h>
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
}*/
#include <stdio.h>

#define MAX 100000  // Define max range if numbers are within a limit

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n], freq[MAX] = {0};  // Hash table for frequency counting

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        freq[arr[i]]++;  // Store frequency
    }

    for (int i = 0; i < n; i++) {
        if (freq[arr[i]] > 0) {  // Print only once
            printf("%d %d\n", arr[i], freq[arr[i]]);
            freq[arr[i]] = 0;  // Mark as printed
        }
    }

    return 0;
}
