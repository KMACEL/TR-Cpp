#ifndef ERROR_H
#define ERROR_H

#include <string>

class AvanasHata : public std::exception
{
  public:
    std::string limit()
    {
        return "Limit Aşımına Uğradınız. Lütfen Limitler Dahilinde Avans Talebinde Bulununuz";
    }
};

#endif
