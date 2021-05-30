#pragma once
class MessageManager
{
public:
	static MessageManager* getInstance();
	void Printf();
private:
	MessageManager();
	~MessageManager();
};

