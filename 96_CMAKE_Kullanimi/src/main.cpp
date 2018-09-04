//============================================================================
// İsim        : 06_Merhaba_Dunya
// Yazan       : Mert AceL
// Version     : 1.0
// Copyright   : AceL
// Açıklama    : C++'a başlangıç
//============================================================================
#include <iostream>
 
#ifndef CMAKETEST
    #define CMAKETEST "Sistem Bildirilmedi"
#endif

int main()
{
    
    std::cout << "Merhaba Dünya " << CMAKETEST << std::endl;
    return 0;
}
