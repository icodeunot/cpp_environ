#include <iostream>
using namespace std;

int main() {

   // member items (I know it's not a function, lab doesn't call for one)

   int amount, dol, qu, dime, ni, pe;
   
   // get the amount of moneys and check for positive value
   
   cin >> amount;
   
   if (amount < 1) {
      cout << "No change"
           << endl;
   }
   
   else {
   
   // more member items

   int d, q, di, n, p;
   
   d = 100;
   q = 25;
   di = 10;
   n = 5;
   p = 1;
   
   // dollar calc
   
   dol = amount / d;    // dollars in user amount   
   int dVal = dol * d;  // total value of amount counted so far
   
   while (dol != 0) {
      if (dol < 2) {
         cout << dol
              << " Dollar"
              << endl;
      }
      else{
         cout << dol 
              << " Dollars"
              << endl;
      }
   break;
   }

   // quarter calc

   qu = ((amount - dVal) / q);     // quarters in user amount after dollars netted
   int dqVal = dVal + (qu * q);    // total value of amount counted so far
   
   while (qu != 0) {
      if (qu < 2) {
         cout << qu
              << " Quarter"
              << endl;
      }
      else{
         cout << qu 
              << " Quarters"
              << endl;
      }
   break;
   }
   
   // dime calc
   
   dime = ((amount - dqVal) / di);      // dimes used in amount after dollars and quarters netted
   int dqdVal = dqVal + (dime * di);    // total value of amount counted so far
   
   while (dime != 0) {
      if (dime < 2) {
      cout << dime
           << " Dime"
           << endl;
      }
      else{
         cout << dime 
              << " Dimes"
              << endl;
      }
   break;
   }   
   
   // nickel calc
   
   ni = ((amount - dqdVal) / n);        // nickels used in amount after dollars, quarters, and dimes netted
   int dqdnVal = dqdVal + (ni * n);    // total value of amount counted so far
   
   while (ni != 0) {
      if (ni < 2) {
         cout << ni
              << " Nickel"
              << endl;
      }
      else{
         cout << ni 
              << " Nickels"
              << endl;
      }  
   break;
   }
   
   // pennies calc

   pe = ((amount - dqdnVal) / p);    // total pennies used after all other values netted
                                     // not necessary to obtain total value, as it is == int amount
                                     
   while (pe != 0) {
      if (pe < 2) {
         cout << pe
              << " Penny"
              << endl;
      }
      else{
         cout << pe 
              << " Pennies"
              << endl;
      }  
   break;
   }
   return 0;
   }
}