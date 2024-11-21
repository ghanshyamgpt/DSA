
// Online IDE - Code Editor, Compiler, Interpreter

#include<iostream>

using namespace std;
void f(int *arr, int idx, int n){
    //base case
    if(idx==n) return;
    // self work
    cout<<arr[idx]<<" ";
    //assumption
    f(arr,idx+1,n);
}

int main()
{   
    int n=5;
    int arr[]={6,0,5,8,4};
    f(arr,0,n);
    
    return 0;
}