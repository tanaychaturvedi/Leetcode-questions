class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
         int s1=nums1.size();
        int s2=nums2.size();
        int tele=s1+s2;
        int median=0;
        if(tele%2!=0){
            median=(tele+1)/2;//position of median
        }
        else
            median=(tele+2)/2;//For (a+b)/2 here we are getting the position of b
        int i1=0,i2=0;
        vector<int> val;
        int k=0;
        //Merging the  two vector only to the point we need in order to find the median
        while(i1<s1 && i2<s2 && k<=median){
            if(nums1[i1]<=nums2[i2])
                val.push_back(nums1[i1++]);
            else
                val.push_back(nums2[i2++]);
            k++;
        }//merging remaning element of 1st array till the point needed
        while(i1<s1 && k<=median){
            val.push_back(nums1[i1++]);
            k++;
        }//merging remaning element of 2nd array till the point needed
        while(i2<s2 && k<=median){
            val.push_back(nums2[i2++]);
            k++;
        }
        if(tele%2!=0)//median for odd counts
            return(val[median-1]);
        else{//median in case of even count 
            double m1=val[median-1];
            double m2=val[median-2];
            return((m1+m2)*1.0/2.0);
        }
    }
};