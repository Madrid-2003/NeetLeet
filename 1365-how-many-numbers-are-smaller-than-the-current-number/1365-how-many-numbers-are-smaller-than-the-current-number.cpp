class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
    
        int n=nums.size();
    vector<int>sorted=nums;
    sort(sorted.begin(),sorted.end());

unordered_map<int,int>small;

for(int i=0;i<sorted.size();i++){
    if(small.find(sorted[i])==small.end()){
    small[sorted[i]]=i;

    }
}

vector<int>ans;
for(int i:nums){
ans.push_back(small[i]);
}

    
    
    
    return ans;
    
    }
    };