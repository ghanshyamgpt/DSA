class Solution {
public:
    int majorityElement(vector<int>& nums) {
           int n=nums.size();
           int frq=0, ans=0;
           for(int i=0;i<n;i++){
            if(frq==0){
                ans=nums[i];
            }
            if(ans==nums[i]){
                frq++;
            }
            else{
                frq--;
            }
           }
           return ans;
    }
};
// It's just a function of it