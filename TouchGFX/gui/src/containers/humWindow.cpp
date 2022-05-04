#include <gui/containers/humWindow.hpp>

humWindow::humWindow()
{

}

void humWindow::initialize()
{
	humWindowBase::initialize();
    this->checked = false;
}

void humWindow::toggleHumBtn()
{
	this->checked = !this->checked;
}

void humWindow::changeValue(int value)
{
	this->humDisp1.changeValue(value);
}

void humWindow::changeCursorPosition(int direction)
{
	this->humDisp1.changeCursorPosition(direction);
}
