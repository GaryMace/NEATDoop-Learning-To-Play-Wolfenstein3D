//
// Created by gary on 08/01/17.
//

#ifndef TESTBENCH_DEF_H
#define TESTBENCH_DEF_H

#define POPULATION 250        			//Population size
#define STALE_SPECIES 15				//Stale species threshold, if a Species staleness if higher than this it gets the chop
#define MUTATION_TYPES 7        		//Total number of mutation types, used in Genome.cpp
#define INPUTS 11               		//doors, walls, walk space, enemies, ammo, health, keys, guns, push walls, locked doors, elevator
#define SEARCH_GRID 25          		//5x5 grid
#define OUTPUTS 9              			//{forward, left, right, shoot, space, weap1, weap2, weap3, weap4}

#define DELTA_DISJOINT 2.0				//These are used to calculate the similarities between Genome networks
#define DELTA_WEIGHTS  0.4
#define DELTA_THRESHOLD 1.0

// Validation for these values?
#define MUTATE_CONNECTIONS_CHANCE 0.25	//Initial values for each Genome's mutation rates
#define MUTATE_LINK_CHANCE 2.0
#define MUTATE_NODE_CHANCE 0.5
#define MUTATE_BIAS_CHANCE 0.4
#define MUTATE_ENABLE_CHANCE 0.2
#define MUTATE_DISABLE_CHANCE 0.4
#define CROSSOVER_CHANCE 0.75
#define PERTURBATION_CHANCE 0.9
#define STEP_SIZE 0.1

#define MAX_NODES 100000				//Max hidden neurons allowed, no network has ever even come close to this number.

#endif //TESTBENCH_DEF_H
