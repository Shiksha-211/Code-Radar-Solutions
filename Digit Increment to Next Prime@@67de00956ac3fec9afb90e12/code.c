 int isPrimeDigit(int d) {
    return (d == 2 || d == 3 || d == 5 || d == 7);
}

// Function to get the next prime digit
 int nextPrimeDigit(int d) {
    while (!isPrimeDigit(d)) {
        d++;
        if (d > 9) d = 2; // Wrap around for digits 8, 9, and 0
    }
    return d;
}

// Function to convert each digit to the next prime digit and form a new number
 int incrementToPrimeDigits(int n) {
    int result = 0, place = 1;
    while (n > 0) {
        int digit = n % 10;
        n /= 10;
        int primeDigit = nextPrimeDigit(digit);
        result = (primeDigit * place) + result;
        place *= 10;
    }
    return result;
}