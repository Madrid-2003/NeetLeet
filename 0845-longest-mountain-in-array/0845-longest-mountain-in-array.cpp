class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int i=1;
        int ans=0;
        int n=arr.size();
        while(i<n-1){
if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
    int l=i,r=i;

    while(l>0&&arr[l]>arr[l-1]){
l--;
    }

    while(r<n-1 && arr[r]>arr[r+1]){
        r++;
    }

ans=max(ans,r-l+1);
i=r;
}
else{
    i++;
}
        }
        return ans;
    }
};