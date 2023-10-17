// /* Concept Of getter and setter and public and private class: */

// #include<iostream>
// using namespace std;
// class hero{
    
//     private:
//     int health;
//     public:
//     char name;
//     char level;
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
//     // hero ramesh;
//     // cout<<"Ramesh health is: "<<ramesh.getHealth()<<endl;
//     // ramesh.setHealth(70);

//     /* Static Vs Dynamic Memory allocation :
//     Static:
//         hero a;
    
//         cout<<"level is : "<< a.level<<endl;
//         cout<<"health is : "<< a.getHealth();
    
//     Dynamic:
//         hero *b= new hero;
//  */

//     // hero *b=new hero;
//     // b->setLevel('A');
//     // b-> setHealth(60);
//     // cout<<"Level is :"<<(*b).level<<endl<<endl;
//     // cout<<"Level is :"<<(*b).getHealth()<<endl;

//     // //we can also use -> for refering and printing:
    
//     // cout<<"Level is :"<<b->level<<endl;
//     // cout<<"Level is :"<<b->getHealth()<<endl;

    

//     return 0;

// }






/* Concept of Constructor:
    1. It is used while object creation
    2. No return type
    3. there is no input parameter

    -> whenever we write Hero ramesh; it means ramesh.hero() is calling
    and this is known as default constructor.

*/
#include<iostream>
using namespace std;
class hero{
    
    private:
    int health;
    public:
    char level;
    
    hero(){
        cout<<"Constructor called : "<<endl;
    }
    char getLevel(){
        return level;
    }


    int getHealth(){
        return health;
    }

    char setLevel(char ch){
        level=ch;
    }

  

    void setHealth(int h){
        health=h;
    }
};

int main(){
    //object created statically
    // cout<<"Hii"<<endl;
    hero ramesh;
    // cout<<"hello"<<endl;


    //object created dynamically
    hero *h= new hero;
    return 0;
}