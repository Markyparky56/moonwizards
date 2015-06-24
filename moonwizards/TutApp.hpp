/*********************************************************************
Tutorial Application Class
Based on the Tutorial Framework file
*********************************************************************/

#ifndef TUTAPP_H
#define TUTAPP_H

#include "BaseApp.hpp"

class TutApp : public BaseApp
{
public:
    TutApp();
    virtual ~TutApp();

protected:
    virtual void createScene();
};

#endif // TUTAPP_H