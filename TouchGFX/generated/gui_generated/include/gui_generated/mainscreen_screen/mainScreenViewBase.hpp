/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef MAINSCREENVIEWBASE_HPP
#define MAINSCREENVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/mainscreen_screen/mainScreenPresenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/containers/buttons/Buttons.hpp>
#include <gui/containers/humWindow.hpp>
#include <gui/containers/tempWindow.hpp>
#include <gui/containers/errorBox.hpp>
#include <gui/containers/statusBox.hpp>

class mainScreenViewBase : public touchgfx::View<mainScreenPresenter>
{
public:
    mainScreenViewBase();
    virtual ~mainScreenViewBase() {}
    virtual void setupScreen();

    /*
     * Virtual Action Handlers
     */
    virtual void upBtnClicked()
    {
        // Override and implement this function in mainScreen
    }

    virtual void downBtnClicked()
    {
        // Override and implement this function in mainScreen
    }

    virtual void rightBtnClicked()
    {
        // Override and implement this function in mainScreen
    }

    virtual void leftBtnClicked()
    {
        // Override and implement this function in mainScreen
    }

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box __background;
    touchgfx::Box background;
    touchgfx::IconButtonStyle< touchgfx::ImageButtonStyle< touchgfx::ClickButtonTrigger > > left;
    touchgfx::IconButtonStyle< touchgfx::ImageButtonStyle< touchgfx::ClickButtonTrigger > > right;
    touchgfx::IconButtonStyle< touchgfx::ImageButtonStyle< touchgfx::ClickButtonTrigger > > up;
    touchgfx::IconButtonStyle< touchgfx::ImageButtonStyle< touchgfx::ClickButtonTrigger > > down;
    humWindow humWindow1;
    tempWindow tempWindow1;
    errorBox errorBox1;
    statusBox statusBox1;

private:

    /*
     * Callback Declarations
     */
    touchgfx::Callback<mainScreenViewBase, const touchgfx::AbstractButtonContainer&> flexButtonCallback;

    /*
     * Callback Handler Declarations
     */
    void flexButtonCallbackHandler(const touchgfx::AbstractButtonContainer& src);

};

#endif // MAINSCREENVIEWBASE_HPP
