/*📌Count number of distinct integer after reverses operatioins
(leetcode-2442)
class Solution {
public:
    int reverse(int n){
        int r = 0;
        while(n>0){
            r *=10;
            r += n%10;
            n/=10;
        }
        return r;
    }
    int countDistinctIntegers(vector<int>& nums) {
        unordered_set<int> s;
        for(int i=0;i<nums.size();i++){
            int rev = reverse(nums[i]);
            s.insert(nums[i]);
            s.insert(rev);
        }
        return s.size();
    }
};
*/


/*📌Find maximum number of string pairs (Leetcode-2744)
class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& arr) {
        int n = arr.size();
        unordered_set<string>s;
        for(int i=0;i<n;i++){
            s.insert(arr[i]);
        }
        int count = 0;
        for(int i = 0;i<n;i++){
            string rev = arr[i];
            reverse(rev.begin(),rev.end());
            if(arr[i]==rev) continue;
            if(s.find(rev)!=s.end()){
                count++;
                s.erase(arr[i]);
            }
        }
        return count;
    }
};
*/
