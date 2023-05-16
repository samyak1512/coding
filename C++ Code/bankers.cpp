#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_PROCESSES 100
#define MAX_RESOURCES 100

// Data structure for representing the resource allocation graph
typedef struct Graph {
    int num_processes;
    int num_resources;
    int available[MAX_RESOURCES];
    int allocation[MAX_PROCESSES][MAX_RESOURCES];
    int request[MAX_PROCESSES][MAX_RESOURCES];
} Graph;

// Function to initialize the resource allocation graph
void init_graph(Graph *graph) {
    printf("Enter the number of processes: ");
    scanf("%d", &graph->num_processes);
    printf("Enter the number of resources: ");
    scanf("%d", &graph->num_resources);

    // Initialize the available array
    printf("Enter the available resources:\n");
    for (int i = 0; i < graph->num_resources; i++) {
        scanf("%d", &graph->available[i]);
    }

    // Initialize the allocation matrix
    printf("Enter the allocation matrix:\n");
    for (int i = 0; i < graph->num_processes; i++) {
        for (int j = 0; j < graph->num_resources; j++) {
            scanf("%d", &graph->allocation[i][j]);
        }
    }

    // Initialize the request matrix
    printf("Enter the request matrix:\n");
    for (int i = 0; i < graph->num_processes; i++) {
        for (int j = 0; j < graph->num_resources; j++) {
            scanf("%d", &graph->request[i][j]);
        }
    }
}

// Function to check if a process can be safely executed
bool is_safe(Graph *graph, bool *finished, int *work) {
    bool safe = false;
    int count = 0;

    // Initialize the finished array to false
    for (int i = 0; i < graph->num_processes; i++) {
        finished[i] = false;
    }

    // Initialize the work array to the available array
    for (int i = 0; i < graph->num_resources; i++) {
        work[i] = graph->available[i];
    }

    // Find a process that can be executed
    while (count < graph->num_processes) {
        bool found = false;
        for (int i = 0; i < graph->num_processes; i++) {
            if (!finished[i]) {
                bool can_execute = true;
                for (int j = 0; j < graph->num_resources; j++) {
                    if (graph->request[i][j] > work[j]) {
                        can_execute = false;
                        break;
                    }
                }

                if (can_execute) {
                    // Execute the process
                    for (int j = 0; j < graph->num_resources; j++) {
                        work[j] += graph->allocation[i][j];
                    }
                    finished[i] = true;
                    count++;
                    found = true;
                }
            }
        }

        if (!found) {
            break;
        }
    }

    // Check if all processes have finished
    if (count == graph->num_processes) {
        safe = true;
    }

    return safe;
}

// Function to detect deadlocks in the resource allocation graph
void detect_deadlocks(Graph *graph) {
    bool finished[MAX_PROCESSES];
    int work[MAX_RESOURCES];

    // Check if a single process can be executed
    if (is_safe(graph, finished, work)) {
        printf("No deadlock detected.\n");
        return;
    }

    // Check if multiple processes can be executed
    for (int i = 0; i < graph->num_processes; i++) {
        if (!finished[i]) {
            bool can_execute = true;
            for (int j = 0; j < graph->num_resources; j++) {
                if (graph->request[i][j] > graph->available[j]) {
                    can_execute = false;
                    break;
                }
            }

            if (can_execute) {
                // Execute the process and check if a deadlock still exists
                for (int j = 0; j < graph->num_resources; j++) {
                    graph->available[j] += graph->allocation[i][j];
                    graph->allocation[i][j] = 0;
                    graph->request[i][j] = 0;
                }

                if (is_safe(graph, finished, work)) {
                    printf("Deadlock detected and resolved.\n");
                    return;
                }

                // Restore the state of the resource allocation graph
                for (int j = 0; j < graph->num_resources; j++) {
                    graph->available[j] -= graph->allocation[i][j];
                    graph->allocation[i][j] = 0;
                    graph->request[i][j] = 0;
                }
            }
        }
    }

    printf("Deadlock detected and cannot be resolved.\n");
}

int main() {
    Graph graph;

    // Initialize the resource allocation graph
    init_graph(&graph);

    // Detect deadlocks in the resource allocation graph
    detect_deadlocks(&graph);

    return 0;
}