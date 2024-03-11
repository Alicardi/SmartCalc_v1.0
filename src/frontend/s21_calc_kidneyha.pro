QT       += core gui printsupport

#QT += widgets

## Путь к заголовочным файлам QCustomPlot
#INCLUDEPATH += /path/to/qcustomplot

## Путь к библиотекам QCustomPlot
#LIBS += -L/path/to/qcustomplot/lib -lqcustomplot

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets


CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0
SOURCES += \
    ../backend/credit.c \
    ../backend/main.c \
    ../backend/stack.c \
    creditwindow.cpp \
    defaultcalcwindow.cpp \
    depositwindow.cpp \
    main.cpp \
    mainwindow.cpp \
    qcustomplot.cpp

HEADERS += \
    ../backend/credit.h \
    ../backend/main.h \
    ../backend/stack.h \
    creditwindow.h \
    defaultcalcwindow.h \
    depositwindow.h \
    mainwindow.h \
    qcustomplot.h

FORMS += \
    creditwindow.ui \
    defaultcalcwindow.ui \
    depositwindow.ui \
    mainwindow.ui

TRANSLATIONS += \
    s21_calc_kidneyha_ru_RU.ts
CONFIG += lrelease
CONFIG += embed_translations

win32:RC_FILE = icon_win.rc
macx:ICON = icon_macos.icns

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    qmake_qmake_qm_files.qrc \
    qmake_qmake_qm_files.qrc

DISTFILES += \
    ../backend/a.out \
    s21_calc_kidneyha.app
