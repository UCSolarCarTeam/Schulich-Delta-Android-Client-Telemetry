#include "DebugHandler.h"
#include "../ConnectionService/I_ConnectionService.h"
#include "../DataParser/I_DataParser.h"
#include "../DataPopulator/DataPopulator.h"

#include <Qfile>
#include <QTextStream>


DebugHandler::DebugHandler(I_ConnectionService& connectionService, I_DataParser& dataParser)
: connectionService_(connectionService)
, dataParser_(dataParser)
{
   connect(&connectionService, SIGNAL(sendDebugMessage(QString)),
           this, SLOT (receivedConnectionService(QString)));

   connect(&dataParser, SIGNAL(sendDebugMessage(QString)),
           this, SLOT (receivedDebugDataParser(QString)));

   connect(&dataParser, SIGNAL(dataReceived(int,int)),
           this, SLOT (receivedDataParser(int, int)));
}

DebugHandler::~DebugHandler()
{

}

/** public functions **/
void DebugHandler::receivedConnectionService(QString debugMessage)
{
   emit sendDebugMessageToPresenter(debugMessage);
}

//gets the original RAW string that dataparse receieves (this will just be sent to the debugLogFile)
void DebugHandler::receivedDebugDataParser(QString debugMessage)
{
    QString messageToFile("RAW-STRING:    "); //Optional String prepending Message
    messageToFile.append(debugMessage);

    printlnToDebugLogFile(messageToFile);
}

//gets the parsed values that dataparser emits and translates it to a human readable format
//and sends it to the debugLogFile
void DebugHandler::receivedParsedDataParser(int id, int value)
{
    QString messageToFile("PARSED-STRING: "); //Optional String prepending Message.

    messageToFile.append(convertIDtoString(id));
    messageToFile.append(value); //May need to change this if we don't want raw 'value' going in.

    printlnToDebugLogFile(messageToFile);
}


/** private **/
void DebugHandler::printlnToDebugLogFile(QString debugMessage)
{
    QString filename = "SolarCarDebugLog.txt";
    QFile file(filename);
    if(file.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        QTextStream writer(&file);
        writer << debugMessage << endl;
    }
    file.close();
}

