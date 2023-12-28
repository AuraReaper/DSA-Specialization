#include <bits/stdc++.h>
using namespace std;

long long int huge_fibo(long long int  n,long long int  m){
    if(n == 0 || n == 1){
        return n ;
    }
    
    long long int a = 0 , b = 1 , c ;
    for(long long int i = 2; i <= n;i++){
        c = (a % m) + (b % m) ;
        a = b ;
        b = c ;
    }
    return (c % m) ;
}

int main(){
    long long int n , m ;
    cin >> n >> m ;
    cout << huge_fibo(n,m) ; 
    return 0;
}