#pragma once
#include "Command.h"

class Light;
class LightOffCommand : public Command
{
public:
	LightOffCommand(Light *pLight);
	void execute() override;
	void undo() override;
private:
	Light* m_pLight;
};

