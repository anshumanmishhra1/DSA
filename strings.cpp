/* striing is to represt sequence of characters
    strig string_name="Anshuman"
*/

/*Understanding declaration 
#include<iostream>
#include<string.h>
using namespace std;

int main(){
    // string str= "College";
    // string str1= "Wallah";
    
    // we can also define the same as:
    string str("College");
    string str1("Wallah");

    cout<<str<<str1<<endl;
    return 0;

}

 */


/* Taking input in string : 
when you just use cin the it will only understan
the single word and as you enter space it understand
space as the single character so instead of cin we
use getline(cin,string_name)
#include<iostream>
#include<string.h>
using namespace std;

int main(){
    string str;
    // cin>>str;

    getline(cin,str);
    cout<<str;
    return 0;

}

*/


/* Ascii value of characters in a string 

#include<iostream>
#include<string.h>
using namespace std;

int main(){
    char ch='A';
    cout<<int(ch);
    return 0;
}

*/


/* Strin vs Array : 
1. string is a class and object of this class is variables
2. Array of char is array
3. string str_name; 
4. char arr_name[size]
5. string is dynamic memory allocation
6. character is static
7. in string there is no pre-allocated memory
8. character ha pre allocated memory
9. strig has some in-built funciton
10. char array is faster than string
*/


/* Concept of reverse()

#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;

int main(){
    string str="hello";
    reverse(str.begin(),str.end());
    cout<<str<<endl;
    return 0;

}

*/


/* Concept of substr() :is used to find substring of a
given string 
for example : we have given a string and we have
to print the string till 3rd place

#include<iostream>
#include<string.h>
using namespace std;

int main(){
    string str="anshuman";
    cout<<str.substr(0)<<endl;
    cout<<str.substr(1,3);
    return 0;

}

*/


/* + operator : is knowns as concatenate string : 

#include<iostream>
#include<string.h>
using namespace std;

int main(){
    string str="college";
    string str2="wallah";
    cout<<str+str2<<endl;
    return 0;

}

*/


/* strcat() : is used to concatenate character arrays : 

#include<iostream>
#include<string.h>
using namespace std;

int main(){
    char s1[20]="college";
    char s2[20]="wallah";
    strcat(s1,s2);
    cout<<s1<<endl;
    return 0;

}

*/


/* push_back() : used to insert char at the end of string

#include<iostream>
#include<string.h>
using namespace std;

int main(){
    string s1="abcd";
    char ch='e';
    s1.push_back(ch);
    cout<<s1;
    return 0;

}

*/


/* size() : strlength() and str.size() is used in string
where as strlen() is used for character arrays: 

#include<iostream>
#include<string.h>
using namespace std;

int main(){
    string str="abcde";
    cout<<str.length()<<endl;
    cout<<str.size()<<endl;

    char ch[20]="Anshuman";
    cout<<strlen(ch)<<endl;
    return 0;

}

*/


/*to_string() : used to convert numeric value to string

#include<iostream>
#include<string.h>
using namespace std;

int main(){
    int num=432;
    string str=to_string(num);
    str+="1";
    cout<<str;

    return 0;

}

*/



/* 💻 Now start Practicing questions */

/* Question 1: given two string s and t, return true if t is an anagram of
s, and false otherwise
input: s='anagram' , t='nagaram'
output : yes

input 2: s="bank" , t="atm"
output : no*/


