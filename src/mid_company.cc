#include "../includes/mid_company.h"
int MidCompany::calculateSalary(const std::string &codes) {
  int salary = codes.size() * 800;
  return salary;
}
MidCompany::MidCompany(const std::string &name, const std::string &place)
    : Company(name, place) {}
