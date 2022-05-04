/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef TEMPWINDOWBASE_HPP
#define TEMPWINDOWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <touchgfx/containers/Container.hpp>
#include <touchgfx/widgets/Image.hpp>
#include <gui/containers/tempDisp.hpp>
#include <touchgfx/containers/buttons/Buttons.hpp>

class tempWindowBase : public touchgfx::Container
{
public:
    tempWindowBase();
    virtual ~tempWindowBase() {}
    virtual void initialize();

    /*
     * Virtual Action Handlers
     */
    virtual void toggleTempBtn()
    {
        // Override and implement this function in tempWindow
    }

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Image image1;
    touchgfx::Image image3;
    touchgfx::Image image2;
    tempDisp tempDisp1;
    tempDisp tempDisp2;
    touchgfx::TextButtonStyle< touchgfx::ImageButtonStyle< touchgfx::ClickButtonTrigger > > flexButton1;

private:

    /*
     * Callback Declarations
     */
    touchgfx::Callback<tempWindowBase, const touchgfx::AbstractButtonContainer&> flexButtonCallback;

    /*
     * Callback Handler Declarations
     */
    void flexButtonCallbackHandler(const touchgfx::AbstractButtonContainer& src);

};

#endif // TEMPWINDOWBASE_HPP
