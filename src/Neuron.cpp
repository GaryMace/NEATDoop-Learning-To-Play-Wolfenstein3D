//
// Created by gary on 08/01/17.
//
#include "Neuron.h"
#include <cmath>
#include <sstream>

/*
=================================
=
= {'-'} Neuron::backup
=
= Outputs a json inspired string representation of a Neuron.
=
=================================
 */
std::string Neuron::backup() {
    std::list<Gene>::iterator geneItr;
    std::string out = "\n\t\t\t\t\t\t\tNeuron{";

    std::string str =
            static_cast<std::ostringstream*>(&(std::ostringstream() << value))->str();
    out += "value=" + str + ",";
    out += "\n\t\t\t\t\t\t\t\tinputs={";
    for (geneItr = inputs.begin(); geneItr != inputs.end(); geneItr++)
            out += geneItr->backup() + ",";
    out = out.substr(0, out.length() - 1) + "}";  //Remove last ","

    out += "}\n\t\t\t\t\t\t\t}\n";
    return out;
}

/*
=================================
=
= {'-'} Neuron::sigmoid
=
= return sigmoid of the given x value, static function
=
=================================
 */
double Neuron::sigmoid(double x) {
    return 2.0 / (1.0 + std::exp(-4.9 * x)) - 1.0;
}
