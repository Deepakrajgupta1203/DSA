// Brute force 
class Solution {
public:
    int singleNumber(vector<int>& nums) {
     
         for(int i=0;i<nums.size();i++){
             int num=nums[i];
             int count=0;

             for(int j=0;j<nums.size();j++){
                  if(nums[j]==num){
                    count++;  
                  }
             }
             if(count==1){
                return nums[i];
             }

         }

         return -1;
    }
};


// Better approch -> mapping


class Solution {
public:
    int singleNumber(vector<int>& nums) {
       
       unordered_map<int,int>umap;

       for(int i=0;i<nums.size();i++){
          umap[nums[i]]++;
       }

       for(auto &pair:umap){
           if(pair.second==1){
            return pair.first;
           }
       }

       return -1;
    }
};


//Optimal


class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        int ans=0;

        for(int i=0;i<nums.size();i++){
            ans=ans^nums[i];

        }

        return ans;
       
    }
};


