//
// Created by user on 9/11/2026.
//
#include <stdio.h>
#include "Vehicle.h"

    int Vehicle::ID = 1000;
    /**
    * \fn         Vehicle::Vehicle(std::string model, std::string brand, int VIN, int year, int registration)
    * \param[in]  string model, string brand, int VIN, int year, int registration
    * \brief      Constructor of the class Vehicle
    */
    Vehicle::Vehicle(std::string model, std::string brand, std::string VIN, int year, std::string registration):
     model(model),
     brand(brand),
     VIN(VIN),
     year(year),
     registration(registration),
     vehicleID(nextID()),
     available(true) {
     }


    /**
    * \fn       Vehicle::getModel()
    * \brief    getter of the private value Model.
    */
    std::string Vehicle::getModel() { return model;  }

    /**
    * \fn       Vehicle::getBrand()
    * \brief    getter of the private value Brand.
    */
    std::string Vehicle::getBrand() { return brand; }

    /**
    * \fn       Vehicle::getVIN()
    * \brief    getter of the private value VIN.
    */
    std::string Vehicle::getVIN() { return VIN; }

    /**
    * \fn       Vehicle::getYear()
    * \brief    getter of the private value Year.
    */
    int Vehicle::getYear() { return year; }

    /**
    * \fn       Vehicle::getRegistration()
    * \brief    getter of the private value registration.
    */
    std::string Vehicle::getRegistration() { return registration; }

    /**
    * \fn       Vehicle::getID()
    * \brief    getter of the private vehicle ID.
    */
    int Vehicle::getID() { return vehicleID; }

    /*
    * \fn       nextID()
    * \brief    assigns a new ID each time its called.
    */
    int Vehicle::nextID(){
      ID += 1;
      return ID;
      }

    /*
    * \fn       availability()
    * \brief    returns if the car is available or not.
    */
    bool Vehicle::availability() { return available; }

    /*
    * \fn       setAvailability(bool avail)
    * \brief    setter of the cars availability .
    */
    void Vehicle::setAvailability(bool avail) {
      available = avail;
    }
