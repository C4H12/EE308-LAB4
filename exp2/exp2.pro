 QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    bdj.cpp \
    cjh.cpp \
    dt.cpp \
    ej.cpp \
    gamble.cpp \
    hlb.cpp \
    lbh.cpp \
    main.cpp \
    mainwindow.cpp \
    sanhong.cpp \
    sh.cpp \
    sj.cpp \
    wh.cpp \
    wu.cpp \
    wz.cpp \
    yx.cpp

HEADERS += \
    bdj.h \
    cjh.h \
    dt.h \
    ej.h \
    gamble.h \
    hlb.h \
    lbh.h \
    mainwindow.h \
    sanhong.h \
    sh.h \
    sj.h \
    wh.h \
    wu.h \
    wz.h \
    yx.h

FORMS += \
    bdj.ui \
    cjh.ui \
    dt.ui \
    ej.ui \
    gamble.ui \
    hlb.ui \
    lbh.ui \
    mainwindow.ui \
    sanhong.ui \
    sh.ui \
    sj.ui \
    wh.ui \
    wu.ui \
    wz.ui \
    yx.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    1.qrc
