// this program also follow a particular logic and algorothim.
// important question
/* this program follows the concept that the last digit of sum of fibonacci series
    occur at the en of the 60th number 
*/
// other imporetant details are mentioneed in the algorithms notebook.
// this is learn and understand concept problem.

#include <bits/stdc++.h>
using namespace std;

long long last_digit(long long n){
    n = (n + 2) % 60 ;
    long long fibo[n] ;
    fibo[0] = 0 ;
    fibo[1] = 1 ;
    for(long long i = 2;i <= n;i++){
        fibo[i] = ((fibo[i-1] % 10) + (fibo[i-2] % 10)) % 10 ;
    }
    if(fibo[n] == 0){
        return 9 ;
    }
    return((fibo[n] % 10) - 1) ;
}

int main(){
    long long n ;
    cin >> n ;
    cout << last_digit(n) ;
    return 0;
}