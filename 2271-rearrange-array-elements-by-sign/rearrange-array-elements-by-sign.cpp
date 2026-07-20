class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> p;
        vector<int> n;
        for (int i=0; i<(nums.size()); i++){
            if (nums[i]>0){
                p.push_back(nums[i]);
            }
            else n.push_back(nums[i]);
        }
        vector<int> f(nums.size());
        for (int i=0; i<(nums.size())/2; i++){
            f[i*2] = p[i];
            f[i*2+1] = n[i];
        }
        return f;
    }
};