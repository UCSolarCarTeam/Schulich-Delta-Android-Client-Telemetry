#pragma once

#include <QScopedPointer>

class DataParser;
class DataPopulator;
class I_ConnectionService;
class ArrayData;
class VehicleData;
class PowerData;
class BatteryData;

class DataContainer
{
public:
	QSerialPort port();
	I_ConnectionService connectionService();
	DataParser dataParser();
	DataPopulator dataPopulator();
	ArrayData arrayData();
	PowerData powerData();
	VehicleData vehicleData();
	BatteryData batteryData();

 	explicit DataContainer();
    ~DataContainer();

private:
	QScopedPointer<QserialPort> port_;
	QScopedPointer<I_ConnectionService> connectionService;
	QScopedPointer<DataParser> dataParser_;
	QScopedPointer<DataPopulator> dataPopulator_;
	QScopedPointer<ArrayData> arrayData_;
	QScopedPointer<VehicleData> vehicleData_; 
	QScopedPointer<PowerData> powerData_;
	QScopedPointer<BatteryData> batteryData_;

};

