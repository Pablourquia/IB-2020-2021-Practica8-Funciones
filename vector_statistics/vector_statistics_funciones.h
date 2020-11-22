#include <vector>
using namespace std;

void usage (int argc, char *argv[]);
double frand(double fMin, double fMax);
vector <double> RandomNumbersGen(double components, double lower_limit, double upper_limit);
double Media(vector <double> total,double components);
double MaximumValue (vector <double> total);
double MinimumValue (vector <double> total, double upper_limit);
double StandardDeviation (vector <double> total, double components, double  Media);

