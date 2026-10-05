Christopher Sardaro
Lab #3
10/4/2026


Task 1:Add the getticks system call |
Added the getticks system call to access the current ticks count and tested it with timeprint.c.



<img width="486" height="250" alt="task1_makefile_timeprint" src="https://github.com/user-attachments/assets/fed8856b-cdb9-411b-b63d-a2e81035344f" />



<img width="683" height="456" alt="task1_sys_getticks" src="https://github.com/user-attachments/assets/aaf935d6-2c34-42ce-b9ea-ace5e3949b7f" />



<img width="621" height="188" alt="task1_syscall_declaration" src="https://github.com/user-attachments/assets/ffe407ff-de89-4ac4-b36d-09287651b537" />



<img width="556" height="201" alt="task1_syscall_number" src="https://github.com/user-attachments/assets/1a7c5c3d-201d-4c96-898c-21fe7e3b8cc5" />



<img width="650" height="219" alt="task1_syscall_table" src="https://github.com/user-attachments/assets/74b06f00-8cdd-4376-aa70-dd9591f909a3" />



<img width="537" height="201" alt="task1_timeprint_code" src="https://github.com/user-attachments/assets/0659f2eb-4da1-45e7-a330-72380a69ffaf" />



<img width="599" height="152" alt="task1_timeprint_result" src="https://github.com/user-attachments/assets/332f722f-c094-4a87-9e70-e454f4783933" />



<img width="513" height="225" alt="task1_user_getticks" src="https://github.com/user-attachments/assets/8c341280-4e67-423d-aacc-7f62a4ee3c13" />



<img width="484" height="189" alt="task1_usys_getticks" src="https://github.com/user-attachments/assets/08bb4a0c-dc6d-4f99-a806-0298dd50ed08" />













Task 2:Add process timing fields |
Added ctime, stime, rtime, and etime to track process timing information.



<img width="672" height="285" alt="task2_allocproc_timing" src="https://github.com/user-attachments/assets/3ec49dda-ef99-419a-b7c5-f1dd30aa8807" />



<img width="908" height="205" alt="task2_kexit_metrics" src="https://github.com/user-attachments/assets/3a0a775a-99af-4ca6-bfa9-2e273ec15f8e" />



<img width="703" height="183" alt="task2_process_timing_fields" src="https://github.com/user-attachments/assets/dfae5b0f-7d9c-4b7e-acf4-fdd64654df28" />



<img width="610" height="252" alt="task2_scheduler_timing" src="https://github.com/user-attachments/assets/32a1905e-bb8a-4bf4-ba00-394064ef343d" />



<img width="625" height="174" alt="task2_timing_result" src="https://github.com/user-attachments/assets/3f44d65c-25e7-43d4-983a-55a94d9067b4" />




Task 3:Reflection Questions |

What determines a process's stime? |
Stime is detemrined by when the scheduler first gives the process CPU time.

How does a process length affect rtime? |
The longer a process runs, the more runtime it will accumulate, resulting in a highr rtime

Why is ctime always earlier than stime? }
A process has to be created before it can be scheduled to run, so ctime will come before stime
