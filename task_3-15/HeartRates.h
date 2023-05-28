#include <iostream>

#include "Date.h"

#ifndef HEART_RATES
#define HEART_RATES

class HeartRates {
 public:
  HeartRates(std::string fName, std::string lName, Date& bday);

  std::string getFirstName() const;
  void setFirstName(std::string fName);

  std::string getLastName() const;
  void setLastName(std::string lName);

  const Date& getDateOfBirth() const;
  void setDateOfBirth(Date& date);

  int calculateAge();
  int maxHeartRate();
  void targetHeartRate();

 private:
  std::string _firstName;
  std::string _lastName;
  Date _dateOfBirth;
};
#endif