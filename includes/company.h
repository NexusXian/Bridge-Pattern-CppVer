#ifndef COMPANY_H
#define COMPANY_H
#include <string>
class Company {
public:
  std::string name_;
  std::string place_;

public:
  Company() = default;
  Company(const std::string &name, const std::string &place);
  ~Company() = default;
  virtual int calculateSalary(std::string const &codes) = 0;
};

#endif // !#ifndef COMPANY_H
