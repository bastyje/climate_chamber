#include <gui/containers/tempWindow.hpp>

tempWindow::tempWindow()
{

}

void tempWindow::initialize()
{
    tempWindowBase::initialize();
    this->checked = false;
}

void tempWindow::toggleTempBtn()
{
	this->checked = !this->checked;

	if (this->checked)
	{
		this->tempDisp1.showCursor();
	}
	else
	{
		this->tempDisp1.resetCursor();
	}
}

void tempWindow::changeValue(int value)
{
	this->tempDisp1.changeValue(value);
}

void tempWindow::changeCursorPosition(int direction)
{
	this->tempDisp1.changeCursorPosition(direction);
}
