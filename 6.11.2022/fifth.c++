class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        set<int> v;

        for(int i=0;i<nums.size();i++){
            v.insert(nums[i]);
            int reverse=0;
            while(nums[i]!=0){
                reverse=reverse*10+(nums[i]%10);
                nums[i]=nums[i]/10;

            }
            v.insert(reverse);
        }
        return v.size();
    }
};
