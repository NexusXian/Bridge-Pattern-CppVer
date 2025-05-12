#ifndef PROGRAMMERGO_H
#define PROGRAMMERGO_H
#include "../includes/programmer.h"
#include "company.h"
class ProgrammerGo : public Programmer {
private:
  std::string language_;

public:
  std::string getLanguage() const;
  void setLanguage(const std::string &language);
  ProgrammerGo() = default;
  ProgrammerGo(const std::string &name, int age, int salary,
               const std::string &code, const std::string &language,
               std::shared_ptr<Company> company);
  ~ProgrammerGo() = default;
  void showInfo() override;
};

#endif // !#ifndef PROGRAMMERGO_H
