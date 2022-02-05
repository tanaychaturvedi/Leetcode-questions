class Solution {
public:
    int fun(vector<int> &v,int tst, int dass, int mass){
        int c = 0, n = v.size();
        
        if(v[0]  != tst) c += dass;
        c += mass;
        for(int i=1;i<n;i++){
            if(v[i] != v[i-1]) c += dass;
            c += mass;
        }

        if(v[0] == 0){
            v.erase(v.begin());
            return c=min(c,fun(v,tst,dass,mass));
        }
        
        return c;
    }

    int minCostSetTime(int startAt, int moveCost, int pushCost, int given) {
        
        int mincost = 10000000;
        for(int i=0;i <=9; i++){
            for(int j=0;j <= 9; j++){
                // in this we have to didfs

                int times = i*10 + j;
                for(int k = 0; k <= 9;k++){
                    for(int l = 0; l <= 9; l ++){
                        int second =  k*10 + l;
                        if(times*60 + second == given){
                            vector<int> v{i,j,k,l};

                            mincost = min(mincost, fun(v, startAt, moveCost, pushCost));
                        }
                    }
                }
            }
        }

        return mincost;
    }
};