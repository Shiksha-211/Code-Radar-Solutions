#include <stdio.h>
int main() {
    int a,b;
    char c;
    scanf("%d %d %c",&a &b &c);
    switch (c){
        case '+':
        printf(a+b);
        break;
        case'-':
        printf(a-b);
        break;
        case'*':
        printf(a*b);
        break;
        case'/':
        printf(a/b);
    }
    printf("%s", welcome());
    return 0;
}