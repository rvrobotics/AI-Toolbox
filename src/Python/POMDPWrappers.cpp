#include <boost/python.hpp>

void exportPOMDPModel();
void exportPOMDPSparseModel();

void exportPOMDPPOMCP();
void exportPOMDPWitness();
void exportPOMDPIncrementalPruning();

BOOST_PYTHON_MODULE(POMDP)
{
    boost::python::docstring_options localDocstringOptions(true, true, false);

    exportPOMDPModel();
    exportPOMDPSparseModel();

    exportPOMDPPOMCP();
    exportPOMDPWitness();
    exportPOMDPIncrementalPruning();
}