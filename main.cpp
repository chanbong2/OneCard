#include <iostream>
#include "Card.h"
#include "rule/include/Game.hpp"
#include "Player1.h"
#include "Player2.h"

using namespace std;

int main() {
    Game game;

    game.start();

    game.displayResults();

    return 0;
}