#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

int main(){
    unordered_set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(6);
    s.insert(6);

    s.erase(2);

    int target = 4;
    if(s.find(target)!=s.end()){ //target esixts
        cout<<"exists\n";

    }
    //for each loop is used to print the data
    for(int ele : s){
        cout<<ele<< " ";
    }
    cout<<endl;
    cout<< s.size();
    return 0;

}