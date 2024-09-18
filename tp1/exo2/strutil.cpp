#include "strutil.h"

namespace pr {

    std::size_t length(const char* str) {
        const char* cp = str;
        for ( ; *cp; ++cp);
        return cp-str;
    }

    char* newcopy(const char* str) {
        std::size_t len = length(str);
        char* res = new char[len+1];
        memcpy(res, str, len+1);
        return res;
    }
}