#ifndef MAINSCREENVIEW_HPP
#define MAINSCREENVIEW_HPP

#include <gui_generated/mainscreen_screen/mainScreenViewBase.hpp>
#include <gui/mainscreen_screen/mainScreenPresenter.hpp>

class mainScreenView : public mainScreenViewBase
{
public:
    mainScreenView();
    virtual ~mainScreenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();

    virtual void upBtnClicked();
	virtual void downBtnClicked();
	virtual void rightBtnClicked();
	virtual void leftBtnClicked();
	virtual void setData(float *);
	virtual void updateData(float *);
    virtual void sendRequest();
	virtual void reportError(int);
    virtual void setStatus(int statusCode);
protected:
	int counter;
};

#endif // MAINSCREENVIEW_HPP
