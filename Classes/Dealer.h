//
// Created by Jonathan Rose on 6/24/20.
//
using namespace std;
#ifndef CASINO_PROJECT_DEALER_H
#define CASINO_PROJECT_DEALER_H
#include <vector>
#include "Card.h"
#include "Deck.h"
#include <algorithm>
#include "time.h"


class Dealer {
    public:
        vector<Card> get_cards(int num_cards);
    private:
        vector<Card> dealers_deck;
        vector<Card> shuffler();
        void set_deck();

};


#endif //CASINO_PROJECT_DEALER_H
