#include "../includes/programmer.h"
#include "../includes/company.h"
std::string Programmer::getName() const { return name_; }

void Programmer::setName(const std::string &name) { name_ = name; }

void Programmer::setAge(int age) { age_ = age; }

void Programmer::setCompany(Company *company) { company = company; }

Company *Programmer::getCompany() const { return company_.get(); }

int Programmer::getAge() const { return age_; }

void Programmer::setSalary(int salary) { salary_ = salary; }

void Programmer::setSalary() {
  salary_ = company_->calculateSalary(this->code_) + this->salary_;
}

int Programmer::getSalary() const { return salary_; }

std::string Programmer::getCode() const { return code_; }

void Programmer::setCode(const std::string &code) { code_ = code; }

Programmer::Programmer(const std::string &name, int age, int salary,
                       const std::string &code,
                       std::shared_ptr<Company> company)
    : name_(name), age_(age), salary_(salary), code_(code), company_(company) {
  this->setSalary();
}

Programmer::~Programmer() {}
void Programmer::showInfo() {}
