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