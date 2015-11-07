TEMPLATE = app

# This MUST be before the common.pri since these need to be listed before the qwt library
LIBS += -L../../build/.lib -lViewLayer -lBusinessLayer -lCommunicationLayer -lPresenterLayer -lDataLayer

! include( ../common.pri ) {
    error( "Couldn't find the common.pri file!" )
}

! include(../../build/.lib/libDataLayer.prl) {
    error( "Couldn't find the libDataLayer.prl file!" )
}
! include(../../build/.lib/libCommunicationLayer.prl) {
    error( "Couldn't find the libCommunicationLayer.prl file!" )
}
! include(../../build/.lib/libBusinessLayer.prl) {
    error( "Couldn't find the libBusinessLayer.prl file!" )
}
! include(../../build/.lib/libPresenterLayer.prl) {
    error( "Couldn't find the libPresenterLayer.prl file!" )
}
! include(../../build/.lib/libViewLayer.prl) {
    error( "Couldn't find the libViewLayer.prl file!" )
}

PRE_TARGETDEPS += \
   ../../build/.lib/*

TARGET = SolarCarTelemetry
DESTDIR = ../../build

HEADERS += \
   SolarCarTelemetry.h

SOURCES += \
   main.cpp \
   SolarCarTelemetry.cpp