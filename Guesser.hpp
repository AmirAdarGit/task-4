#pragma once
#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

namespace bullpgia {

    class Guesser {
    
        public:
    
        unsigned int length;   

        virtual void startNewGame(uint length);
        virtual string guess() = 0;
        virtual void learn(string ans);
    };
}