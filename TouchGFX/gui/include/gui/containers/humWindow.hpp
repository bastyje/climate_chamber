#ifndef HUMWINDOW_HPP
#define HUMWINDOW_HPP

#include <gui_generated/containers/humWindowBase.hpp>

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
protected:
private:
    bool checked;
};

#endif // HUMWINDOW_HPP
