#ifndef DATE_H
#define DATE_H

class Date {
 public:
  Date(int day, int month, int year);

  int getYear() const;
  void setYear(int year);

  int getMonth() const;
  void setMonth(int month);

  int getDay() const;
  void setDay(int day);

 private:
  int _day;
  int _month;
  int _year;
  static int daysOfMonths[12];
};

#endif