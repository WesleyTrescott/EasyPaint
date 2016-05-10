cmake_minimum_required (VERSION 2.8.11)

set(TESTHEADERS
    GammaEffectTest.h
    GrayEffectTest.h
    BinarizationEffectTest.h
    ${PROJECT_SOURCE_DIR}/sources/effects/abstracteffect.h
    ${PROJECT_SOURCE_DIR}/sources/additionaltools.h
    ${PROJECT_SOURCE_DIR}/sources/imagearea.h
    ${PROJECT_SOURCE_DIR}/sources/effects/gammaeffect.h
    ${PROJECT_SOURCE_DIR}/sources/mainwindow.h
    ${PROJECT_SOURCE_DIR}/sources/easypaintenums.h
    ${PROJECT_SOURCE_DIR}/sources/datasingleton.h
    ${PROJECT_SOURCE_DIR}/sources/additionaltools.h
    ${PROJECT_SOURCE_DIR}/sources/effects/negativeeffect.h
    ${PROJECT_SOURCE_DIR}/sources/effects/grayeffect.h
    ${PROJECT_SOURCE_DIR}/sources/effects/binarizationeffect.h
    ${PROJECT_SOURCE_DIR}/sources/effects/customeffect.h
    ${PROJECT_SOURCE_DIR}/sources/effects/effectwithsettings.h
    ${PROJECT_SOURCE_DIR}/sources/effects/gaussianblureffect.h
    ${PROJECT_SOURCE_DIR}/sources/effects/sharpeneffect.h
    ${PROJECT_SOURCE_DIR}/sources/undocommand.h
    ${PROJECT_SOURCE_DIR}/sources/widgets/toolbar.h
    ${PROJECT_SOURCE_DIR}/sources/widgets/colorchooser.h
    ${PROJECT_SOURCE_DIR}/sources/widgets/palettebar.h
    ${PROJECT_SOURCE_DIR}/sources/widgets/palettebutton.h
    ${PROJECT_SOURCE_DIR}/sources/widgets/shortcutedit.h
    ${PROJECT_SOURCE_DIR}/sources/widgets/abstracteffectsettings.h
    ${PROJECT_SOURCE_DIR}/sources/widgets/customfiltersettings.h
    ${PROJECT_SOURCE_DIR}/sources/widgets/sharpenfiltersettings.h
    ${PROJECT_SOURCE_DIR}/sources/widgets/gaussianblurfiltersettings.h
    ${PROJECT_SOURCE_DIR}/sources/widgets/imagepreview.h
    ${PROJECT_SOURCE_DIR}/sources/dialogs/resizedialog.h
    ${PROJECT_SOURCE_DIR}/sources/dialogs/settingsdialog.h
    ${PROJECT_SOURCE_DIR}/sources/dialogs/textdialog.h
    ${PROJECT_SOURCE_DIR}/sources/dialogs/effectsettingsdialog.h
    ${PROJECT_SOURCE_DIR}/sources/instruments/abstractinstrument.h
    ${PROJECT_SOURCE_DIR}/sources/instruments/abstractselection.h
    ${PROJECT_SOURCE_DIR}/sources/instruments/selectioninstrument.h
    ${PROJECT_SOURCE_DIR}/sources/instruments/pencilinstrument.h
    ${PROJECT_SOURCE_DIR}/sources/instruments/lineinstrument.h
    ${PROJECT_SOURCE_DIR}/sources/instruments/eraserinstrument.h
    ${PROJECT_SOURCE_DIR}/sources/instruments/rectangleinstrument.h
    ${PROJECT_SOURCE_DIR}/sources/instruments/ellipseinstrument.h
    ${PROJECT_SOURCE_DIR}/sources/instruments/fillinstrument.h
    ${PROJECT_SOURCE_DIR}/sources/instruments/sprayinstrument.h
    ${PROJECT_SOURCE_DIR}/sources/instruments/magnifierinstrument.h
    ${PROJECT_SOURCE_DIR}/sources/instruments/colorpickerinstrument.h
    ${PROJECT_SOURCE_DIR}/sources/instruments/curvelineinstrument.h
    ${PROJECT_SOURCE_DIR}/sources/instruments/textinstrument.h)

