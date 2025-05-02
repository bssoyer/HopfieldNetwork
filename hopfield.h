
#include <stdio.h>
#include <stdlib.h>

/* 11 x 7 matrix for the representation */
#define NUM_NEURONS 77 

void initialize_weights(float weights[][NUM_NEURONS]);

void train_network(float weights[][NUM_NEURONS], int pattern[NUM_NEURONS]);

void update_neurons(float weights[][NUM_NEURONS], int neurons[NUM_NEURONS]);

void display_pattern(int pattern[NUM_NEURONS]);
