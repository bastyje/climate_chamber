/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/containers/digitsBase.hpp>
#include <BitmapDatabase.hpp>
#include <texts/TextKeysAndLanguages.hpp>
#include <touchgfx/Color.hpp>

digitsBase::digitsBase()
{
    setWidth(84);
    setHeight(33);
    decimalsBox.setXY(64, 16);
    decimalsBox.setVisible(false);
    decimalsBox.setBitmap(touchgfx::Bitmap(BITMAP_CURSOR_DECIMALS_ID));

    onesBox.setXY(45, 5);
    onesBox.setVisible(false);
    onesBox.setBitmap(touchgfx::Bitmap(BITMAP_CURSOR_ID));

    tensBox.setXY(30, 5);
    tensBox.setVisible(false);
    tensBox.setBitmap(touchgfx::Bitmap(BITMAP_CURSOR_ID));

    hundredsBox.setXY(15, 5);
    hundredsBox.setVisible(false);
    hundredsBox.setBitmap(touchgfx::Bitmap(BITMAP_CURSOR_ID));

    decimals.setXY(64, 15);
    decimals.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    decimals.setLinespacing(0);
    Unicode::snprintf(decimalsBuffer, DECIMALS_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_ATWK).getText());
    decimals.setWildcard(decimalsBuffer);
    decimals.resizeToCurrentText();
    decimals.setTypedText(touchgfx::TypedText(T___SINGLEUSE_YVJJ));

    dot.setXY(59, 15);
    dot.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    dot.setLinespacing(0);
    dot.setTypedText(touchgfx::TypedText(T___SINGLEUSE_4DSA));

    ones.setXY(45, 0);
    ones.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    ones.setLinespacing(0);
    Unicode::snprintf(onesBuffer, ONES_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_UIUJ).getText());
    ones.setWildcard(onesBuffer);
    ones.resizeToCurrentText();
    ones.setTypedText(touchgfx::TypedText(T___SINGLEUSE_R12E));

    tens.setXY(30, 0);
    tens.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    tens.setLinespacing(0);
    Unicode::snprintf(tensBuffer, TENS_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_6T83).getText());
    tens.setWildcard(tensBuffer);
    tens.resizeToCurrentText();
    tens.setTypedText(touchgfx::TypedText(T___SINGLEUSE_KLYP));

    hundreds.setXY(15, 0);
    hundreds.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    hundreds.setLinespacing(0);
    Unicode::snprintf(hundredsBuffer, HUNDREDS_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_KFJL).getText());
    hundreds.setWildcard(hundredsBuffer);
    hundreds.resizeToCurrentText();
    hundreds.setTypedText(touchgfx::TypedText(T___SINGLEUSE_VEFE));

    minus.setXY(0, 0);
    minus.setVisible(false);
    minus.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    minus.setLinespacing(0);
    minus.setTypedText(touchgfx::TypedText(T___SINGLEUSE_O167));

    add(decimalsBox);
    add(onesBox);
    add(tensBox);
    add(hundredsBox);
    add(decimals);
    add(dot);
    add(ones);
    add(tens);
    add(hundreds);
    add(minus);
}

void digitsBase::initialize()
{

}

