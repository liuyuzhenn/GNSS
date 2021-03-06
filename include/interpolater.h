#ifndef INTERPOLATER_H
#define INTERPOLATER_H
#include <vector>

namespace lyz {

class Interpolater
{
public:

static double Lagrange(const std::vector<double>& x, const std::vector<double>& y, double x0);


static std::vector<double> Lagrange(const std::vector<double>& x,
	const std::vector<double>& y, const std::vector<double>& x0);


static std::vector<double> Newton(const std::vector<double>& x,
	const std::vector<double>& y, const std::vector<double>& x0);


};

}


#endif
