#include <iostream>
using namespace std;

int main() {
   bool goodPassword;
   string passwordStr;

   int i;
   string newStr;
   
   cin >> passwordStr;
   
   for (i = 0; i < passwordStr.length() - 1; ++i) {
      if (isalpha(passwordStr.at(i))) {
         newStr.push_back(passwordStr.at(i));
         if ((newStr.length() <= 4) && (passwordStr.length() >= 8)) {
            goodPassword = true;
         }
         else {
            goodPassword = false;
         }
      }
   }

   if (goodPassword) {
      cout << "Valid" << endl;
   }
   else {
      cout << "Invalid" << endl;
   }
   
   return 0;
}
