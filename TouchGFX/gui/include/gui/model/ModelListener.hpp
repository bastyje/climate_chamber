#ifndef MODELLISTENER_HPP
#define MODELLISTENER_HPP

#include <gui/model/Model.hpp>

class ModelListener
{
public:
    ModelListener() : model(0) {}
    
    virtual ~ModelListener() {}

    void bind(Model* m)
    {
        model = m;
    }
    virtual void updateData(float *data) {}
    virtual void setData(float *data) {}
    virtual void reportError(int errorCode) {}
    virtual void setStatus(int errorCode) {}
protected:
    Model* model;
};

#endif // MODELLISTENER_HPP
