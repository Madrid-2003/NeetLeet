class Solution {
public:
    int trap(vector<int>& height) {
        int left =0;int right=height.size()-1;
        int leftmost=0;int rightmost=0;
        int water=0;
while(left<right){
    if(height[left]<height[right]){
        leftmost=max(leftmost,height[left]);
        water=water+leftmost-height[left];
left++;
    }

    else{
        rightmost=max(rightmost,height[right]);
        water=water+rightmost-height[right];
        right--;
    }
}
return water;

    }
};