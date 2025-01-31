#include <stdio.h>
int main() {
    int a;
    char c[100];
    char h[100];
    scanf("%s %d",&c,&a);
    scanf("%s",&h);
    printf("Name: %s\n",c);
    printf("Age: %d\n",a);
    printf("Hobby: %s\n",h);
    return 0;
}