#include <iostream>
#include <string>
using namespace std;

// Constant variables
const int MAX_USERS = 10;
const int MAX_ATTEMPTS = 3;
const int MIN_PASS_LEN  = 6;

//String variables 
string usernames[MAX_USERS];
string passwords[MAX_USERS];
int totalUsers = 0;

// SignIn Function

// LogIn Function
void logIn() {
   cout << "\n=== LOG IN ===\n";
   // Guard: block execution if no accounts exist
}

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
         if (choice == 1) signUp();
         else if (choice == 2) logIn();
         else if (Choice == 3) {
            cout << "Goodbye!\n"; 
            break;
         }
         else cout <<"[!] Enter 1,2, or 3.\n";
    }
    return 0;
}
