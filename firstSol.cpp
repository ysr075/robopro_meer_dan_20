#include <iostream>
#include <string>
#include <time.h>

int aantalPersonen;
std::string keuze;
std::string led_red = "RED LED";
std::string led_green = "GREEN LED";

void ingang() {
	std::cout << "ja/nee: "; std::cin >> keuze;
	if (keuze == "ja") {
		std::cout << aantalPersonen++ << "\n";
		if (aantalPersonen < 20) {
			std::cout << led_green << "\n";
		} else if (aantalPersonen >= 20) {
			std::cout << led_red << "\n";
		}
	} else if (keuze == "nee") {
		std::cout << aantalPersonen-- << "\n";
		if (aantalPersonen < 0) {
			aantalPersonen = 0;
			std::cout << led_green << "\n";
		} else if (aantalPersonen >= 20) {
			std::cout << led_red << "\n";
		} else if (aantalPersonen < 20) {
			std::cout << led_green << "\n";
		}
	}
}

int main() {
	ingang();
	return main();
}
