#ifndef PROGRAMMERCPP_H
#define PROGRAMMERCPP_H
#include "../includes/programmer.h"
class ProgrammerCpp : public Programmer {
private:
  std::string language_;

public:
  std::string getLanguage() const;
  void setLanguage(const std::string &language);
  ProgrammerCpp() = default;
  ProgrammerCpp(const std::string &name, int age, int salary,
                const std::string &code, const std::string &language,
                std::shared_ptr<Company> company);
  ~ProgrammerCpp() = default;
  void showInfo() override;
};

#endif // !#ifndef PROGRAMMERCPP_H
