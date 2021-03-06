#include <gui/mainscreen_screen/mainScreenView.hpp>
#include <gui/mainscreen_screen/mainScreenPresenter.hpp>

mainScreenPresenter::mainScreenPresenter(mainScreenView& v)
    : view(v)
{

}

void mainScreenPresenter::activate()
{

}

void mainScreenPresenter::deactivate()
{

}

void mainScreenPresenter::setData(float *data)
{
	this->view.setData(data);
}

void mainScreenPresenter::updateData(float *data)
{
	this->view.updateData(data);
}

void mainScreenPresenter::sendRequest(float *data)
{
	this->model->sendRequest(data);
}

void mainScreenPresenter::reportError(int errorCode)
{
	this->view.reportError(errorCode);
}

void mainScreenPresenter::setStatus(int statusCode)
{
	this->view.setStatus(statusCode);
}
