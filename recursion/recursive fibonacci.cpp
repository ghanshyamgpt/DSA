
// Online IDE - Code Editor, Compiler, Interpreter

#include<iostream>

using namespace std;
int f(int n){
    if(n==0 or n==1) return n;
    
     return f(n-1)+f(n-2);
    
}

int main()
{   
    int result=f(3);
    cout<<result<<endl;
   
    return 0;
}