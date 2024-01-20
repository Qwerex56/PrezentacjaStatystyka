//
// Created by adrianczubaty on 20/01/24.
//

#include <cmath>
#include <vector>
#include <iostream>

#ifndef NORMAL_DISTRIBUTION
#define NORMAL_DISTRIBUTION

class NormalDistribution {
public:
    double deviation = 1.0;
    double mean = 0.0;

    explicit NormalDistribution(double mi = 0.0, double var = 1.0) {
        mean = mi;
        deviation = std::sqrt(var);
    }

    [[nodiscard]]
    std::vector<double> generateProbes(unsigned int probeCount = 100) const {
        auto probes = std::vector<double>(probeCount);

        for (auto i = 0; i < probeCount; ++i) {
            probes[i] = mean - 3 * deviation + i * 6 * deviation / probeCount;
            std::cout << probes[i] << std::endl;
        }

        return probes;
    }

    [[nodiscard]]
    std::vector<double> generatePlot(unsigned int probeCount = 100) const {
        auto probes = generateProbes(probeCount);
        auto plotValues = std::vector<double>(probeCount);

        for (auto i = 0; i < probeCount; ++i) {
            plotValues[i] = (*this)(probes[i]);
        }

        return plotValues;
    }

    double operator()(double x) const {
        auto exp = std::exp(getExponent(x));
        auto factor = piFactor();

        return factor * exp;
    }

    [[nodiscard]]
    double areaLeft(double x) const {
        auto z = (x - mean) / deviation;
        auto areaZ1 = std::erfc(-z / std::sqrt(2.0)) / 2.0;

        return areaZ1;
    }

    [[nodiscard]]
    double areaRight(double x) const {
        return 1 - areaLeft(x);
    }

    [[nodiscard]]
    double areaIn(double x1, double x2) const {
        return areaLeft(x2) - areaLeft(x1);
    }

    [[nodiscard]]
    double areaOut(double x1, double x2) const {
        return 1 - areaIn(x1, x2);
    }
private:
    [[nodiscard]]
    double piFactor() const {
        auto tPiSig = std::sqrt(2 * M_PIf64) * deviation;
        return std::pow(tPiSig, -1);
    }

    [[nodiscard]]
    double getExponent(double x) const {
        auto squaredExp = std::pow((x - mean) / deviation, 2);
        return -0.5 * squaredExp;
    }
};

class NormalDistributionFactory {
public:
    static NormalDistribution FromVariance(double mu = 0.0, double var = 1.0) {
        auto nDist = NormalDistribution();
        nDist.deviation = std::sqrt(var);
        nDist.mean = mu;
        return nDist;
    }

    static NormalDistribution FromDeviation(double mu = 0.0, double stddev = 1.0) {
        auto nDist = NormalDistribution();
        nDist.deviation = stddev;
        nDist.mean = mu;
        return nDist;
    }
};

#endif