#include<iostream>
#include <vector>
using namespace std;

int main(){
    int n=7;
    int arrVal[7]={3,-4,5,4,-1,7,-8};
    int maxSum = INT8_MIN;
    int currSum=0;

    for(int st=0; st<n; st++){
        currSum+=arrVal[7];
        maxSum=max(currSum,maxSum);
        if(currSum<0){
            currSum=0;
        }
    }
    cout<<maxSum;
}