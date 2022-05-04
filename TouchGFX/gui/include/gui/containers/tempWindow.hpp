#ifndef TEMPWINDOW_HPP
#define TEMPWINDOW_HPP

#include <gui_generated/containers/tempWindowBase.hpp>

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
protected:
private:
    bool checked;
};

#endif // TEMPWINDOW_HPP
