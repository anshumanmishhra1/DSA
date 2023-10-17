// // #include<iostream>
// // using namespace std;

// // class hero{
// //     private:
// //     int health;
// //     public:
// //     char level;

// //     //understanding setter:
// //     int getHealth(){
// //         return health;
// //     }

// //     char getLevel(){
// //         return level;
// //     }

// //     //Understanding setter
// //     int setHealth(int h){
// //         health=h;
// //     }

// //     char setLevel(char ch){
// //         level=ch;
// //     }
// // };

// // int main(){
//     // hero ramesh;
//     // ramesh.level='A';
//     // ramesh.setHealth(70);
//     // cout<<"level of ramesh : "<<ramesh.level<<endl;
//     // cout<<"halth of ramesh : "<<ramesh.getHealth();


//     // Static vs Dynamically

//     // hero a;
//     // a.setHealth(70);
//     // a.setLevel('A'); 
//     // cout<<"a health is : "<<a.getHealth()<<endl;
//     // cout<<"a level is : "<<a.level<<endl; // this static allocation


//     // hero *b=new hero;
//     // (*b).setHealth(80);
//     // cout<<"New Hero health is: "<<(*b).getHealth();
//     // b->setHealth(90);
//     // cout<<"New Hero health is: "<<b->getHealth();


// // }


// /* Copy Constructor : */

// #include<iostream>
// #include<string.h>

// using namespace std;

// class hero{
//     private:
//     int health;
//     public:
//     char level;
//     char *name;
//     static int timetoComplete;


//     hero(){
//         cout<<"Simple Constructor Called: "<<endl;
//         name=new char[100];
//     }

//     hero (int health){
//         this-> health=health;

//     }

//     hero(int health, char level){
//         this-> level= level;
//         this-> health= health;
//     }


//     //copy constructor :

//     hero(hero& temp){
//         // deep copy :

//         char *ch = new char[strlen(temp.name)+1];
//         strcpy(ch,temp.name);
//         this->name=ch;
//         cout<<"copy constructor called :"<<endl;
//         this-> health=temp.health;
//         this->level=temp.level;
//     }
//     void print(){
//         cout<<endl;
//         cout<<"name : "<<this->name<< " ,";
//         cout<<"health"<<this -> health<<" ,";
//         cout<<"level"<< this -> level<<endl;
//     }
//     //understanding setter:
//     int getHealth(){
//         return health;
//     }

//     char getLevel(){
//         return level;
//     }

//     //Understanding setter
//     int setHealth(int h){
//         health=h;
//     }

//     char setLevel(char ch){
//         level=ch;
//     }

//     static int random(){
//         return timetoComplete;
//     }

//     void setName(char name[]){
//         strcpy(this->name, name);
//     }
//     // Destructor 
//     ~hero(){
//         cout<< "Destructor bhai called :" << endl;
//     }

// };

// int hero :: timetoComplete = 5; // used for static

    

// int main(){
//     // hero suresh;
//     // // suresh.setHealth(70);
//     // // suresh.setLevel('c'); we can write this in another way

//     // hero s(70,'A');
//     // s.print();

//     // //copy constructor called: 
//     // hero r(s);
//     // r.print();   


//     // hero hero1;
//     // hero1.setHealth(12);
//     // hero1.setLevel('D');
//     // char name[7]="Anshu";
//     // hero1.setName(name);

//     // hero1.print();


//     // // Use default copy constructor:
//     // hero hero2(hero1);
//     // hero2.print();
//     // //hero hero2=her01;

//     // hero1.name[0]='G';
//     // hero1.print();


//     /* Destructor : */
//     //static

//     // hero a ;

//     // // dynamic:
//     // hero *b= new hero;
//     // delete b;


//     /* Static : */

//     // cout<<hero :: timetoComplete<<endl;
     
//     cout<<hero::random()<<endl;


//     }


    



