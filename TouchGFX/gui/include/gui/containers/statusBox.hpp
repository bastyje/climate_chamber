#ifndef STATUSBOX_HPP
#define STATUSBOX_HPP

#include <gui_generated/containers/statusBoxBase.hpp>

class statusBox : public statusBoxBase
{
public:
    statusBox();
    virtual ~statusBox() {}

    virtual void initialize();
    virtual void setStatus(int);
protected:
};

#endif // STATUSBOX_HPP
