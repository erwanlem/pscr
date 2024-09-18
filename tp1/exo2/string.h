#pragma once
#include "strutil.h"
#include <ostream>

namespace pr {

    class String {
        private:
        const char* str;

        public:
        String(const char* ori);
        String(const String& ori);
        ~String();
        std::size_t length() const;
        std::ostream& operator<<(std::ostream& os);
    };

}