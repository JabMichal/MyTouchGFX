#include <gui/mainscreen_screen/MainScreenView.hpp>

MainScreenView::MainScreenView()
{

}

void MainScreenView::setupScreen()
{
    MainScreenViewBase::setupScreen();

    time_ms = presenter->getTime();
		Unicode::snprintf(textArea_timeBuffer, TEXTAREA_TIME_SIZE, "%u", time_ms);
		textArea_time.invalidate();
}

void MainScreenView::tearDownScreen()
{
	presenter->saveTime(time_ms);

    MainScreenViewBase::tearDownScreen();
}
