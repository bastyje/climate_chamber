#include <gui/containers/humWindow.hpp>
#include <gui/containers/tempWindow.hpp>

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
