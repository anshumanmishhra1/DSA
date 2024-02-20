/*find the number of vowel in a string

#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    cin>>s;
    int count = 0;
    int i =0;
    while(s[i]!='\0'){
        if(s[i]=='a' ||s[i]=='e' || s[i]=='i' || s[i]=='o' ||
        s[i]=='u'  ){
            count++;
        }
        i++;
    }
    cout<<count;
    return 0;

}

*/


/*updation of a single character in a string 

#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    cin>>str;
    str[1] = '9';
    cout<<str;
    return 0;

}


*/



/*input a string of size n and update all the even position
the even positions in the string to character 'a'. Consider 
0-based indexing


#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    cin>>str;
    
    for(int i=0;str[i]!='\0';i++){
        if(i%2==0){
            str[i]='a';
        }
    }
    cout<<str;

}

*/


/* Built in function of String

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string str;
    cin>>str;
    
    // cout<<str<<endl;

    // str.push_back('e');
    // cout<<str;
    // str.pop_back();
    // cout<<str;

    // string str2;
    // cin>>str2;

    // string t = str+str2;
    // cout<<t;

    // reverse(str.begin(),str.end());
    // cout<<str;

    reverse(str.begin()+2, str.end());
    cout<<str;
    return 0;



}

*/


/*input a string of even length and reverse the first half
of the string 

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string str;
    getline(cin,str);

    int length = str.size();
    reverse(str.begin(), str.begin()+length/2);
    cout<<str;
    

    return 0;

}

*/


/*Concept of SubString () 

#include<iostream>
#include<vector>
using namespace std;

int main(){
    string s = "abcdef";
    //s.subset(idx)
    cout<<s.substr(2);
    //s.subset(idx,len)
    cout<<s.substr(2,2);

    return 0;

}

*/

/*📌 input a string and return the number of times the 
neighbouring charachters are different from each other



#include<iostream>
#include<vector>
using namespace std;

int main(){
    string s;
    cin>>s;
    int n= s.length();
    int count = 0;
    for(int i =0;i<n;i++){
        if(n==1){
            break;
        }
        if(n == 2 && s[0]!=s[i]){
            count = 1;
            break;
        }

        if(i==0){
            if(s[i]!=s[i+1]) count++;
        }
        else if(i==n-1){
            if(s[i]!=s[i-1]) count++;
        }
        else if(s[i]!=s[i+1] && s[i]!=s[i-1]){
            count++;

        }
    }

    cout<<count;
    return 0;

}

*/


/*📌Sorting a string using  in-built functio 


#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string s;
    cin>>s;

    sort(s.begin(),s.end());
    cout<<s;
    return 0;

}

*/


/*📌Given a  string consisting of lowercase english alphabets.
print the character that is occuring most number of times


#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
    string s;
    cin>>s;

    vector<int> arr(26,0);
    for(int i=0;i<s.length();i++){
        int ch =(int) s[i];
        int ascii = ch;
        arr[ascii-97]++;
    }

    int mx = 0;
    for(int i=0;i<26;i++){
        if(arr[i]>mx) mx = arr[i];
    }

    for(int i=0;i<26;i++){
        if(arr[i]==mx){
            int ascii = i+97;
            char ch = (char)ascii;
            cout<<ch<<" "<<mx<<endl;
        }
    }


    return 0;

}

*/


/*📌Given a sentence 'str' , return the word that is
occuring most number of time in that sentence



#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    string str;
    getline(cin,str);
    stringstream ss(str);
    string temp;
    vector<string> v;
    while(ss>>temp){
        v.push_back(temp);
    }

    sort(v.begin(),v.end());

    int maxCount =1;
    int count =1;
    for(int i=1;i<v.size();i++){
        if(v[i]==v[i-1]){
            count++;
        }
        else count = 1;
        maxCount = max(maxCount,count);
    }
    
    for(int i=1;i<v.size();i++){
        if(v[i]==v[i-1]){
            count++;
        }
        else count = 1;
        if(count == maxCount){
            cout<<v[i]<<" "<<maxCount<<endl;
        }
    }
    return 0;

}

*/


/*📌Given a strings consisting of digits from 0 to 9
.Return the index of string which has maximum value


#include<iostream>
#include<vector>
#include<string>
#include<sstream>
using namespace std;

int main(){
    string str;
    getline(cin,str);
    stringstream ss(str);
    string temp;
    vector<string> v;
    while(ss>>temp){
        v.push_back(temp);
    }


    int max = stoi(v[0]);
    for(int i=0;i<v.size();i++){
        int x = stoi(v[i]);
        if(x>max) max = x;
    }

    cout<<max;
    return 0;

}

*/


