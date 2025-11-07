

#include "../Public/GameState.h"
#include "../Public/Input.h"
#include "../Public/UserInterface.h"

void GameState::run() {
    while (true/*input->IsRunning()*/) {
        input->readInput();
        executePlayerActions();
        executeEnemyActions();
        userInterface->update();
    }
}

void GameState::executePlayerActions() {
}

void GameState::readInput() {
}

void GameState::executeEnemyActions() {
}
