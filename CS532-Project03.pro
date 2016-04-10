TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    edge.cpp \
    graph.cpp \
    breadthfirsttraversal.cpp \
    depthfirsttraversal.cpp

HEADERS += \
    edge.h \
    graph.h \
    breadthfirsttraversal.h \
    depthfirsttraversal.h

