//
// Created by pc on 25. 2. 10.
//

#include "Card.hpp"
#include <iostream>

Card::Card(int suit, int number, int color, int skill)
{
    this->cardSuit = suit;
    this->cardNumber = number;
    this->cardColor = color;
    this->cardSkill = skill;
}

bool Card::isValidCard(Card& topcard) {
    if (this->cardSuit == topcard.cardSuit) return true;
    if (this->cardNumber == topcard.cardNumber) return true;
    if (this->cardNumber == JOKER && this->cardColor == RED && topcard.cardColor == RED) return true;
    if (this->cardNumber == JOKER && this->cardColor == BLACK && topcard.cardColor == BLACK) return truel

    else return false;
}

bool Card::isSpecialCard() {
    if (this->cardSkill == NONE) return false;
    else return true;
}

bool Card::isAttack() {
    if (this->cardSkill == ATTACK) return true;
}

bool Card::isDefend() {
    if (this->cardSkill == DEFEND) return true;
}

bool Card::isChangeSuit() {
    if (this->cardSkill == ) return true;
}