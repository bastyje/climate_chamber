#include <gui/containers/humDisp.hpp>

humDisp::humDisp()
{

}

void humDisp::initialize()
{
    humDispBase::initialize();
    this->digits.setCursorRange();
}

void humDisp::changeValue(int value)
{
	this->digits1.changeValue(value);
}

void humDisp::changeCursorPosition(int direction)
{
	this->digits1.changeCursorPosition(direction);
}

void humDisp::showCursor()
{
	this->digits1.showCursor();
}

void humDisp::resetCursor()
{
	this->digits1.resetCursor();
}

void humDisp::uploadValue(float value)
{
	this->digits1.initializeValue(value);
}

float humDisp::getHumidity()
{
	return this->digits1.getValue();
}
