#include "TurkeyAdapter.h"
#include "Turkey.h"

TurkeyAdapter::TurkeyAdapter(Turkey* pTurkey)
	: m_pTurkey(pTurkey)
{
}

void TurkeyAdapter::quack()
{
	m_pTurkey->gobble();
}

void TurkeyAdapter::fly()
{
	for (int i = 0; i < 5; i++)
	{
		m_pTurkey->fly();
	}
}
