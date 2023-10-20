/*
#include<iostream>
using namespace std;
class Rectangle{
    public:
    int length,breadth;

    //function for finding Area: 
    int area(){
        return length*breadth;
    }

    //Function for finding paramenter: 
    int perimeter(){
        return 2*(length+breadth);
    }
};
int main(){
    Rectangle r1,r2;
    r1.length=10;
    r1.breadth=5;
    cout<<"Area of Rectangle is R1 : "<<r1.area()<<endl;
    cout<<"Perimeter of Rectangle is R1 : "<<r1.perimeter()<<endl;

    r2.length=15;
    r2.breadth=10;
    cout<<"Area of Rectangle is R2 : "<<r2.area()<<endl;
    cout<<"Perimeter of Rectangle is R2 : "<<r2.perimeter()<<endl;

    return 0;
}

*/


/* Pointer to Object : 

#include<iostream>
using namespace std;
class Rectangle{
    public:
    int length,breadth;

    //function for finding Area: 
    int area(){
        return length*breadth;
    }

    //Function for finding paramenter: 
    int perimeter(){
        return 2*(length+breadth);
    }
};

int main(){
    //here we are creating object dynamically or inother word we can say object is created in heap:
    Rectangle *p=new Rectangle();
    p->length=10;
    p-> breadth=5;
    cout<<"Area is : "<<p->area()<<endl;
    cout<<"Perimeter is : "<<p->perimeter()<<endl;
    return 0;
}
*/



/* Data Hiding or Encapculation: 

#include<iostream>
using namespace std;
class Rectangle{
    private:
    int length,breadth;

    public: 
    // first set the length then we will try to get the length that is set 
    void setLength(int l){
        if(l>=0){
            length=l;
        }
        else{
            cout<<"Length Can't be Negative Bro : "<<endl;
        }
    }

    void setBreadth(int b){
        if(b>=0){
            breadth=b;
        }
        else{
            cout<<"Breadth can't be Negative Bro: "<<endl;
        }
    }

    // now above we have set the length and breadth now fetcth or get the data 
    int getLength(){
        return length;
    }

    int getBreadth(){
        return breadth;
    }
    //function for finding Area : 
    int area(){
        return length*breadth;
    }

    //Function for finding paramenter: 
    int perimeter(){
        return 2*(length+breadth);
    }
};

int main(){
    Rectangle r1;
    r1.setLength(15);
    r1.setBreadth(10);
    cout<<"Length is : "<<r1.getLength()<<endl;
    cout<<"Breadth is : "<<r1.getBreadth()<<endl;
    cout<<endl<<endl;
    cout<<"Area is : "<<r1.area()<<endl;
    cout<<"Perimeter is : "<<r1.perimeter()<<endl;
    return 0 ;
}

*/


/* Concept Of Constructor : */

#include<iostream>
using namespace std;
class Rectangle{
    private:
    int length,breadth;

    public:

    Rectangle(){
        cout<<"Non-Parameterised Constructor is called : "<<endl;
    }

    Rectangle(int l, int b){
        cout<<"Paramterised Constructor is Called : "<<endl;
        setLength(l);
        setBreadth(b);
    }

    Rectangle(Rectangle &r){
        length=r.length;
        breadth=r.breadth;
    }
    void setLength(int l){
        if(l>=0){
            length=l;
        }
        else{
            length=0;
        }
    }

    void setBreadth(int b){
        if(b>=0){
            breadth=b;
        }
        else{
            breadth=0;
        }
    }

    int getLength(){
        return length;
    }

    int getBreadth(){
        return breadth;
    }

    //function for finding Area: 
    int area(){
        return length*breadth;
    }

    //Function for finding paramenter: 
    int perimeter(){
        return 2*(length+breadth);
    }
};

int main(){
    Rectangle r1(10,20);
    Rectangle r2(r1);

    cout<<"Length is : "<<r2.getLength()<<endl;
    cout<<"Breadth is : "<<r2.getBreadth()<<endl;
    cout<<endl;
    cout<<"Area of R1 is : "<<r1.area()<<endl;
    cout<<"Perimeter of R1 is : "<<r1.perimeter()<<endl;
    cout<<endl;
    cout<<"Area of R2 is "<<r2.area()<<endl;
    cout<<"Perimeter of R2 is "<<r2.perimeter()<<endl;
    return 0;
}