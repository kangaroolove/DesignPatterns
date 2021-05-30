#include "LightOffCommand.h"
#include "Light.h"

LightOffCommand::LightOffCommand(Light* pLight)
	: m_pLight(pLight)
{
}

void LightOffCommand::execute()
{
	m_pLight->off();
}

void LightOffCommand::undo()
{
	m_pLight->on();
}
