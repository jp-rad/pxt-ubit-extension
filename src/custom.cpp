#include "pxt.h"
#include "customlib.h"

namespace custom {
    
    //%
    int bar(int v) {
        return customlib::counter(v);
    }

}