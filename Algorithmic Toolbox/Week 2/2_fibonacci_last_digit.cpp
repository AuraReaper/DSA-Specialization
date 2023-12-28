#include <bits/stdc++.h>
using namespace std;

long long int fibonacci_fast(int n){
    if(n == 0 || n == 1){
        return n ;
    }
    long long int arr[n] ;
    arr[0] = 0 ;
    arr[1] = 1 ;
    for(int i = 2;i <= n;i++){
        arr[i] = (arr[i-1] + arr[i-2]) % 10 ;
    }
    return arr[n] ;
 }

// long long int lastDigit(int num){
//     long long int fibo = fibonacci_fast(num) ;
//     return (fibo % 10) ;
// }

int main(){
    int num ;
    cin >> num ;
    cout << fibonacci_fast(num) ;
    return 0;
}