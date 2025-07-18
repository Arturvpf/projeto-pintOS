
## Pintos Project - Operating Systems Infrastructure

### Team
Team composed by:
- Ariel Sharon Vieira de Lima (asvl)
- Artur Vinicius Pereira Fernandes (arturvpf)
- João Victor da Silva Nascimento (jvsn2)

### Overview
This repository contains the implementation and extension of the educational operating system Pintos, as part of the Stanford Pintos project. The main goal is to enhance the kernel with new functionalities, focusing on thread management, scheduling, and synchronization primitives, as described in the [official Pintos documentation](https://web.stanford.edu/~ouster/cgi-bin/cs140-spring20/pintos/pintos_2.html#SEC15).

### Objectives
- Implement the **Alarm Clock** (section 2.2.2):
  - Add support for thread sleeping and waking based on timer ticks.
- Implement the **Advanced Scheduler** (section 2.2.4):
  - Introduce a multi-level feedback queue scheduler (MLFQS) to improve thread scheduling fairness and efficiency.

### Main Features Implemented
- **Thread Sleeping/Waking:**
  - Threads can sleep for a specified number of timer ticks and are woken up at the correct time.
- **Priority Scheduling:**
  - Threads are scheduled based on priority, with support for priority donation to avoid priority inversion.
- **Advanced Scheduler (MLFQS):**
  - Implements load average, recent CPU, and dynamic priority calculation for threads.
- **Synchronization Primitives:**
  - Enhanced semaphores, locks, and condition variables to support the new scheduling policies.

### Main Files Modified
- `src/threads/thread.c` - Core thread management and scheduling logic.
- `src/threads/timer.c` - Timer interrupt handling and thread sleep/wake mechanisms.
- `src/threads/synch.c` - Synchronization primitives (semaphores, locks, condition variables).
- Other supporting files as needed.

### Project Structure
- `src/threads/` - Kernel thread management and scheduling code.
- `src/devices/` - Device drivers (timer, keyboard, etc.).
- `src/filesys/` - File system implementation (not the focus of this phase).
- `src/userprog/` - User program support (not the focus of this phase).
- `tests/` - Test cases for validating kernel functionality.

### How to Build and Run
1. **Build the kernel:**
   - Navigate to the `src/threads` directory and run `make`.
2. **Run tests:**
   - Use the provided test scripts or run `make check` in the appropriate directory.
3. **Debugging:**
   - The project supports running with GDB and Bochs/QEMU for debugging and simulation.

### References
- [Pintos Documentation](https://web.stanford.edu/~ouster/cgi-bin/cs140-spring20/pintos/pintos_2.html#SEC15)
- [Stanford Pintos Project](https://web.stanford.edu/class/cs140/projects/pintos/pintos_1.html)

---
This project was developed as part of an Operating Systems course, with all code and documentation intended for educational purposes only.


