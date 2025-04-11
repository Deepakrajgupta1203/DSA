

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {


        unordered_map<int,int> umap;

        for(int i=0;i<nums.size();i++){

            int current=nums[i];
            int req=target-current;

            if(umap.find(req)!=umap.end()){
                return {i,umap[req]};
            }
            umap[current]=i;
        } 
            return {-1,-1};       
    }
};
