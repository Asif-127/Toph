//Fibonacci numbers
#include <stdio.h>

int main() {
    int n;
    int fibo = 1, first = 1, second = 1;  // Initialize first two numbers to 1
    scanf("%d", &n);
    
    
    if (n == 1 || n == 2) 
    {
        printf("1\n");
        return 0;
    }

    
    for (int i = 3; i <= n; i++)
     {  
        fibo = first + second;
        first = second;
        second = fibo;
    }
    
    
    printf("%d\n", fibo);
    
    return 0;
}
