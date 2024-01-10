/* understanding Vector 
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v; //You needn't mention the size of the vector

    v.push_back(6);
    cout<<v.size()<<endl;
    v.push_back(1);
    cout<<v.size()<<endl;
    v.push_back(9);
    cout<<v.size()<<endl;
    v.push_back(0);
    cout<<v.size()<<endl;
    v.push_back(11);
    cout<<v.size()<<endl;


    v.push_back(6);
    cout<<v.capacity()<<endl;
    v.push_back(1);
    cout<<v.capacity()<<endl;
    v.push_back(9);
    cout<<v.capacity()<<endl;
    v.push_back(0);
    cout<<v.capacity()<<endl;
    v.push_back(11);
    cout<<v.capacity()<<endl;
    


    // cout<<v[0]<<" ";
    // cout<<v[1]<<" ";
    // cout<<v[2]<<" ";
    // cout<<v[3]<<" ";
    return 0;

}

*/


/*📌 Understanding Pop_Back function*/
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>v;
    v.push_back(6);
    v.push_back(1);
    v.push_back(9);
    v.push_back(10);

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    v.pop_back();

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;

}