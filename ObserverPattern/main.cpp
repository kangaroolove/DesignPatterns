
#include "WeatherData.h"
#include "CurrentConditionsDisplay.h"
#include <memory>

int main()
{
	std::shared_ptr<WeatherData> pWeatherData = std::make_shared<WeatherData>();
	std::shared_ptr<CurrentConditionsDisplay> pCurrentConditionsDisplay = std::make_shared<CurrentConditionsDisplay>(pWeatherData.get());
	pWeatherData->setMeasurements(2.3, 1.0, 4.5);
	pWeatherData->setMeasurements(3.5, 7.0, 4.1);

	return 0;
}