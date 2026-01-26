class Solution {
public:
    vector<int> avoidFlood(vector<int>& rains) {
        int n=rains.size();
        vector<int>ans(n,-1);
        unordered_map<int,int>lastrain;
        set<int>drydays;
        for(int i=0;i<rains.size();i++){
            if(rains[i]==0){
drydays.insert(i);
ans[i]=1;

        }
            else{
int lake=rains[i];
if(lastrain.count(lake)){
int prevday=lastrain[lake];

auto it=drydays.lower_bound(prevday);
if(it==drydays.end()){
    return{};
}
ans[*it]=lake;
drydays.erase(it);

}

lastrain[lake]=i;
ans[i]=-1;
                    }
    }
    return ans;
}};

