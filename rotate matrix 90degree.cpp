
// Online IDE - Code Editor, Compiler, Interpreter

#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
void rotateArray(vector<vector<int>> &v){
    
    //transpose
    int n=v.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++)
        {
            swap(v[i][j],v[j][i]);
        }
    }
    //reverse row

    for(int i=0;i<n;i++){
        reverse(v[i].begin(),v[i].end());
    }
    return;
}

int main()
{
    
    int n;
    cin>>n;
    vector<vector<int>> v(n,vector<int> (n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>v[i][j];
        }
    }
    rotateArray(v);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
