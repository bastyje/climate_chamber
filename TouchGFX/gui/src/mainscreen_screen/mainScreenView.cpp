#include <gui/mainscreen_screen/mainScreenView.hpp>

mainScreenView::mainScreenView()
{

}

void mainScreenView::setupScreen()
{
    mainScreenViewBase::setupScreen();
    this->tempWindow1.setHumWindow(&(this->humWindow1));
    this->humWindow1.setTempWindow(&(this->tempWindow1));
    this->tempWindow1.setScreen(this);
    this->humWindow1.setScreen(this);
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

void mainScreenView::setData(float *data)
{
	this->tempWindow1.setData(data[0]);
	this->humWindow1.setData(data[1]);
}

void mainScreenView::updateData(float *data)
{
	this->tempWindow1.uploadValue(data[0]);
	this->humWindow1.uploadValue(data[1]);
}

void mainScreenView::sendRequest()
{
	float data[3];
	data[0] = 1;
	data[1] = this->tempWindow1.getTemperature();
	data[2] = this->humWindow1.getHumidity();
	this->presenter->sendRequest(data);
}

void mainScreenView::reportError(int errorCode)
{
	this->background.setVisible(false);
	this->humWindow1.setVisible(false);
	this->tempWindow1.setVisible(false);
	this->right.setVisible(false);
	this->left.setVisible(false);
	this->up.setVisible(false);
	this->down.setVisible(false);
	this->statusBox1.setVisible(false);
	this->errorBox1.setVisible(true);

	this->background.invalidate();
	this->humWindow1.invalidate();
	this->tempWindow1.invalidate();
	this->right.invalidate();
	this->left.invalidate();
	this->up.invalidate();
	this->down.invalidate();
	this->statusBox1.invalidate();
	this->errorBox1.invalidate();
}

void mainScreenView::setStatus(int statusCode)
{
	this->statusBox1.setStatus(statusCode);
}
