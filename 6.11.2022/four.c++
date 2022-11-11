class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum=0;
        int c =nums.size();
        int total=((c+1)*c)/2;
        for(int i=0;i<nums.size();i++){
            sum=sum+nums[i];
        }
        int miss=total-sum;
        return miss ;
    }
};
