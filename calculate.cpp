#include <string>
#include "iostream"

using namespace std;

namespace bullpgia {
    string calculateBullAndPgia(string choice,string guess){

        int bull = 0;
        int pgia = 0;
        int help[10] = {0};
        for(int i=0 ; i < choice.length() ; i++){
             help[choice[i]]++;
             if(choice[i] == guess[i]){
                 bull++;
                 help[choice[i]]--;
             } 
        }

        if(bull == choice.length) return to_string(bull) + "," + "0";
        else{
            for( int i = 0 ; i < guess.length ; i++){
                if(help[guess[i]] != 0){
                    pgia++;
                    help[guess[i]]--;
                }
            }
        }
        return to_string(bull) + "," + to_string(pgia);
    }
}