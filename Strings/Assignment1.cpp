/*📌input a string of size of n and update all the odd 
positions in the strings to character '#'.

#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
    string str;
    cin>>str;
    for(int i=0;i<str.length();i++){
        if(i%2!=0){
            str[i] = '#';
        }
    }
    cout<<str;
    return 0;

}


*/


/*📌input a string of length n and count all the consonants
in the given string 


#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    cin>>str;
    int count =0;
    for(int i=0;i<str.size();i++){
        if(str[i]!='a' && str[i]!='e' && str[i]!='i' && 
        str[i]!='o' && str[i]!='u' ){
            count++;
        }
    }

    cout<<count;

    return 0;

}

*/


/*📌Check whether the given string is palindrome or not



#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string str;
    cin>>str;
    int n = str.size();
    bool flag = false;
    for(int i=0;i<str.size();i++){
        if(str[i]==str[n-i-1]){
            flag = true;
        }
        else{
            flag= false;
        }
    }

    if(flag) cout<<"yes";
    else cout<<"No";
    return 0;

}

*/


/*📌input a string of even length and reverse the second 
half of the string 


#include<iostream>
#include<string>
using namespace std;
void myReverse(string &s, int begin, int end){
    for(int i=begin; i<=(begin+end)/2;i++){
        swap(s[i],s[begin+end-i]);
    }
}
int main(){
    string s;
    cin>>s;
    int n= s.size();
    myReverse(s,n/2,n-1);
    cout<<s;
    return 0;

}


*/


/*📌input a string of length less than 10 and convert it into
string without using builtin function



#include<iostream>
#include<string>
using namespace std;

int main(){ 
    string s;
    cin>>s;

    int n= s.size();
    int ans = 0;
    int product = 1;
    for(int i=n-1;i>=0;i--){
        ans = ans + (s[i]-'0')*product;
        product*=10;
    }

    cout<<ans;
    return 0;

}

*/