#include <iostream>
#include "Bear/bearMain.h"
#include "Bunny/bunnyMain.h"
#include "FurnitureShop/furnitureMain.h"
#include "HealthCareTax/healthTaxMain.h"


int main() {
    bearMain::callBearMain();
    cout<<std::endl;
    bunnyMain::callBunnyMain();
    cout<<std::endl;
    furnitureMain::callMainFurniture();
    cout<<std::endl;
    healthTaxMain::callHealthTaxMain();
    cout<<std::endl;

    std::cout << "ByeBye, World! I'm finished :)" << std::endl;

    return 0;
}