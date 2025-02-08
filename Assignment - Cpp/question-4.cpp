// question-4
#include <iostream>
using namespace std;

int main() {
    int mat[3][3];

    cout<<"Enter the elements of the 3x3 matrix:  "<<endl;
    for(int i = 0;i < 3; i++) {
        for(int j = 0;j < 3; j++) {
            cin>>mat[i][j];
        }
    }

    cout<<"The rotated matrix is: "<<endl;
    for (int j = 0; j <3; j++) {
        for (int i = 2; i >= 0; i--) {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
