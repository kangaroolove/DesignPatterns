#include "RemoteControlWithUndo.h"
#include "Light.h"
#include "LightOnCommand.h"
#include "LightOffCommand.h"
#include <memory>

int main()
{
	RemoteControlWithUndo remoteControl;
	std::shared_ptr<Light> pLight = std::make_shared<Light>();
	std::shared_ptr<LightOnCommand> pLightOnCommand = std::make_shared<LightOnCommand>(pLight.get());
	std::shared_ptr<LightOffCommand> pLightOffCommand = std::make_shared<LightOffCommand>(pLight.get());
	remoteControl.setCommand(RemoteControlWithUndo::CEILING_FAN, pLightOnCommand.get(), pLightOffCommand.get());

	remoteControl.onButtonWasPushed(RemoteControlWithUndo::CEILING_FAN);
	remoteControl.offButtonWasPushed(RemoteControlWithUndo::CEILING_FAN);
	remoteControl.undoButtonWasPushed();

	return 0;
}