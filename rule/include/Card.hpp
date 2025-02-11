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
    cardSuit suit;
    cardNumber number;
    cardColor color;
    cardSkill skill;

    Card();
    Card(cardSuit suit, cardNumber number, cardColor color, cardSkill skill);


    bool isValidCard(Card& topcard);
    bool isSpecialCard();
    bool isAttack();
    bool isDefend();
    bool isChangeSuit();
};

#endif //CARD_HPP
