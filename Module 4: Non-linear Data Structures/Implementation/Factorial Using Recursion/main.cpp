int factorial(int n) {
    if (n <= 1) 
        return 1;
    else
        n * factorial(n-1);
}