#include <iostream>
using namespace std ;

int gcd_naive(int a, int b) {
  int current_gcd = 1;
  for (int d = 2; d <= a && d <= b; d++) {
    if (a % d == 0 && b % d == 0) {
      if (d > current_gcd) {
        current_gcd = d;
      }
    }
  }
  return current_gcd;
}

int gcd_eucliden(int a ,int b){
  if(b == 0){
    return a ;
  }
  else{
    int ca = a % b ;
    return gcd_eucliden(b,ca) ;
  }
}

int main() {
  int a , b ;
  std::cin >> a >> b ;
  cout << gcd_eucliden(a,b) << endl ;
  return 0;
}
