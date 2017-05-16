#include <iostream>
#include "Bear/bearMain.h"
#include "Bunny/bunnyMain.h"


int main() {
    bearMain::callBearMain();
    std::endl;
    bunnyMain::callBunnyMain();
    std::endl;
    std::cout << "ByeBye, World! I'm finished :)" << std::endl;
    return 0;
}