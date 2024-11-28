
// Online IDE - Code Editor, Compiler, Interpreter

#include<iostream>

using namespace std;
void f(int n){
    if(n<1){
      return ;
    }
  f(n-1);
  cout<<n<<" ";
    
}

int main()
{   f(99);
   
    return 0;
}
