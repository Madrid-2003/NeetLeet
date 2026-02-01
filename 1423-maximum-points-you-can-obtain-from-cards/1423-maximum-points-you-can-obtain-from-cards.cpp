class Solution {
public:
    int maxScore(vector<int>& nums, int k) {
       int n=nums.size();
        int leftsum=0;
        int rightsum=0;
        int sum=0;
        int right=nums.size()-1;int left=0;
        for(int i=0;i<k;i++){
            leftsum=leftsum+nums[i];
        }
        sum=leftsum;
        for(int i=k-1;i>=0;i--){
            leftsum=leftsum-nums[i];
            rightsum=rightsum+nums[right];
            right--;
            sum=max(sum,leftsum+rightsum);

        }
        return sum;
  }
};