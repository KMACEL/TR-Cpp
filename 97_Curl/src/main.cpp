//============================================================================
// İsim        : 25_Namespace_Kullanimi
// Yazan       : Mert AceL
// Version     : 1.0
// Copyright   : AceL
// Açıklama    : 25_Namespace_Kullanimi
//============================================================================
#include <iostream>
#include <string>

#include <curl/curl.h>

using namespace std;

string Decode(const string &encoded)
{
    CURL *curl = curl_easy_init();
    int outlength;
    char *cres = curl_easy_unescape(curl, encoded.c_str(), encoded.length(), &outlength);
    string res(cres, cres + outlength);
    curl_free(cres);
    curl_easy_cleanup(curl);
    return res;
}

int main()
{
  CURL *curl;
  CURLcode res;

  /* In windows, this will init the winsock stuff */
  curl_global_init(CURL_GLOBAL_ALL);

  /* get a curl handle */
  curl = curl_easy_init();
  if (curl)
  {
    /* First set the URL that is about to receive our POST. This URL can
       just as well be a https:// URL if that is what should receive the
       data. */
    curl_easy_setopt(curl, CURLOPT_URL, "http://api.eve-central.com/api/quicklook?typeid=34&usesystem=30000142");
    /* Now specify the POST data */
    curl_easy_setopt(curl, CURLOPT_POSTFIELDS, "name=daniel&project=curl");

    /* Perform the request, res will get the return code */
    res = curl_easy_perform(curl);
    /* Check for errors */
    if (res != CURLE_OK)
      fprintf(stderr, "curl_easy_perform() failed: %s\n",
              curl_easy_strerror(res));

    /* always cleanup */
    curl_easy_cleanup(curl);
  }
  curl_global_cleanup();


  cout << Decode("http://api.eve-central.com/api/quicklook?id=867377020905216&time=2018-11-07T00%3A57%3A48Z&counter=1158304&connType=15&dataState=2&signalDb=-91&J=0&W=0&T=2018-11-07%3A00:57:49&PN=0&ACC=0") << endl;
  return 0;
}

