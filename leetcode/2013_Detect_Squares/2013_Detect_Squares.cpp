class DetectSquares {
public:
    map<int,vector<pair<int,int>>>sum,diff;
    int arr[1002][1002];
    DetectSquares() {
        sum.clear();
        diff.clear();
        memset(arr, 0, sizeof(arr[0][0]) * 1002 * 1002);
    }
    
    void add(vector<int> point) {
        sum[point[0]+point[1]].push_back({point[0],point[1]});
        diff[point[0]-point[1]].push_back({point[0],point[1]});
        arr[point[0]][point[1]]++;
    }
    
    int count(vector<int> point) {
        int x=point[0];
        int y=point[1];
        int ans=0;
        for(auto temp:sum[x+y]){
            if(temp.first==x&&temp.second==y)
                continue;
           if(abs(temp.first-x)==abs(temp.second-y))
                ans+= (arr[temp.first][y]*arr[x][temp.second]);
        }
        for(auto temp:diff[x-y]){
            if(temp.first==x&&temp.second==y)
                continue;
            if(abs(temp.first-x)==abs(temp.second-y))
                ans+= (arr[temp.first][y]*arr[x][temp.second]);
        }
        return ans;
    }
};
