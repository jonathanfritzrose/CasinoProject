//
// Created by Jonathan Rose on 6/25/20.
//

#include "BlackJack.h"
#include <iostream>

//This function plays a single hand of Black Jack.
int BlackJack::a_hand() {

    player_hand.clear();
    dealer_hand.clear();
    playable_cards.clear();

    int count = 0;
    char choice;
    int player_bust = 0;
    int dealer_bust = 0;
    int player_value = 0;
    int dealer_value =0;

    get_cards(); //Now the shuffled cards are saved in 'playable_cards.'

    //Here the initial cards are dealt.
    player_hand.push_back(playable_cards[0]);
    player_hand.push_back(playable_cards[2]);
    dealer_hand.push_back(playable_cards[1]);
    dealer_hand.push_back(playable_cards[3]);
    count = 4; //Counter is set to four as the first four (0-3) elements of 'playable_cards' have been dealt.

    //The hands are shown to the player.
    cout << endl << "Your hand is: " << endl;
    display_hand(player_hand);
    cout << endl << "The dealer's hand is: " << endl;
    cout << dealer_hand[0].print() << endl;
    cout << "*SECOND CARD DOWN*" << endl;



    //Now the player chooses to hit or stand. The loop continues until stand is chosen.
    while (true) {

        player_value = hand_value(player_hand);
        if (player_value == 21) {
            break;
        }

        if (player_value > 21) {
            cout << "You have gone bust. The house has won." << endl;
            return 0;
        }

        cout << endl << "Press 'h' to HIT or 's' to STAND." << endl;
        cin >> choice;

        if (choice == 'h') {
            cout << "You choose to hit." << endl << endl;
            player_hand.push_back(playable_cards[count]);
            count += 1;
            cout << "Your hand is: " << endl;
            //The player's hand is shown again.
            display_hand(player_hand);
            cout << endl;
            player_value = hand_value(player_hand);
            continue;
        }
        if (choice == 's') {
            cout << "You choose to stand." << endl << endl;
            break;
        }
    }


    //The player's hand value is calculated;
    player_value = hand_value(player_hand);

    //Now the dealer's hand is automated. The loop continues until stand is chosen.
    while (true) {
        //The dealer's first hand value is calculated;
        dealer_value = hand_value(dealer_hand);

        if (dealer_value > 21) {
            cout << "The house has gone bust. You have won." << endl;
            return 0;
        }

        if (dealer_value < 17) {
            cout << "The dealer has hit." << endl;
            dealer_hand.push_back(playable_cards[count]);
            cout << "The dealer's hand is: " << endl;
            display_hand(dealer_hand);
            cout << endl;
            count += 1;
            continue;
        } else{
            cout << "The dealer has stood." << endl;
            cout << "The dealer's hand is: " << endl;
            display_hand(dealer_hand);
            cout << endl;
            break;
        }
    }



    //The hands are shown to the player.
    cout << "Your hand is: " << endl;
    display_hand(player_hand);
    cout << "The dealer's hand is: " << endl;
    display_hand(dealer_hand);
    cout << endl;

    //The dealer's final hand value is calculated;
    dealer_value = hand_value(dealer_hand);

    //The winner is declared.
    if (dealer_value>player_value){
        cout << "The house has won." << endl;
    } else if (player_value>dealer_value){
        cout << "You have won." << endl;
    } else {
        cout << "The hand is a push" << endl;
    }



    return 0;

}


//This function gets the playable cards after being shuffled by Deck.h.
void BlackJack::get_cards() {

    Dealer the_dealer;
    playable_cards = the_dealer.get_cards(17);

}

//This function calculates the value of a given hand.
int BlackJack::hand_value(vector<Card> hand){

    int hand_value = 0;
    int size = hand.size();

    for(int i = 0; i < size; i++){
        hand_value += hand[i].bj_face_val();
    }

    return hand_value;
}

void BlackJack::display_hand(vector<Card> hand) {

        int total_value = hand_value(hand);

        for(int i = 0; hand.size() > i; i++){
            cout << hand[i].print();
            cout << endl;
        }

        cout << "The total value is: ";
        cout << total_value;
        cout << endl;

}



