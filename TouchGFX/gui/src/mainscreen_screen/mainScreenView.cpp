#include <gui/mainscreen_screen/mainScreenView.hpp>

mainScreenView::mainScreenView()
{

}

void mainScreenView::setupScreen()
{
    mainScreenViewBase::setupScreen();
    this->tempWindow1.setHumWindow(&(this->humWindow1));
    this->humWindow1.setTempWindow(&(this->tempWindow1));
}

void mainScreenView::tearDownScreen()
{
    mainScreenViewBase::tearDownScreen();
}

void mainScreenView::upBtnClicked()
{
	if (this->tempWindow1.isChecked())
	{
		this->tempWindow1.changeValue(1);
	}
	else if (this->humWindow1.isChecked())
	{
		this->humWindow1.changeValue(1);
	}
}

void mainScreenView::downBtnClicked()
{
	if (this->tempWindow1.isChecked())
	{
		this->tempWindow1.changeValue(-1);
	}
	else if (this->humWindow1.isChecked())
	{
		this->humWindow1.changeValue(-1);
	}
}

void mainScreenView::rightBtnClicked()
{
	if (this->tempWindow1.isChecked())
	{
		this->tempWindow1.changeCursorPosition(-1);
	}
	else if (this->humWindow1.isChecked())
	{
		this->humWindow1.changeCursorPosition(-1);
	}
}

void mainScreenView::leftBtnClicked()
{
	if (this->tempWindow1.isChecked())
	{
		this->tempWindow1.changeCursorPosition(1);

	}
	else if (this->humWindow1.isChecked())
	{
		this->humWindow1.changeCursorPosition(1);

	}
}
