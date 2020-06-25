using namespace std;
#include <iostream>
#include "cmake-build-debug/Classes/Card.h"
#include "cmake-build-debug/Classes/Deck.h"
#include "cmake-build-debug/Classes/Dealer.h"
#include <vector>
#include <algorithm>

int main() {

    Dealer the_dealer;
    vector<Card> current_hand;
    current_hand = the_dealer.get_cards(4);
    for (int i = 0; i < 4; i++) {
        cout << current_hand[i].print() << endl;
    }

    Dealer the_dealer2;
    vector<Card> current_hand2;
    current_hand2 = the_dealer2.get_cards(4);
    for (int i = 0; i < 4; i++) {
        cout << current_hand2[i].print() << endl;
    }
    return 0;
}

