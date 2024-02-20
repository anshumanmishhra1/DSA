/*📌Two elements of an array a , a[i] and a[j] form and 
iversion if a[i] > a[j] and i<j, Given an array of integer.
Find the inversion count in the array 
*/

#include<iostream>
#include<vector>
using namespace std;

int count = 0;
int inversion(vector<int> &a, vector<int> &b){
    int i=0;
    int j=0;
    int count =0;
    while(i<a.size() && j<b.size()){
        if(a[i]>b[j]){
            count+=(a.size()-i);
            j++;
        }
        else{
            i++;
        }
    }
    return count;
}
void merge(vector<int> &a, vector<int> &b, vector<int> &res){
    int i=0;
    int j=0;
    int k=0;

    while(i<a.size() && j<b.size()){
        if(a[i]<b[j]){
            res[k++]=a[i++];
        }
        else{
            res[k++] = b[j++];
        }
    }

    if(i==a.size()){
        while(j<b.size()){
            res[k++]= b[j++];
        }
    }
    if(j==b.size()){
        while(i<a.size()){
            res[k++] = a[i++];
        }
    }
}

void mergeSort(vector<int> &v){
    int n =v.size();
    if(n==1){
        return;
    }
    int n1 = n/2;
    int n2 = n-n1;

    vector<int> a(n1);
    vector<int> b(n2);
    for(int i=0;i<n1;i++){
        a[i]=v[i];
    }
    for(int i=0;i<n2;i++){
        b[i]=v[i+n1];
    }

    mergeSort(a);
    mergeSort(b);

    //count the inversion 
    count = count + inversion(a,b);
    merge(a,b,v);
    a.clear();
    b.clear();
    
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

    mergeSort(v);
    cout<<count;

    return 0;

}