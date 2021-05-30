#pragma once
#include "Command.h"

class Light;
class LightOnCommand : public Command
{
public:
	LightOnCommand(Light *pLight);
	void execute() override;
	void undo() override;
private:
	Light* m_pLight;
};

