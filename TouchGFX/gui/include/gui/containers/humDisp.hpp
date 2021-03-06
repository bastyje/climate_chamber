#ifndef HUMDISP_HPP
#define HUMDISP_HPP

#include <gui_generated/containers/humDispBase.hpp>

class humDisp : public humDispBase
{
public:
    humDisp();
    virtual ~humDisp() {}
    virtual void initialize();

    virtual void changeValue(int);
    virtual void changeCursorPosition(int);
    virtual void showCursor();
    virtual void resetCursor();
    virtual void uploadValue(float value);
    virtual float getHumidity();
protected:
};

#endif // HUMDISP_HPP
