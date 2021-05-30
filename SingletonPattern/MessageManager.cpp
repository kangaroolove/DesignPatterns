#include "MessageManager.h"
#include <iostream>
using namespace std;

MessageManager* MessageManager::getInstance()
{
	static MessageManager messageManger;
	return &messageManger;
}

void MessageManager::Printf()
{
	cout << "MessageManager" << endl;
}

MessageManager::MessageManager()
{

}

MessageManager::~MessageManager()
{
}


