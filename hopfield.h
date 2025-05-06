
#include <stdio.h>
#include <stdlib.h>

/* 11 x 7 matrix for the representation */
#define NUM_NEURONS 77 

void init_hopfield_weights(float weights[][NUM_NEURONS]);

void hebbian_training(float weights[][NUM_NEURONS], int pattern[NUM_NEURONS]);

void synchronous_update(float weights[][NUM_NEURONS], int neurons[NUM_NEURONS]);

void render_pattern(int pattern[NUM_NEURONS]);
