#ifndef BIGCOMPANY_H
#define BIGCOMPANY_H

#include "company.h"

class BigCompany : public Company {
public:
  BigCompany() = default;
  BigCompany(const std::string &name, const std::string &place);
  ~BigCompany() = default;
  int calculateSalary(const std::string &codes) override;
};
#endif // !#ifndef BIGCOMPANY_H
