#include <iostream>
#include "CarbonFootprint.h"
#include "Car.h"
#include "Building.h"
#include "Bicycle.h"
#include <vector>
using namespace std;

int main()
{
    Car car(80, 5);
    Building building(30, 300);
    Bicycle bicycle(30);

    std::vector<CarbonFootprint*>vectorOfObjects(3);
    vectorOfObjects[0] = &car;
    vectorOfObjects[1] = &building;
    vectorOfObjects[2] = &bicycle;

    for (int i = 0; i < vectorOfObjects.size(); i++) {
        vectorOfObjects[i]->getCarbonFootprint();
        std::cout << "\n\n";
    }
}