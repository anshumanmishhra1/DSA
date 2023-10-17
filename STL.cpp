/* Understandig vector header  and their function*/

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     //initialize
//     vector<int> v;
//     cout<<"capacity: "<<v.capacity()<<endl; // it will tell the capacity 

//     // putting element in the vector
//     v.push_back(1);
//     cout<<"capacity: "<<v.capacity()<<endl; // it will tell the capacity 1


//     v.push_back(2);
//     cout<<"capacity: "<<v.capacity()<<endl; // it will tell the capacity 2

//     v.push_back(3);
//     cout<<"capacity: "<<v.capacity()<<endl; // it will tell the capacity 4


//     //finding the size of the array
//     cout<<"Sizw -> "<<v.size()<<endl;

//     //finding elements at any index
//     cout<<"Element at 2nd is: "<<v.at(2)<<endl;

//     //can find front and back
//     cout<<"Front: "<<v.front()<<endl;
//     cout<<"Back: "<<v.back()<<endl;

//     //we can also do pop back:
//     cout<<"Before Pop: "<<endl;
//     for(int i:v){
//         cout<<i<<" ";
//     }cout<<endl;

//     v.pop_back();
//     cout<<"After Pop: "<<endl;
//     for(int i:v){
//         cout<<i<<" ";
//     }cout<<endl;

//     //clearing vector doesn't mean capacity become zero
//     cout<<"before clear: "<<v.size()<<endl;
//     v.clear();
//     cout<<"after clear: "<< v.size()<<endl;
//     return 0;
// }

/* How can I initialze it in another ways: */

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> a(5,1); //vector size is 5 and start initilise elemnt with 1
//     cout<<" Print a: "<<endl;
//     for(int i:a){
//         cout<<i<<" ";
//     }
//     return 0;
// }


// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the size of the array: "<<endl;
//     cin>>n;
//     vector<int>arr(n);

//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" "<<endl;
//     }

//     cout<<"size of the array is : "<<arr.size()<<endl;

//     return 0;
// }



/*Understanding deque */

// #include<iostream>
// #include<deque>
// using namespace std;
// int main(){
//     deque<int>d;
//     d.push_back(1); // piche 1 print hoga
//     d.push_front(2); // 1 k bad 2 print hoga mtlb 2 1 aise

//     for(int i:d){
//         cout<<i<<" ";
//     }cout<<endl;

//     // d.pop_back(); // iska mtlb 1 hat jayega piche se
//     // for(int i:d){
//     //     cout<<i<<" ";
//     // }

//     //accesing first element:
//     cout<<"Print first index element : "<<d.at(1)<<endl;

//     //we can also check front,back and empty and also erase

//     d.erase(d.begin(),d.begin()+1);
//     cout<<"after erase: "<<d.size()<<endl;
//     return 0;
// }



/*Understanding List: */

// #include<iostream>
// #include<list>
// using namespace std;
// int main(){
//     list<int>l;

//     //copying the list
//     list<int> n(5,100);
//     cout<<"Printing n: "<<endl;
//     for(int i:n){
//         cout<<i<<" ";
//     }cout<<endl;


//     l.push_back(1);
//     l.push_front(2);
//     // when we do this 2 1 will be printed
//     for(int i:l){
//         cout<<i;
//     }cout<<endl;

//     l.erase(l.begin());
//     cout<<"After erase: "<<endl;
//     for(int i:l){
//         cout<<i<<" ";
//     }cout<<endl;

//     return 0;
// }


/* Understanding Stack : */

#include<iostream>
#include<stack>
using namespace std;
int main(){
    return 0;
}