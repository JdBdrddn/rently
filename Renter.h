//
// Created by user on 9/11/2026.
//
#include <string>
#include<chrono>
#include "Rental.h"

#ifndef RENTER_H
#define RENTER_H
class Renter {
  public:

    struct DriversLicense{
      std::string licenseNumber;
      std::string issuingCountry;
      std::chrono::year_month_day dateOfBirth;
      std::chrono::year_month_day LicenseDateOfIssuing;
      std::chrono::year_month_day LicenseExpiryDate;
      };

    struct CreditCard {
      enum provider {
        MasterCard,
        Visa,
        Amex,
        Discover};
      provider provider;
      std::string encryptedCreditCardNumber;
      int lastFourDigits;
      std::chrono::year_month creditCardExpirationDate;
      int cvvNumber;
    };

    struct InsuranceInfo {
      bool hasInsurance;
      std::string insuranceCarrier;
      std::string policyNumber;
      std::chrono::year_month_day insuranceStartOfCoverage;
      std::chrono::year_month_day insuranceExpiry;
      };

  Renter(std::string name, std::string lastName, std::string address, std::string phoneNumber, std::string email,
             DriversLicense& driversLicense, CreditCard& creditCard, InsuranceInfo& insuranceInfo);

  std::string getname();
  std::string getlastname();
  std::string getaddress();
  std::chrono::year_month_day getBirthday();
  std::string getphoneNumber();
  std::string getemail();
  void getcreditcard();
  void getInsuranceInfo();
  void getlicenseNumber();
  void getpolicyNumber();
  void isInsured();





  private:
  std::string name;
  std::string lastName;
  std::string address;
  std::string phoneNumber;
  std::string email;
  int renterID;
  CreditCard creditCard;
  InsuranceInfo insuranceInfo;
  DriversLicense driversLicense;
  int static renterIdentification;
  int nextRenterID();
  std::vector<Rental> history;


};
#endif //RENTER_H
