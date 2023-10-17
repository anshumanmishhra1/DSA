#include<iostream>
using namespace std;
void update2(int &n){
    n++;
}
void update1(int n){
    n++;
}

//BAD PRACTICE: 
int& update(int a){
    int num=a; 
    int &ans=num;
    return ans;
    // all num, ans is local variable so its will show error
}  

int getSum(int *arr, int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    return sum;
}
int main(){
    /*
    int i=5;

    //creating a reference variable
    int &j=i;
    cout<<i<<endl;
    i++;
    cout<<i<<endl;
    j++; // it means i++ as it is reference of i
    cout<<j<<endl;
    cout<<i<<endl; // same as j as i is named as j

    
   int n=5;
   cout<<"before"<<n<<endl; // will print 5
   update1(n);
   cout<<"after update1: "<<n <<endl; //will print 5

    update2(n); //it will print 6
    cout<<"after update2: "<<n<<endl;
    

    

   //ARRAYS :
   int n;
   cin>>n;
   int arr[n]; //it's bad practice because we are fixing the size of array before compilation
   int arr[100]; //it's a good practice;

   

  char ch='q';
  cout<<sizeof(ch)<<endl;
  char* c=&ch;
  cout<<sizeof(c)<<endl;



    // creating variable size array:
    int n;
    cin>>n;

    int *arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=getSum(arr,n);
    cout<<"Ans is : "<<ans<<endl;

  */

// case 1: we are taking 1 int memory that is 4

// while(true){
//     int i=5;
// } 
    

// case 2: heap memory isn't terminated and start storing and as memory full then system crash
// while(true){
//     int *p=new int;
//     delete []arr; for deleting memory
// }
}