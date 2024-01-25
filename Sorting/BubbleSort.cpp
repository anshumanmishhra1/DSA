/*📍Code of Bubble Sort in optimised Way : 

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cout<<"Enter the array size : "<<endl;
    cin>>n;
    vector<int> v;
    cout<<"Enter array elements : \n";
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        v.push_back(q);
    }

    //sorting 
    for(int i=0;i<n;i++){
        bool flag = true;
        for(int j=0;j<n-1-i;j++){
            if(v[j]>v[j+1]){
                swap(v[j],v[j+1]);
                flag = false;
            }
        }
        if(flag == true){ // swap will not happen
            break;
        }
    }

    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    return 0;

}

*/


/*📌Sort a string in desceding order of values associated
after removal of values smaller than 'x'.

#include<iostream>
#include<string>
using namespace std;

int main(){
    string s ="AZYZXYBDJKX";
    string str;
    for(int i=0;i<s.length();i++){
        if(s[i]>='X'){
            str.push_back(s[i]);
        }
    }
    sort(str.begin(),str.end());
    cout<<str;
    return 0;

}

*/

/*📌Push zeroes to end while maintaing the relative order
of other element : 

*/


#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cout<<"Enter the array size : "<<endl;
    cin>>n;
    vector<int> v;
    cout<<"Enter array elements : \n";
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        v.push_back(q);
    }

    //sorting 
    for(int i=0;i<n;i++){
        bool flag = true;
        for(int j=0;j<n-1-i;j++){
            if(v[j]==0){
                swap(v[j],v[j+1]);
                flag = false;
            }
        }
        if(flag == true){ // swap will not happen
            break;
        }
    }

    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    return 0;

}