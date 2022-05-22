#ifndef ERRORBOX_HPP
#define ERRORBOX_HPP

#include <gui_generated/containers/errorBoxBase.hpp>

class errorBox : public errorBoxBase
{
public:
    errorBox();
    virtual ~errorBox() {}

    virtual void initialize();
protected:
};

#endif // ERRORBOX_HPP
