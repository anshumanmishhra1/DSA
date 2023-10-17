// #include<iostream>
// using namespace std;
// int main(){
//     char name[20];
//     cout<<"enter your name: "<<endl;
//     cin >>name;
//     name[2]='\0'; // due to this after 2nd index it ends

//     cout<<"Your Name is: "<<endl;
//     cout<<name; // it will print my name 

    
//     return 0;
// }


/* Question : find the length of the string */

// #include<iostream>
// using namespace std;
// int getlength(char name[]){
//     int count=0;
//     for(int i=0;name[i]!='\0';i++){
//         count++;

//     }
//     return count;
// }
// int main(){
//     char name[20];
//     cin>>name;

//     cout<<getlength(name)<<endl;
//     return 0;
// }


/* QUestion: Reverse a string : */

// #include<iostream>
// using namespace std;
// void reverse(char name[], int n){
//     int s=0;
//     int e=n-1;

//     while(s<=e){
//         swap(name[s++], name[e--]);
//     }
// }

// int getlength(char name[]){
//     int count=0;
//     for(int i=0;name[i]!='\0';i++){
//         count++;

//     }
//     return count;
// }
// int main(){
//     char name[20];
//     cin >> name;
//     int len=getlength(name);
//     reverse(name,len);
//     cout<<name<<endl;
//     return 0;
// }


/* Question : Check Palindrome: */

#include<iostream>
using namespace std;
#include<vector>
int checkPalindrome(vector<int> arr){
    int s=0;
    int e=arr.size()-1;

    while(s<=e){
        if(arr[s]!=arr[e]){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;

}
int main(){
    int n;
    cout<<"Enter the size of element : "<<endl;
    cin>>n;
    vector <int> arr(n);
    cout<<"Enter Your name : "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int result=checkPalindrome(arr);
    cout<<result<<endl;
    return 0;
}
