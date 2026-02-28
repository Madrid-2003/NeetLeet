// class Solution {
// public:
//     vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
//         int n = arr.size();
//         sort(begin(arr), end(arr));
//         int minD= INT_MAX;
//         for(int i=1; i<n;++i){
//             minD= min(minD, arr[i]- arr[i-1]);

//         }
//         vector<vector<int>> result;
//         for(int i=1; i<n;++i){
//             int diff = arr[i]-
//             ?"  arr[i-1];

//             if(diff==minD){
//                 result.push_back({arr[i-1], arr[i]});

//             }
//         }
//         return result;
//     }
// };


class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
     int n=arr.size();
     sort(arr.begin(),arr.end());
     vector<vector<int>>result;
     int mindiff=INT_MAX;
     for(int i=1;i<arr.size();i++){
        mindiff=min(mindiff,arr[i]-arr[i-1]);

        
     }  
     for(int i=1;i<arr.size();i++){
        if(arr[i]-arr[i-1]==mindiff){
            result.push_back({arr[i-1],arr[i]});
        }
     } 
     return result;
    }
};