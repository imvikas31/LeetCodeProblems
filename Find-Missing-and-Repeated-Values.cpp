class Solution {
public:


    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int>ans;
        unordered_set<int>map;
        int n = grid.size();

        int a = 0;
        int expSum = 0;
        int actSum = 0;

        for(int i = 0; i<n; i++){
            for(int j = 0; j<n; j++){

                actSum += grid[i][j];


                if(map.find(grid[i][j]) != map.end()){
                    a = grid[i][j];
                    ans.push_back(grid[i][j]);
                }
                map.insert(grid[i][j]);
            }
        }

        expSum = (n*n)*(n*n+1)/2;
        int b = expSum+a-actSum;
        ans.push_back(b);

        return ans;
        
    }
}; 