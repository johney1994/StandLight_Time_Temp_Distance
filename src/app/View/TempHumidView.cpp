#include "TempHumidView.h"

TempHumidView::TempHumidView()
{
    this->lcd = lcd;
}

TempHumidView::~TempHumidView()
{

}

void TempHumidView::setTempHumidData(float temp, float humid)
{
    char buff[30];
    sprintf(buff, "%1fC, %1f%", temp, humid);
    lcd->WriteStringXY(0, 10, buff);
    printf("%s\n", buff);
}