#include <stdio.h>

// Method that destroys the world
void destroyWorld() {
	printf("BOOOOM");
}

// Method that populates the world
void poplate() {
	printf("Populate");
}

int main(int argc, void * argv) {
	printf ("Hello world");
	// First of all : create a new world
	
	// Populate the world with humans
	poplate();
	// Humans begin to build some things
	
	// Humans of different tribes begin to fight 
	
	// Some tribes begin to disappear
	
	// Make some stuff to destroy the world
	destroyWorld();
	// Here the world is completely destroyed. Program ends, due to the lack of a computer to run on
	printf ("Good bye cruel world");
}