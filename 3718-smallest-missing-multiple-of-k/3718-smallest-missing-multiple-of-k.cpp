class Solution { 
public: 
    int missingMultiple(vector<int>& nums, int k) { 
        int current_multiple = k; 
        
        while(true) { 
            bool found = false; 
            
            for(int i = 0; i < nums.size(); i++) { 
                if(nums[i] == current_multiple) { 
                    found = true; 
                    break; 
                } 
            }
            
            if(!found) { 
                return current_multiple; 
            } 
            
            current_multiple += k;    
        }
    }
};