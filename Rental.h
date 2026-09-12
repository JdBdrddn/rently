//
// Created by user on 9/11/2026.
//
#include "Renter.h"
#include "Vehicle.h"
#include <ctime>


#ifndef RENTAL_H
#define RENTAL_H
class Rental {
    public:
    Rental(Renter renter, Vehicle vehicle, std::chrono::year_month_day rentalStart,
           std::chrono::year_month_day forseenRentalEnd, int pricePerDay, int kmStart,
           int kmAllowed, int gasLevelStart);
    void vehicleReturn(int kmEnd, bool newPropertyDamages, int gasLevelEnd);

    private:
    Renter renter;
    Vehicle vehicle;
    std::chrono::year_month_day rentalStart;
    std::chrono::year_month_day rentalEnd;
    int pricePerDay;
    int kmStart;
    int kmEnd;
    int kmAllowed;
    int rentalID;
    int NextRentalID;
    int remainingBalance;
    int paidAmount;
    int gasLevelStart;
    int gasLevelEnd;
    bool newPropertyDamages;
    std::chrono::year_month_day forseenRentalEnd;
    std::chrono::year_month_day realRentalEnd;

};
#endif //RENTAL_H
