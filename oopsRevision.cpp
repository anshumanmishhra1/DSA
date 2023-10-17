/* Concept Of getter and setter and public and private class: */

// #include<iostream>
// using namespace std;
// class hero{
    
//     private:
//     char name;
//     char level;
//     int health;
//     public:
//     int defence;
//     char getLevel(){
//         return level;
//     }

//     char getName(){
//         return name;
//     }

//     int getHealth(){
//         return health;
//     }

//     char setLevel(char ch){
//         level=ch;
//     }

//     char setName(char ch){
//         name=ch;
//     }

//     void setHealth(int h){
//         health=h;
//     }
// };
// int main(){
//     hero ramesh;
//     cout<<"Ramesh health is: "<<ramesh.getHealth()<<endl;
//     ramesh.setHealth(70);
//     // cout<<"size of name: "<<sizeof(ramesh.name);
//     return 0;

// }

/* Write a c++ prograam to find the sum of n naturral nummvers using recurssion: */

// #include<iostream>
// using namespace std;
// int sum(int n){
//     if(n==0){
//         return;
//     }

//     int i=0;
//     return i+sum(n-1);
// }
// int main(){
//     int n;
//     cin>>n;
//     sum(n);
//     return 0;

// }