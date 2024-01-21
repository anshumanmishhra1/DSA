/* 📌sort the array of 0's and 1's */
/*👉Method 1 :

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void sort01(vector<int> &v, int n){
    int noz=0;
    int noo =0;

    for(int i=0;i<n;i++){
        if(v[i]==0) noz++;
        else noo++;
    }

    for(int i=0;i<n;i++){
        if(i<noz){
            v[i]=0;
        }
        else v[i]=1;
    }
}
int main(){
    int n;
    cin>>n;

    vector<int> v;
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        v.push_back(q);
    }


    sort01(v,n);

    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    return 0;

}

 */

/*👉Method 2 : 

#include<iostream>
#include<vector>
using namespace std;
void sort01(vector<int> &v, int n){
    int i=0;
    int j=n-1;
    while(i<j){
       if(v[i]==0) i++;
       if(v[j]==1) j--;

       if(i>j){
        break;
       }
        if(v[i]==1 && v[j]==0){
            v[i]=0;
            v[j]=1;
            i++;
            j--;
        }  
    }

}
int main(){
    int n;
    cin>>n;

    vector<int> v;
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        v.push_back(q);
    }


    sort01(v,n);

    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    return 0;

}

*/

/*📌 leetcode 75 : sort 0 1 and 2 

    👉Method 1 : 

    class Solution {
    public:
    void sortColors(vector<int>& nums) {
        int noo=0;
        int noz=0;
        int notw=0;

        for(int i=0;i<nums.size();i++){
            if(nums[i]==0) noz++;
            else if(nums[i]==1) noo++;
            else notw++;
        }

        for(int i=0;i<nums.size();i++){
            if(i<noz) nums[i]=0;
            else if((noo +noz)>i) nums[i]=1;
            else nums[i]=2;
        }
    }
};


    👉 Method 2 : Dutch Flag Algo(also known as 3 pointer algorithm)


    class Solution {
    public:
    void sortColors(vector<int>& nums) {
    int lo=0;
    int mid=0;
    int hi=nums.size()-1;

    while(mid<=hi){
        if(nums[mid]==2){
            int temp=nums[mid];
            nums[mid]=nums[hi];
            nums[hi]= temp;
            hi--;
        }

        else if(nums[mid]==0){
            int temp=nums[mid];
            nums[mid]=nums[lo];
            nums[lo]= temp;
            mid++;
            lo++;
        }

        else{
            mid++;
        }
    }
    }
};
    
*/


/*📌Merge two sorted Arrays : 


#include<iostream>
#include<vector>
using namespace std;
vector<int> merge(vector<int> &v1, vector<int> &v2){
    int n = v1.size();
    int m = v2.size();
    vector<int> res(m+n);

    int i=0;
    int j=0;
    int k=0;

    while(i<=n-1 && j<=m-1){
        if(v1[i]<v2[j]){
            res[k]=v1[i];
            i++;
            k++;
        }

        else{
            res[k]=v2[j];
            j++;
            k++;
        }
    }

    if(i==n){
        while(j<=m-1){
            res[k]=v2[j];
            k++;
            j++;
        }
    }
    if(j==m){
        while(i<=n-1){
            res[k]=v1[i];
            i++;
            k++;
        }
    }

    return res;
}
int main(){
    int m,n;
    cin>>m;
    cin>>n;
    vector<int> v1;
    vector<int> v2;

    for(int i=0;i<m;i++){
        int q;
        cin>>q;
        v1.push_back(q);
    }

    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        v2.push_back(q);
    }

    vector<int> v = merge(v1,v2);

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;

}

*/

/*📌Find the next permutation of Array 
    step 1 : find pivot
    step 2 : idx + 1 to end reverse krr do
    step 3 : if already in ascending order reverse this 

    class Solution {
    public:
    void nextPermutation(vector<int>& nums) {
        //step 1 : find the pivot element 
        int n=nums.size();
        int idx=-1;
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                idx=i;
                break;
            }
        }
        // step 2 : if pivot nahi mil raha iska mtlb already desc order mein hai, isliye reverse 
        if(idx==-1){
            reverse(nums.begin(), nums.end());
            return;
        }
        // step 3 : if found pivot then reverse from the pivot element to the end
        reverse(nums.begin()+idx+1, nums.end());
        // step 4 : find the just greater element than pivot
        int j=-1;
        for(int i=idx+1;i<n;i++){
            if(nums[i]>nums[idx]){
                j=i;
                break;
            }
        }
        //step 4 : now swap the values of idx and idx+1
        int temp=nums[idx];
        nums[idx]=nums[j];
        nums[j]=temp;
        return;
    }
};

*/


/*📌Trapping Rain Water  : */