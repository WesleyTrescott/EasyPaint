#include "GrayEffectTest.h"
#include "sources/effects/grayeffect.h"

void GrayEffectTest::testGrayEffect() {
    QRgb trueResult = qRgb(5, 5, 5);
    QRgb testResult = qRgb(5, 5, 5);
    GrayEffect testEffect(NULL);
    testResult = testEffect.applyGrayEffect(testResult);
    bool equivalent = (qRed(trueResult) == qRed(testResult) && qGreen(trueResult) == qGreen(testResult) && qBlue(trueResult) == qBlue(testResult)) ? true : false;
    QVERIFY(equivalent);
}
