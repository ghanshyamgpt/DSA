
// Online IDE - Code Editor, Compiler, Interpreter

#include<iostream>
#include<vector>

using namespace std;
int matrixSum(vector<vector<int>> &v, int l1, int r1,int l2, int r2){
    int sum=0;
    // for(int i=l1;i<=l2;i++){
    //     for(int j=r1;j<=r2;j++){         //brute force
    //         sum+=v[i][j];
    //     }}
    for(int i=0;i<v.size();i++){
        for(int j=1;j<v[0].size();j++){
            v[i][j]+=v[i][j-1];
        }
        
    }
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[0].size();j++){
            cout<<v[i][j]<<" ";
        }cout<<endl;
    }
    for(int i=l1;i<=l2;i++){
        if(r1!=0){
        sum+=v[i][r2]-v[i][r1-1];  
        }
        else{
            //v[i][r1-1]=0
             sum+=v[i][r2]  ;
        }
        
    }
  
    return sum;
}

int main()
{  int n,m;
    cin>>n>>m;
    cout<<"Enter the element of matrix"<<endl;
    vector<vector<int>> v(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>v[i][j];
        }
    }
    cout<<"Enter the index"<<endl;
    int l1,l2,r1,r2;
    cin>>l1>>r1>>l2>>r2;
    // you use it for show original matrix  for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         cout<<v[i][j]<<" ";
    //     }cout<<endl;
    // }
    int sum= matrixSum(v,l1,r1,l2,r2);
    cout<<sum<<endl;
    return 0;
}
