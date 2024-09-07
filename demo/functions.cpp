#include<bits/stdc++.h>
using namespace std;

int fact(int n){
    int fact=1;
    for(int i=1 ;i<=n ;i++){
        fact*=i;
    }
    return fact;
}

int nCr(int n, int r){
    int factorial_n=fact(n);
    int factorial_r=fact(r);
    int factorial_nmr=fact(n-r);
    return factorial_n/(factorial_r*factorial_nmr);
}

int main(){
    cout<<"Enter the value of N and R";
    //ṇcin>>
    //cin>>r;
    nCr(int n, int r)
    //int num;
    //int lastdig;
    //int digitsum=0;
    //cout<<"Enter the Digit:- ";
    //cin>>num;
     //while(num>0){
       // lastdig=num%10;
        //num/=10;
        //digitsum+=lastdig;
    //}
    //cout<<"Sum of Digits = "<<digitsum;
}