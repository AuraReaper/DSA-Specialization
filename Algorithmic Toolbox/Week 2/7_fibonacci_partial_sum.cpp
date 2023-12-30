#include <bits/stdc++.h>
using namespace std;

long long partialSum(long long m , long long n){
    m = m % 60 ;
    n = n % 60 ;
    long long sum = 0 ;
    
    if(n < m){
        n += 60 ;
    }

    long long previous = 0 ;
    long long current = 1 ;
    long long temp = 0 ;

    for(long long i = 0; i <= n;i++){
        if(i >= m){
            sum += previous ;
        }

        previous = current ;
        current = current + temp ;
        temp = previous ;
    }

    return (sum % 10) ;
}

int main(){
    long long m = 3 , n = 7 ;
    // cin >> m >> n ;
    cout << partialSum(m,n) ;
    return 0;
}