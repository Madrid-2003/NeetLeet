class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
int n=points.size();
    int time=0;

for(int i=1;i<points.size();i++){
    int dx=abs(points[i][0]-points[i-1][0]);//vector ta 2d array er moto
    int dy=abs(points[i][1]-points[i-1][1]);
     time=time+max(dx,dy);
}
return time;
    }

};