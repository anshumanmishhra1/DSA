/*📌Longest Common Prefix (leetCode 14)
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n  = strs.size();
        if(n==1) return strs[0];
        sort(strs.begin(),strs.end());

        string s = "";

        string start = strs[0];
        string last = strs[n-1];

        for(int i=0;i<min(start.size(),last.size());i++){
            if(start[i]==last[i]){
                s+=start[i];
            }
            else return s;
        }
        return s;
    }
};

*/
  

/*📌Given two strings s and t, determine if they are isomporphic
or not .(leetoce 205)


class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size()!= t.size()) return false;

        vector<int> v(150,1000);

        for(int i=0;i<s.size();i++){
            int idx = (int)s[i];
            if(v[idx]==1000) v[idx] = s[i] - t[i];
            else if(v[idx] != (s[i]-t[i])) return false;
        }
        for(int i =0;i<150;i++){
            v[i] = 1000;
        }
        for(int i=0;i<s.size();i++){
            int idx = (int)t[i];
            if(v[idx]==1000) v[idx] = t[i]-s[i];
            else if(v[idx] != (t[i]-s[i])) return false;
        }
        return true;
    }
};

*/