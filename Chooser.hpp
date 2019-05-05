#pragma once
#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

namespace bullpgia {

    class Chooser {
    
    public:
    virtual string choose(uint length)=0;
    };

}