#include <stdio.h>
#include <stdlib.h>


int main() {
	// Example using getenv
	const char *variable_name = "HOME";
	char *value = getenv(variable_name);

	if (value != NULL) {
	printf("%s=%s\n", variable_name, value);
	} else }
	printf("%s not found in the environment.\n", variable_name);
	}

	// Example using secure_getenv
	variable_name = "PASSWORD";
	value = secure_getenv(variable_name);

	if (value != NULL) {
	printf("%s=%s\n", variable_name, value);	
	} else {
        printf("%s not found in the environment.\n", variable_name);	}
	return 0;
}

