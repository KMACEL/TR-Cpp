#ifndef HAYVAN_H
#define HAYVAN_H

#include <iostream>
#include <string>

class Hayvan
{
  private:
    std::string ses;

  public:
    void setSes(std::string s)
    {
        ses = s;
    }
    std::string getSes()
    {
        return ses;
    }
};

#endif
