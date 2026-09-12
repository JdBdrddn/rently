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
      std::string creditCardNumber;
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

  //getters

  std::string getname();
  std::string getlastname();
  std::string getaddress();
  std::chrono::year_month_day getBirthday();
  std::string getphoneNumber();
  std::string getemail();
  std::string getcreditcard();
  InsuranceInfo getInsuranceInfo();
  DriversLicense getlicense();
  std::string getpolicyNumber();
  bool isInsured();
  void getHistory();



  //setters
  void setName(std::string& name);
  void setLastname(std::string& lastname);
  void setAddress(std::string& address);
  void setPhoneNumber(std::string& phoneNumber);
  void setEmail(std::string& email);
  void setCreditCard(CreditCard& creditcard);
  void setPolicyNumber(std::string& policyNumber);
  void setInsuranceInfo(InsuranceInfo& insuranceInfo);
  void setLicense(DriversLicense& license);



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
