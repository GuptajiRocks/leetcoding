#include <stdio.h>
#include <stdbool.h>

// Define a structure for processes
typedef struct {
    int id;              // Process ID
    int duration;        // Total execution time (burst time)
    int remaining_time;  // Remaining time for execution
    int waiting_time;    // Total waiting time
    int turnaround_time; // Turnaround time
    bool completed;      // Whether the process has finished execution
} Process;

// Define a structure for queues
typedef struct {
    Process *queue[100]; // Array of processes
    int front;           // Front of the queue
    int rear;            // Rear of the queue
    int time_quantum;    // Time quantum for this queue
} Queue;

// Initialize a queue
void init_queue(Queue *q, int time_quantum) {
    q->front = 0;
    q->rear = 0;
    q->time_quantum = time_quantum;
}

// Add a process to the queue
void enqueue(Queue *q, Process *p) {
    q->queue[q->rear++] = p;
}

// Remove a process from the queue
Process *dequeue(Queue *q) {
    if (q->front < q->rear) {
        return q->queue[q->front++];
    }
    return NULL;
}

// Check if a queue is empty
bool is_empty(Queue *q) {
    return q->front == q->rear;
}

// Multi-Level Feedback Queue Scheduling
void mlfq_scheduling(Process processes[], int n, Queue queues[], int num_queues) {
    int time = 0; // Global time counter
    int completed_processes = 0;

    // Initially enqueue all processes into the highest priority queue
    for (int i = 0; i < n; i++) {
        enqueue(&queues[0], &processes[i]);
    }

    // Execute processes in the MLFQ
    while (completed_processes < n) {
        for (int i = 0; i < num_queues; i++) {
            while (!is_empty(&queues[i])) {
                Process *p = dequeue(&queues[i]);

                printf("Process %d is running in queue with time quantum %d\n", p->id, queues[i].time_quantum);

                int execution_time = p->remaining_time > queues[i].time_quantum ? queues[i].time_quantum : p->remaining_time;
                p->remaining_time -= execution_time;
                time += execution_time;

                // Update waiting time for all other processes in the queue
                for (int j = 0; j < n; j++) {
                    if (!processes[j].completed && &processes[j] != p) {
                        processes[j].waiting_time += execution_time;
                    }
                }

                if (p->remaining_time == 0) {
                    p->completed = true;
                    p->turnaround_time = time;
                    completed_processes++;
                    printf("Process %d finished execution\n", p->id);
                } else {
                    printf("Process %d is rescheduled with %d remaining time\n", p->id, p->remaining_time);
                    if (i + 1 < num_queues) {
                        enqueue(&queues[i + 1], p); // Move to the next lower priority queue
                    } else {
                        enqueue(&queues[i], p); // Remain in the same queue
                    }
                }
            }
        }
    }
}

// Main function
int main() {
    int n, num_queues = 3;
    Queue queues[num_queues];

    // Initialize queues with different time quanta
    init_queue(&queues[0], 4); // High-priority queue
    init_queue(&queues[1], 8); // Medium-priority queue
    init_queue(&queues[2], 16); // Low-priority queue

    // Gather input
    printf("Enter the number of processes: ");
    scanf("%d", &n);

    Process processes[n];
    for (int i = 0; i < n; i++) {
        processes[i].id = i + 1;
        printf("Enter the duration for process %d: ", i + 1);
        scanf("%d", &processes[i].duration);
        processes[i].remaining_time = processes[i].duration;
        processes[i].waiting_time = 0;
        processes[i].turnaround_time = 0;
        processes[i].completed = false;
    }

    // Perform MLFQ scheduling
    mlfq_scheduling(processes, n, queues, num_queues);

    // Calculate averages
    float total_waiting_time = 0, total_turnaround_time = 0;
    printf("\nProcess\tDuration\tWaiting Time\tTurnaround Time\n");
    for (int i = 0; i < n; i++) {
        total_waiting_time += processes[i].waiting_time;
        total_turnaround_time += processes[i].turnaround_time;
        printf("%d\t%d\t\t%d\t\t%d\n", processes[i].id, processes[i].duration, processes[i].waiting_time, processes[i].turnaround_time);
    }

    printf("\nAverage Waiting Time: %.2f\n", total_waiting_time / n);
    printf("Average Turnaround Time: %.2f\n", total_turnaround_time / n);

    return 0;
}
