#include "MallardDuck.h"
#include "ModelDuck.h"
#include "FlyWithWings.h"
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    shared_ptr<Duck> pMallarDuck = std::make_shared<MallardDuck>();
    pMallarDuck->display();
    pMallarDuck->performFly();
    pMallarDuck->performQuack();

    cout << endl;

    shared_ptr<Duck> pModelDuck = std::make_shared<ModelDuck>();
    pModelDuck->display();
    pModelDuck->performFly();
    pModelDuck->performQuack();

    cout << endl;

    pModelDuck->setFlyBehavior(new FlyWithWings);
    pModelDuck->performFly();

    return 0;
}
