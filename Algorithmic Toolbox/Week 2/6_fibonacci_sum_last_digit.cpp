#include <iostream>
using namespace std ;

int fibonacci_sum_naive(long long n) {
    if (n <= 1)
        return n;

    long long previous = 0;
    long long current  = 1;
    long long sum      = 1;

    for (long long i = 0; i < n - 1; ++i) {
        long long tmp_previous = previous;
        previous = current;
        current = tmp_previous + current;
        sum += current;
    }

    return sum % 10;
}

long long int fibonacci_sum(long long int n){
    long long int sum = 1 ;
    if(n == 0 || n == 1){
        return n ;
    }
    long long int fibo[n] ;
    fibo[0] = 0 ;
    fibo[1] = 1 ;
    for(long long int i = 2;i <= n;i++){
        fibo[i] = (fibo[i-1] + fibo[i-2]) % 10 ;
        sum = (sum % 10) + (fibo[i] % 10) ;
    }
    return (sum % 10) ;
}

int main() {
    long long int n = 0;
    std::cin >> n;
    std::cout << fibonacci_sum_naive(n);
}
