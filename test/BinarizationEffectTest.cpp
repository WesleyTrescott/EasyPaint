#include "BinarizationEffectTest.h"
#include "sources/effects/binarizationeffect.h"

void BinarizationEffectTest::testBinarizationEffect() {
    QRgb trueResult = qRgb(255, 255, 255);
    QRgb testResult = qRgb(150, 5, 15);
    BinarizationEffect testEffect(NULL);
    testResult = testEffect.applyBinarizationEffect(testResult, 200, 100);
    bool equivalent = (qRed(trueResult) == qRed(testResult) && qGreen(trueResult) == qGreen(testResult) && qBlue(trueResult) == qBlue(testResult)) ? true : false;
    QVERIFY(equivalent);
}
