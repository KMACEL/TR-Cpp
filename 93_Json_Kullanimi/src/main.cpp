//============================================================================
// İsim        : 06_Merhaba_Dunya
// Yazan       : Mert AceL
// Version     : 1.0
// Copyright   : AceL
// Açıklama    : C++'a başlangıç
//============================================================================
#include <iostream>
#include <fstream>
#include <iomanip>
#include <nlohmann/json.hpp>

using namespace std;
using namespace nlohmann;

int main()
{
    cout << "Merhaba JSON " << endl;

    json kiselBilgiler;
    kiselBilgiler["isim"] = "Mert";
    kiselBilgiler["soyIsim"] = "Acel";
    kiselBilgiler["yas"] = 25;
    kiselBilgiler["adres"] = "Gebze";
    kiselBilgiler["boy"] = 1.93;
    kiselBilgiler["kilo"] = 103;
    kiselBilgiler["calisma"] = true;
    kiselBilgiler["araba"] = nullptr;

    cout << "Kisel Bilgiler Oluştur JSON  : " << kiselBilgiler << endl;
    cout << "Kisel Bilgiler Oluştur JSON Dump : " << kiselBilgiler.dump() << endl;

    cout << "----------------------------------------------------------------" << endl;

    ifstream dosyadanBilgiAl("../bilgi.json");
    json dosyadanJSON;
    dosyadanBilgiAl >> dosyadanJSON;

    cout << "Kisel Bilgiler Dosyadan Oku JSON Dump : " << dosyadanJSON.dump() << endl;

    cout << "----------------------------------------------------------------" << endl;

    cout << "Dosyaya Yazılacak" << endl;
    std::ofstream dosyayaYaz("../olustur.json");
    dosyayaYaz << setw(4) << kiselBilgiler << std::endl;

    cout << "----------------------------------------------------------------" << endl;

    cout << "Diğer Örnek Kullanımlar  " << endl;
    json j;

    j["pi"] = 3.141;
    j["happy"] = true;
    j["name"] = "Niels";
    j["nothing"] = nullptr;
    j["answer"]["everything"] = 42;
    j["list"] = {1, 0, 2};
    j["object"] = {{"currency", "USD"}, {"value", 42.99}};

    cout << "Temel Kullanım : " << j << endl;

    cout << "----------------------------------------------------------------" << endl;

    json j2 = {
        {"pi", 3.141},
        {"happy", true},
        {"name", "Niels"},
        {"nothing", nullptr},
        {"answer", {{"everything", 42}}},
        {"list", {1, 0, 2}},
        {"object", {{"currency", "USD"}, {"value", 42.99}}}};

    cout << "Toplu Kullanım : " << j2 << endl;

    cout << "----------------------------------------------------------------" << endl;

    // boi dizi []
    json empty_array_explicit = json::array();
    cout << "Boş Dizi Oluşturma Kullanım : " << empty_array_explicit << endl;

    cout << "----------------------------------------------------------------" << endl;

    // boş object {}
    json empty_object_implicit = json({});
    json empty_object_explicit = json::object();
    cout << "Boş Obje Oluşturma Kullanım : " << empty_object_implicit << " - " << empty_object_explicit << endl;

    cout << "----------------------------------------------------------------" << endl;

    json array_not_object = json::array({{"currency", "USD"}, {"value", 42.99}});
    cout << "Oluştururken Atama Kullanım : " << array_not_object << endl;
    cout << "----------------------------------------------------------------" << endl;

    json j3 = "{ \"happy\": true, \"pi\": 3.141 }"_json;
    cout << "Düz string kullanımı 1 : " << j3 << endl;

    cout << "----------------------------------------------------------------" << endl;
    // or even nicer with a raw string literal
    auto j4 = R"(
              {
                "happy": true,
                "pi": 3.141
              }
            )"_json;
    cout << "Düz string kullanımı 2 : " << j4 << endl;

    cout << "----------------------------------------------------------------" << endl;
    auto j5 = json::parse("{ \"happy\": true, \"pi\": 3.141 }");
    cout << "String Parse kullanımı : " << j5.dump(4) << endl;
    cout << "String Parse kullanımı : " << j5.at("happy") << endl;
    j5.at("happy") = false;
    cout << "String Parse kullanımı : " << j5 << endl;

    return 0;
}
