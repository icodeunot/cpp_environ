// this took my several HOURS to figure out.
// there are easier ways with find() and sort() and other built-in functions,
// but i haven't learned them yet and this is what i came up with.
// sorry for the formatting. i haven't coded professionally yet.
//
// zyBooks C 867 C++ lab 6.22: 
// Write a program that reads a list of words. 
// Then, the program outputs those words and their frequencies. 
// The input begins with an integer indicating the number of words that follow. 
// Assume that the list will always contain fewer than 20 words.

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {

   int i, j, wordCount, vecSize;       // declare the integers
   string word, vecString;             // declare the strings
   vector<string> stringVec;           // declare the vector

   cin >> vecSize;                     // get the vector size from initial input
      
   while (cin >> vecString) {                   // fill a vector with strings while there are strings from input
      stringVec.push_back(vecString);
   }
   wordCount = 0;                               // initialize wordCounter and compare stings by vector position
   for (i = 0; i < vecSize; i++) {
         for (j = 0; j < vecSize; j++) {
            if (stringVec.at(i) == stringVec.at(j)) {
               wordCount += 1;            // iterate wordCount with each word. (will run once for .at(n) == .at(n)
            }
         }
         cout << stringVec.at(i)          // print out each string in the vector and their counts from above
              << " - "
              << wordCount
              << endl;
              wordCount = 0;
   }
   
   return 0;
}
