#include<iostream>
#include<string>
using namespace std;

int main(){
    /*
    string str="college";
    string str1("wallah");
    cout<<str<<" "<<str1<<endl;

    // taking input in string in c++
    string str;
    // cin>>str;
    // cout<<str; it works but doesn't print two words with space
     
    getline(cin,str);
    cout<<str;
    cout<<str[3]; //used to print the single character

   char ch='a';
   cout<<int(ch);

    */
    string str="hello";
    reverse(str.begin(),str.end());
    return 0;

}