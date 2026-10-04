Christopher Sardaro
Lab #2
10/4/2026

Task 1:Add a context switch counter to proc |
Added cswitches to struct proc & initialized it to 0 in allocproc().

<img width="660" height="283" alt="task1_allocproc_init" src="https://github.com/user-attachments/assets/33ccfb95-ed6b-48ff-9774-2ceebd3e64e6" />

<img width="659" height="154" alt="task1_proc_struct" src="https://github.com/user-attachments/assets/1036c658-47b6-404f-9607-6df217e77078" />


Task 2:Increment the counter on involuntary yield |
Edited usertrap() to increment cswitches when a timer interrupt causes yield().

<img width="574" height="120" alt="task2_timer_interrupt_counter" src="https://github.com/user-attachments/assets/b1b47db6-1723-4493-b5a3-bcbe8811973e" />


Task 3:Print the context switch count on process exit |
Added a printk() to kexit() to display the process name, PID, and final context switch count.

<img width="894" height="162" alt="task3_print_context_switches" src="https://github.com/user-attachments/assets/b0d18a4c-bc96-4e84-ae3e-6ee86e98a9e6" />


Task 4:Test it with a CPU-bound program |
Created spin.c, added it to the Makefile, and rebuilt xv6. With the original w_stimecmp value of 1,000,000, spin had 0 context switches.

<img width="562" height="131" alt="task4_spin_result" src="https://github.com/user-attachments/assets/aa2210c3-ab0b-4dc9-8a50-18bf8c7553c9" />


Task 5:Changing interrupt rate |
Tested lower w_stimecmp values to increase the interrupt rate. Over 10 runs, the value of 33,000 produced:
10, 10, 10, 11, 10, 9, 10, 10, 8, 10
Avg came out to be: 9.8 context switches
From lowering w_stimecmp from 1,000,000 to 33000 caused more timer interrupts, increasing the avg from 0 to ~10 context switches.

<img width="592" height="473" alt="task5_interrupt_rate_results" src="https://github.com/user-attachments/assets/5aff4b59-b0c1-40ae-956d-cfcc59b69511" />
