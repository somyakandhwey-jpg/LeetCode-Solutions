class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        //brute force t: nlogn+n s:n
        set<int> st;
        st.insert(nums.begin(), nums.end());
        int index=0;
        for(auto it:st){
            nums[index] = it; 
            index++;
        }
        return st.size();
    }
};