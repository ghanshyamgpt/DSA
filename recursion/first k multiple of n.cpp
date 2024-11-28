
// Online IDE - Code Editor, Compiler, Interpreter

#include<iostream>

using namespace std;
void f(int k, int n){
    if(n==0){
      return ;
    }
  f(k,n-1);
  int result=(k*n);
  cout<<result<<" ";
    
}

int main()
{   f(12,5);
   
    return 0;
}