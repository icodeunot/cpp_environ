// a fun lab that gives information about US Highways based on their numbers

#include <iostream>
using namespace std;

int main() {
    int highwayNumber;

    cout << "Please enter a US Highway Number: (e.g. 805)"
         << endl;

    cin >> highwayNumber;

    if ((highwayNumber < 100) && (highwayNumber > 0)) {
        cout << "I-"
            << highwayNumber
            << " is primary, going ";
        if (highwayNumber % 2 == 0) {
            cout << "east/west."
                << endl;
        }
        else {
            cout << "north/south."
                << endl;
        }
    }
    else if ((highwayNumber > 100) && (highwayNumber < 1000)) {
        if (highwayNumber % 100 == 0) {
            cout << highwayNumber
                << " is not a valid interstate highway number."
                << endl;
        }
        else {
            cout << "I-"
                << highwayNumber
                << " is auxiliary, serving I-"
                << highwayNumber % 100
                << ", ";
            if (highwayNumber % 2 == 0) {
                cout << "going east/west."
                    << endl;
            }
            else {
                cout << "going north/south."
                    << endl;
            }
        }
    }
    else {
        cout << highwayNumber
            << " is not a valid interstate highway number."
            << endl;
    }
    return 0;
}
