class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int cnt = 0;
        
        if(nums.size()==0) return 0;
        for(auto it=nums.begin(); it != nums.end()-1; it++){
            if(*it == *(it+1)){
                nums.erase(it);
                it--;
            }
        }
        
        return nums.size();
    }
};
