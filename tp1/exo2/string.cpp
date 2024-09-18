#include "string.h"

namespace pr {

    String::String(const char* ori) : str(ori) {}

    String::String(const String& ori) {
        char* cp = new char[ori.length()];
        strcpy(cp, ori.str);
        str = cp;
    }

    String::~String() {
        //delete []str;
    }

    std::size_t String::length() const {
        return pr::length(str);
    }

    String& String::operator=(const String& s) {
        char* cp = new char[s.length()];
        std::cout << "cp done" << std::endl;
        strcpy(cp, s.str);
        str = cp;
        return *this;
    }
}