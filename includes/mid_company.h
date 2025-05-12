#ifndef MIDCOMPANY_H
#define MIDCOMPANY_H

#include "company.h"

class MidCompany : public Company {
public:
  MidCompany() = default;
  MidCompany(const std::string &name, const std::string &place);
  ~MidCompany() = default;

  int calculateSalary(const std::string &codes) override;
};
#endif // !#ifndef COMPANY_H
