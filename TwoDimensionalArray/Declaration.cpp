/*📌write a programt to store roll number and marks obtained
by 4 students side by side in a matrix

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int m,n;
    cin>>m>>n;
    int arr[100][100];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
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


/*📌Wrie a program to find the largest elment of a given 2D array 
of integers

#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main(){
    int m,n;
    cin>>m>>n;
    int arr[100][100];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    int max = INT_MIN;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]>max){
                max=arr[i][j];
            }
        }
    }
    cout<<max;
    return 0;

}

*/

/*📌Write a programt to print sum of all the elements of 2D matrix

#include<iostream>
#include<vector>
using namespace std;

int main(){
     int m,n;
    cin>>m>>n;
    int arr[100][100];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    int sum=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            sum+=arr[i][j];
        }
    }
    cout<<sum;
    return 0;

}

*/

/*📌Write a program to add two matrices 

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int m,n;
    cin>>m>>n;
    int arr[100][100];
    int arr2[100][100];
    int res[m][n];
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
            res[i][j]=arr[i][j]+arr2[i][j];
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;

}

*/


/*📌Write a program to print the transpose of the matri
entered by the user and store it in a new matrix 

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int m,n;
    cin>>m>>n;
    int arr[100][100];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
    
    return 0;

}

*/

 /*📌write a program to print the multiplication of two 
matrices : 

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int m,n;
    cout<<"enter the size of the first matrix : "<<endl;
    cin>>m>>n;

    int p,q;
    cout<<"enter the size of the second matrix : "<<endl;
    cin>>p>>q;

    int arr1[m][n];
    int arr2[p][q];
    int res[m][q];
    if(n==p){
        cout<<"Enter the elements of the first matrix : \n";
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cin>>arr1[i][j];
            }
        }
        for(int i=0;i<p;i++){
            for(int j=0;j<q;j++){
                cin>>arr2[i][j];
            }
        }

        //resultant matrix 
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                res[i][j]=0;
                for(int k=0;k<p;k++){
                    res[i][j]+=arr1[i][k]*arr2[k][j];
                }
            }
        }

        for(int i=0;i<m;i++){
            for(int j=0;j<p;j++){
                cout<<res[i][j]<<" ";
            }cout<<endl;
        }
    }

    else {
        cout<<"multiplication can't be done \n";
    }
    return 0;

}

 */


/*📌write a program to print the matrix in wave form
*/

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int m,n;
    cin>>m>>n;
    int arr[100][100];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<m;i++){
        if(i%2==0){
            for(int j=0;j<m;j++){
                cout<<arr[i][j]<<" ";
            }
        }
        else{
            for(int j=n-1;j>=0;j--){
                cout<<arr[i][j]<<" ";
            }
        }
        cout<<endl;
    }
    
    return 0;

}