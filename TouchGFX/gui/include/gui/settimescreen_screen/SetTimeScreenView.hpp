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

    virtual void write1();
    virtual void write2();
    virtual void write3();
    virtual void write4();
    virtual void write5();
    virtual void write6();
    virtual void write7();
    virtual void write8();
    virtual void write9();
    virtual void enterSettings();
    virtual void backspace();

protected:
    uint16_t time_ms;
};

#endif // SETTIMESCREENVIEW_HPP
