#ifndef NETWORK_H
#define NETWORK_H

#define MAX_ESPECE 100
#define MAX_SPECIES MAX_ESPECE  // Si les deux concepts sont identiques
#define MAX_NAME_LENGTH 50

// Déclarations des fonctions
void read_network(const char *filename, int *n, char species[][MAX_NAME_LENGTH], float adjacency_matrix[][MAX_ESPECE], float populations[], float growth_rates[], float carrying_capacities[]);
void display_species(int n, char species[][MAX_NAME_LENGTH]);
void display_arcs(int n, char species[][MAX_NAME_LENGTH], float adjacency_matrix[][MAX_ESPECE]);
void display_successors_predecessors(int n, char species[][MAX_NAME_LENGTH], float adjacency_matrix[][MAX_ESPECE]);

#endif
