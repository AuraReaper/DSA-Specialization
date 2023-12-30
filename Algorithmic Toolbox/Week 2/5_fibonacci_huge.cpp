// in this program we compute nth fibonacci number modulo m using the pisano sequence 
// pisano sequence algo always starts with o and 1 .
// it is a very important question
// other important details are mentioned in the algorithms notebook.
// this is learn and understand concept problem.

#include <bits/stdc++.h>
using namespace std;

long long huge_fibo(long long n, long long m){
    if(n <= 1){
        return n ;
    }

    long long temp = 0 ;
    long long previous = 0 ;
    long long current = 1 ;

    vector<long long> pisano ;

    pisano.push_back(0) ;
    pisano.push_back(1) ;

    while (true){
        temp = previous ;
        previous = current ;
        current = (temp + current) % m ;
        if(current == 1 && previous == 0){
            break;
        } else {
            pisano.push_back(current) ;
        }
    }
        pisano.pop_back() ;
        long long index = n % pisano.size() ;
        return pisano.at(index) ;
}

int main(){
    long long n , m ;
    cin >> n >> m ;
    cout << huge_fibo(n,m) ;
    return 0;
}