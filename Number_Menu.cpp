#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    vector<int> numbers {};
    char selection {};
    
    do {
        cout << "----------------------------------" << endl;
        cout << "Please choose an option below: " << endl;
        cout << "\nP - Print number" << endl;
        cout << "A - Add a number" << endl;
        cout << "M - Display mean of the numbers" << endl;
        cout << "S - Display the smallest number" << endl;
        cout << "L - Display the largest number" << endl;
        cout << "Q - Quit" << endl;
        cout << "\nEnter your choice: ";
        cin >> selection;
        
        if (selection == 'P' || selection == 'p') {
            if (numbers.size() == 0)
                cout << "[] - the list is empty" << endl;
            else {
                cout << "[ ";
                for (auto num: numbers)
                    cout << num << " ";
                cout << "]" << endl;
            }
        }
        else 
            if (selection == 'A' || selection == 'a') {
                int num_to_add {};
                cout << "Enter an integer to add to the list: ";
                cin >> num_to_add;
                numbers.push_back(num_to_add);
                cout << num_to_add << " added" << endl;
            }
        else
            if (selection == 'M' || selection == 'm') {
                if (numbers.size() == 0)
                    cout << "Unable to calculate mean - no data" << endl;
                else {
                    int mean {};
                        for (auto num: numbers) 
                            mean += num;
                        cout << "The mean is: " << static_cast<double>(mean) / numbers.size() << endl;
                } 
            }
        else
            if (selection == 'S' || selection == 's') {
                if (numbers.size() == 0)
                    cout << "Unable to determine the smallest - list is empty" << endl;
                else {
                    int smallest = numbers.at(0);
                    for (auto num: numbers)
                        if (num < smallest)
                            smallest = num;
                    cout << "The smallest number is: " << smallest << endl;
                }
            }
        else
            if (selection == 'L' || selection == 'l') {
                if (numbers.size() == 0)
                    cout << "Unable to determine the largest - list is empty" << endl;
                else {
                    int largest = numbers.at(0);
                    for (auto num: numbers)
                        if (num > largest)
                            largest = num;
                    cout << "The largest number is : " << largest << endl;
                }
            }
        else 
            if (selection == 'Q' || selection == 'q') {
                cout << "\n*********************************************" << endl;
                cout << "* Don't let the door hit ya on the way out! *" << endl;
                cout << "*********************************************" << endl;
            }
        else {
            cout << "\nUnknown selection, please try again" << endl;
        }
    
    } while (selection != 'q' && selection != 'Q');
    
            
    cout << endl;
    return 0;   
}
