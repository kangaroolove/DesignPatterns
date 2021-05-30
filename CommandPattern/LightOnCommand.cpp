#include "LightOnCommand.h"
#include "Light.h"

LightOnCommand::LightOnCommand(Light* pLight)
	: m_pLight(pLight)
{
}

void LightOnCommand::execute()
{
	m_pLight->on();
}

void LightOnCommand::undo()
{
	m_pLight->off();
}
