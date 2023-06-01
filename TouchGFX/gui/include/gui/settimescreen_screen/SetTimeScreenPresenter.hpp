#ifndef SETTIMESCREENPRESENTER_HPP
#define SETTIMESCREENPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class SetTimeScreenView;

class SetTimeScreenPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    SetTimeScreenPresenter(SetTimeScreenView& v);

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

    virtual ~SetTimeScreenPresenter() {};

    void saveTime(uint16_t time){
		model->saveTime(time);
	}

	uint16_t getTime(){
		return model->getTime();
	}

private:
    SetTimeScreenPresenter();

    SetTimeScreenView& view;
};

#endif // SETTIMESCREENPRESENTER_HPP
