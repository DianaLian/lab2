#include "JsonService.h"
using namespace std;
int main() {
	XmlService xs;
	Weather w = xs.getWeather("weather.xml");
	w.print();
}