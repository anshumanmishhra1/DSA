/*📌Tower Of Hanoi



#include<iostream>
#include<vector>
using namespace std;
void Hanoi(int n,char s, char h, char d){
    if(n==0) return;
    Hanoi(n-1,s,d,h);
    cout<<s<<" -> "<<d<<endl;
    Hanoi(n-1,h,s,d);
}
int main(){
    int n;
    cin>>n;
    Hanoi(n,'A','B','C');
    return 0;

}

*/


/*📍Traversing an array Using Recurssion */

/* 📌Print all the elements of an Array : 



#include<iostream>
#include<vector>
using namespace std;
void display(int arr[], int n, int idx){
    if(idx == n) return;
    cout<<arr[idx]<<" ";
    display(arr,n,idx+1);
}
int main(){
    int arr[] = {2,1,5,3,9,0,2,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    display(arr,n,0);
    return 0;

}

*/


/*📌Find out the maximum value in array using recurssion

#include<iostream>
#include<limits.h>
using namespace std;
void printMax(int arr[],int n, int idx,int max){
    if(idx==n){
        cout<<max;
        return;
    }
    if(max<=arr[idx]) max = arr[idx];
    printMax(arr,n,idx+1,max);
}
int main(){
    int arr[] = {2,1,5,3,9,0,2,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    printMax(arr,n,0,INT_MIN);
    return 0;

}

*/


/*📌Skip a character (Remove all occurences of 'a' from 
a string )



#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
void removeChar(string original, string ans){
    if(original.length()==0){
        cout<<ans;
        return;
    }
    char ch = original[0];
    if(ch=='a') removeChar(original.substr(1),ans);
    else removeChar(original.substr(1),ans+ch);
}
int main(){
    string str = "Raghav Garg";
    removeChar(str,"");
    return 0;

}

*/


/*📌Subset Of A String : *

#include<iostream>
#include<vector>
#include<string>
using namespace std;
void printSubset(string ans, string original,int idx){
    char ch = original[idx];
    if(idx==original.length()-1){
        cout<<ans<<endl;
        return;
    }
    printSubset(ans+ch,original,idx+1);
    printSubset(ans,original,idx+1);
}
int main(){
    string str;
    cin>>str;
    printSubset("",str,0);
    return 0;

}

*/


/*📌Increasing Subsequences of an Array 



#include<iostream>
#include<vector>
#include<string>
using namespace std;
void printSubset(int arr[], int n, int idx, vector<int> ans, int k){
    if(idx==n){
        if(ans.size()==k){
            for(int i=0;i<ans.size();i++){
                cout<<ans[i]<<" ";
            }
            cout<<endl;
        }
        return;
    }
    if(ans.size()+(n-idx)<k) return; //it will do nothing but increae the time complexity
    printSubset(arr,n,idx+1,ans,k);
    ans.push_back(arr[idx]);
    printSubset(arr,n,idx+1,ans,k);
}
int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>v;
    int k=3;
    printSubset(arr,n,0,v,k);
    return 0;

}

*/