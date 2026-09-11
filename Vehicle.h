//
// Created by user on 9/11/2026.
//

#ifndef VEHICLE_H
#define VEHICLE_H
#include <string>

class Vehicle {
  public:
    Vehicle(std::string model, std::string brand, std::string VIN, int year, std::string registration);
    std::string getModel();
    std::string getBrand();
    std::string getVIN();
    int getYear();
    std::string getRegistration();
    std::string setModel(std::string model);
    std::string setBrand(std::string brand);
    void setVIN(std::string VIN);
    void setYear(int year);
    void setRegistration(std::string registration);
    int getID();
    bool availability();
    void setAvailability(bool avail);

  private:
    std::string model;
    std::string brand;
    std::string VIN;
    int year;
    std::string registration;
    int vehicleID;
    int static ID ;
    int nextID();
    bool available;
};
#endif //VEHICLE_H
