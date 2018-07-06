//============================================================================
// İsim        : 18_List_Kullanımı
// Yazan       : Mert AceL
// Version     : 1.0
// Copyright   : AceL
// Açıklama    : Listelere Giriş
//============================================================================
#include <iostream>
#include <list>
using namespace std;

int main()
{
  list<int> sayi;
  sayi.push_back(4);
  sayi.push_back(7);
  sayi.push_back(1);
  sayi.push_back(5);
  sayi.push_back(12);
  sayi.push_front(2);

  list<int>::iterator it = sayi.begin();
  cout << "Sayı : " << *it << endl;

  *it++;
  cout << "Sayı : " << *it << endl;

  sayi.insert(it, 55);

  for (list<int>::iterator itF = sayi.begin(); itF != sayi.end(); itF++)
  {
    cout << "Sayi For : " << *itF << endl;
  }

  cout << "--------------------------------------------------------" << endl;

  return 0;
}
