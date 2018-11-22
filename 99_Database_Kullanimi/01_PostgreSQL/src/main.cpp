#include <iostream>
#include <string>
#include <pqxx/pqxx>

using namespace std;
using namespace pqxx;


int openDB() {
    try {
        connection C("dbname = test_db user = mertacel password = 123456 hostaddr = 127.0.0.1 port = 5432");
        if (C.is_open()) {
            cout << "Opened database successfully: " << C.dbname() << " User : " << C.username() << endl;
        } else {
            cout << "Can't open database" << endl;
            return 1;
        }
        string sql = "CREATE TABLE COMPANY("  \
                     "ID INT PRIMARY KEY     NOT NULL," \
                     "NAME           TEXT    NOT NULL," \
                     "AGE            INT     NOT NULL," \
                     "ADDRESS        CHAR(50)," \
                     "SALARY         REAL );";

        work W(C);

        W.exec(sql);
        W.commit();
        cout << "Table created successfully" << endl;
        C.disconnect();
    } catch (const std::exception &e) {
        cerr << e.what() << std::endl;
        return 1;
    }
    return 0;
}

int main() {
    openDB();

    return 0;
}
