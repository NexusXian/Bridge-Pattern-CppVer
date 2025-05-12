#pragma once
#ifndef PROGRAMMER_H
#define PROGRAMMER_H
#include "company.h"
#include <memory>
#include <string>
class Programmer {
protected:
  std::string name_;
  int age_;
  int salary_;
  std::string code_;
  std::shared_ptr<Company> company_;

public:
  std::string getName() const;
  void setName(const std::string &name);
  int getAge() const;
  void setAge(int age);
  int getSalary() const;
  void setSalary();
  void setSalary(int salary);
  std::string getCode() const;
  void setCode(const std::string &code);
  Programmer() = default;
  Programmer(const std::string &name, int age, int salary,
             const std::string &code, std::shared_ptr<Company> company);
  ~Programmer();
  void setCompany(Company *company);
  Company *getCompany() const;
  virtual void showInfo();
};

#endif
