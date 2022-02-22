/*
* The solutions I saw online failed. 
*  I have added the line to delete the original data value.
*  Otherwise, the program does not clear the data
*  and we get a memory leak. 
*  _js
*/


#include <iostream>
using namespace std;

class CarCounter {
public:
    CarCounter();
    ~CarCounter();
    CarCounter& operator=(const CarCounter& objToCopy);
    void SetCarCount(const int setVal) {
        *carCount = setVal;
    }
    int GetCarCount() const {
        return *carCount;
    }
private:
    int* carCount;
};

CarCounter::CarCounter() {
    carCount = new int;
    *carCount = 0;
}

CarCounter::~CarCounter() {
    delete carCount;
}

// FIXME write copy assignment operator

/* Your solution goes here  */
CarCounter& CarCounter::operator=(const CarCounter& objToCopy) {
    if (this != &objToCopy) {
        delete carCount;
        carCount = new int;
        *carCount = *(objToCopy.carCount);
    }
    return *this;
}
/* My solution ends here ^^^ */

int main() {
    CarCounter frontParkingLot;
    CarCounter backParkingLot;
    int count;

    cin >> count;

    frontParkingLot.SetCarCount(count);
    backParkingLot = frontParkingLot;

    cout << "Cars counted: " << backParkingLot.GetCarCount();

    return 0;
}