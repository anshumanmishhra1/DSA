// #include<iostream>
// #include<vector>
// using namespace std;
// void pip(int n){
//     if(n==0) return; 
//     cout<<"Pre "<<n<<endl;
//     pip(n-1);
//     cout<<"In "<<n<<endl;
//     pip(n-1);
//     cout<<"Post "<<n<<endl;
// }
// int main(){
//     int n;
//     cin>>n;
//     pip(n);

// }



// print zig-zag

#include<iostream>
#include<vector>
using namespace std;
void zigZag(int n){
    if(n==0) return;
    cout<<n;
    zigZag(n-1);
    cout<<n;
    zigZag(n-1);
    cout<<n;
}
int main(){
    int n;
    cin>>n;
    zigZag(n);
    return 0;

}