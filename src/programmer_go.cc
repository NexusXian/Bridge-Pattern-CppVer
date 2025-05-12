#include "../includes/programmer_go.h"
#include <iostream>
std::string ProgrammerGo::getLanguage() const { return language_; }

void ProgrammerGo::setLanguage(const std::string &language) {
  language_ = language;
}

ProgrammerGo::ProgrammerGo(const std::string &name, int age, int salary,
                           const std::string &code, const std::string &language,
                           std::shared_ptr<Company> company)
    : Programmer(name, age, salary, code, company), language_(language) {}

void ProgrammerGo::showInfo() {
  std::cout << "Name: " << this->getName() << std::endl;
  std::cout << "Age: " << this->getAge() << std::endl;
  std::cout << "Salary: " << this->getSalary() << std::endl;
  std::cout << "Company" << this->getCompany()->name_ << std::endl;
  std::cout << "place: " << this->getCompany()->place_ << std::endl;
}
