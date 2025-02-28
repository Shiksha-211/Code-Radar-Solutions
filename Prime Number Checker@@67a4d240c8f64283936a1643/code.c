#include <stdio.h>
int main() {
    int num;
    scanf("%d", &num);
    int a;
    
    for (int i = 0; i < num; i++) {
        scanf("%d", &a);
        
        int count = 0;
        for (int j = 1; j <= a; j++) {  
            if (a % j == 0) {  
                count++;
            }
        }
        
        if (count == 2) {
            printf("1\n");
        } else {
            printf("0\n");
        }
    }
    
    return 0;
}
