// class Solution {
// public:
//     bool containsNearbyDuplicate(vector<int>& nums, int k) {
//         for(int i=0; i<nums.size();++i){
//             for(int j=i+1; j<nums.size();++j){
//                 if(nums[i]==nums[j]&& abs(i-j)<=k) return true;
//             }
//         }
//         return false;
//     }
// };
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
   int n=nums.size();
   unordered_map<int,int>map;
   for(int i=0;i<nums.size();i++){
   if(map.count(nums[i])){
if(abs(i-map[nums[i]])<=k){
    return true;
}
 }
   map[nums[i]]=i;
   }
   return false;
    }
};