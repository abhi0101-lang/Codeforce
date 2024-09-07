#include<bits/stdc++.h>
using namespace std ;

int main(){
    int n ;
    int sum =0  ;
    cout << "Enter Number" << endl ;
    cin >> n ;

    for(int i=0 ;i<n ;i++){
        if(i%210 ==0 )sum += i ;
    }
    cout << sum << endl ;
}