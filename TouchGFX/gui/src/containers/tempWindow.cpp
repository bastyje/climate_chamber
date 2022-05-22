#include <gui/containers/tempWindow.hpp>
#include <gui/containers/humWindow.hpp>
#include <gui/mainscreen_screen/mainScreenView.hpp>

tempWindow::tempWindow()
{

}

void tempWindow::initialize()
{
    tempWindowBase::initialize();
    this->checked = false;
}

void tempWindow::setHumWindow(humWindow *hW)
{
	this->humWindow1 = hW;
}

void tempWindow::setScreen(mainScreenView *msv)
{
	this->msv = msv;
}

#include <cstdlib>

void tempWindow::toggleTempBtn()
{
	this->checked = !this->checked;

	if (this->checked)
	{
		if (this->humWindow1->isChecked())
			this->humWindow1->toggleHumBtn();

		this->tempDisp1.showCursor();
	}
	else
	{
		this->tempDisp1.resetCursor();
		this->msv->sendRequest();
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

void tempWindow::uploadValue(float value)
{
	this->tempDisp2.uploadValue(value);
}

void tempWindow::setData(float value)
{
	this->tempDisp1.uploadValue(value);
	this->tempDisp2.uploadValue(value);
}

float tempWindow::getTemperature()
{
	return this->tempDisp1.getTemperature();
}

