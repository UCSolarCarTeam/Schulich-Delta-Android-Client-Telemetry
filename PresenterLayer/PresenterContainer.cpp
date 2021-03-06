#include "BatteryPresenter/BatteryPresenter.h"
#include "BusinessLayer/BusinessContainer.h"
#include "CommunicationLayer/CommunicationContainer.h"
#include "CommunicationPresenter/CommunicationPresenter.h"
#include "DataLayer/DataContainer.h"
#include "FaultsPresenter/FaultsPresenter.h"
#include "GraphsPresenter/PowerGraphsPresenter.h"
#include "PlaybackPresenter/PlaybackPresenter.h"
#include "PowerPresenter/PowerPresenter.h"
#include "PresenterContainer.h"
#include "VehiclePresenter/VehiclePresenter.h"

PresenterContainer::PresenterContainer(DataContainer& dataContainer,
      CommunicationContainer& communicationContainer,
      BusinessContainer& businessContainer)
: batteryPresenter_(new BatteryPresenter(dataContainer.batteryData()))
, communicationPresenter_(new CommunicationPresenter(
   communicationContainer.messageForwarder(),
   communicationContainer.connectionController(),
   communicationContainer.udpConnectionService(),
   communicationContainer.radioConnectionService(),
   communicationContainer.commDeviceManager(),
   businessContainer.communicationsMonitoringService()))
, vehiclePresenter_(new VehiclePresenter(dataContainer.vehicleData()))
, powerPresenter_(new PowerPresenter(dataContainer.powerData()))
, faultsPresenter_(new FaultsPresenter(dataContainer.faultsData()))
, powerGraphsPresenter_(new PowerGraphsPresenter(dataContainer.vehicleData(),
   dataContainer.powerData(),
   dataContainer.batteryData()))
, playbackPresenter_(new PlaybackPresenter(
   businessContainer.playbackService()))
{
}

PresenterContainer::~PresenterContainer()
{
}

BatteryPresenter& PresenterContainer::batteryPresenter()
{
   return *batteryPresenter_;
}

CommunicationPresenter& PresenterContainer::communicationPresenter()
{
   return *communicationPresenter_;
}

VehiclePresenter& PresenterContainer::vehiclePresenter()
{
   return *vehiclePresenter_;
}

PowerPresenter& PresenterContainer::powerPresenter()
{
    return *powerPresenter_;
}

FaultsPresenter& PresenterContainer::faultsPresenter()
{
	return *faultsPresenter_;
}

PowerGraphsPresenter& PresenterContainer::powerGraphsPresenter()
{
	return *powerGraphsPresenter_;
}

PlaybackPresenter& PresenterContainer::playbackPresenter()
{
   return *playbackPresenter_;
}
