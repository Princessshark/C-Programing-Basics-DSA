#include <stdio.h>

#define LAMBDA 10
#define TEMP_WEIGHT 0.5
#define PRESSURE_WEIGHT -0.002

int main() {
	int pressure, temperature;
	float weather;

	// Input atmospheric pressure
	printf("Atmospheric pressure in Pascals (Pa): ");
	if (scanf("%d", &pressure) != 1) {
    	fprintf(stderr, "Invalid input for pressure.\n");
    	return 1;
	}

	// Input temperature
	printf("Temperature in Celsius (C): ");
	if (scanf("%d", &temperature) != 1) {
    	fprintf(stderr, "Invalid input for temperature.\n");
    	return 1;
	}

	// Calculate weather index
	weather = TEMP_WEIGHT * temperature + PRESSURE_WEIGHT * pressure + LAMBDA;

	// Determine weather condition based on calculated value
	If (weather >= 150) {
    	printf("Severe Heatwave\n");
	} else if (weather >= 101) {
    	printf("Extreme Heat\n");
	} else if (weather >= 51) {
    	printf("Hot and Dry\n");
	} else if (weather >= 1) {
    	printf("Very Sunny\n");
	} else if (weather >= -49) {
    	printf("Sunny\n");
	} else if (weather >= -99) {
    	printf("Partly Cloudy\n");
	} else if (weather >= -149) {
    	printf("Cloudy\n");
	} else if (weather >= -199) {
    	printf("Light Rain\n");
	} else if (weather >= -250) {
    	printf("Heavy Rain\n");
	} else {
    	printf("Extreme Weather Event\n");
	}

	return 0;
}
