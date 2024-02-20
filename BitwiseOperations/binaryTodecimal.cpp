/*📌Decimal to Binary and Vice Versa

#include<iostream>
#include<vector>
using namespace std;
int binary_to_decimal(string &binary){
    int n= binary.size();
    int result = 0;
    for(int i=n-1;i>=0;i--){
        char ch = binary[i];
        int num = ch -'0';
        result = result + num*(1<<(n-i-1));
    }
    cout<<result;
}

string decimal_to_binary(int num){
    string result = "";
    while(num>0){
        if(num%2==0){
            result = "0" + result;
        }
        else{
            result = "1" + result;
        }
        num/=2;
    }
    return result;
}
int main(){
    // string str;
    // cin>>str;
    // int ans1 = binary_to_decimal(str);
    cout<<decimal_to_binary(13);
    // cout<<str;
    return 0;

}


*/


/*📌Find the number of set bits for any integer n

*/

#include<iostream>
#include<vector>
using namespace std;
int count_set_bits(int num){
    return __builtin_popcount(num);
}
int main(){
    cout<<count_set_bits(13)<<endl; 
    return 0;

}