//============================================================================
// İsim        : 5_KosulluIfadeler
// Yazan       : Mert AceL
// Version     : 1.0
// Copyright   : AceL
// Açıklama    : Koşulsal İfadeler
//============================================================================
#include<iostream>

using namespace std;

int main (){
    int sayi1 = 0;
    int sayi2 = 0;

    cout << "Lütfen ilk sayıyı giriniz : " ;
    cin >> sayi1;

    cout << "Lütfen ikinci sayıyı giriniz : " ;
    cin >> sayi2;

    if (sayi1 > sayi2){
        cout << "İlk girilen sayı, ikincisinden büyük" << endl;
    } else if (sayi1 < sayi2){
        cout << "İlk girilen sayı, ikincisinden küçük" << endl;
    } else if (sayi1 = sayi2){
        cout << "İlk girilen sayı, ikincisiyle eşit" << endl;
    } else {
        cout << "Sayı Hatalı" << endl;
    }

    return 0;
}
