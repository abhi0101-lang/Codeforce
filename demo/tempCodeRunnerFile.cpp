#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=4;
    //cout<<"Enter the Total Term:- ";
    //cin>>n;
    for(int i=0; i<n; i++){
        char ch="A";
        for(int j=0; j<n; j++){
            cout<<ch;
            ch=ch+1;
        }