// commenting to see if I am Gitting right in Vim and the terminal
// feb. 4, 2022.
// vim is hard.
#include <iostream>
#include <vector>
using namespace std;

int main() {

   int input;
   int i;

   vector<int> intVect;
   
   cin >> input;
   
   while (input != -1) {
      intVect.push_back(input);
      cin >> input;
   }
   
   
   if (intVect.at(intVect.size() - 1) < 0) {
      for (i = 0; i < intVect.size(); ++i) {
         if (intVect.at(i) < 0) {
            cout << intVect.at(i)
                 << endl;
         }
      }
   }
   else if (intVect.at(intVect.size() - 1) > 0) {
      for (i = 0; i < intVect.size(); ++i) {
         if (intVect.at(i) > 0) {
            cout << intVect.at(i)
                 << endl;
         }
      }
   }

   return 0;
}

