#include <matplot/matplot.h>

#include "./NormalDistribution.cpp"

namespace plt = matplot;

int main() {
    auto mu = 800;
    auto stddev = 40;

    auto nDist = NormalDistributionFactory::FromDeviation(mu, stddev);

    std::cout << nDist.areaIn(778, 834);

    plt::plot(nDist.generateProbes(), nDist.generatePlot());
    plt::show();

    return 0;
}
