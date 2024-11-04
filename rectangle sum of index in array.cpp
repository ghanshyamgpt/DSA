
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
    //prefix sum array column wise
    for(int i=1;i<v.size();i++){
        for(int j=0;j<v[0].size();j++){
            v[i][j]+=v[i-1][j];
        }
    }
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[0].size();j++){
            cout<<v[i][j]<<" ";
        }cout<<endl;
    }
   int topSum=0,leftSum=0,topLeft=0;
  if(l1!=0) topSum=v[l1-1][r2];
  if(r1!=0) leftSum=v[l2][r1-1];
  if(l1!=0 && r1!=0) topLeft=v[l1-1][r1-1];
  sum=v[l2][r2]-topSum-leftSum+topLeft;
  
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
