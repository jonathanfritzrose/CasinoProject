//
// Created by Jonathan Rose on 6/25/20.
//

#ifndef CASINO_PROJECT_BLACKJACK_H
#define CASINO_PROJECT_BLACKJACK_H
#include "Dealer.h"


class BlackJack {

    public:
    //BlackJack(int p, int d);
    int a_hand();
    vector<Card> dealer_hand;
    vector<Card> player_hand;
    void get_cards();
    vector<Card> playable_cards;
    static int hand_value(vector<Card> hand);
    static void display_hand(vector<Card> hand);



};




#endif //CASINO_PROJECT_BLACKJACK_H
