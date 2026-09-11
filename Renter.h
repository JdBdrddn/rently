//
// Created by user on 9/11/2026.
//
#include <string>
#include<ctime>
#include<chrono>

#ifndef RENTER_H
#define RENTER_H
class Renter {
  public:
    std::string name;

    struct DriversLicense{
      std::string licenseNumber;
      std::string issuingCountry;
      std::chrono::year_month_day LicensedateOfIssuing;
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
      std::string insuranceCarrier;
      std::string policyNumber;
      std::chrono::year_month_day insuranceStartOfCoverage;
      std::chrono::year_month_day insuranceExpiry;
      };


  private:
    int clientID;
    CreditCard creditCard;
    InsuranceInfo insuranceInfo;
    DriversLicense driversLicense;
    std::string lastName;
    std::chrono::year_month_day dateOfBirth;
    std::string address;

};
#endif //RENTER_H
