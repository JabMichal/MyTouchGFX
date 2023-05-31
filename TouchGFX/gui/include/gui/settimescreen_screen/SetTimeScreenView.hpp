#ifndef SETTIMESCREENVIEW_HPP
#define SETTIMESCREENVIEW_HPP

#include <gui_generated/settimescreen_screen/SetTimeScreenViewBase.hpp>
#include <gui/settimescreen_screen/SetTimeScreenPresenter.hpp>

class SetTimeScreenView : public SetTimeScreenViewBase
{
public:
    SetTimeScreenView();
    virtual ~SetTimeScreenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // SETTIMESCREENVIEW_HPP
