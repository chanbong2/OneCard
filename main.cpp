#include <iostream>
#include <vector>
#include <deque>

class Game {
private:
    //deck
    //open
    int currentTurn;

public:
    Game();

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

    void printResult();


};