QString DebugHandler::convertIDtoString(int id)
{
   QString convertedID("");//Optional String prepending Converted ID.

   switch(id)
   {
   case DataPopulator::DriverSetSpeedRPM:
      convertedID.append("DriverSetSpeedRPM:");
      break;
   case DataPopulator::DriverSetCurrent:
      convertedID.append("DriverSetCurrent:");
      break;
   case DataPopulator::VehicleVelocity:
      convertedID.append("VehicleVelocity:");
      break;
   case DataPopulator::BusCurrentA:
      convertedID.append("BusCurrentA:");
      break;
   case DataPopulator::BusVoltage:
      convertedID.append("BusVoltage:");
      break;
   case DataPopulator::MotorVelocityRpm:
      convertedID.append("MotorVelocityRpm:");
      break;
   case DataPopulator::MotorVoltageReal:
      convertedID.append("MotorVoltageReal:");
      break;
   case DataPopulator::MotorCurrentReal:
      convertedID.append("MotorCurrentReal:");
      break;
   case DataPopulator::BackEmfImaginary:
      convertedID.append("BackEmfImaginary:");
      break;
   case DataPopulator::IpmHeatSinkTemp:
      convertedID.append("IpmHeatSinkTemp:");
      break;
   case DataPopulator::DspBoardTemp:
      convertedID.append("DspBoardTemp:");
      break;
   case DataPopulator::DcBusAmpHours:
      convertedID.append("DcBusAmpHours:");
      break;
   case DataPopulator::ReceivedErrorCount:
      convertedID.append("ReceivedErrorCount:");
      break;
   case DataPopulator::TransmittedErrorCount:
      convertedID.append("TransmittedErrorCount:");
      break;

   case DataPopulator::Mod0PcbTemperature:
      convertedID.append("Mod0PcbTemperature:");
      break;
   case DataPopulator::Mod0CellTemperature:
      convertedID.append("Mod0CellTemperature:");
      break;
   case DataPopulator::Mod0CellVoltage0:
      convertedID.append("Mod0CellVoltage0:");
      break;
   case DataPopulator::Mod0CellVoltage1:
      convertedID.append("Mod0CellVoltage1:");
      break;
   case DataPopulator::Mod0CellVoltage2:
      convertedID.append("Mod0CellVoltage2:");
      break;
   case DataPopulator::Mod0CellVoltage3:
      convertedID.append("Mod0PcbTemperature:");
      break;
   case DataPopulator::Mod0CellVoltage4:
      convertedID.append("Mod0CellVoltage4:");
      break;
   case DataPopulator::Mod0CellVoltage5:
      convertedID.append("Mod0CellVoltage5:");
      break;
   case DataPopulator::Mod0CellVoltage6:
      convertedID.append("Mod0CellVoltage6:");
      break;
   case DataPopulator::Mod0CellVoltage7:
      convertedID.append("Mod0CellVoltage7:");
      break;

   case DataPopulator::Mod1PcbTemperature:
      convertedID.append("Mod1PcbTemperature:");
      break;
   case DataPopulator::Mod1CellTemperature:
      convertedID.append("Mod1CellTemperature:");
      break;
   case DataPopulator::Mod1CellVoltage0:
      convertedID.append("Mod1CellVoltage0:");
      break;
   case DataPopulator::Mod1CellVoltage1:
      convertedID.append("Mod1CellVoltage1:");
      break;
   case DataPopulator::Mod1CellVoltage2:
      convertedID.append("Mod1CellVoltage2:");
      break;
   case DataPopulator::Mod1CellVoltage3:
      convertedID.append("Mod1CellVoltage3:");
      break;
   case DataPopulator::Mod1CellVoltage4:
      convertedID.append("Mod1CellVoltage4:");
      break;
   case DataPopulator::Mod1CellVoltage5:
      convertedID.append("Mod1CellVoltage5:");
      break;
   case DataPopulator::Mod1CellVoltage6:
      convertedID.append("Mod1CellVoltage6:");
      break;
   case DataPopulator::Mod1CellVoltage7:
      convertedID.append("Mod1CellVoltage7:");
      break;

   case DataPopulator::Mod2PcbTemperature:
       convertedID.append("Mod2PcbTemperature:");
       break;
   case DataPopulator::Mod2CellTemperature:
        convertedID.append("Mod2CellTemperature:");
      break;
   case DataPopulator::Mod2CellVoltage0:
        convertedID.append("Mod2CellVoltage0:");
      break;
   case DataPopulator::Mod2CellVoltage1:
        convertedID.append("Mod2CellVoltage1:");
      break;
   case DataPopulator::Mod2CellVoltage2:
        convertedID.append("Mod2CellVoltage2:");
      break;
   case DataPopulator::Mod2CellVoltage3:
        convertedID.append("Mod2CellVoltage3:");
      break;
   case DataPopulator::Mod2CellVoltage4:
        convertedID.append("Mod2CellVoltage4:");
      break;
   case DataPopulator::Mod2CellVoltage5:
        convertedID.append("Mod2CellVoltage5:");
      break;
   case DataPopulator::Mod2CellVoltage6:
        convertedID.append("Mod2CellVoltage6:");
      break;
   case DataPopulator::Mod2CellVoltage7:
        convertedID.append("Mod2CellVoltage7:");
      break;

   case DataPopulator::Mod3PcbTemperature:
        convertedID.append("Mod3PcbTemperature:");
      break;
   case DataPopulator::Mod3CellTemperature:
        convertedID.append("Mod3CellTemperature:");
      break;
   case DataPopulator::Mod3CellVoltage0:
        convertedID.append("Mod3CellVoltage0:");
      break;
   case DataPopulator::Mod3CellVoltage1:
        convertedID.append("Mod3CellVoltage1:");
      break;
   case DataPopulator::Mod3CellVoltage2:
        convertedID.append("Mod3CellVoltage2:");
      break;
   case DataPopulator::Mod3CellVoltage3:
        convertedID.append("Mod3CellVoltage3:");
      break;
   case DataPopulator::Mod3CellVoltage4:
        convertedID.append("Mod3CellVoltage4:");
      break;
   case DataPopulator::Mod3CellVoltage5:
        convertedID.append("Mod3CellVoltage5:");
      break;
   case DataPopulator::Mod3CellVoltage6:
        convertedID.append("Mod3CellVoltage6:");
      break;
   case DataPopulator::Mod3CellVoltage7:
        convertedID.append("Mod3CellVoltage7:");
      break;

   case DataPopulator::BatteryVoltage:
        convertedID.append("BatteryVoltage:");
      break;
   case DataPopulator::BatteryCurrent:
        convertedID.append("BatteryCurrent:");
      break;
   case DataPopulator::BatteryVoltageThresholdRising:
        convertedID.append("BatteryVoltageThresholdRising:");
      break;
   case DataPopulator::BatteryVoltageThresholdFalling:
        convertedID.append("BatteryVoltageThresholdFalling:");
      break;
   }

return convertedID;
}