#pragma once

#include <iostream>

class UserInterface {

public:
    void update();
    void print(std::string msg);

private:
    void updateGraphics();
};
