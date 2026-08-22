#include <iostream>
#include <string>
using namespace std;

int main () {
 
    int Choice;
   cout << "=== PASSWORD LOGIN SYSTEM ===\n" ;
    // While Function
    while(true) {
         cout << "\n 1. Sign Up \n 2. Log In \n 3. Exit \n Your Choice: ";
         cin  >> choice;
         // First IF functin in while
         if (cin.fail()) {
            cin.clear(); 
            cin.ignore(1000, '\n');
            cout << "[!] Invalid input.\n";
            continue;
         }
         // Second IF Function In while
    }
    return 0;
}
