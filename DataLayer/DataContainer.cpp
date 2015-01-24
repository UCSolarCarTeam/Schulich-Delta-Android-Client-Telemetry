#include "DataContainer.h"
#include <QtSerialPort/QSerialPort>

#include "DataParser/DataParser.h"
#include "DataPopulator/DataPopulator.h"
#include "ConnectionService/SerialPortConnectionService.h"
#include "ArrayData/ArrayData.h"
#include "PowerData/PowerData.h"
#include "VehicleData/VehicleData.h"
#include "ArrayData/ArrayData.h"

namespace
{
    const QString defaultPortName = "COM";
	const int defaultBaudrate = 115200;
}

DataContainer::DataContainer()
: port_(new QSerialPort)
, connectionService_(new SerialPortConnectionService(defaultPortName, defaultBaudrate, *port_))
, dataParser_(new DataParser(*port_, *connectionService_))
, dataPopulator_(new DataPopulator(*dataParser_, *data_))
, arrayData_(new ArrayData())
, vehicleData_(new VehicleData())
, powerData_(new PowerData())
, batteryData_(new BatteryData()) 
{
}

QSerialPort port()
{
	return port_;
}
I_ConnectionService connectionService()
{
	return connectionService_;
}
DataParser dataParser()
{
	return dataParser_;
}
DataPopulator dataPopulator()
{
	return dataPopulator_;
}
ArrayData arrayData()
{
	return arrayData_;
}
PowerData powerData()
{
	return powerData_;
}
VehicleData vehicleData()
{
	return vehicleData_;
}
BatteryData batteryData()
{
	return batteryData_;
}

DataContainer::~DataContainer()
{
}

