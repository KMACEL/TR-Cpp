#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <regex>

using namespace std;

string urlDecode(string &url) {
    string totalText, decodedCharacter;
    int encodedCharacterNumeric;
    for (size_t i = 0; i < url.length(); i++) {
        if (int(url[i]) == 37)
        {
            sscanf(url.substr(i + 1, 2).c_str(), "%x", &encodedCharacterNumeric);
            decodedCharacter = static_cast<char>(encodedCharacterNumeric);
            totalText += decodedCharacter;
            i = i + 2;
        }
        else
        {
            totalText += url[i];
        }
    }
    return (totalText);
}

vector<string> splitString(string getString, string getRegex) {
    regex regex(getRegex);
    return {
            sregex_token_iterator(getString.begin(), getString.end(), regex, -1),
            sregex_token_iterator()};
}

unordered_map<string, string> parseQuery(string &url) {
    string decodedURL(urlDecode(url));
    decodedURL = decodedURL.substr(2);
    vector<string> getParsedVector = splitString(decodedURL, "&");
    unordered_map<string, string> queryParam;
    for (vector<string>::iterator it = getParsedVector.begin(); it != getParsedVector.end(); it++) {
        vector<string> getData(splitString(*it, "="));
        queryParam.insert(make_pair(getData.at(0), getData.at(1)));
    }
    return queryParam;
}

int main() {
    string t = "/?id=123456749&time=2018-11-07T00%3A58%3A39Z&J=17422344&W=24663121&T=2018-11-07%3A00:58:39&PN=5";

    unordered_map<string, string> getQuery(parseQuery(t));
    for (unordered_map<string, string>::iterator it = getQuery.begin(); it != getQuery.end(); it++) {
        cout << it->first << " - " << it->second << endl;
    }

    return 0;
}
