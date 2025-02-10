//
// Created by pc on 25. 2. 10.
//

#ifndef CARD_HPP
#define CARD_HPP

#include "Enum.hpp"
#include "Deck.hpp"
#include "Player.hpp"
#include "Game.hpp"

class Card {
public:
    int cardSuit;
    int cardNumber;
    int cardColor;
    int cardSkill;

    Card();
    Card(int cardSuit, int cardNumber, int cardColor, int cardSkill);

    bool isValidCard();
        bool hasSKill();
            bool isAttack();
            bool isDefend();
            bool isChangeSuit();
};

#endif //CARD_HPP
