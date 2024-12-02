
// Online IDE - Code Editor, Compiler, Interpreter

#include<iostream>

using namespace std;
int pow_recursive(int p, int q){
     if(q==0) return 1;
     if(q%2==0){
         int result=pow_recursive(p,q/2);
         return result*result;
     }
     else{
         int result=pow_recursive(p,(q-1)/2);
         return p*result*result;
     }
}
    int Armstong(int n, int count_zeroes){
        if(n==0) return 0;
        return pow_recursive(n%10,count_zeroes)+Armstong(n/10,count_zeroes);
    }
int main()
{   int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    int count_zeroes=0;
    int d=n;
    while(d>0){
      d=d/10;
      count_zeroes++;
    }
    int result=Armstong(n,count_zeroes);
    if(result==n){
        cout<<"YES";
        
    }
    else{
        cout<<"NO";
    }
    return 0;
}