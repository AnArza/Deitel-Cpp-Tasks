#include "Date.h"

int Date::daysOfMonths[12] = {31, 28, 31, 30, 31, 31, 30, 31, 30, 31, 30, 31};

Date::Date(int day, int month, int year) {
  setYear(year);
  setMonth(month);
  setDay(day);
}

int Date::getYear() const { return _year; }

void Date::setYear(int year) {
  if (year > 0) {
    _year = year;
  } else {
    _year = 1;
  }
}

int Date::getMonth() const { return _month; };

void Date::setMonth(int month) {
  if (month > 0 && month <= 12) {
    _month = month;
  } else {
    _month = 1;
  }
}

int Date::getDay() const { return _day; }

void Date::setDay(int day) {
  if (day > 0 && day <= daysOfMonths[_month - 1]) {
    _day = day;
  } else if (day == 29 && _year % 4 == 0) {
    _day = day;
  } else {
    _day = 1;
  }
}
