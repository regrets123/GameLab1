#include "../Public/Effect.h"

Effect::Effect(const std::string& name) {
	name = name;
}

void Effect::apply() {
	if(duration > 0) {
		// apply effect logic here
	}

	if (effectStrength <= 0) {

	}

	//if (effectStrength < 0) {	// Duration condition vad??
	//	
	//}

}

void Effect::remove() {
	
}

const std::string Effect::getName() const { 	
	return name; 
}