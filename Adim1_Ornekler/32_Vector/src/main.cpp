//============================================================================
// İsim        : 22_Pointer
// Yazan       : Mert AceL
// Version     : 1.0
// Copyright   : AceL
// Açıklama    :22_Pointer
//============================================================================
#include<iostream>
#include<vector>
#include<algorithm> // sort
using namespace std;


int main ()
{
    vector<string> vektor;
    vektor.push_back("ilk");
    vektor.push_back("ikinci");

    cout << "Vektör eleman sayısı : " << vektor.size() << endl;

    cout << "--------------------------------------------------------" << endl;

    vector<string> vektor2(5);
    vektor2.push_back("ilk");
    vektor2.push_back("ikinci");
    vektor2[3]="ekstra";

    cout << "Vektör2 eleman sayısı : " << vektor2.size() << endl;

    cout << "--------------------------------------------------------" << endl;

    vector<string> vektor3;
    vektor3.push_back("ilk");
    vektor3.push_back("ikinci");
    vektor3.push_back("üçüncü");
    vektor3.push_back("dördüncü");

    cout << "Vektör3 eleman sayısı : " << vektor3.size() << endl;

    for(int i=0 ; i < vektor3.size(); i++)
    {
      cout << i+1 << ". Elemean " << vektor3[i] << endl;
    }

    cout << "--------------------------------------------------------" << endl;

    vector<string> vektor4;
    vektor4.push_back("ilk");
    vektor4.push_back("ikinci");
    vektor4.push_back("üçüncü");
    vektor4.push_back("dördüncü");

    cout << "vektor4 eleman sayısı : " << vektor4.size() << endl;

    vector<string>::iterator it = vektor4.begin();
    cout << *it << endl;
    it++;
    cout << *it << endl;
    it+=2;
    cout << *it << endl;

    cout << "--------------------------------------------------------" << endl;

    vector<int> vektor5;

    cout << "Vektor Boyutu : " << vektor5.size() << endl;
    cout << "Vektor Kapasitesi : " << vektor5.capacity() << endl;

    for (int i = 0 ; i<100; i++)
    {
      cout << "----------------------------" << endl;
      vektor5.push_back(i);
      cout << "Eklenen Değer : " << i << endl;
      cout << "Vektor Boyutu : " << vektor5.size() << endl;
      cout << "Vektor Kapasitesi : " << vektor5.capacity() << endl;
      cout << "----------------------------" << endl << endl;
    }

    cout << "--------------------------------------------------------" << endl;

    vector< vector<int> > vektor6(7,vector<int>(8,10));

    for (int i=0; i < vektor6.size() ; i++)
    {
      for (int j=0; j < vektor6[i].size() ; j++)
      {
        vektor6[i][j]=i+2*j;
      }

    }

    cout << "Vektor Boyutu : " << vektor6.size() << endl;
    cout << "Vektor Kapasitesi : " << vektor6.capacity() << endl;

    for (int i=0; i < vektor6.size() ; i++)
    {
      for (int j=0; j < vektor6[i].size() ; j++)
      {
        cout << i << " - " << j <<  " : " << vektor6[i][j] <<endl;
      }

    }

    cout << "--------------------------------------------------------" << endl;

    vector<int> vektor7;
    vektor7.push_back(5);
    vektor7.push_back(7);
    vektor7.push_back(2);
    vektor7.push_back(16);

    sort(vektor7.begin(), vektor7.end());

    for(vector<int>::iterator it = vektor7.begin(); it != vektor7.end(); it++)
    {
        cout << *it << endl;
    }

    return 0;
}
