class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        set<int> sort;
        
  
        for(int i=0;i<nums.size();i++){
            sort.insert(nums[i]);
        }
        int j=0;
        for(auto itr : sort){
            
            nums[j]=itr;
            j++;

        }
        for(;j<nums.size();j++){
            nums[j]=-1;
        }
        for (auto it : nums) {
            cout << it << ' ';
        }
        
        return sort.size();

    }
};
