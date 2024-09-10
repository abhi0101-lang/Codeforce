#include<bits/stdc++.h>
using namespace std;

void pattern1(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void pattern2(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void pattern3(int n){
    int num=1;
    for(int i=0; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<j;
            num++;
        }
        cout<<endl;
    }
}

int main(){
   int n;
    cout<<"Enter the Total Term:- ";
    cin>>n;
    pattern3(n) ;
}