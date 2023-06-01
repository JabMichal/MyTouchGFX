#include <gui/settimescreen_screen/SetTimeScreenView.hpp>

SetTimeScreenView::SetTimeScreenView()
{

}

void SetTimeScreenView::setupScreen()
{
    SetTimeScreenViewBase::setupScreen();

    time_ms = presenter->getTime();
		Unicode::snprintf(textArea_timeSettingsBuffer, TEXTAREA_TIMESETTINGS_SIZE, "%u", time_ms);
		textArea_timeSettings.invalidate();
}

void SetTimeScreenView::tearDownScreen()
{
    SetTimeScreenViewBase::tearDownScreen();
}

void SetTimeScreenView::write1(){
		if(SetTimeScreenView::time_ms == 0)
			SetTimeScreenView::time_ms = 1;
		else if (SetTimeScreenView::time_ms <= 99){
			SetTimeScreenView::time_ms *= 10;
			SetTimeScreenView::time_ms += 1;
		}

		Unicode::snprintf(textArea_timeSettingsBuffer, TEXTAREA_TIMESETTINGS_SIZE, "%u", time_ms);
		textArea_timeSettings.invalidate();
}
void SetTimeScreenView::write2(){
	if(SetTimeScreenView::time_ms == 0)
		SetTimeScreenView::time_ms = 2;
	else if (SetTimeScreenView::time_ms <= 99){
		SetTimeScreenView::time_ms *= 10;
		SetTimeScreenView::time_ms += 2;
	}

	Unicode::snprintf(textArea_timeSettingsBuffer, TEXTAREA_TIMESETTINGS_SIZE, "%u", time_ms);
	textArea_timeSettings.invalidate();
}
void SetTimeScreenView::write3(){
	if(SetTimeScreenView::time_ms == 0)
		SetTimeScreenView::time_ms = 3;
	else if (SetTimeScreenView::time_ms <= 99){
		SetTimeScreenView::time_ms *= 10;
		SetTimeScreenView::time_ms += 3;
	}

	Unicode::snprintf(textArea_timeSettingsBuffer, TEXTAREA_TIMESETTINGS_SIZE, "%u", time_ms);
	textArea_timeSettings.invalidate();
}
void SetTimeScreenView::write4(){
	if(SetTimeScreenView::time_ms == 0)
		SetTimeScreenView::time_ms = 4;
	else if (SetTimeScreenView::time_ms <= 99){
		SetTimeScreenView::time_ms *= 10;
		SetTimeScreenView::time_ms += 4;
	}

	Unicode::snprintf(textArea_timeSettingsBuffer, TEXTAREA_TIMESETTINGS_SIZE, "%u", time_ms);
	textArea_timeSettings.invalidate();
}
void SetTimeScreenView::write5(){
	if(SetTimeScreenView::time_ms == 0)
		SetTimeScreenView::time_ms = 5;
	else if (SetTimeScreenView::time_ms <= 99){
		SetTimeScreenView::time_ms *= 10;
		SetTimeScreenView::time_ms += 5;
	}

	Unicode::snprintf(textArea_timeSettingsBuffer, TEXTAREA_TIMESETTINGS_SIZE, "%u", time_ms);
	textArea_timeSettings.invalidate();
}
void SetTimeScreenView::write6(){
	if(SetTimeScreenView::time_ms == 0)
		SetTimeScreenView::time_ms = 6;
	else if (SetTimeScreenView::time_ms <= 99){
		SetTimeScreenView::time_ms *= 10;
		SetTimeScreenView::time_ms += 6;
	}

	Unicode::snprintf(textArea_timeSettingsBuffer, TEXTAREA_TIMESETTINGS_SIZE, "%u", time_ms);
	textArea_timeSettings.invalidate();
}
void SetTimeScreenView::write7(){
	if(SetTimeScreenView::time_ms == 0)
		SetTimeScreenView::time_ms = 7;
	else if (SetTimeScreenView::time_ms <= 99){
		SetTimeScreenView::time_ms *= 10;
		SetTimeScreenView::time_ms += 7;
	}

	Unicode::snprintf(textArea_timeSettingsBuffer, TEXTAREA_TIMESETTINGS_SIZE, "%u", time_ms);
	textArea_timeSettings.invalidate();
}
void SetTimeScreenView::write8(){
	if(SetTimeScreenView::time_ms == 0)
		SetTimeScreenView::time_ms = 8;
	else if (SetTimeScreenView::time_ms <= 99){
		SetTimeScreenView::time_ms *= 10;
		SetTimeScreenView::time_ms += 8;
	}

	Unicode::snprintf(textArea_timeSettingsBuffer, TEXTAREA_TIMESETTINGS_SIZE, "%u", time_ms);
	textArea_timeSettings.invalidate();
}
void SetTimeScreenView::write9(){
	if(SetTimeScreenView::time_ms == 0)
		SetTimeScreenView::time_ms = 9;
	else if (SetTimeScreenView::time_ms <= 99){
		SetTimeScreenView::time_ms *= 10;
		SetTimeScreenView::time_ms += 9;
	}

	Unicode::snprintf(textArea_timeSettingsBuffer, TEXTAREA_TIMESETTINGS_SIZE, "%u", time_ms);
	textArea_timeSettings.invalidate();
}
void SetTimeScreenView::enterSettings(){
	presenter->saveTime(time_ms);

	application().gotoMainScreenScreenCoverTransitionWest();
}
void SetTimeScreenView::backspace(){
	if(SetTimeScreenView::time_ms > 0)
		SetTimeScreenView::time_ms /= 10;

	Unicode::snprintf(textArea_timeSettingsBuffer, TEXTAREA_TIMESETTINGS_SIZE, "%u", time_ms);
	textArea_timeSettings.invalidate();
}
