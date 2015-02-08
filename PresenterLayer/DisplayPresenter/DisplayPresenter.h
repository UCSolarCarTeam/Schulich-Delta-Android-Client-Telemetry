#pragma once

#include <QObject>
class I_TelemetryData;
class I_ConnectionService;
class DebugHandler;

class DisplayPresenter : public QObject
{
   Q_OBJECT
public:
   explicit DisplayPresenter(const I_TelemetryData& telemetryData,
                             I_ConnectionService& connectionService,
                             DebugHandler& debugHandler);
   void connectDataSource(QString portName, int baudRate);
   void disconnectDataSource();

private:
    void relayTelemetryData();
    void relayConnectionStatus();
    void relayDebugMessage();

private:
   const I_TelemetryData& telemetryData_;
   I_ConnectionService& connectionService_;
   DebugHandler& debugHandler_;

signals:
   void driverSetSpeedRPMReceived(double driverSetSpeedRPM);
   void driverSetCurrentReceived(double driverSetCurrent);

   void vehicleVelocityKphReceived(double vehicleVelocityKph);
   void busCurrentAReceived(double busCurrentA);
   void busVoltageReceived(double busVoltage);
   void motorVelocityRpmReceived(double motorVelocityRpm);
   void motorVoltageRealReceived(double motorVoltageReal);
   void motorCurrentRealReceived(double motorCurrentReal);
   void backEmfImaginaryReceived(double backEmfImaginary);
   void ipmHeatSinkTempReceived(double ipmHeatSinkTemp);
   void dspBoardTempReceived(double dspBoardTemp);
   void dcBusAmpHoursReceived(double dcBusAmpHours);
   void receivedErrorCountReceived(double ReceivedErrorCount);
   void transmittedErrorCountReceived(double transmittedErrorCount);

   void mod0PcbTemperatureReceived(double mod0PcbTemperature);
   void mod0CellTemperatureReceived(double mod0CellTemperature);
   void mod0CellVoltage0Received(double mod0CellVoltage0);
   void mod0CellVoltage1Received(double mod0CellVoltage1);
   void mod0CellVoltage2Received(double mod0CellVoltage2);
   void mod0CellVoltage3Received(double mod0CellVoltage3);
   void mod0CellVoltage4Received(double mod0CellVoltage4);
   void mod0CellVoltage5Received(double mod0CellVoltage5);
   void mod0CellVoltage6Received(double mod0CellVoltage6);
   void mod0CellVoltage7Received(double mod0CellVoltage7);

   void mod1PcbTemperatureReceived(double mod1PcbTemperature);
   void mod1CellTemperatureReceived(double mod1CellTemperature);
   void mod1CellVoltage0Received(double mod1CellVoltage0);
   void mod1CellVoltage1Received(double mod1CellVoltage1);
   void mod1CellVoltage2Received(double mod1CellVoltage2);
   void mod1CellVoltage3Received(double mod1CellVoltage3);
   void mod1CellVoltage4Received(double mod1CellVoltage4);
   void mod1CellVoltage5Received(double mod1CellVoltage5);
   void mod1CellVoltage6Received(double mod1CellVoltage6);
   void mod1CellVoltage7Received(double mod1CellVoltage7);

   void mod2PcbTemperatureReceived(double mod2PcbTemperature);
   void mod2CellTemperatureReceived(double mod2CellTemperature);
   void mod2CellVoltage0Received(double mod2CellVoltage0);
   void mod2CellVoltage1Received(double mod2CellVoltage1);
   void mod2CellVoltage2Received(double mod2CellVoltage2);
   void mod2CellVoltage3Received(double mod2CellVoltage3);
   void mod2CellVoltage4Received(double mod2CellVoltage4);
   void mod2CellVoltage5Received(double mod2CellVoltage5);
   void mod2CellVoltage6Received(double mod2CellVoltage6);
   void mod2CellVoltage7Received(double mod2CellVoltage7);

   void mod3PcbTemperatureReceived(double mod3PcbTemperature);
   void mod3CellTemperatureReceived(double mod3CellTemperature);
   void mod3CellVoltage0Received(double mod3CellVoltage0);
   void mod3CellVoltage1Received(double mod3CellVoltage1);
   void mod3CellVoltage2Received(double mod3CellVoltage2);
   void mod3CellVoltage3Received(double mod3CellVoltage3);
   void mod3CellVoltage4Received(double mod3CellVoltage4);
   void mod3CellVoltage5Received(double mod3CellVoltage5);
   void mod3CellVoltage6Received(double mod3CellVoltage6);
   void mod3CellVoltage7Received(double mod3CellVoltage7);

   void batteryVoltageReceived(double batteryVoltage);
   void batteryCurrentReceived(double batteryCurent);
   void batteryVoltageThresholdRisingReceived(double batteryVoltageThresholdRising);
   void batteryVoltageThresholdFallingReceived(double batteryVoltageThresholdFalling);

   void connectionFailed(QString failureMessage);
   void connectionSucceeded(QString successMessage);
   void sendDebugMessage(QString message);
};
