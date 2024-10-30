
// Online IDE - Code Editor, Compiler, Interpreter

#include<iostream>
#include<vector>

using namespace std;
vector<int> pairsum(vector<int> v, int target){
    vector<int> ans;
    int n=v.size();
    int i=0,j=n-1;
    while(i<j){
         int ps=v[i]+v[j];
        if(ps>target){  //ps= pairsum
            j--;
        }
        else if(ps<target){
            i++;
        }
        else{
            ans.push_back(i);
            ans.push_back(j);
            return ans;
            
        }
    }
    // alternate approach
    // for(int i=0;i<n;i++){
    //     for(int j=i+1;j<n;j++){
    //         if(v[i]+v[j]==target){
    //             ans.push_back(i);
    //             ans.push_back();
    //             return ans;
    //         }
    //     }
    // }
    return ans;
    
}

int main()
{
    vector<int> v={2,7,9,13,15};
    int target=11;
    vector<int> ans= pairsum(v,target);
    cout<<ans[0]<<","<<ans[1]<<endl;
    return 0;
    
}
