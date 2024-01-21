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

*/


/*📌write a program to copy the content of one array into antoehr
int the reverse order :

#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>& a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n;
    cout<<"Enter the size of the arrray : "<<endl;
    cin>>n;

    vector<int> v1;

    cout<<"Enter the elements of the array : "<<endl;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v1.push_back(a);
    }

    display(v1);
    vector<int> v2(v1.size());

    for(int i=0;i<v1.size();i++){
        int j= v1.size()-1-i;
        v2[i]=v1[j];
    }

    display(v2);
    return 0;

}

*/

/*📌Write a program to reverse an array without using extra
array : 

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cout<<"enter the size of the array : "<<endl;
    cin>>n;

    vector<int> v;

    cout<<"enter the elements of the array : "<<endl;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }

    for(int i=v.size()-1;i>=0;i--){
        cout<<v[i]<<" ";
    }
    return 0;

}

*/


/* 📌reverse an array betwwen two given part 

#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

void reversePart(int i, int j, vector<int> &v){
    while(i<=j){
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
    }
}

void reverse(vector<int> v){
    int i=0;
    int j= v.size()-1;
    while(i<=j){
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
    }
    return;
}
int main(){
    int n;
    cout<<"enter the size of the array : "<<endl;
    cin>>n;

    vector<int> v;

    cout<<"enter the elements of the array : "<<endl;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }

    display(v);

    reversePart(0,4,v);
    display(v);

    return 0;

}

*/


/*📌 Rotate the given array 'a' by k steps where k is non-negaitve
. 
Note : K can be greater than n as well where n is the size of array 'a'


#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

void reversePart(int i, int j, vector<int> &v){
    while(i<=j){
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
    }
}
int main(){
    int n,k;
    cout<<"enter the size of the array : "<<endl;
    cin>>n;
    cout<<"Enter the Kth element : \n";
    cin>>k;

    if(k>n){
        k=k%n;
    }
    vector<int> v;

    cout<<"enter the elements of the array : "<<endl;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }

    display(v);

    reversePart(0,n-k-1,v);
    reversePart(n-k,n-1,v);
    reversePart(0,n-1,v);
    display(v);

    return 0;

}

*/