set(TESTSOURCES
    GammaEffectTest.cpp
    GrayEffectTest.cpp
    BinarizationEffectTest.cpp
    testmain.cpp
    ${PROJECT_SOURCE_DIR}/sources/effects/abstracteffect.cpp
    ${PROJECT_SOURCE_DIR}/sources/additionaltools.cpp
    ${PROJECT_SOURCE_DIR}/sources/imagearea.cpp
    ${PROJECT_SOURCE_DIR}/sources/effects/gammaeffect.cpp
    ${PROJECT_SOURCE_DIR}/sources/mainwindow.cpp
    ${PROJECT_SOURCE_DIR}/sources/datasingleton.cpp
    ${PROJECT_SOURCE_DIR}/sources/effects/negativeeffect.cpp
    ${PROJECT_SOURCE_DIR}/sources/effects/grayeffect.cpp
    ${PROJECT_SOURCE_DIR}/sources/effects/binarizationeffect.cpp
    ${PROJECT_SOURCE_DIR}/sources/effects/effectwithsettings.cpp
    ${PROJECT_SOURCE_DIR}/sources/undocommand.cpp
    ${PROJECT_SOURCE_DIR}/sources/widgets/toolbar.cpp
    ${PROJECT_SOURCE_DIR}/sources/widgets/colorchooser.cpp
    ${PROJECT_SOURCE_DIR}/sources/widgets/palettebar.cpp
    ${PROJECT_SOURCE_DIR}/sources/widgets/palettebutton.cpp
    ${PROJECT_SOURCE_DIR}/sources/widgets/shortcutedit.cpp
    ${PROJECT_SOURCE_DIR}/sources/widgets/customfiltersettings.cpp
    ${PROJECT_SOURCE_DIR}/sources/widgets/sharpenfiltersettings.cpp
    ${PROJECT_SOURCE_DIR}/sources/widgets/gaussianblurfiltersettings.cpp
    ${PROJECT_SOURCE_DIR}/sources/widgets/imagepreview.cpp
    ${PROJECT_SOURCE_DIR}/sources/dialogs/resizedialog.cpp
    ${PROJECT_SOURCE_DIR}/sources/dialogs/settingsdialog.cpp
    ${PROJECT_SOURCE_DIR}/sources/dialogs/textdialog.cpp
    ${PROJECT_SOURCE_DIR}/sources/dialogs/effectsettingsdialog.cpp
    ${PROJECT_SOURCE_DIR}/sources/instruments/abstractinstrument.cpp
    ${PROJECT_SOURCE_DIR}/sources/instruments/abstractselection.cpp
    ${PROJECT_SOURCE_DIR}/sources/instruments/selectioninstrument.cpp
    ${PROJECT_SOURCE_DIR}/sources/instruments/pencilinstrument.cpp
    ${PROJECT_SOURCE_DIR}/sources/instruments/lineinstrument.cpp
    ${PROJECT_SOURCE_DIR}/sources/instruments/eraserinstrument.cpp
    ${PROJECT_SOURCE_DIR}/sources/instruments/rectangleinstrument.cpp
    ${PROJECT_SOURCE_DIR}/sources/instruments/ellipseinstrument.cpp
    ${PROJECT_SOURCE_DIR}/sources/instruments/fillinstrument.cpp
    ${PROJECT_SOURCE_DIR}/sources/instruments/sprayinstrument.cpp
    ${PROJECT_SOURCE_DIR}/sources/instruments/magnifierinstrument.cpp
    ${PROJECT_SOURCE_DIR}/sources/instruments/colorpickerinstrument.cpp
    ${PROJECT_SOURCE_DIR}/sources/instruments/curvelineinstrument.cpp
    ${PROJECT_SOURCE_DIR}/sources/instruments/textinstrument.cpp)

SET(CMAKE_CXX_FLAGS "-g -O0 -Wall -fprofile-arcs -ftest-coverage")
SET(CFLAGS "-g -O0 -Wall -W -fprofile-arcs -ftest-coverage")
SET(LDFLAGS "-fprofile-arcs -ftest-coverage")

qt5_wrap_cpp(MOC_TESTSOURCES ${TESTHEADERS})

add_executable(easypainttests ${TESTHEADERS} ${TESTSOURCES} ${MOC_TESTSOURCES})

# Need to link in Widgets library so that the test application can be a QApplication
target_link_libraries(easypainttests Qt5::Test Qt5::Widgets Qt5::PrintSupport gcov)
add_test(GammaEffectTest.cpp easypainttests)

