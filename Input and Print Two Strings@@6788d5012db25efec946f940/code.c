#include <stdio.h>
int main() {
    char c[100];
    char d[100];
    scanf("%s %s",&c,&d);
    printf("You entered: %s ",c);
    printf("and ");
    printf("%s",d);
    return 0;
}