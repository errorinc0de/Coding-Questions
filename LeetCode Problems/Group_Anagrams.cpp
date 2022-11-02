class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
       vector<vector<string>>ans;
        
       unordered_map<string, vector<string>>mp;
        
         /*
                Consider example 1 : strs = ["eat","tea","tan","ate","nat","bat"]
                
                After the below opeartion of for loop map will contain
                
                aet -- eat, tea, ate
                ant -- tan, nat
                abt -- bat
        */
        
        for(int i = 0 ; i < strs.size() ; i++)
        {
            string s = strs[i];
            sort(strs[i].begin(),strs[i].end());
            mp[strs[i]].push_back(s);
        }
        
        //now simply put the elements  of second column of map in ans
        
        for(auto i : mp)
        {
            ans.push_back(i.second);
        }

        return ans;
        
    }
};
