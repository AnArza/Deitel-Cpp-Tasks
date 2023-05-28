#include <iostream>

int main() {
  int milesPerDay{0};
  int gallonGasCost{0};
  int avgMilePerGallon{0};
  int parkingFeePerDay{0};
  int tollsPerDay{0};
  int costPerDay{0};

  std::cout << "Miles per day: ";
  std::cin >> milesPerDay;
  std::cout << "\nCost per gallon of gas: ";
  std::cin >> gallonGasCost;
  std::cout << "\nAverage miles per gallon: ";
  std::cin >> avgMilePerGallon;
  std::cout << "\nParking fees per day: ";
  std::cin >> parkingFeePerDay;
  std::cout << "\nTolls per day: ";
  std::cin >> tollsPerDay;

  costPerDay = milesPerDay * (gallonGasCost / avgMilePerGallon) +
               parkingFeePerDay + tollsPerDay;
  std::cout << "\nCost per day is " << costPerDay << " .";

  return 0;
}