/*************************************
 * So, this was the bare minimum for the project. 
 * I plan on adding if statements to correct the grammar. 
 * Probably other Schtuff.  
 * ***********************************/


#include <iostream>
using namespace std;

int main() {

    const int dollar_value {100};
    const int quarter_value {25};
    const int dime_value {10};
    const int nickel_value {5};
    const int penny_value {1};
    
    int user_cent {0};
    
    cout << "How much cents you got? " "(Enter how much money you have in cents) " << endl;
    cin >> user_cent;
    
    int balance{}, dollars{}, quarters{}, dimes{}, nickels{}, pennies{};
    
    dollars = user_cent / dollar_value;
    balance = user_cent - (dollars * dollar_value);
    
    quarters = balance / quarter_value;
    balance -= quarters * quarter_value;
    
    dimes = balance / dime_value;
    balance -= dimes * dime_value;
    
    nickels = balance / nickel_value;
    balance -= nickels * nickel_value;
    
    pennies = balance;
    
    cout << "I owe you: " << endl;
    cout << dollars << " Dollar dollar bills y'all," << endl;
    cout << quarters << " quarters," << endl;
    cout << dimes << " dimes,"<<  endl;
    cout << nickels << " nickels," << endl;
    cout << "and " << pennies << " pennies." << endl;
    cout << "That's super sweet." << endl;
    
    
    return 0;   
}
