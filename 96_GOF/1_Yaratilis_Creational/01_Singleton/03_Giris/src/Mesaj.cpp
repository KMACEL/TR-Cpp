#include <iostream>
#include <mutex>    
#include "Mesaj.h"

Mesaj *Mesaj::INSTANCE = 0;
std::mutex mtx;

Mesaj *Mesaj::getInstance()
{
  mtx.lock();
  if (INSTANCE == 0)
  {
    INSTANCE = new Mesaj();
  }
  mtx.unlock();
  return INSTANCE;
}

Mesaj::Mesaj()
{
}

void Mesaj::mesajYazir()
{
  std::cout << "Mesajınız : " << getMesaj() << std::endl;
}

void Mesaj::setMesaj(std::string mesaj)
{
  this->mesaj = mesaj;
}

std::string Mesaj::getMesaj()
{
  return this->mesaj;
}
