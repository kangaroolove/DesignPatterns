#ifndef DUCK_H
#define DUCK_H

#include <memory>
using namespace std;

class FlyBehavior;
class QuackBehavior;

class Duck
{
public:
	Duck();
	void performQuack();
	void performFly();
	virtual void display()=0;
	void setFlyBehavior(FlyBehavior* pFlyBehavior);
	void setQuackBehavior(QuackBehavior *pQuackBehavior);
	shared_ptr<FlyBehavior> m_pFlyBehavior;
	shared_ptr<QuackBehavior> m_pQuackBehavior;
};
#endif