/*📍Understanding Ordered Sets 

#include<iostream>
#include<set>
#include<map>
using namespace std;

int main(){
    set<int> s;
    s.insert(4);
    s.insert(3);
    s.insert(5);
    s.insert(1);
    s.insert(7);

    for(int ele: s){
        cout<<ele<<" ";
    }
    return 0;

}

*/


/*📍Understanding Ordered Maps*/
#include<iostream>
#include<set>
#include<map>
using namespace std;

int main(){
    map<int,int> m;
    m[1] =30;
    m[2] = 40;
    m[3] = 50;

    for(auto ele: m){
        cout<<ele.second <<" ";
    }
    return 0;

}