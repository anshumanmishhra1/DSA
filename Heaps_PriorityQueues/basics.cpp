/*📌Understanding Priority Queue 
#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int main(){
    priority_queue<int> pq;
    pq.push(10);
    pq.push(2);
    pq.push(-6);
    pq.push(8);
    
    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top()<<endl;

    return 0;

}

*/

/*📌Question : Find the kth smallest element in the given array : 


#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int main(){
    priority_queue<int> pq;
    int arr[] = {10,20,-4,5,18,24,1,-7,56};
    int k = 4;
    int n = sizeof(arr)/4;

    for(int i=0;i<n;i++){
        pq.push(arr[i]);
        if(pq.size()>k) pq.pop();
    }
   
    cout<<pq.top();

    return 0;

}

*/


/*📌Sort a 'k' sorted array (sort a newarly sorted array)


#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int main(){
    priority_queue<int,vector<int>,greater<int>> pq;
    int arr[] = {6,5,3,2,8,9};
    int k = 4;
    vector<int> ans;
    int n = sizeof(arr)/4;

    for(int i=0;i<n;i++){
        pq.push(arr[i]);
        if(pq.size()>k){
            ans.push_back(pq.top());
            pq.pop();
        } 
    }

    while(pq.size()>0){
        ans.push_back(pq.top());
        pq.pop();
    }
   
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

    return 0;

}

*/
