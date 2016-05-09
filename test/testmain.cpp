#include <QtTest/QtTest>
#include "GammaEffectTest.h"
#include "GrayEffectTest.h"
#include "BinarizationEffectTest.h"
#include <iostream>

int main(int argc, char* argv[]) {
    GammaEffectTest gammaTest;
    GrayEffectTest grayTest;
    BinarizationEffectTest bintest;

    int result = 0;

    freopen("results1.xml", "w", stdout);
    result |= QTest::qExec(&gammaTest, argc, argv);
    freopen("results2.xml", "w", stdout);
    result |= QTest::qExec(&grayTest, argc, argv);
    freopen("results3.xml", "w", stdout);
    result |= QTest::qExec(&bintest, argc, argv);

    return result;
}
