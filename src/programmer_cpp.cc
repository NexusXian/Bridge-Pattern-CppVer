#include "../includes/programmer_cpp.h"
#include <iostream>
std::string ProgrammerCpp::getLanguage() const { return language_; }

void ProgrammerCpp::setLanguage(const std::string &language) {
  language_ = language;
}

ProgrammerCpp::ProgrammerCpp(const std::string &name, int age, int salary,
                             const std::string &code,
                             const std::string &language,
                             std::shared_ptr<Company> company)
    : Programmer(name, age, salary, code, company), language_(language) {}

void ProgrammerCpp::showInfo() {
  std::cout << "Name: " << this->getName() << std::endl;
  std::cout << "Age: " << this->getAge() << std::endl;
  std::cout << "Salary: " << this->getSalary() << std::endl;
  std::cout << "Company" << this->getCompany()->name_ << std::endl;
  std::cout << "place: " << this->getCompany()->place_ << std::endl;
}
