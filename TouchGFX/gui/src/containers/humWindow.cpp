#include <gui/containers/humWindow.hpp>
#include <gui/containers/tempWindow.hpp>
#include <gui/mainscreen_screen/mainScreenView.hpp>

humWindow::humWindow()
{

}

void humWindow::initialize()
{
	humWindowBase::initialize();
    this->checked = false;
}

void humWindow::setTempWindow(tempWindow *tW)
{
	this->tempWindow1 = tW;
}

void humWindow::setScreen(mainScreenView *msv)
{
	this->msv = msv;
}

#include <cstdlib>

void humWindow::toggleHumBtn()
{
	this->checked = !this->checked;

	if (this->checked)
	{
		if (this->tempWindow1->isChecked())
			this->tempWindow1->toggleTempBtn();

		this->humDisp1.showCursor();
	}
	else
	{
		this->humDisp1.resetCursor();
		this->msv->sendRequest();
	}
}

void humWindow::changeValue(int value)
{
	this->humDisp1.changeValue(value);
}

void humWindow::changeCursorPosition(int direction)
{
	this->humDisp1.changeCursorPosition(direction);
}

void humWindow::uploadValue(float value)
{
	this->humDisp2.uploadValue(value);
}

void humWindow::setData(float value)
{
	this->humDisp1.uploadValue(value);
	this->humDisp2.uploadValue(value);
}

float humWindow::getHumidity()
{
	return this->humDisp1.getHumidity();
}
