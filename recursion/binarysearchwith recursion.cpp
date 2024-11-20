
// Online IDE - Code Editor, Compiler, Interpreter

#include<iostream>
#include<vector>

using namespace std;
int bs(vector<int> v, int t, int st, int end){

    while(st<=end){
        int mid=(st+end)/2;
        if(t>v[mid]){
            return bs(v,t,mid+1,end);
        }
        else if(t<v[mid]){
          return bs(v,t,st,mid-1);
        }
        else{
            return mid;
        }
       
    }
    return -1;
}

int main()
{
    vector<int> v ={-1,0,5,6,9,10,12};
    int t=51;
   
     vector<int> v1 ={-1,0,5,6,9,10,12,19};
     int t1=12;
     cout<<bs(v1,t1,0,v.size()-1)<<endl; 
    return 0;
}
