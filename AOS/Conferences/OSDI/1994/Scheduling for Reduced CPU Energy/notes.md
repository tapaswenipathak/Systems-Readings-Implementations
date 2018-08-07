## Scheduling for Reduced CPU Energy

* Reducing the energy used by CPU.
* Metric for cpu energy performance introduced as million-of-instructions-per-joule (MIPJ).
* Mainly with reducing voltage and reversible logic as adjusting the clock speed at a
fine grain, CPU energy is substantially saved with a limited impact on performance.

## Energy Consumed By
* Disply
* Hard disk movement, what else?

## Energy Metric for CPUs
* MIPJ = MIPS/WATTS
* Reducing the clock speed causes a liner reduction in enery consumption, but a similar
reduction in MIPS. The two effects cancel. Similar with switching off the machine.
* As shared before *VOLTAGE* :)
* E/clock ~ V^2 i.e., setting time for a gate is proportional to the voltage.


## Trace Data
1. SCHED : Context switch away from a process
2. IDLE_ON: Enter the idle loop
3. IDLE_OFF: Leave idle loop to run a process
4. FORK: Create a new process
5. EXEC: Overlay a (new) process with another program
6. EXIT: Process termination
7. SLEEP: Wait on an event
8. WAKEUP: Notify a sleeping process

## Trace Data Assumptions
* No enery when machine is IDLE
* No time taken to switch speeds
* After any 30 second period of greater than 90% idle any laptop would have been turned
off.


## Scheduling Algorithms
1. Unbounded-delay perfect-future (OPT)
   * Takes the entire trace and streches all the run times to fill all the idle times.
	 * Impractical as this requires perfect future knowledge of the work to be done over
	 the interval and undesirable as it produces large delays in runtimes of individual
	 jobs without regard to the need for effective response to read-time events like user
	 keystrokes or network packets.

2. Bounded-delay limited-future (FUTURE)
   * Similar to OPT but peers into the future only a small window and optimizes energy
	 over that window while never delaying work past the window.
	 * Sets a window of 10 to 50 milliseconds user interactive response with remain high.

3. Bounded-delay limited-past (PAST)
   * Practical version of FUTURE
	 * Instead of looking a fixed window into the future it looks a fixed window into the past and assumed the next window will be like the previous one.
	 * `run_cycles` : is the number of non idle CPU cycles in the last interval.
	 * `idle_cycles`: is the idle CPU cycles, split between hard and soft idle time.
	 * `excess_cycles`: is the cyles left over from the previous interval because we ran too slow.
	 * `next_excess` : `run_cycles - speed * (run_cycles + soft_idle)`


## Evaluating the Algorithms
* There is a super cool graph in the paper.
* The PAST and FUTURE algorithms approach OPT as the interval is lenghened.
* For the same interval PAST does better than FUTURE because it is allowed to defer excess cycles into the next interval.
* There is another graph on excess cycles.
* and on voltage.

## Future Work
* Percent idle time of the system
* Jobs can be classified into background, periodic and foreground classes.
* Energy saving depends on the interval speed adjustments for all three algorithms.
* Algorithms can provide signification power savings.
