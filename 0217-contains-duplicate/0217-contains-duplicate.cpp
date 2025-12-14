class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
      unordered_set<int> seen;
      for(int i:nums){
        if(seen.count(i))
       { return true;}
seen.insert(i);
      }
      return false;  
    }
};




// class Solution {
// public:
//     bool containsDuplicate(vector<int>& nums) {
//      for (int i=0;i<nums.size();i++){
//     for(int j=i+1;j<nums.size();j++){
//     if(nums[i]==nums[j]){
//     return true;}

//     }
//      } 
//      return false;
//     }
// };