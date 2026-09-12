//
// Created by user on 9/11/2026.
//
#include "Renter.h"

int Renter::renterIdentification = 100;

Renter::Renter(std::string name, std::string lastName, std::string address, std::string phoneNumber, std::string email,
           DriversLicense& driversLicense, CreditCard& creditCard, InsuranceInfo& insuranceInfo):
         name(name),
         lastName(lastName),
         address(address),
         phoneNumber(phoneNumber),
         email(email),
         driversLicense(driversLicense),
         creditCard(creditCard),
         insuranceInfo(insuranceInfo),
         renterID(nextRenterID()){

  }

std::string Renter::getname() {
    return name;
}

std::string Renter::getlastname() {
    return lastName;
};

std::string Renter::getaddress() {
    return address;
};

std::chrono::year_month_day Renter::getBirthday() {
    return driversLicense.dateOfBirth;
};

std::string Renter::getphoneNumber() {
    return phoneNumber;
}
std::string Renter::getemail() {
    return email;
}
void Renter::getcreditcard(){}
void Renter::getInsuranceInfo(){}
void Renter::getlicenseNumber(){}
void Renter::getpolicyNumber(){}
void Renter::isInsured(){}

int Renter::nextRenterID() {
    renterIdentification = ++renterIdentification;
    return renterIdentification;
}