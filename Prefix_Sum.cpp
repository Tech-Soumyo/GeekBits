#include<bits/stdc++.h>
using namespace std;
/*Given two Lists of strings s1 and s2, you have to count the number of strings in s2 which is either a suffix or prefix of at least one string of s1.

Example 1:

Input:
s1 = ["cat", "catanddog", "lion"]
s2 = ["cat", "dog", "rat"]
Output:
2
Explanation:
String "cat" of s2 is prefix of "catanddog"
& string "dog" of s2 is suffix of "catanddog"
Example 2:

Input:
s1 = ["jrjiml", "tchetn", "ucrhye", "ynayhy",
       "cuhffd", "cvgpoiu", "znyadv"]
s2 = ["jr", "ml", "cvgpoi", "gpoiu", "wnmkmluc",
      "geheqe", "uglxagyl", "uyxdroj"]
Output:
4
Explanation:
String "jr" of s2 is prefix of "jrjiml",
"ml" of s2 is suffix of "jrjiml",
"cvgpoi" of s2 is prefix of "cvgpoiu" &
"gpoiu" of s2 is suffix of "cvgpoiu"
Your Task:
You don't need to read input or print anything. Your task is to complete the function prefixSuffixString(), which takes 2 strings s1 and s2 as input and returns an integer value as the number of strings in s2 which is a prefix or suffix in s1.

Expected Time Complexity: O(max(len(s1) , len(s2) ))
Expected Space Complexity: O(1)

Constraints:
   1 <= s1,s2 < 5 * 10^3
   5 <= len(s1[i]), len(s2[i]) < 25*/

class Solution{
    public:
        int prefixSuffixString(vector<string> &s1, vector<string> s2)
        {
            // Code here
            unordered_map<string, bool> mm;
            for(auto x:s1){
                string temp = "";
                for(int i=0; i<x.length(); i++)
                {
                    temp += x[i];
                    mm[temp] =true;
                }
                temp = "";
                for(int i =x.length()-1; i>=0; i--)
                {
                    temp = x[i] + temp;
                    mm[temp] = true;
                }
            }
            int ans = 0;
            for(auto x:s2){
                if(mm[x]) ans++;
            }
        return ans;
        }
};