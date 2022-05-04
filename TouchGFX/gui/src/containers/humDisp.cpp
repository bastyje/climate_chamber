#include <gui/containers/humDisp.hpp>

humDisp::humDisp()
{

}

void humDisp::initialize()
{
    humDispBase::initialize();
}

void humDisp::changeValue(int value)
{
	this->digits1.changeValue(value);
}

void humDisp::changeCursorPosition(int direction)
{
	this->digits1.changeCursorPosition(direction);
}
