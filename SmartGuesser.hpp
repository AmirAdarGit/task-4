#pragma once
#include "Guesser.hpp"
#include "calculate.hpp"
#include <vector>

namespace bullpgia {
    class SmartGuesser : public bullpgia :: Guesser{
        private:

        string my_guess;
        string guess_arr[10];
        int learn_arr[10];
        bool flag = true;
        int counter;
        int bull_count;
        vector<string> my_vec_options;
        int length;

        public:

        string guess() override;
        void learn(string reply) override;
        void startNewGame(uint length) override;
        
        void buildOptions();
        //void removeFromList(string results);
    };
}