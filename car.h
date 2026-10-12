#ifndef CAR_H
#define CAR_H

#include <string>

class Window {
public:
    void rollDown();
};

class Door {
public:
    Window windowObject;
    void openDoor();
};

class Engine {
public:
    double engineVolume = 3.0;

    void startEngine();
    void accelerate();
};

class Tire {
public:
    std::string tireSize = "15";

    void inflateTire(int psi);
};

class Car {
public:
    Engine engineObject;
    Tire tireObjects[4];
    Door driverDoor{};
    Door passengerDoor{};

    Car(double volume, std::string &size);

    Car(double volume, const std::string& size);
    void beginDrive();
};

#endif