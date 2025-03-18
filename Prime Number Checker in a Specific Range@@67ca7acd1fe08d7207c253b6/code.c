// Your code here...
int isPrime(int num,int a, int b) {
    if (num <= 1) {
        return false;  // Numbers less than or equal to 1 are not prime
    }
    for (int i = 2; i * i <= num; i++) { // Check divisibility up to the square root of num
        if (num % i == 0) {
            return false;  // num is divisible by i, hence not prime
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