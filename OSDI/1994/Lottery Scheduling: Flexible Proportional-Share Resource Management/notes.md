Lottery Scheduling: Flexible Proportional-Share Resource Management
===================================================================

## Intro

* Proportional Share Scheduler or Fair Share Scheduler
* Gurantee that each job obtain a certain percentage of CPU time
* Hold a lotter to determine which process would get to the run next on CPU
* Higher priority or processes which needs to run more often should have more lottery tickets
* Randomness (avoid corner cases, fast, lightweight)

## Ticket transfers

1. Ticket Currency
   * Mutiuser scenario
   * Scheduler gives a certain number of tickets to different users in global currency
   * Users can give it to there processes in different currency

2. Ticket Transfer
   * Temporarily handoff of tickets among processes
   * client server scenario

3. Ticket Inflation
   * Processes decrese or increase their own ticket counts
   * Nice processes do this for fairness by themselves without showing off

4. Compensation Tickets
   * Client granted a compensation ticket inflating its values by 1/f which consumes
	   only a fraction f of its allocation resource quantum.

## Lotteries

* Straightforward way is to randomly select a winning ticket and then search a list
of clients to locate the client holding that ticket.
* A random number generation and O(n) operations to traverse a client list of length n
accumulating a running ticket sum until it reaches the winning value.
* For large n, use treee of partial ticket sums with client ids on the leaves, O(log n).

## Currency graph diagram

## Experiments

1. Fairness
* Measure the accurace with which the lottery scheduler could control execution rate
of computations.
* Dhrystone benchmark

2. Flexible control
*	Dynamically controlled ticket inflation.
* Monte-Carlo algorithm.
* Graph rendering operations.

3. Client Server Computation
* loads William Shakespeare's plays, forks off serveral worker threads to process
incoming substring finder queries from clients.
* Ticket allocations affect both response time and throughput.

4. Multimedia Applications
* Controlling video display rates at the applcation level amond a group of mutually
trusting viewers. Desired control on operating system level.

5. Load Insulation
* Currency abstraction to flexibly isolate or group users, tasks and threads.

6. System Overhead
* Lightweight
* Tree based lottery lgn additions and comparisons to select a winner among n clients.
* Low overhead lotter scheduling possible in systems with a scheduling granulatiry for RISCs.

## Managing Diverse Resources

1. Synchronization Resources
* Lock Funding.
* Threads competing for lock cases.
* Mutex currecncy and inheritane ticket issues in the currency.
* Does not have priority inversion problem, why? Thread acquires the mutex with its
own funding plus the funding of all waiting threads. The thread requiring mutex loca
will not be having little funding and would remain blocked on the mutex.
* Each thread repeatedly acquires the mutex, holds it for h milliseconds, releases the
mutex and comutes for another t milliseconds.

2. Space Shared Resources
* Allocating entier processor.
* Inverse lottery, in which a loser is chosen to relinquish a unit of a resource that
it holds, in simple terms inverse probabilities are used.

3. Multiple Resources
* Using quantitative comparisons to make decisions involing tradeoffs between different resources.
* A manager thread with each application allocated a small fixed percentage of an application's
overall funding, so that it can periodically schedule while limiting its overall resource
consumption.
