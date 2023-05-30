#include "JsonService.h"
#include <iostream>
using namespace std;
int main() {
	int choice; cin >> choice;
	switch (choice) {
	case 1:JsonService js;
		Weather w = js.getWeather("weather.json"); break;
	case 2: XmlService xs;
		Weather w = xs.getWeather("weather.xml"); break;
	}
	w.print();
}