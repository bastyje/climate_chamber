#ifndef TEMPWINDOW_HPP
#define TEMPWINDOW_HPP

#include <gui_generated/containers/tempWindowBase.hpp>

class humWindow;
class mainScreenView;

class tempWindow : public tempWindowBase
{
public:
    tempWindow();
    virtual ~tempWindow() {}
    virtual void initialize();

    virtual void changeValue(int);
    virtual void changeCursorPosition(int);
    virtual void toggleTempBtn();
    bool isChecked() { return checked; }
    virtual void setHumWindow(humWindow *hW);
    virtual void setScreen(mainScreenView *msv);
    virtual void uploadValue(float value);
    virtual void setData(float value);
    virtual float getTemperature();
protected:
private:
    bool checked;
    humWindow *humWindow1;
    mainScreenView *msv;
};

#endif // TEMPWINDOW_HPP
