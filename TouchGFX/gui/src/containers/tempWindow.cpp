#include <gui/containers/tempWindow.hpp>
#include <gui/containers/humWindow.hpp>

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
