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
// #include<iostream>
// using namespace std;
// class hero{
    
//     private:
//     int health;
//     public:
//     char *name;
//     char level;
    
//     hero(){
//         cout<<"Constructor called : "<<endl;
//     }
//     char getLevel(){
//         return level;
//     }

//     void print(){
//         cout<<endl;
//         cout<<"Name: "<<this->name<<" ,";
//         cout<<"health"<< this->health<<endl;
//         cout<<"Level "<< this->level<<endl;
//     }

//     int getHealth(){
//         return health;
//     }

//     char setLevel(char ch){
//         level=ch;
//     }

//     hero(int health){ 
//         cout<<"this ->"<<this<<endl;
//         this -> health=health; 
//    }

//    hero(int health, char level){ 
//         this ->level=level;
//         this -> health=health; 
//    }
    
//     // Here we are creating our own Copy Constructor: 
//     hero(hero&  temp){
//         this->health=temp.health;
//         this->level=temp.level;
//     }

//     void setHealth(int h){
//         health=h;
//     }

//     void setName(char name[]){
//         strcpy(this->name,name);
//     }
// };

// int main(){
    /*
    //object created statically
    // cout<<"Hii"<<endl;
    hero ramesh;
    // cout<<"hello"<<endl;


    //object created dynamically
    hero *h= new hero;

    /*Concept of Parameterised Constructor and this keyword
        hero(int health){
            this -> health=health; 
        }
    
   hero ramesh(10);
   cout<<"Address of Ramesh "<<&ramesh<<endl;
    return 0;

    hero *h=new hero(11);
    hero temp(22,'B');
    ramesh.print();
    // h->print;

    */

   /* Concept of Copy Constructor: 
   hero S(70,'C');
   S.print();


   hero R(S); // it means here we are copying the constructor
   R.print();
    // basically we mean of the above line that is written below: 
//    R.health=suresh.health;
//    R.level=suresh.level;
   */


  /* Concept of shallow and deep copy */


// }




/* Understanding Concept of Constructor properly: */

#include<iostream>
using namespace std;
class Rectangle{
    public:
    int l;
    int b;
    
    Rectangle(){  //default constructor is called
    l=0;
    b=0;
    }

    Rectangle(int x, int y){ //parameterised construcot -args passed
        l=x;
        b=y;
    }

    Rectangle(Rectangle& r){ //copy constructor : initialise an objecct by another existing object
        l=r.l;
        b=r.b;
    }
}; 
int main(){
    Rectangle r1;
    cout<<r1.l<<" "<< r1.b<<endl;

    Rectangle r2(4,5);
    cout<<r2.l<<" "<<r2.b<<endl;

    Rectangle r3=r2;
    cout<<r3.l<<" "<<r3.b<<endl;
    return 0;

}