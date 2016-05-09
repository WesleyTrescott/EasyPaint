#include "GammaEffectTest.h"
#include "sources/effects/gammaeffect.h"

void GammaEffectTest::testGammaEffect() {
    QRgb trueResult = qRgb(255, 255, 255);
    QRgb testResult = qRgb(255, 255, 255);
    GammaEffect testEffect(NULL);
    testResult = testEffect.applyGammaEffect(testResult, 2);
    bool equivalent = (qRed(trueResult) == qRed(testResult) && qGreen(trueResult) == qGreen(testResult) && qBlue(trueResult) == qBlue(testResult)) ? true : false;
    QVERIFY(equivalent);
}
