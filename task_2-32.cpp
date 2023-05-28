#include <iostream>

int main() {
  int age{0};
  double mhr1{0}, mhr2{0}, mhr3{0};
  double max{0}, min{0};

  std::cout << "Enter your age: ";
  std::cin >> age;
  mhr1 = 220 - age;
  mhr2 = 208 - 0.7 * age;
  mhr3 = 211 - 0.64 * age;

  if (mhr1 >= mhr2) {
    if (mhr1 >= mhr3) max = mhr1;
    if (mhr1 < mhr3) max = mhr3;
  }
  if (mhr1 < mhr2) {
    if (mhr2 > mhr3) max = mhr2;
  }

  if (mhr1 <= mhr2) {
    if (mhr1 <= mhr3) min = mhr1;
    if (mhr1 > mhr3) min = mhr3;
  }
  if (mhr1 > mhr2) {
    if (mhr2 < mhr3) min = mhr2;
  }

  std::cout << "Your MHR should be from " << min << " to " << max << ".";

  return 0;
}