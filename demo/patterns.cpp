#include<bits/stdc++.h>
using namespace std;

void pattern1(int n){
    int num=1;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<" "<<num;
            num++;
        }
        cout<<endl;
    }
}

void pattern2(int n){
    for(int i=0; i<n; i++){
        char ch='A';
        for(int j=0; j<n; j++){
            cout<<" "<<ch;
             ch++;
        }
        cout<<endl;
    }
}

void pattern3(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void pattern4(int n){
    int num=1;
    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            cout<<num;
            num++;
        }
        cout<<endl;
    }
}

void pattern5(int n){
    int num=1;
    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            cout<<i+1;
        }
        cout<<endl;
    }
}

void pattern6(int n){
    int num=1;
    for(int i=0; i<n; i++){
        for(int j=1; j<=i+1; j++){
            cout<<j;
        }
        cout<<endl;
    }
}

void pattern7(int n){
    int num=1;
    for(int i=0; i<n; i++){
        for(int j=i+1; j>0; j--){
            cout<<j;
        }
        cout<<endl;
    }
}
//FLOYD'S Triangle
void pattern8(int n){
    int num=1;
    for(int i=0; i<n; i++){
        for(int j=1; j<=i+1; j++){
            cout<<num;
            num++;
        }
        cout<<endl;
    }
}

void pattern9(int n){
    int num=1;
    for(int i=0; i<n; i++){
        //space
        for(int j=0; j<i; j++){
            cout<<" ";
        }
       //nums
        for(int j=0; j<n-1; j++){
            cout<<(i+1);
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter the Total Term:- ";
    cin>>n;
    pattern9(n) ;
}