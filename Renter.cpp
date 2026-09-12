//
// Created by user on 9/11/2026.
//
#include "Renter.h"

int Renter::renterIdentification = 0;

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
}

std::string Renter::getaddress() {
    return address;
}

std::chrono::year_month_day Renter::getBirthday() {
    return driversLicense.dateOfBirth;
}

std::string Renter::getphoneNumber() {
    return phoneNumber;
}

std::string Renter::getemail() {
    return email;
}

std::string Renter::getcreditcard() {
    return "************" + creditCard.lastFourDigits;
}

Renter::InsuranceInfo Renter::getInsuranceInfo() {
    return insuranceInfo;
}

Renter::DriversLicense Renter::getlicense() {
    return driversLicense;
}

std::string Renter::getpolicyNumber() {
    return insuranceInfo.policyNumber;
}

bool Renter::isInsured() {
    return insuranceInfo.hasInsurance;
}

int Renter::nextRenterID() {
    renterIdentification = ++renterIdentification;
    return renterIdentification;
}

void getHistory(){
    //TODO

}

void Renter::setName(std::string& name) {
    this->name = name;
}

void Renter::setLastname(std::string& lastname) {
    this->lastName = lastName;
}

void Renter::setAddress(std::string& address) {
    this->address = address;
}

void Renter::setPhoneNumber(std::string& phoneNumber) {
    this->phoneNumber = phoneNumber;
}

void Renter::setEmail(std::string& email) {
    this->email = email;
}

void Renter::setCreditCard(CreditCard& creditcard) {
    this->creditCard = creditcard;
}

void Renter::setPolicyNumber(std::string& policyNumber) {
    insuranceInfo.policyNumber = policyNumber;
}

void Renter::setInsuranceInfo(InsuranceInfo& insuranceInfo) {
    this->insuranceInfo = insuranceInfo;
}

void Renter::setLicense(DriversLicense& license) {
    this->driversLicense = license;
}

