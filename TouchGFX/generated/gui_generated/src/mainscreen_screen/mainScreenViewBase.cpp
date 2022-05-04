/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/mainscreen_screen/mainScreenViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <BitmapDatabase.hpp>

mainScreenViewBase::mainScreenViewBase() :
    flexButtonCallback(this, &mainScreenViewBase::flexButtonCallbackHandler)
{

    __background.setPosition(0, 0, 240, 320);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));

    background.setPosition(0, 0, 240, 320);
    background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));

    left.setBitmaps(Bitmap(BITMAP_BTN_LEFT_ID), Bitmap(BITMAP_BTN_LEFT_CLICKED_ID));
    left.setBitmapXY(0, 0);
    left.setIconBitmaps(Bitmap(BITMAP_LEFT_ID), Bitmap(BITMAP_LEFT_ID));
    left.setIconXY(10, 20);
    left.setPosition(20, 220, 60, 80);
    left.setAction(flexButtonCallback);

    right.setBitmaps(Bitmap(BITMAP_BTN_RIGHT_ID), Bitmap(BITMAP_BTN_RIGHT_CLICKED_ID));
    right.setBitmapXY(0, 0);
    right.setIconBitmaps(Bitmap(BITMAP_RIGHT_ID), Bitmap(BITMAP_RIGHT_ID));
    right.setIconXY(10, 20);
    right.setPosition(160, 220, 60, 80);
    right.setAction(flexButtonCallback);

    up.setBitmaps(Bitmap(BITMAP_BTN_UP_DOWN_ID), Bitmap(BITMAP_BTN_UP_DOWN_CLICKED_ID));
    up.setBitmapXY(0, 0);
    up.setIconBitmaps(Bitmap(BITMAP_PLUS_ID), Bitmap(BITMAP_PLUS_ID));
    up.setIconXY(18, 0);
    up.setPosition(82, 220, 76, 39);
    up.setAction(flexButtonCallback);

    down.setBitmaps(Bitmap(BITMAP_BTN_UP_DOWN_ID), Bitmap(BITMAP_BTN_UP_DOWN_CLICKED_ID));
    down.setBitmapXY(0, 0);
    down.setIconBitmaps(Bitmap(BITMAP_MINUS_ID), Bitmap(BITMAP_MINUS_ID));
    down.setIconXY(18, 0);
    down.setPosition(82, 261, 76, 39);
    down.setAction(flexButtonCallback);

    humWindow1.setXY(20, 120);

    tempWindow1.setXY(20, 20);

    add(__background);
    add(background);
    add(left);
    add(right);
    add(up);
    add(down);
    add(humWindow1);
    add(tempWindow1);
}

void mainScreenViewBase::setupScreen()
{
    humWindow1.initialize();
    tempWindow1.initialize();
}

void mainScreenViewBase::flexButtonCallbackHandler(const touchgfx::AbstractButtonContainer& src)
{
    if (&src == &left)
    {
        //Interaction4
        //When left clicked call virtual function
        //Call leftBtnClicked
        leftBtnClicked();
    }
    else if (&src == &right)
    {
        //Interaction3
        //When right clicked call virtual function
        //Call rightBtnClicked
        rightBtnClicked();
    }
    else if (&src == &up)
    {
        //Interaction1
        //When up clicked call virtual function
        //Call upBtnClicked
        upBtnClicked();
    }
    else if (&src == &down)
    {
        //Interaction2
        //When down clicked call virtual function
        //Call downBtnClicked
        downBtnClicked();
    }
}
