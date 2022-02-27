// this is my first "from scratch" version of a sort. 
// i think big O on this is n*n
// can only get better from here... right?

#include <iostream>
#include <vector>
using namespace std;

/* Define your function here */
void SortVector(vector<int>& myVec) {
   int sizer = myVec.size();
   for (int i = 0; i < sizer; i++) {       
      for (int j = 0; j < sizer; j++) {
         if (myVec.at(j) < myVec.at(i)) {
            int temp = myVec.at(i);
            myVec.at(i) = myVec.at(j);
            myVec.at(j) = temp;
         }
      }  
   }
}
int main() {
   /* Type your code here */
   int i, n, vecSize;
   vector<int> myVec;
   
   cin >> vecSize;
   
   for (i = 0; i < vecSize; i++) {
      cin >> n;
      myVec.push_back(n);
   }
   
   SortVector(myVec);
   
   for (i = 0; i < vecSize; i++) {
      cout << myVec.at(i)
           << ",";
   }
   
   cout << endl;

   return 0;
}
