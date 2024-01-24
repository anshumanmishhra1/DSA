/*📌Write a program to change the given matrix with its 
transpose (leetCode 867)

class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n= matrix[0].size();
        vector<vector<int>> t(n, vector<int>(m));

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                t[i][j]=matrix[j][i];
            }
        }
        return t;
    }
};

*/

/*📌Write a program to rotate the matrix by 90 Deg clockwise(leetcode 48)

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n =matrix.size();
        //first transpose the matrix
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int temp=matrix[i][j];
                matrix[i][j]=matrix[j][i];
                matrix[j][i]=temp;
            }
        }
        //Now reverse the array by each row
        for(int k=0;k<n;k++){
            int i=0;
            int j=n-1;
            while(i<=j){
                int temp=matrix[k][i];
                matrix[k][i]=matrix[k][j];
                matrix[k][j]=temp;
                i++;
                j--;
            }
        }


    }
};

*/

/*📌Given an integer 'numRows', Generate pascal triangle
(LEETCODE 118)

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int m =5;
    vector< vector<int> > v;
    for(int i=1;i<=m;i++){
        vector<int> a(i);
        v.push_back(a);
    }

    //generate
    for(int i=0;i<m;i++){
        for(int j=0;j<=i;j++){
            if(j==0 || i==j){
                v[i][j] = 1;
            }
            else{
                v[i][j]=v[i-1][j]+v[i-1][j-1];
            }
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<=i;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;

}

*/
