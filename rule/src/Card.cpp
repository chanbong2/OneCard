//
// Created by pc on 25. 2. 10.
//

#include "Card.hpp"
#include <iostream>

Card::Card(cardSuit suit, cardNumber number, cardColor color, cardSkill skill)
    : suit(suit), number(number), color(color), skill(skill) {}

bool Card::isValidCard(Card& topcard) {
    if (suit == topcard.suit) return true;
    if (number == topcard.number) return true;
    if (number == JOKER && color == RED && topcard.color == RED) return true;
    if (number == JOKER && color == BLACK && topcard.color == BLACK) return true;

    return false;
}

bool Card::isSpecialCard() {
    return skill != NONE;
}

bool Card::isAttack() {
    return skill == ATTACK;
}

bool Card::isDefend() {
    return skill == DEFEND;
}

bool Card::isChangeSuit() {
    return number == SEVEN;
}