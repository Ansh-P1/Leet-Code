class Solution {
public:
    void sortColors(vector<int>& nums) {
        int c=0;
        int c1 = 0;
        int c2 =0;
        int n = nums.size();
        for (int i =0; i<n; i++){
            if (nums[i] == 0) c++;
            else if (nums[i] ==1) c1++;
            else if (nums[i] ==2) c2++;
        }
        for (int i=0; i<c; i++) nums[i] = 0;
        for (int i=c; i<c+c1; i++) nums[i] = 1;
        for (int i=c+c1; i<n; i++) nums[i] = 2;
    }
};