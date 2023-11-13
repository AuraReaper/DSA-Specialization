#include <bits/stdc++.h>
using namespace std ;

long long maxPro(const vector<int>& num){
    int firstMaxIndex = -1 ;
    int secondMaxIndex = -1 ;
    int n = num.size() ;

    for(int i = 0;i < n; i++){
        if((firstMaxIndex == -1) || (num[i] > num[firstMaxIndex])){
            firstMaxIndex = i ;
        }
    }

    for(int j = 0; j < n ; j++){
        if(j != firstMaxIndex && ((secondMaxIndex == -1) || (num[j] > num[secondMaxIndex]))){
            secondMaxIndex = j ;
        }
    }
    return ((long long)(num[firstMaxIndex])) * num[secondMaxIndex] ;
}

int main()
{
    int n;
    cin >> n;
    vector<int> num(n) ;

    for(int i = 0 ; i < n ; i++){
        cin >> num[i] ;
    }

    cout << maxPro(num) << endl ;
    return 0 ;
}