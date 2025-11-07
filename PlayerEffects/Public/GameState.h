#pragma once
#include <vector>

class Input;
class UserInterface;
class Character;

class GameState {
public:
    GameState() : userInterface(nullptr), players(nullptr), enemies(nullptr) {
    };
    void run();
private:
    void executePlayerActions();
    void executeEnemyActions();
    void readInput();

    UserInterface* userInterface;
    Input* input;
    std::vector<Character>* players;
    std::vector<Character>* enemies;
};
