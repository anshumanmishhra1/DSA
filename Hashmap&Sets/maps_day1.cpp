/*📌Understanding Maps
#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    unordered_map<string,int> m;
    pair<string,int> p1;
    p1.first = "anshu";
    p1.second = 67;

    m.insert(p1);
    m["harsh"] = 15;
    m["Lokesh"] = 17;
    // pair<string,int> p2;
    // p2.first = "Prakash";
    // p2.second = 69;
    // pair<string,int> p3;
    // p3.first = "Pritam";
    // p3.second = 34;

    //insert the pairs in the unordered map
    // m.insert(p1);
    // m.insert(p2); 
    // m.insert(p3);

    for(pair<string,int>p:m){
        cout<<p.first<<" "<<p.second<<endl;
    }
    m.erase("raghav");
    for(pair<string,int>p:m){
        cout<<p.first<<" "<<p.second<<endl;
    }
    return 0;

}


*/


/*📌Valid Anagram (leetCode-242)

*/