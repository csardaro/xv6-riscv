Christopher Sardaro
Lab #3
10/4/2026


Task 1:Add the getticks system call
Added the getticks system call to access the current ticks count and tested it with timeprint.c.


Task 2:Add process timing fields
Added ctime, stime, rtime, and etime to track process timing information.


Task 3:Reflection Questions

What determines a process's stime?
Stime is detemrined by when the scheduler first gives the process CPU time.

How does a process length affect rtime?
The longer a process runs, the more runtime it will accumulate, resulting in a highr rtime

Why is ctime always earlier than stime?
A process has to be created before it can be scheduled to run, so ctime will come before stime
