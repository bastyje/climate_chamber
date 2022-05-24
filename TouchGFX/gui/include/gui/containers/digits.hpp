#ifndef DIGITS_HPP
#define DIGITS_HPP

#include <gui_generated/containers/digitsBase.hpp>
#include <vector>

class digits : public digitsBase
{
public:
    digits();
    virtual ~digits() {}
    virtual void initialize();

    virtual void initializeValue(float);
    virtual void changeValue(int);
    virtual void changeCursorPosition(int);
    virtual void showCursor();
    virtual void resetCursor();
    virtual float getValue();
    virtual void setValueRange(float, float);
    virtual void setCursorRange(int, int);
    virtual void hideCursor();
protected:

private:
    virtual void increase();
    virtual void decrease();
    virtual void updateValue();

    touchgfx::Vector<touchgfx::Image*, 4> boxes;
    touchgfx::Vector<touchgfx::TextAreaWithOneWildcard, 4> digitsTab;

    float min, max, value;

    int minCursor, maxCursor;
    int cursorPosition;

    const uint8_t RED_ON = 255;
    const uint8_t GREEN_ON = 255;
    const uint8_t BLUE_ON = 255;

    const uint8_t RED_OFF = 0;
    const uint8_t GREEN_OFF = 255;
    const uint8_t BLUE_OFF = 255;
};

#endif // DIGITS_HPP
