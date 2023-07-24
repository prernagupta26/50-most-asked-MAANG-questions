//LEETCODE 278. First Bad Version
//You are a product manager and currently leading a team to develop a new product. Unfortunately, the latest version of your product fails the quality check. Since each version is developed based on the previous version, all the versions after a bad version are also bad. Suppose you have n versions [1, 2, ..., n] and you want to find out the first bad one, which causes all the following ones to be bad. You are given an API bool isBadVersion(version) which returns whether version is bad. Implement a function to find the first bad version. You should minimize the number of calls to the API.



class Solution {
public:
    //binary search
    int firstBadVersion(int n) {
        int low=0;
        int high=n;
        
        int failed;
        
        while(low<=high){
            int mid=low+(high-low)/2;
            
            if(isBadVersion(mid)){//mid is a bad version
                
                failed=mid;//failed stores the latest bad version
                
                high=mid-1;//check all th prev versions
            }
            else{
                low=mid+1;//as mid is not a bad version check versions after mid
            }
        }
        return failed;
    }
};