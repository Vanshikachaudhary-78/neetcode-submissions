class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mpp;
        int n = nums.size();
        for(int i=0;i<n;i++){
            mpp[nums[i]]=i;
        }
        for(int i=0;i<n;i++){
            int complement = target- nums[i];
            if(mpp.find(complement)!=mpp.end()&&mpp[complement]!=i){
                return { i,mpp[complement]};
            }
        }
        return {};
        
    }
};
