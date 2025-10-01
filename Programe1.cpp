#include <iostream>
using namespace std;

int main(){
    int m,n,i,j;
    cout<<"Enter the number of rows in the matrix: ";
    cin>>m;
    cout<<"Enter the number of columns in the matrix: ";
    cin>>n;

  
    int a[m][n];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cout<<"Enter the ["<<i+1<<","<<j+1<<"]th element: ";
            cin>>a[i][j];
        }
    }
  
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}

