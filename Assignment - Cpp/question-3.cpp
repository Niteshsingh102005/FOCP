// question-3
#include <iostream>
using namespace std;

int main() {
    int freq[26] = {0};
    string str;

    cout<<"Enter a string: ";
    cin>>str;

    int size = 0;
    while (str[size] !='\0') {
        if(str[size] >= 'a' && str[size] <= 'z') {
            str[size] = 32;
        }
        size++;
    }
    int i=0;
    while (i<size / 2) {
        char temp =str[i];
        str[i]=str[size - i - 1];
        str[size - i - 1] = temp;
        i++;
    }

    int palindrome= 1;  // 1 represents true, 0 represents false
    for (int i = 0; i < size / 2; i++) {
        if (str[i] != str[size - i - 1]) {
            palindrome = 0;
            break;
        }
    }

    if (palindrome == 1) {
        cout<<" string is palindrome."<<endl;
    } else {
        cout<<"string is not palindrome."<<endl;
    }

    for (char &ch : str) {
        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            ch = '*';
        }
    }// T.O.

    cout<<"The modified string is: "<<str<<endl;

    for (char ch : str) {
        if (ch >= 'A' && ch <= 'Z') {
            freq[ch - 'A']++;
        }
    }

    cout<<"Character frequencies: "<<endl;
    for (int i = 0; i <26; i++) {
        if (freq[i] > 0) {
            cout<<(char)('A' + i)<<": "<<freq[i]<<endl;
        }
    }

    return 0;
}
