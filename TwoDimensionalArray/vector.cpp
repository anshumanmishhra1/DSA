/*📌Understanding vector
    Advantages of vectors : 
    1. increase your row
    2. variable coumns
 */
#include<iostream>
#include<vector>
using namespace std;
void length(vector< vector<int> > &v){
    cout<<v.size();
}
int main(){
    // vector<int> v1;
    // v1.push_back(1);
    // v1.push_back(2);
    // v1.push_back(3);

    // vector<int> v2;
    // v2.push_back(4);
    // v2.push_back(5);

    // vector<int> v3;
    // v3.push_back(6);
    // v3.push_back(7);
    // v3.push_back(8);
    // v3.push_back(9);
    // v3.push_back(10);

    // vector< vector<int> > v;
    // v.push_back(v1);
    // v.push_back(v2);
    // v.push_back(v3);
    // length(v);

    vector< vector<int> > v(3, vector<int> (4,2));
    //it means we have 2d vector of row =2 and col =4 and put
    // each element = 20;

    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<v[i][j]<<" ";
        }cout<<endl;
    }
    return 0;

}