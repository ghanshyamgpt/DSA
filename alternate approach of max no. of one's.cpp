#include<iostream>
#include<vector>
using namespace std;
    int leftMostOne(vector<vector<int>> &v){
        int leftMost=-1;
        int row=-1;
        int j=v[0].size()-1;
        // find leftmost one in 0th row
        while(j>=0 && v[0][j]==1){
            leftMost=j;
            row=0;
            j--;
        }
        for(int i=0;i<v.size();i++){
            while( j>=0 && v[i][j]==1){
                leftMost=j;
                row=i;
                j--;
            }
            
            
        }
       
      return row;  
        
    }
int main(){
    int n,m;
    cout<<"Enter row and column"<<endl;

    cin>>n>>m;
    cout<<"Enter the element of matrix"<<endl;
    vector<vector<int>> v(n,vector<int> (m));
    for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++){
        cin>>v[i][j];
    }}
    int res = leftMostOne(v);
    cout<<res<<endl;
    return 0;

}