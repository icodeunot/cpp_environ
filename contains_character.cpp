#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {

   int i, j, vectSize;
   char charSearch;
   bool isIn = false;
   
   cin >> vectSize;
   
   vector<string> wordVec(vectSize);
   
   for (i = 0; i < vectSize; i++) {
      cin >> wordVec.at(i);
   }
   
   cin >> charSearch;
   
   for (i = 0; i < vectSize; i++) {
      for (j = 0; j < wordVec.at(i).size(); j++) {
         if(wordVec.at(i)[j] == charSearch) {
            isIn = true;
         }
      }
      if (isIn) {
         cout << wordVec.at(i)
              << ",";
         isIn = false;
      }
   }
   cout << endl;
   return 0;
}
