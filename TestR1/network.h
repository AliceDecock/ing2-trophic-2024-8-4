//
// Created by alice on 27/11/2024.
//

#ifndef NETWORK_H
#define NETWORK_H

#define MAX_SPECIES 100
#define MAX_NAME_LENGTH 50

// Déclaration des fonctions
void read_network(const char *filename, int *n, char species[][MAX_NAME_LENGTH], float adjacency_matrix[][MAX_SPECIES]);
void display_species(int n, char species[][MAX_NAME_LENGTH]);
void display_arcs(int n, char species[][MAX_NAME_LENGTH], float adjacency_matrix[][MAX_SPECIES]);
void display_successors_predecessors(int n, char species[][MAX_NAME_LENGTH], float adjacency_matrix[][MAX_SPECIES]);

#endif