//
// Created by Jonathan Rose on 6/23/20.
//

#ifndef CASINO_PROJECT_DECK_H
#define CASINO_PROJECT_DECK_H
#include "Card.h"
#include <vector>
using namespace std;

class Deck {
public:
    vector<Card> get_cards();

private:
    const vector<Card> cards = {
            //The 'face_value' enum value starts at 0 for 'One' and 13 for 'Ace'. Check CardEnum.h for values.
            //Clubs enum = 0
            Card(Clubs, One),
            Card(Clubs, Two),
            Card(Clubs, Three),
            Card(Clubs, Four),
            Card(Clubs, Five),
            Card(Clubs, Six),
            Card(Clubs, Seven),
            Card(Clubs, Eight),
            Card(Clubs, Nine),
            Card(Clubs, Ten),
            Card(Clubs, Jack),
            Card(Clubs, Queen),
            Card(Clubs, King),
            Card(Clubs, Ace),
            //Hearts enum = 1
            Card(Hearts, One),
            Card(Hearts, Two),
            Card(Hearts, Three),
            Card(Hearts, Four),
            Card(Hearts, Five),
            Card(Hearts, Six),
            Card(Hearts, Seven),
            Card(Hearts, Eight),
            Card(Hearts, Nine),
            Card(Hearts, Ten),
            Card(Hearts, Jack),
            Card(Hearts, Queen),
            Card(Hearts, King),
            Card(Hearts, Ace),
            //Spades enum = 2
            Card(Spades, One),
            Card(Spades, Two),
            Card(Spades, Three),
            Card(Spades, Four),
            Card(Spades, Five),
            Card(Spades, Six),
            Card(Spades, Seven),
            Card(Spades, Eight),
            Card(Spades, Nine),
            Card(Spades, Ten),
            Card(Spades, Jack),
            Card(Spades, Queen),
            Card(Spades, King),
            Card(Spades, Ace),
            //Diamonds enum = 3
            Card(Diamonds, One),
            Card(Diamonds, Two),
            Card(Diamonds, Three),
            Card(Diamonds, Four),
            Card(Diamonds, Five),
            Card(Diamonds, Six),
            Card(Diamonds, Seven),
            Card(Diamonds, Eight),
            Card(Diamonds, Nine),
            Card(Diamonds, Ten),
            Card(Diamonds, Jack),
            Card(Diamonds, Queen),
            Card(Diamonds, King),
            Card(Diamonds, Ace),


    };
};

#endif //CASINO_PROJECT_DECK_H
