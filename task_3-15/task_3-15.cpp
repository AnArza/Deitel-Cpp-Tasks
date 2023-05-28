#include <ctime>
#include <iostream>

#include "HeartRates.h"

int main() {
  std::string fName, lName;
  int year, month, day;
  std::cout << "Enter your name: ";
  std::cin >> fName;
  std::cout << "\nEnter your last name: ";
  std::cin >> lName;
  std::cout << "\nEnter your birth year: ";
  std::cin >> year;
  std::cout << "\nEnter your birth month: ";
  std::cin >> month;
  std::cout << "\nEnter your birth day: ";
  std::cin >> day;

  Date bday{day, month, year};
  HeartRates heartRates{fName, lName, bday};

  std::cout << "Name: " << heartRates.getFirstName()
            << "\nLast name: " << heartRates.getLastName()
            << "\nBirthDay: " << heartRates.getDateOfBirth().getDay() << "/"
            << heartRates.getDateOfBirth().getMonth() << "/"
            << heartRates.getDateOfBirth().getYear()
            << "\nMaximum heart rate: " << heartRates.maxHeartRate()
            << "\nTarget heart rate: ";
  heartRates.targetHeartRate();
  return 0;
}