Christopher Sardaro
Assignment 3
10/4/2026

Task 1:Build spin.c - A Simulated CPU-Bound Process |

Created spin.c to simulate a CPU-bound process for a specified amount of time. 
I tested it with a duration of 1 second, which resulted in the process running for 100 ticks

<img width="623" height="154" alt="assignment3_task1_spin" src="https://github.com/user-attachments/assets/ffbb38cf-b05a-4881-a2cf-a1b5a0fffb9d" />


Task 2:Build launcher.c  -Launching Multiple Processes |

Are processes given CPU time soon after becoming runnable? |
Yes all three processes started either immediately or within 1 tick of being created, so there wasn't much of a delay.

<img width="860" height="254" alt="assignment3_task2_launcher_rr" src="https://github.com/user-attachments/assets/ee3999f6-f63d-4773-9b70-2991db57900b" />



<img width="600" height="139" alt="assignment3_task2_RoundRobin" src="https://github.com/user-attachments/assets/6bd98d4b-e5a5-4248-a129-7b9948d3a4a5" />



---Are processes fairly time-sliced? |
Yes, they seem to be. Their runtimes were pretty similar and each process was context-switched a number of times while running.


---Is there any unfair delay or starvation? |
I don't believe so, all of the three processes were able to get CPU time and finished within a pretty close range of each other.


Task 3: Implementing FCFS |

<img width="516" height="294" alt="assignment3_task3_launcher_fcfs" src="https://github.com/user-attachments/assets/949727ac-d4d7-4649-9eab-f021bb37fde9" />



<img width="625" height="140" alt="assignment3_task2_FCFS" src="https://github.com/user-attachments/assets/9cce2c7a-11d2-4e67-9cef-232fd11dafa6" />



---Are processes given CPU time soon after becoming runnable? |
Not necessarily, the first two processes started right away, but PID 6 wasn't able to start until 109 ticks after it was created.


---Are processes fairly time-sliced? |
No, FCFS is based more on which process came first rather than trying to evenly split CPU time between them unlike Round Robin


---Is there any unfair delay or starvation? |
There can definitely be more of a delay for a process that comes later. In my results, PID 6 is a good example since it had to wait 109 ticks before it first got CPU time.
