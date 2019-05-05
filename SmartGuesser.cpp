#include "SmartGuesser.hpp"
#include <iostream>
#include <math.h>
#include <string>

using namespace std;
using namespace bullpgia;

    void SmartGuesser::startNewGame(uint length) {
        this->my_guess = "";
        this->length = length;
        this->counter = 0;
        this->bull_count = 0;
        this->guess_arr[10] = {0};
        this->learn_arr[10] = {0};        

        for(int i = 0 ; i < 10 ; i++){
            string temp = "";
            for(int j = 0 ; j < length ; j++){
                temp += to_string(i);
            }
        }
    }

    string SmartGuesser::guess() {
        string temp_guess = "";
        if(this->counter == 10) this->flag = false;
        if(flag){
            temp_guess = guess_arr[counter];
            return temp_guess;
        }
        if(my_guess == ""){
            for(int num : learn_arr){
                if(num != 0){
                    my_guess += to_string(num);
                }
            }
            counter = 0;
            buildOptions(); 
        }
        temp_guess = my_vec_options.begin;
        my_vec_options.erase(my_vec_options.begin);
        return temp_guess;
    }

    void SmartGuesser::learn(string reply){
        int bull = reply.at(0) - '0';
        if(bull != 0){
            learn_arr[counter] += bull;
        }
        counter++;
    }

    void SmartGuesser::buildOptions(){
        // generate all combination from the numbers in my_guess to my_vec_options
    }


