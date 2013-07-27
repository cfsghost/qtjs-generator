
QT += qml v8-private qml-private

INCLUDEPATH += \
    ../../lib/cpgf/include/ \
    ../../metagen/build/QtCore/include \
    ../../metagen/build/QtWidgets/include \
    ../../include


CONFIG += c++11 exceptions release # debug # release

QMAKE_CXXFLAGS += -fvisibility=hidden -fvisibility-inlines-hidden -s -shared-libgcc
QMAKE_LFLAGS += -fvisibility=hidden -fvisibility-inlines-hidden -s -shared-libgcc

QMAKE_CXXFLAGS_RELEASE -= -O2
QMAKE_CXXFLAGS_RELEASE += -Os

# mac + clang
# QMAKE_CFLAGS += -mmacosx-version-min=10.7 -stdlib=libc++
# QMAKE_LFLAGS += -mmacosx-version-min=10.7  -stdlib=libc++
# QMAKE_CXXFLAGS += -mmacosx-version-min=10.7  -stdlib=libc++
# QMAKE_OBJECTIVE_CFLAGS += -mmacosx-version-min=10.7
# QMAKE_CXXFLAGS += -fexceptions -ftemplate-backtrace-limit=0 -g -O0


LIBPATH += ../../lib/cpgf/lib/
LIBS += -lcpgf

