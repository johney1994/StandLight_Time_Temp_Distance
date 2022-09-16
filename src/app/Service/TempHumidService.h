#ifndef TEMPHUMIDSERVICE_H
#define TEMPHUMIDSERVICE_H

#include "DHT_Data.h"
#include "TempHumidView.h"

class TempHumidService
{
private:
    TempHumidView *tempHumiView;

public:
    TempHumidService(TempHumidView *tempHumiView);
    virtual ~TempHumidService();



};

#endif