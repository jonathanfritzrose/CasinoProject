//
// Created by Jonathan Rose on 6/24/20.
//

#include "Dealer.h"


/*Dealer::Dealer(Deck deck) {
    this->dealers_deck = deck;
}*/
vector<Card> Dealer::get_cards(int num_cards) {
    set_deck();
    vector<Card> got_cards;
    for (int i = 0; i < num_cards; i++){
        got_cards.push_back(dealers_deck[i]);
    }
    return got_cards;
}

vector<Card> Dealer::shuffler(){
    Deck temp_deck;
    vector<Card> to_shuffle;
    vector<Card> now_shuffled;
    to_shuffle = temp_deck.get_cards();
    srand(time(nullptr));
    int size = to_shuffle.size();
    for (int i = 0; i < size - 1; i++) {
        int j = rand() % size;
        swap(to_shuffle[i], to_shuffle[j]);
    }

    now_shuffled = to_shuffle;
    return now_shuffled;
}

void Dealer::set_deck() {
    dealers_deck = shuffler();
}

