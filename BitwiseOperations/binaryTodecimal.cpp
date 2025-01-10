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


#include <iostream>
#include <bitset>
using namespace std;

int main() {
    bitset<4> b("1010");
    cout << (b >> 1) << endl;
    return 0;
}