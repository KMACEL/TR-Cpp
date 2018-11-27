#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

string GetStdoutFromCommand(string cmd)
{

    string data;
    FILE *stream;
    const int max_buffer = 256;
    char buffer[max_buffer];
    cmd.append(" 2>&1");

    stream = popen(cmd.c_str(), "r");
    if (stream)
    {
        while (!feof(stream))
            if (fgets(buffer, max_buffer, stream) != NULL)
                data.append(buffer);
        pclose(stream);
    }
    return data;
}

int main()
{

    string systemDegisken = "Merhaba Dunya";
    //(Değişken, Değişken, Ez 1);
    setenv("ShellDegisken", systemDegisken.c_str(), 1);
    system("echo $ShellDegisken");

    system("gunzip /home/mert.acel/MA/TR-Cpp/20181020.gz");

    string ls = GetStdoutFromCommand("ls -la");
    cout << "LS: " << ls << endl;

    return 0;
}
