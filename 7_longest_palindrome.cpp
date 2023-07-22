//LEETCODE: 409. Longest Palindrome
//Given a string s which consists of lowercase or uppercase letters, return the length of the longest palindrome that can be built with those letters. Letters are case sensitive, for example, "Aa" is not considered a palindrome here.

// Example 1:

// Input: s = "abccccdd"
// Output: 7
// Explanation: One longest palindrome that can be built is "dccaccd", whose length is 7.


class Solution {
public:
    int longestPalindrome(string s) {
        //first make map to store count of each character
        map<char,int>mp;
        
        for(char c:s) mp[c]++;//storing count of each char
        
        //or can write as
        // for(int i=0;i<s.length();i++){
        //     mp[s[i]]++;
        // }

        int result=0;
        
        //iterate through map and store value of each pair in result
        for(auto it:mp){
            result+=it.second/2*2;//ex->any char is occuring 9 times-->9/2*2=4*2-->8(occurence with pairs)-->ex 5/2*2-->5/2=2-->2 pairs now count of these char=2 pairs=4 char(2*2)
            
            if(result % 2==0 and it.second%2==1) {//result%2==0 is applied because if one time odd char is added so other time if odd number of char comes there would be no +1
            //because char without any pair is added only one time
            //and once odd is added result%2!=1 so this condition would not be executed
                result+=1;
            }
        }
        return result;
    }
};