#include <QtSerialPort/QSerialPort>

#include "SolarCarTelemetry.h"
#include "TelemetryData.h"
#include "DataParser.h"
#include "DataPopulator.h"

SolarCarTelemetry::SolarCarTelemetry()
: data_(new TelemetryData())
, port_(new QSerialPort)
, dataParser_(new DataParser(*port_))
, dataPopulator_(new DataPopulator(*dataParser_, *data_))
{
}

SolarCarTelemetry::~SolarCarTelemetry()
{
}
