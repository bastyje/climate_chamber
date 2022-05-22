#ifndef HUMWINDOW_HPP
#define HUMWINDOW_HPP

#include <gui_generated/containers/humWindowBase.hpp>

class tempWindow;
class mainScreenView;

class humWindow : public humWindowBase
{
public:
    humWindow();
    virtual ~humWindow() {}
    virtual void initialize();

    virtual void changeValue(int);
    virtual void changeCursorPosition(int);
    virtual void toggleHumBtn();
    bool isChecked() { return checked; }
    virtual void setTempWindow(tempWindow *tW);
    virtual void setScreen(mainScreenView *msv);
    virtual void uploadValue(float value);
    virtual void setData(float value);
    virtual float getHumidity();
protected:
private:
    bool checked;
    tempWindow *tempWindow1;
    mainScreenView *msv;
};

#endif // HUMWINDOW_HPP
