/*📌write a program to print the elements of both the diagonal
in a square matrix : 

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int m,n;
    cin>>m>>n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int s=m-1;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i==j || i+j==n-1){
                cout<<arr[i][j]<<" ";
            }
            else{
                cout<<" ";
            }
        }cout<<endl;
    }

    return 0;

}

*/

/*📌Write a program to rotate the matrix by 90 degree anti-
clock wise 


#include<iostream>
#include<vector>
using namespace std;

int main(){
    int m,n;
    cin>>m>>n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    //first make the transpose of a matrix 
    for(int i=0;i<m;i++){
        for(int j=i+1;j<n;j++){
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }

    //now rotate
    for(int j=0;j<m;j++){
        for(int i=0;i<n/2;i++){
            swap(arr[i][j],arr[n-i-1][j]);
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }
    return 0;

}

*/

/*📌Write a program to print the matrix in wave form down to
up and then up to down

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int m,n;
    cin>>m>>n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }


    for(int j=0;j<n;j++){
        if(j%2!=0){
            for(int i=0;i<m;i++){
                cout<<arr[i][j]<<" ";
            }
        }
        else{
            for(int i=m-1;i>=0;i--){
                cout<<arr[i][j]<<" ";
            }
        }
    }
    return 0;

}

*/


/*📌Given a positive integer n, genereate a nxn matrix filled with 
elements from 1 to n2(n square) in spiral order

*/

#include<iostream>
#include<vector>
using namespace std;

int main(){

    return 0;

}