#ifndef DIGITS_HPP
#define DIGITS_HPP

#include <gui_generated/containers/digitsBase.hpp>
#include <vector>

/*typedef struct {
  	touchgfx::Box box;
   	touchgfx::TextAreaWithOneWildcard digit;
   	uint16_t bufferSize;
} digit_t;*/

class digits : public digitsBase
{
public:
    digits();
    virtual ~digits() {}
    virtual void initialize();

    virtual void uploadValue(int, int, int, int);
    virtual void initializeValue(float);
    virtual void changeValue(int);
    virtual void changeCursorPosition(int);
    virtual void showCursor();
    virtual void resetCursor();
protected:

private:
    touchgfx::Vector<touchgfx::Box, 4> boxes;
    touchgfx::Vector<touchgfx::TextAreaWithOneWildcard, 4> digitsTab;
    touchgfx::Vector<int, 4> values;
    int oldCursorPosition;
    int newCursorPosition;
    virtual void updateValue();
};

#endif // DIGITS_HPP
