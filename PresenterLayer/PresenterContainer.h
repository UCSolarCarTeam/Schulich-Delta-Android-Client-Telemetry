#pragma once

#include <QScopedPointer>

class BusinessContainer;
class DisplayPresenter;

class PresenterContainer
{
public:
	DisplayPresenter& displayPresenter();

    explicit PresenterContainer();
    ~PresenterContainer();

private:
	QScopedPointer<BusinessContainer> businessLayer_;
	QScopedPointer<DisplayPresenter> displayPresenter_;
};

