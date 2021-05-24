#include "MallardDuck.h"
#include "ModelDuck.h"
#include "Squeak.h"
#include <iostream>

int main(int argc, char *argv[])
{
    std::shared_ptr<Duck> pMallarDuck = std::make_shared<MallardDuck>();
    pMallarDuck->display();
    pMallarDuck->performFly();
    pMallarDuck->performQuack();

    std::cout << "\n";

    std::shared_ptr<Duck> pModelDuck = std::make_shared<ModelDuck>();
    pModelDuck->display();
    pModelDuck->performFly();
    pModelDuck->performQuack();
    pModelDuck->setQuackBehavior(new Squeak);
    pModelDuck->performQuack();

    return 0;
}
