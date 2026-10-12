#include "Car.h"
#include <iostream>

// --- Window ---
void Window::rollDown() {
    std::cout << "Rolling down window" << std::endl;
}

// --- Door ---
void Door::openDoor() {
    std::cout << "Opening door" << std::endl;
}

// --- Engine ---
void Engine::startEngine() {
    std::cout << "Starting engine" << std::endl;
}

void Engine::accelerate() {
    std::cout << "Accelerating, vroom" << std::endl;
}

// --- Tire ---
void Tire::inflateTire(int psi) {
    std::cout << "Inflating tire to " << psi << " psi ..." << std::endl;
}


Car::Car(double volume,const std::string& size)
    : engineObject{volume},
      tireObjects{Tire{size}, Tire{size}, Tire{size}, Tire{size}} {}

void Car::beginDrive() {
    driverDoor.openDoor();
    engineObject.startEngine();
    passengerDoor.windowObject.rollDown();
    tireObjects[2].inflateTire(32);
    engineObject.accelerate();
}
