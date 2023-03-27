/*https://www.codingninjas.com/codestudio/problems/roman-number-to-integer_981308?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0*/

#include <bits/stdc++.h> 
#include<unordered_map>
int romanToInt(string s) {
    int sum = 0;
    unordered_map<char, int> mp = {
        {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}
    };
    for(int i = 0; i < s.length(); i++)
      if (mp[s[i]] < mp[s[i + 1]]) {
        sum -= mp[s[i]];
      } else {
        sum += mp[s[i]];
      }
    return sum;
}
