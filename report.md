Christopher Sardaro
Lab #2
10/4/2026

Task 1:Add a context switch counter to proc
Added cswitches to struct proc & initialized it to 0 in allocproc().



Task 2:Increment the counter on involuntary yield
Edited usertrap() to increment cswitches when a timer interrupt causes yield().



Task 3:Print the context switch count on process exit
Added a printk() to kexit() to display the process name, PID, and final context switch count.



Task 4:Test it with a CPU-bound program
Created spin.c, added it to the Makefile, and rebuilt xv6. With the original w_stimecmp value of 1,000,000, spin had 0 context switches.



Task 5:Changing interrupt rate
Tested lower w_stimecmp values to increase the interrupt rate. Over 10 runs, the value of 33,000 produced:
10, 10, 10, 11, 10, 9, 10, 10, 8, 10
Avg came out to be: 9.8 context switches
From lowering w_stimecmp from 1,000,000 to 33000 caused more timer interrupts, increasing the avg from 0 to ~10 context switches.
