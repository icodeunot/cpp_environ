#include <iostream>
#include <vector>
using namespace std;

int main() {
   const int NUM_POINTS = 4;
   vector<int> oldData(NUM_POINTS);
   vector<int> newData(NUM_POINTS);
   unsigned int i;

   for (i = 0; i < oldData.size(); ++i) {
      cin >> oldData.at(i);
   }

   for (i = 0; i < newData.size(); ++i) {
      cin >> newData.at(i);
   }

   bool dataMatches = false;
   
   for (i = 0; i < NUM_POINTS; ++i) {
      if (oldData.at(i) != newData.at(i)) {
         oldData.at(i) = newData.at(i);
      }
      else {
         dataMatches = true;
      }
   }
   
   if (dataMatches == true) {
      cout << "Data matches!"
        << endl;
   }

   for (i = 0; i < oldData.size(); ++i) {
      cout << oldData.at(i) << " ";
   }
   cout << endl;

   return 0;

}
