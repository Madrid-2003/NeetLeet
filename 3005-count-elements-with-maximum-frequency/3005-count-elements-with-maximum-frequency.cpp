class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        // map<int, int> mpp;
        // int n=  nums.size();
        // for(int i=0; i<n;++i){
        //     mpp[nums[i]]++;
        // }
        // bool bullu= false;
        // for(int i=0; i<n;++i){
        //     if(mpp[nums[i]]==1) bullu = true;
        //     else bullu =false;
        // }
        // if(bullu) return n;
        // else return mpp[1]+mpp[2];
        unordered_map<int, int> mpp;
        int ans =0;
        for(int x: nums){
            mpp[x]++;
        }
        int maxFreq = INT_MIN;
        for(auto it:mpp){
            maxFreq =  max (maxFreq, it.second);
        }
        for(auto it : mpp){
            if(it.second == maxFreq) ans+= it.second;

        }
        return ans;
    }
};