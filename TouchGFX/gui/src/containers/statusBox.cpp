#include <gui/containers/statusBox.hpp>

statusBox::statusBox()
{

}

void statusBox::initialize()
{
    statusBoxBase::initialize();
}

void statusBox::setStatus(int statusCode)
{
	switch (statusCode)
	{
		case 0:
			this->noConnection.setVisible(false);
			this->okConnection.setVisible(true);
			break;
		case -1:
			this->noConnection.setVisible(true);
			this->okConnection.setVisible(false);
			break;
	}
	this->noConnection.invalidate();
	this->okConnection.invalidate();
}
