#include "string.h"

namespace pr {

    String::String(const char* ori) : str(ori) {}

    String::String(const String& ori) {
        str = ori.str;
    }

    String::~String() {
        //delete []str;
    }

    std::size_t String::length() const {
        return pr::length(str);
    }

    std::ostream& String::operator<< (std::ostream& os) {
        os << str << std::endl;
        return os;
    }

}