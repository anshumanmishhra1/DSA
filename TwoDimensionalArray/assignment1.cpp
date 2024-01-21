/*📌write a program to store 10 at every index of 2d matrix
with 5 rows and 5 columns 
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
    
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            arr[i][j]=10;
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;

}

*/

/*📌Write a program to add two matrices and save the result in
one of the given matrices 

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int m,n;
    cin>>m>>n;
    int arr[m][n];
    int arr2[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr2[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            arr[i][j]=arr[i][j]+arr2[i][j];
        }
    }
    cout<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }
    return 0;

}

*/

/*📌Given a matrix 'A' of dimension nxm and 2 coordinates
(l1,r1) and (l2,r2). Return the sum of recatnagle from (l1,r1)
to (l2,r2)

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int m,n;
    cin>>m>>n;
    cout<<"Enter the 1st cordinates"<<endl;
    int l1,r1,l2,r2;
    cin>>l1>>r1;
    cout<<"Enter the 2nd cordinates"<<endl;
    cin>>l2>>r2;
    int arr[m][n];
    cout<<"Enter matrix elements : \n";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int sum=0;
    for(int i=min(l1,l2);i<=max(l1,l2);i++){
        for(int j=min(r1,r2);j<=max(r1,r2);j++){
            sum+=arr[i][j];
        }
    }
    cout<<sum;
    return 0;

}

*/

/*📌Write a program to print the row number having the max
sum in a given matrix : 

#include<iostream>
#include<vector>
#include<climits>
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

    int max= INT_MIN;
    int idx=-1;

    for(int i=0;i<m;i++){
        int sum=0;
        for(int j=0;j<n;j++){
            sum+=arr[i][j];
        }

        if(max<sum){
            max=sum;
            idx=i;
        }
    }

    cout<<idx;
    return 0;

}

*/ 

/*📌write a program to display the elements of middle row
and the elemnts of middle column of a 2d matrix
*/
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

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i==m/2 || j==n/2){
                cout<<arr[i][j]<<" ";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;

}