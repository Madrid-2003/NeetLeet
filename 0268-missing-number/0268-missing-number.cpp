class Solution {
public:
    int missingNumber(vector<int>& nums) {
       unordered_set<int>freq;
int n=nums.size();
 
for(int i=0;i<n;i++){
    freq.insert(nums[i]);
}

for(int i=0;i<=n;i++){
if(freq.count(i)==0){
    return i;
}
}
    

return -1;

    }
};