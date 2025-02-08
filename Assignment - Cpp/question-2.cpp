#include <iostream>
using namespace std;

int main() {
    int num;

    cout<<"Enter the size of the array: ";
    cin>>num;

    int arr[num], temp;

    cout<<"Enter the elements of the array: ";
    for(int i = 0; i <num; i++) 
    {   
        cin>>arr[i];
    }

    for(int i=0;i<num / 2; i++) {
    temp = arr[i];
    arr[i] = arr[num - i - 1];
    arr[num - i - 1] = temp;
    }

    cout<<"The reversed array is: ";
    for(int i = 0; i < num; i++) {
     cout<<arr[i]<< " ";
    }
    cout<<endl;

    for(int i =0;i< num - 1; i++) {
        int index = i;
    for (int j =i + 1;j<num; j++) {
        if (arr[j]<arr[index]) {
            index = j;
          }
     }

     temp = arr[index];
     arr[index] = arr[i];
     arr[i] = temp;
    }

    cout<<"The second smallest number  is: "<<arr[1] << endl;
    cout<<"The second largest number is: "<<arr[num - 2] << endl;

    return 0;
}
