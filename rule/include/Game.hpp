//
// Created by pc on 25. 2. 10.
//
#ifndef GAME_H
#define GAME_H

class Game {
public:
    Game();
    void start();
    void printResult();

private:
    Card deck[52];
    Player1 player1;
    Player2 player2;

    // start game
    void shuffleDeck();
    void dealCard(); // forceDrawCard로 표현 가능
    void setOpen();
    void startLoop();
    void forceDrawCard(int drawNumber);

    void printCurrentPlayer();
    void printTurnNumber();
    bool playAvailable();
    void checkValidCard();
    void checkSpecialCard();
    void changeSuit();
    void attack(); // forceDrawCard로 표현 가능
    void colorJoker();
    void blackJoker();
    bool isWin();
    void passTurn();
};

void Game::start() {
    shuffleDeck();
    dealCard();
}

void Game::printResult() {
    // winner 출력
}





#endif //GAME_H
