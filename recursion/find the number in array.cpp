
// Online IDE - Code Editor, Compiler, Interpreter

#include<iostream>

using namespace std;
bool f(int *arr, int n, int i, int x ){
    if(i==n){
        return false;
    }
    return (arr[i]==x)||f(arr,n,i+1,x);
}

int main()
{
    int arr[]={5,6,10,-9,5,88,74,94,55,58};
    int n=10;
    int x=10;
    bool result=f(arr,n,0,x);
    if(result) cout<<"yes";
    else cout<<"no";
    return 0;
}