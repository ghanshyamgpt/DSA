#include<iostream>
#include<vector>
using namespace std;
    int maxno1(vector<vector<int>> &v){
        int max1=INT_MIN;// maximum one number
    
        int maxr=-1;    //maximum one row
        int column=v[0].size();
        for(int i=0;i<v.size();i++){
            for(int j=0;j<v[i].size();j++){
                if(v[i][j]==1){
                    int no1= column-j;// important
                    if(no1>max1){
                        max1=no1;
                        maxr=i;
                        
                    }break;
                }
            }
        }
        return maxr;
       
        
        
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
    int res = maxno1(v);
    cout<<res<<endl;
    return 0;

}