#include <bits/stdc++.h>
using namespace std ;

long long int gcd_eucliden(int a , int b){
  if(b == 0){
    return a ;
  }
  else{
    return gcd_eucliden(b,a%b) ;
  }
}

long long int  lcm(int a , int b){
  long long int ans ;
  if(a >= b){
    ans = (a / gcd_eucliden(a,b)) * b ;
  }
  else{
    ans = (b / gcd_eucliden(a,b)) * a ;
  }
  return ans ;
} 

int main() {
  int a , b ;
  cin >> a >> b ;
  cout << lcm(a,b) ;
  return 0;
}
