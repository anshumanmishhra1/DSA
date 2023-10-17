/* Print n times goodMorning */

// #include<iostream>
// using namespace std;
// void greeting(int n){
//     if(n==0){
//         return;
//     }
//     cout<<"GoodMorning"<<endl;
//     greeting(n-1);
// }
// int main(){
//     int n;
//     cout<<"Enter Number: "<<endl;
//     cin>>n;
//     greeting(n);
//     return 0;

// }

/* Print n to 1*/

// #include<iostream>
// using namespace std;
// void decreasing(int n){
//     if(n==0) return;
//     cout<<n<<endl;
//     decreasing(n-1);
//     return;
// }
// int main(){
//     int n;
//     cin>>n;
//     decreasing(n);
//     return 0;

// }


/* Print 1 to N*/

#include<iostream>
using namespace std;
void decreasing(int n){
    if(n==0) return;
    decreasing(n-1);
    cout<<n<<endl;
    return;
}
int main(){
    int n;
    cin>>n;
    decreasing(n);
    return 0;

}
