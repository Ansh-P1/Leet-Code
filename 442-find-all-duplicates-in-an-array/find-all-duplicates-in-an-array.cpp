class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
         unordered_set<int> st, dup; ///create two unordered maps one to store the singles and record them and other to check for duplicates 
        for (int i : nums){
            if (st.count(i)) dup.insert(i); ///count sees if an int 1 already exists in st or no, insert inserts it into the unordered set
            else st.insert(i);
        }
        vector<int> a; 
        for(int i :dup){
            a.push_back(i);
        }
        return a;
    }
};