/*📌input a string and concatenate with its reverse and 
print it


#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string s;
    cin>> s;
    string t = s;

    reverse(t.begin(),t.end());

    string res = s + t;
    cout<<res;
    return 0;

}

*/


/*📌find the second largest digit in the string consisting
of digits from '0' to '9' 


#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    cin>>s;

    char max1 = '!', max2 = '!';

    for(int i=0;i<s.size();i++){
        if(max1< s[i]){
            max2 = max1;
            max1 = s[i];
        }

        else if(max2<s[i] && max1 != s[i]){
            max2 = s[i];
        }
    }

    if(max2=='!') cout<<"no second largest";
    else cout<<max2;
    return 0;

}

*/


/*📌Input a string and return the number of substring that
contains only vowels



#include<iostream>
#include<vector>
using namespace std;

int main(){
    string str;
    cin>>str;

    int count = 0;
    int answer = 0;
    for(int i=0;i<str.size();i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' ||
        str[i]=='o' || str[i]=='u'){
            count++;
        }
        else{
            answer += count*(count+1)/2;
            count = 0;
        }
    }
    answer += count*(count+1)/2;

    cout<<answer<<endl;

    return 0;

}

*/


/*📌Given two Strings. Check whether two strings ara anagram
or not

*/

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string s;
    cin>>s;
    string t;
    cin>>t;

    sort(s.begin(),s.end());
    sort(t.begin(),t.end());

    if(s==t) cout<<"yes";
    else cout<<"no";
    return 0;

}