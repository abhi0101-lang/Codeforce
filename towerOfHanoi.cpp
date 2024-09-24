#include<iostream>
using namespace std;

void towerOfHanoi(int n, char source, char target, char helper , int &steps){
    if(n==1){
        cout<<"Move disk 1 from "<<source<<" to "<<target<<endl;
        steps++ ; 
        return ;
    }

    towerOfHanoi(n-1, source, helper , target, steps);
    cout<<"Move disk from "<<n<<" from "<<source<<" to "<<target<<endl;
    steps++ ; 
    towerOfHanoi(n-1,helper , target, source, steps);
}

int main(){
    int n;
    char source = 'A',target = 'B',helper = 'C';
    cout<<"Enter the Numbers of Disk:- ";
    cin>>n;
    int steps = 0 ; 
    towerOfHanoi(n,source,target,helper,steps);
    cout <<"Total Steps Taken : " <<steps << endl ;
    return 0;
}