/*📌Prefix sum -(leetCode 1280)

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size();
        vector<int> run(n);
        run[0] = nums[0];
        for(int i=1;i<n;i++){
            run[i] = nums[i] + run[i-1];
        }
        return run;
    }
};

*/


/*📌check if array can be partitioned into two 
continous arrays of equal sum

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    //make prefix sum
    for(int i=1;i<n;i++){
        arr[i] +=  arr[i-1];
    }
    //check if any 'x' exist?
    bool flag = false;
    int idx = -1;
    for(int i=0;i<n;i++){
        if(2*arr[i]==arr[n-1]){
            flag = true;
            idx = i;
            break;
        }
    }

    if(flag){
        cout<<"yes it can be partitioned"<<" "<<idx<<endl;
    }
    else{
        cout<<"Behen t lamad ottat mein\n";
    }

    return 0;

}

*/


/*📌Product of array except self - leetcode(238)
*/