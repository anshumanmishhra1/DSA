/*📌 Vector is passed by value and new vector is created similarly

#include<iostream>
#include<vector>
using namespace std;
void change(vector<int> a){
    a[0]=100;
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int>v;
    v.push_back(9);
    v.push_back(10);
    v.push_back(6);
    v.push_back(1);

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    change(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;

}
*/

/*📌passing by reference in funciton
#include<iostream>
#include<vector>
using namespace std;
void change(vector<int>& a){
    a[0]=100;
}
int main(){
    vector<int>v;
    v.push_back(9);
    v.push_back(10);
    v.push_back(6);
    v.push_back(1);

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    change(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;

}

*/