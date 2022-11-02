#include <iostream>
#include <cpr/cpr.h>
#include <algorithm>

int main() {

    cpr::Response r =  cpr::Get(cpr::Url("http://httpbin.org/html"),cpr::Header({{"accept","text/html"}}));


   int nStartHeader = r.text.find("<h1>" ,0);
   int nFinishHeader = r.text.find("</h1>",0);

    std::cout << r.text.substr(nStartHeader, (nFinishHeader - nStartHeader)+5) << std::endl;
}
