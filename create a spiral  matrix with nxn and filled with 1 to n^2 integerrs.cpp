#include<iostream>
#include<vector>

using namespace std;
vector<vector<int>> spiral(int n){
    vector<vector<int>> v(n,vector<int> (n));
    int left=0;
    int top=0;
    int right=n-1;
    int bottom=n-1;
    int direction=0;
    int value=1;
    while(left<=right && top<=bottom){
        if(direction==0){
            for(int col=left;col<=right;col++){
                v[top][col]=value++;
            }top++;
        }
       else if(direction==1){
            for(int row=top;row<=bottom;row++){
                v[row][right]=value++;
            }
            right--;
        }
       else if(direction==2){
            for(int col=right;col>=left;col--){
               v[bottom][col]=value++;
            }bottom--;
        }
        else if(direction==3){
            for(int row=bottom;row>=top;row--){
          v[row][left]=value++;}
        left++;}
        direction=(direction+1)%4;
    }
    return v;
}

int main()
{   int n;
cin>>n;
    vector<vector<int>>v(n,vector<int>(n));
    
    v=spiral(n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<v[i][j]<<"  ";
        }cout<<endl;
    }
    return 0;
}