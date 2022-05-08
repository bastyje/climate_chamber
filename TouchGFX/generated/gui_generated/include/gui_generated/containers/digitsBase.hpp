/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef DIGITSBASE_HPP
#define DIGITSBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <touchgfx/containers/Container.hpp>
#include <touchgfx/widgets/Image.hpp>
#include <touchgfx/widgets/TextAreaWithWildcard.hpp>
#include <touchgfx/widgets/TextArea.hpp>

class digitsBase : public touchgfx::Container
{
public:
    digitsBase();
    virtual ~digitsBase() {}
    virtual void initialize();

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Image decimalsBox;
    touchgfx::Image onesBox;
    touchgfx::Image tensBox;
    touchgfx::Image hundredsBox;
    touchgfx::TextAreaWithOneWildcard decimals;
    touchgfx::TextArea dot;
    touchgfx::TextAreaWithOneWildcard ones;
    touchgfx::TextAreaWithOneWildcard tens;
    touchgfx::TextAreaWithOneWildcard hundreds;

    /*
     * Wildcard Buffers
     */
    static const uint16_t DECIMALS_SIZE = 10;
    touchgfx::Unicode::UnicodeChar decimalsBuffer[DECIMALS_SIZE];
    static const uint16_t ONES_SIZE = 10;
    touchgfx::Unicode::UnicodeChar onesBuffer[ONES_SIZE];
    static const uint16_t TENS_SIZE = 10;
    touchgfx::Unicode::UnicodeChar tensBuffer[TENS_SIZE];
    static const uint16_t HUNDREDS_SIZE = 10;
    touchgfx::Unicode::UnicodeChar hundredsBuffer[HUNDREDS_SIZE];

private:

};

#endif // DIGITSBASE_HPP
