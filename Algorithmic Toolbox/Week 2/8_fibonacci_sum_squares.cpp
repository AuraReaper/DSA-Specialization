#include <bits/stdc++.h>
using namespace std ;

long long fibonacci_sum_squares(long long n){
    long long previous = 0 ;
    long long temp = 0 ;
    long long current = 1 ;
    n = n % 60 ;
    if(n <= 1){
        return n ;
    }
    for(long long i = 2;i <= n;i++){
        // temp = (previous + current) % 60 ;
        // previous = current ;
        // current = temp ;
        temp = previous ;
        previous = current ;
        current = (current + temp) % 60 ;
    }

    return current ;
}

int main() {
    long long n = 0;
    std::cin >> n;
    long long a = fibonacci_sum_squares(n) ;
    long long b = fibonacci_sum_squares(n + 1) ;

    cout << (a * b) % 10 ;
}
