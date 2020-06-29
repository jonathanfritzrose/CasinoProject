#include <climits>
//
// Created by Jonathan Rose on 6/23/20.
//

#ifndef CASINO_PROJECT_CARD_H
#define CASINO_PROJECT_CARD_H
#include "CardEnum.h"
#include <string>
using namespace std;



class Card {
    public:
        Card(Suit suit_value,Face face_value);
        string print();
        int bj_face_val();
        int get_suit_val();
        //display card function
    private:
        Suit suit_value;
        Face face_value;


};


#endif //CASINO_PROJECT_CARD_H
