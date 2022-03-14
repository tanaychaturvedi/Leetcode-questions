class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> s;
        vector<int> vec;
        for(int j=0;j<nums1.size();j++){
             for(int i=nums2.size()-1;i>=0;i--){
             if(nums2[i] > nums1[j]){
                s.push(nums2[i]);
            }
            else if(nums2[i] == nums1[j] && s.size()==0){
                vec.push_back(-1);
                break;
                
            }
            else if(nums2[i] == nums1[j] && s.size() != 0){
                vec.push_back(s.top());
                while(s.size() != 0){
                    s.pop();
                }
                break;
            }
        }
        }
        return vec;
       
    }
};