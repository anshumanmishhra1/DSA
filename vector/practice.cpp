/*📌 find the last index of x in the array

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(9);
    v.push_back(10);
    v.push_back(6);
    v.push_back(12);
    v.push_back(11);
    v.push_back(6);
    v.push_back(0);

    int x=11;
    int idx =-1;
    // for(int i=0;i<v.size();i++){
    //     if(v[i]==x){
    //         idx = i;
    //     }
    // }

    for(int i=v.size()-1;i>=0;i--){
        if(v[i]==x){
            idx=i;
            break;
        }
    }
    cout<<idx;

    return 0;

}

*/

/*📌find the doublet in the array whose sum is equal to the 
given value x 

*/

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int x;
    cout<<"Enter target : "<<endl;
    cin>>x;

    vector<int>v;
    int n;
    cout<<"Enter array size : "<<endl;
    cin>>n;

    cout<<"Enter array elements : "<<endl;
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        v.push_back(q);
    }

    for(int i=0;i<v.size()-2;i++){
        for(int j=i+1;j<=v.size()-1;j++){
            if(v[i]+v[j]==x){
                cout<<"("<<i<<","<<j<<")"<<endl;
            }
        }
    }
    return 0;

}

