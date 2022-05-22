#ifndef MAINSCREENPRESENTER_HPP
#define MAINSCREENPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class mainScreenView;

class mainScreenPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    mainScreenPresenter(mainScreenView& v);

    /**
     * The activate function is called automatically when this screen is "switched in"
     * (ie. made active). Initialization logic can be placed here.
     */
    virtual void activate();

    /**
     * The deactivate function is called automatically when this screen is "switched out"
     * (ie. made inactive). Teardown functionality can be placed here.
     */
    virtual void deactivate();

    virtual ~mainScreenPresenter() {};

    virtual void setData(float *);
    virtual void updateData(float *);
    virtual void sendRequest(float *);
    virtual void reportError(int);
    virtual void setStatus(int);
private:
    mainScreenPresenter();

    mainScreenView& view;
};

#endif // MAINSCREENPRESENTER_HPP
