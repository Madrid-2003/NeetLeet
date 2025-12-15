class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
        unordered_set<int>freq;
        for(int i:nums){
            freq.insert(i);
        }
vector<int>arr;
for(int i=1;i<=n;i++){
if(freq.count(i)==0){
    arr.push_back(i);
}
}
return arr;

    }
};