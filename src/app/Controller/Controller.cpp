#include "Controller.h"

Controller::Controller(Service *serv, ClockService *clockServ)
{
    this->service = serv;
    this->clockService = clockServ;
    this->tempHumiService = tempHumiService;
    this->lightState = LIGHT_OFF;
}

Controller::~Controller()
{
}

void Controller::updateEvent(std::string strBtn)
{
    if (strBtn == "modeButton")
    {
        service->updateState("modeButton");
    }
    if (strBtn == "powerButton")
    {
        service->updateState("powerButton");
    }
    if (strBtn == "clockUpdate")
    {
        clockService->updateEvent();
    }
    
}

void Controller::updateTempHumid(DHT_Data dhtData)
{
    tempHumiService->updateEvent(dhtData);
}