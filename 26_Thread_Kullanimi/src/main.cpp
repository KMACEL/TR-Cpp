//============================================================================
// İsim        : 25_Namespace_Kullanimi
// Yazan       : Mert AceL
// Version     : 1.0
// Copyright   : AceL
// Açıklama    : 25_Namespace_Kullanimi
//============================================================================
#include <iostream>
#include <string>
#include <thread>
#include <chrono>
using namespace std;

void islem(string mesaj, int zaman)
{
    std::this_thread::sleep_for(std::chrono::seconds(zaman));
    cout << "Mesajınız : " << mesaj << endl;
}

int main()
{
    cout << "Main Thread ID : " << this_thread::get_id() << endl;

    cout << "Aktif Thread : " << thread::hardware_concurrency() << endl;

    thread t1(islem, "1. Thread", 3);
    //t1.join();
    t1.detach();
    //if(t1.joinable())
    //   t1.join();

    thread t2(islem, "2. Thread", 1);
    //t2.join();
    t2.detach();

    thread t3(islem, "3. Thread", 5);
    cout << "t3 Thread : " << t3.get_id() << endl;
    //t3.join();
    t3.detach();

    string x;
    cin >> x;

    return 0;
}
