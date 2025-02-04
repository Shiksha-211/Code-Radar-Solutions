#include <stdio.h>
int main() {
    char a;
    scanf("%c",&a);
    switch(a){
        case'A':
        printf("Excellent");
        break;
        case'B':
        printf("Good");
        break;
        case'C':
        printf("Average");
        break;
        case'D':
        printf("Below Average");
        break;
        case'F':
        printf("Invalid Grade");
        break;
        default:
        printf("Fail");
        
    }
    return 0;
}