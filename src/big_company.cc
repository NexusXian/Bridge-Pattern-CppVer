#include "../includes/big_company.h"
int BigCompany::calculateSalary(const std::string &codes) {
  int salary = codes.size() * 1000;
  return salary;
}

BigCompany::BigCompany(const std::string &name, const std::string &place)
    : Company(name, place) {}
