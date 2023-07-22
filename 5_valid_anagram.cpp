//LEETCODE: 242. Valid Anagram
//Given two strings s and t, return true if t is an anagram of s, and false otherwise. An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.


//Brute force

    bool isAnagram(string s, string t) {
        //brute force approach
        //sort then compare

        if(s.size()!=t.size()) return false;

        sort(s.begin(),s.end());
        sort(t.begin(),t.end());

        for(int i=0;i<s.size();i++){
            if(s[i]!=t[i]){
                return false;
                break;
            }
        }
        return true;
    }


//optimised

class Solution {
public:
    bool isAnagram(string s, string t) {
        //optimised
        //using hashmap

        if(s.size()!=t.size()) return false;

        map<char,int>mp;

        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
            mp[t[i]]--;
        }

        for(auto it:mp){
            if(it.second!=0){
                return false;
                break;
            }
        }
        return true;
    }
};