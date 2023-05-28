#include "HeartRates.h"

#include <ctime>

HeartRates::HeartRates(std::string fName, std::string lName, Date& bday)
    : _firstName{fName}, _lastName{lName}, _dateOfBirth{bday} {}

std::string HeartRates::getFirstName() const { return _firstName; }

void HeartRates::setFirstName(std::string firstName) { _firstName = firstName; }

std::string HeartRates::getLastName() const { return _lastName; }

void HeartRates::setLastName(std::string lastName) { _lastName = lastName; }

const Date& HeartRates::getDateOfBirth() const { return _dateOfBirth; }

void HeartRates::setDateOfBirth(Date& date) { _dateOfBirth = date; }

int HeartRates::calculateAge() {
  time_t now = time(NULL);
  struct tm* localTime = localtime(&now);

  int currentYear = localTime->tm_year + 1900;
  int currentMonth = localTime->tm_mon + 1;
  int currentDay = localTime->tm_mday;

  int age = currentYear - _dateOfBirth.getYear();
  if (currentMonth < _dateOfBirth.getMonth() ||
      (currentMonth == _dateOfBirth.getMonth() &&
       currentDay < _dateOfBirth.getDay())) {
    age--;
  }

  return age;
}

int HeartRates::maxHeartRate() { return 220 - calculateAge(); }

void HeartRates::targetHeartRate() {
  std::cout << "from " << 0.5 * maxHeartRate() << " to "
            << 0.85 * maxHeartRate();
}