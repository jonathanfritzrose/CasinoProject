//
// Created by Jonathan Rose on 6/23/20.
//

#include "Card.h"

Card::Card(Suit suit_value, Face face_value) {
    this->suit_value = suit_value;
    this->face_value = face_value;
}

string get_suit(Suit card_suit){
    switch(card_suit){
        case Clubs: return "Clubs";
        case Diamonds: return "Diamonds";
        case Spades: return "Spades";
        case Hearts: return "Hearts";
    }
}
string get_face(Face card_value){
    switch(card_value){
        case One: return "One";
        case Two: return "Two";
        case Three: return "Three";
        case Four: return "Four";
        case Five: return "Five";
        case Six: return "Six";
        case Seven: return "Seven";
        case Eight: return "Eight";
        case Nine: return "Nine";
        case Ten: return "Ten";
        case Jack: return "Jack";
        case Queen: return "Queen";
        case King: return "King";
        case Ace: return "Ace";

    }
}
string Card::print() {
    return get_suit(suit_value) + " " + get_face(face_value);
}