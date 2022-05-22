#include <gui/containers/tempDisp.hpp>

tempDisp::tempDisp()
{

}

void tempDisp::initialize()
{
    tempDispBase::initialize();
}

void tempDisp::changeValue(int value)
{
	this->digits1.changeValue(value);
}

void tempDisp::changeCursorPosition(int direction)
{
	this->digits1.changeCursorPosition(direction);
}

void tempDisp::showCursor()
{
	this->digits1.showCursor();
}

void tempDisp::resetCursor()
{
	this->digits1.resetCursor();
}

void tempDisp::uploadValue(float value)
{
	this->digits1.initializeValue(value);
}

float tempDisp::getTemperature()
{
	return this->digits1.getValue();
}


