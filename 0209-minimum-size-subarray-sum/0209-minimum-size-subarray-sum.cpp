class Solution {
public:
    int minSubArrayLen(int target, vector<int>& arr) {
        vector<int>result;
        int n=arr.size();
        int sum=0,left=0;
        int minlength=INT_MAX;
        for(int i=0;i<n;i++){
            sum=sum+arr[i];
            while(sum>=target){
            minlength=min(minlength,i-left+1);
            sum-=arr[left];
            left++;
            }
        }
        return (minlength==INT_MAX)?0:minlength;
    }
};