#include "Duck.h"
#include "FlyBehavior.h"
#include "QuackBehavior.h"

Duck::Duck()
{
}

void Duck::performQuack()
{
	m_pQuackBehavior->quack();
}

void Duck::performFly()
{
	m_pFlyBehavior->fly();
}

void Duck::setFlyBehavior(FlyBehavior* pFlyBehavior)
{
	m_pFlyBehavior.reset(pFlyBehavior);
}

void Duck::setQuackBehavior(QuackBehavior* pQuackBehavior)
{
	m_pQuackBehavior.reset(pQuackBehavior);
}
