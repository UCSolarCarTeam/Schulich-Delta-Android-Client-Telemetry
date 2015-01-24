#include "ViewContainer.h"

#include "PresenterLayer/PresenterContainer.h"
#include "SolarCarTestUI/SolarCarTestUI.h"
#include "DisplayView/DisplayView.h"

ViewContainer::ViewContainer()
: presenterLayer_(new PresenterContainer())
, mainWindow_(new SolarCarTestUI())
, displayView_(new DisplayView(*displayPresenter_, *mainWindow_))
{
}

SolarCarTestUI& mainWindow()
{
	return mainWindow_;
}
DisplayView displayView()
{
	return displayView_;
}

ViewContainer::~ViewContainer()
{
}

