class Solution {
public:
    int majorityElement(vector<int>& nums){
        int count=0;
        int n = nums.size();
        int d = n/2;
        sort(nums.begin(), nums.end()); 
        int j=0;
        for(int i=0; i<n; i++){
            if(nums[i] == nums[j]){
                count++;
                if(count > d){
                    return nums[j];
                    }
            }
            else{
                j=i;
                count = 1;
            }
        }
        return -1;
    }
};