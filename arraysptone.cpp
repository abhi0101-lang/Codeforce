#include<bits/stdc++.h>
using namespace std;


//void maxArr(int arr[], int x){
   // int nums[]={25 , 8 , 63 ,17 ,-5 ,15 ,1};
    //x=size of array
  //  int x=7;

 //   int smallest = INT_MAX;

 //   for( int i=0; i<x; i++){
 //       if(nums[i]<smallest){
   //         smallest=nums[i];
 //       }
 //   }
//}



int linSearch(int arr[], int sz, int target){
    for(int i=0; i<sz ;i++){
        if(arr[i]==target)
        return i;
    }
    return -1;
}

void reverseArr(int arr[], int sz){
    int start=0 , end=sz-1;
    while(start<end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main(){
    int arr[]={ 7, 8 , 9 , 4 ,6 , 1000 , 57 , 1 };
    int sz=8;
    int target=99;

   reverseArr(arr, sz);

   for(int i=0; i<sz; i++){
    cout<<arr[i]<<" ";
   }
   cout<<endl;
   return 0;
}