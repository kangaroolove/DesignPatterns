#include "RemoteControlWithUndo.h"
#include "Command.h"
#include "NoCommand.h"

RemoteControlWithUndo::RemoteControlWithUndo()
	: m_pUndoCommand(new NoCommand())
{
}

void RemoteControlWithUndo::setCommand(const int &slot, Command* onCommand, Command* offCommand)
{
	m_onCommands.insert(m_onCommands.begin() + slot, onCommand);
	m_offCommands.insert(m_offCommands.begin() + slot, offCommand);
}

void RemoteControlWithUndo::onButtonWasPushed(const int &slot)
{
	m_onCommands[slot]->execute();
	m_pUndoCommand = m_onCommands[slot];
}

void RemoteControlWithUndo::offButtonWasPushed(const int &slot)
{
	m_offCommands[slot]->execute();
	m_pUndoCommand = m_offCommands[slot];
}

void RemoteControlWithUndo::undoButtonWasPushed()
{
	m_pUndoCommand->undo();
}
