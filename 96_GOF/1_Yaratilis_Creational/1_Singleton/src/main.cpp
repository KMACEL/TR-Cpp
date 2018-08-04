//============================================================================
// İsim        : 23_Stack
// Yazan       : Mert AceL
// Version     : 1.0
// Copyright   : AceL
// Açıklama    :22_Pointer
//============================================================================
#include<iostream>
#include<string>
#include"Mesaj.h"

using namespace std;


int main ()
{
//  Mesaj *m1=Mesaj::getInstance();
  Mesaj::getInstance()->setMesaj("Merhaba");
  Mesaj::getInstance()->mesajYazir();
  //m1->setMesaj("Test");
  //m1->mesajYazir();

  return 0;
}
