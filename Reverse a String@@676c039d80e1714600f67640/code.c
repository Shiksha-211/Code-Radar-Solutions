// Your code here...
#include <stdio.h>
int main(){
    char ch[20];
    scanf("%s", ch);
    int size = 0;
    int i = 0;
    while (ch[i] != '\0') {
        size++;
        i++;
    }
    int l = size - 1;
    for (int k = 0; k < size / 2; k++, l--) {
        char temp = ch[k];
        ch[k] = ch[l];
        ch[l] = temp;
    }
    printf("%s", ch);
    return 0;
}