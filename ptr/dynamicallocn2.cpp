#include<iostream>
using namespace std;
int main(){

    // 2d allocation in heap dynamic allocation
    int row,col;
    cout<<"Enter row and column -> ";
    cin>>row>>col;

// creating 2d array
    int **arr = new int*[row];
    for(int i=0; i<row; i++){
        arr[i]=new int[col];
    }
// taking input
     for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin>>arr[i][j];
        }
     }
// printing output
cout<<endl<<"Your array is->"<<endl;
      for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
              cout<<arr[i][j]<<" ";
        }
        cout<<endl;
        }
  
//   releasing memory
for(int i=0; i<row; i++){
    delete [] arr[i];
}

delete []arr;


    return 0;
}