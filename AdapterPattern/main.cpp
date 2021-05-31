#include "MallardDuck.h"
#include "TurkeyAdapter.h"
#include "WildTurkey.h"
#include "Duck.h"
#include <memory>
#include <iostream>
using namespace std;

void testDuck(Duck* pDuck)
{
	pDuck->quack();
	pDuck->fly();
}

int main()
{
	shared_ptr<Turkey> pTurkey = make_shared<WildTurkey>();
	shared_ptr<Duck> pMallardDuck = make_shared<MallardDuck>();
	shared_ptr<Duck> pTurkeyAdapter = make_shared<TurkeyAdapter>(pTurkey.get());

	cout << "The Turkey says..." << endl;
	pTurkey->gobble();
	pTurkey->fly();

	cout << endl;

	cout << "The Duck says..." << endl;
	testDuck(pMallardDuck.get());

	cout << endl;

	cout << "The TurkeyAdapter says..." << endl;
	testDuck(pTurkeyAdapter.get());

	return 0;
}