// code for FCFS scheduling algorithm

/*#include<stdio.h>
int main()
{
    int n,bt[30],wait_t[30],turn_ar_t[30],av_wt_t=0,avturn_ar_t=0,i,j;
    printf("Please enter the total number of processes(maximum 30):");
    scanf("%d",&n);
    printf("\nEnter The Process Burst Time\n");
    for(i=0; i<n; i++)
    {
        printf("P[%d]:",i);
        scanf("%d",&bt[i]);
    }
    wait_t[0]=0;
    for(i=1; i<n; i++)
    {
        wait_t[i]=0;
        for(j=0; j<i; j++)
            wait_t[i]+=bt[j];
    }
    printf("\nProcess\t\tBurst Time\t\tWaiting Time\t\tTurnaround Time");
    for(i=0; i<n; i++)
    {
        turn_ar_t[i]=bt[i]+wait_t[i];
        av_wt_t+=wait_t[i];
        avturn_ar_t+=turn_ar_t[i];
        printf("\nP[%d]\t\t%d\t\t\t%d\t\t\t%d",i+1,bt[i],wait_t[i],turn_ar_t[i]);
    }
    av_wt_t/=i;
    avturn_ar_t/=i;
    printf("\n\nAverage Waiting Time:%d",av_wt_t);
    printf("\nAverage Turnaround Time:%d",avturn_ar_t);
    return 0;
}*/


// C Code for SJF Non-Preemptive

/*#include <stdio.h>

struct Process {
    int pid;
    int arrival_time;
    int burst_time;
    int waiting_time;
    int turnaround_time;
    int completed;
};

int main() {
    int n, i, current_time = 0, completed = 0;
    float avg_waiting_time = 0, avg_turnaround_time = 0;

    printf("Enter the number of processes: ");
    scanf("%d", &n);

    struct Process processes[n];

    for (i = 0; i < n; i++) {
        printf("Enter arrival time and burst time of process %d: ", i + 1);
        processes[i].pid = i + 1;
        scanf("%d %d", &processes[i].arrival_time, &processes[i].burst_time);
        processes[i].completed = 0;
    }

    while (completed != n) {
        int idx = -1, min_burst = 1e9;

        for (i = 0; i < n; i++) {
            if (processes[i].arrival_time <= current_time && processes[i].completed == 0) {
                if (processes[i].burst_time < min_burst) {
                    min_burst = processes[i].burst_time;
                    idx = i;
                }
                // if tie, choose process with earlier arrival time
                else if (processes[i].burst_time == min_burst) {
                    if (processes[i].arrival_time < processes[idx].arrival_time) {
                        idx = i;
                    }
                }
            }
        }

        if (idx != -1) {
            processes[idx].waiting_time = current_time - processes[idx].arrival_time;
            current_time += processes[idx].burst_time;
            processes[idx].turnaround_time = processes[idx].waiting_time + processes[idx].burst_time;
            processes[idx].completed = 1;

            avg_waiting_time += processes[idx].waiting_time;
            avg_turnaround_time += processes[idx].turnaround_time;
            completed++;
        } else {
            current_time++; // idle time
        }
    }

    avg_waiting_time /= n;
    avg_turnaround_time /= n;

    printf("\nProcess\tArrival\tBurst\tWaiting\tTurnaround\n");
    for (i = 0; i < n; i++) {
        printf("P%d\t%d\t%d\t%d\t%d\n", processes[i].pid, processes[i].arrival_time,
               processes[i].burst_time, processes[i].waiting_time, processes[i].turnaround_time);
    }

    printf("\nAverage Waiting Time: %.2f\n", avg_waiting_time);
    printf("Average Turnaround Time: %.2f\n", avg_turnaround_time);

    return 0;
}*/

// SJF Preemptive scheduling algorithm.

#include <stdio.h>
#include <limits.h>

int main() {
    int n, i;
    printf("Enter the number of processes: ");
    scanf("%d", &n);

    int at[n], bt[n], rt[n];
    int ct[n], tat[n], wt[n];
    int completed = 0, t = 0, minm = INT_MAX;
    int shortest = -1, finish_time;
    int check = 0;

    for (i = 0; i < n; i++) {
        printf("Enter arrival time and burst time for Process P%d: ", i + 1);
        scanf("%d %d", &at[i], &bt[i]);
        rt[i] = bt[i];
    }

    while (completed != n) {
        minm = INT_MAX;
        shortest = -1;
        for (i = 0; i < n; i++) {
            if ((at[i] <= t) && (rt[i] < minm) && rt[i] > 0) {
                minm = rt[i];
                shortest = i;
                check = 1;
            }
        }

        if (shortest == -1) {
            t++;
            continue;
        }

        rt[shortest]--;

        if (rt[shortest] == 0) {
            completed++;
            finish_time = t + 1;
            ct[shortest] = finish_time;
            tat[shortest] = ct[shortest] - at[shortest];
            wt[shortest] = tat[shortest] - bt[shortest];
        }

        t++;
    }

    float total_tat = 0, total_wt = 0;
    printf("\nProcess\tAT\tBT\tCT\tTAT\tWT\n");
    for (i = 0; i < n; i++) {
        total_tat += tat[i];
        total_wt += wt[i];
        printf("P%d\t%d\t%d\t%d\t%d\t%d\n", i + 1, at[i], bt[i], ct[i], tat[i], wt[i]);
    }

    printf("\nAverage Turnaround Time = %.2f\n", total_tat / n);
    printf("Average Waiting Time = %.2f\n", total_wt / n);

    return 0;
}
