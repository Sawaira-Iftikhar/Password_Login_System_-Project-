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

<<<<<<< HEAD
//this function is used for signUp function
bool usernameExists(string uname) {
     for (int i = 0; i < totalUsers; i++) {
         if (usernames[i] == uname)
            return true;
     }
     return false;
=======
// Function that is going to use in SignUp Function"
bool usernameExits(){
   
>>>>>>> 40867f1815ae86f12fdba80681c70bfb54710d35
}

// SignUp Function
void SignUp() {
   
   // Display SignUp heading
   cout << "\n=== SIGN UP ===\n";
 
   // Check if maximum number of users has been reached
   if (totalUsers >= MAX_USERS) {
      cout << "[!] User limit reached.\n";
      return;
   }

   // Declare variables for username and password
   string newUser, newPass, confirmPass;

   // Username validation loop
   while (true) {
      cout << "Enter username : ";
      cin >> newUser;
      if (newUser.length() < 3) {
         cout << "[!] Username must be at least 3 characters.\n";
         continue;
      }
      if (usernameExists(newUser)) {
         cout << "[!] Username already taken. Try another.\n";
         continue;
      }
      break;
   }

   cin.ignore();
  // Password validation Loop
   while (true) {
         cout << "Enter password : ";
         cin >> newPass;
         if ((int)newPass.length() < MIN_PASS_LEN) {
            cout << "[!] Password must be at least "<< MIN_PASS_LEN << " characters.\n";
            continue;
    }     
      cout << "Confirm password: ";
      cin >> confirmPass;
      if (newPass != confirmPass) {
         cout << "[!] Passwords do not match. Try again.\n";
         continue;
      }
      break;
   }
   
   // Save account
   usernames[totalUsers] = newUser;
   passwords[totalUsers] = newPass;
   totalUsers++;

   cout << "\n[OK] Account created! You can now log in.\n";
}

// LogIn Function
void logIn() {
   cout << "\n=== LOG IN ===\n";

   // Guard: block execution if no accounts exist
   if (totalUsers == 0) {
      cout << "[!] No accounts found. Please sign up first.\n";
      return;
   }

   string inputUser, inputPass;

   int attempts = 0;
   bool success = false;

   cout << "Enter username : ";
   cin >> inputUser;

   // Reject unvalidated usernames before password entry
   int idx = findUser(inputUser);
   if (idx == -1) {
      cout << "[!] Username not found. Please sign up first.\n";
      return;
   }

   cin.ignore();  // Flush newline left in input buffer

   // Authenticate within allowed retry limits
   while (attempts < MAX_ATTEMPTS) {
      cout << "Enter password : ";
      cin >> inputPass;

      if (passwords[idx] == inputPass){
          success = true;
          break;  // Access granted
      } else {
          attempts++;
          int remaining = MAX_ATTEMPTS - attempts;
          if (remaining > 0)
              cout << "[!] Wrong password. " << remaining << " attempt(s) left.\n";
      }
   }

   // Display session outcome banner
   if (success) {
       cout << "\n******************************\n";
       cout << "  Welcome, " << inputUser << "!\n";
       cout << "  You are now logged in.\n";
       cout << "  Have a great session!\n";
       cout << "******************************\n";
   } else {
       cout << "\n[X] Too many failed attempts. Account locked.\n";
   }
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
