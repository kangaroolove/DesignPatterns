#pragma once
#include <vector>

class Command;
class RemoteControlWithUndo
{
public:
	enum CommandType
	{
		CEILING_FAN
	};
	RemoteControlWithUndo();
	void setCommand(const int &slot, Command* onCommand, Command* offCommand);
	void onButtonWasPushed(const int &slot);
	void offButtonWasPushed(const int &slot);
	void undoButtonWasPushed();
private:
	std::vector<Command*> m_onCommands;
	std::vector<Command*> m_offCommands;
	Command* m_pUndoCommand;
};

