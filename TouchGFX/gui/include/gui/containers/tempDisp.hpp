#ifndef TEMPDISP_HPP
#define TEMPDISP_HPP

#include <gui_generated/containers/tempDispBase.hpp>

class tempDisp : public tempDispBase
{
public:
    tempDisp();
    virtual ~tempDisp() {}
    virtual void initialize();

    virtual void changeValue(int);
    virtual void changeCursorPosition(int);
    virtual void showCursor();
    virtual void resetCursor();
    virtual void uploadValue(float value);
    virtual float getTemperature();
protected:
};

#endif // TEMPDISP_HPP
