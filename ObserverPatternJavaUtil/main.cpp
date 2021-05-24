
#include "WeatherData.h"
#include "GeneralDisplay.h"
#include <memory>

int main()
{
	std::shared_ptr<WeatherData> pWeatherData = std::make_shared<WeatherData>();
	std::shared_ptr<GeneralDisplay> pGeneralDisplay = std::make_shared<GeneralDisplay>(pWeatherData.get());
	pWeatherData->setMeasurements(1.0, 2.0, 3.0);
	pWeatherData->setMeasurements(4.5, 5.5, 6.5);

	return 0;
}