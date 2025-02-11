//
// Created by pc on 25. 2. 10.
//

#include <iostream>
#include "Deck.hpp"
#include <algorithm>
#include <random>
#include "Enum.hpp"

void Deck::InitialBegin(int deckSize) {
    cards.clear();

    for (int cardSuit = SPADE; cardSuit <= CLUB; cardSuit++ ) {
        for (int cardNumber = ACE; cardNumber <= JACK; cardNumber++) {
            if (cardNumber == ACE && (cardSuit == SPADE || cardSuit == CLUB)) cards.push_back(Card(cardSuit, cardNumber, BLACK, ATTACK));
            else if (cardNumber == ACE && (cardSuit == HEART || cardSuit == DIAMOND)) cards.push_back(Card(cardSuit, cardNumber, RED, ATTACK));
            else if (cardNumber == TWO && (cardSuit == SPADE || cardSuit == CLUB)) cards.push_back(Card(cardSuit, cardNumber, BLACK, ATTACK));
            else if (cardNumber == TWO && (cardSuit == HEART || cardSuit == DIAMOND)) cards.push_back(Card(cardSuit, cardNumber, RED, ATTACK));
            else if (cardNumber == THREE && (cardSuit == SPADE || cardSuit == CLUB)) cards.push_back(Card(cardSuit, cardNumber, BLACK, DEFEND));
            else if (cardNumber == THREE && (cardSuit == HEART || cardSuit == DIAMOND)) cards.push_back(Card(cardSuit, cardNumber, RED, DEFEND));
            else if (cardNumber == SEVEN && (cardSuit == SPADE || cardSuit == CLUB)) cards.push_back(Card(cardSuit, cardNumber, BLACK, ATTACK));
            else if (cardNumber == SEVEN && (cardSuit == HEART || cardSuit == DIAMOND)) cards.push_back(Card(cardSuit, cardNumber, RED, ATTACK));
            else cards.push_back(Card(cardSuit, cardNumber, , ));
        }
    }
}