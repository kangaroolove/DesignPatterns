#pragma once
#include "Duck.h"

class Turkey;
class TurkeyAdapter : public Duck
{
public:
	TurkeyAdapter(Turkey* pTurkey);
	void quack() override;
	void fly() override;
private:
	Turkey* m_pTurkey;
};

