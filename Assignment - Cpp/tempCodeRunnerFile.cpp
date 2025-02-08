// question 1
#include <iostream>
using namespace std;

// //prototype
// void Factors(int n);
// void NextPrime(int n);
// void Prime(int n);

void Prime(int n) {
    if (n <= 1) {    
    cout << "The number is not prime " << n << endl;
    return;
    }

    for (int i = 2; i <= n / 2; i++) {
     if (n % i == 0) {
        cout << "this number is not a prime " << n << endl;
        Factors(n); //call function 
        return;
        }
    }

    cout << n << " is a prime number.\n";

    NextPrime(n);
}

void Factors(int n) {
    cout << "Factors of " << n << " are: ";
    for (int i = 1; i <= n; i++)
        if (n % i == 0) cout << i << " ";
    cout << endl;
}

void NextPrime(int n) {
    for (n++; ; n++) {  
    int i;
    for (i = 2; i <= n / 2; i++)
         if (n % i == 0)
        break;
        
    if (i > n / 2) {  
    cout << "The next prime number is " << n << ".\n";
    return;
     }
    }
}

int main() {
    int n;
    cout << "Enter number : ";
    cin >> n;
    Prime(n);
    return 0;
}
