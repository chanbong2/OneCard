//
// Created by pc on 25. 2. 10.
//

#ifndef DECK_HPP
#define DECK_HPP

#include <vector>
#include "Enum.hpp"
#include "Card.hpp"
#include "Player.hpp"
#include "Game.hpp"

class Deck {
    private:
    std::vector<Card> cards;

    public:
    Deck();

    void initialBegin();
    void shuffleDeck();
    int remainCards();
    bool isEmpty();
    void refillDeck(std::vector<Card>& topCard);

};


#endif //DECK_HPP
