#pragma once
class Command
{
public:
	Command();
	virtual void execute()=0;
	virtual void undo()=0;
};

