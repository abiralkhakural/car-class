#include <iostream>
#include <string>
#include "Car.h"

int main() {
    // Create car object using the overloaded constructor[cite: 1, 2]
    Car koenigsegg(3.0, "P215/65R15");
    std::cout << "Engine volume (in liters) is: " << koenigsegg.engineObject.engineVolume << std::endl;
    std::cout << "All 4 tire specifications are: " << koenigsegg.tireObjects->tireSize << std::endl;
    std::cout << std::endl;
    koenigsegg.beginDrive();

    return 0;
}