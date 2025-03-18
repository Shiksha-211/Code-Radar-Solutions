// Your code here...
#include <stdio.h>
int isPrime(int num,int a, int b) {
    if (num <= 1) {
        return false; 
    }
    for (int i = 2; i * i <= num; i++) { 
        if (num % i == 0) {
            return false;  
        }
    }
    
    
    // Loop through the range [a, b]
    for (int i = a; i <= b; i++) {
        if (isPrime(i)) {
            printf("%d ", i);  // Print prime number
        }
    }
    printf("\n");
    return true;  // num is prime
}