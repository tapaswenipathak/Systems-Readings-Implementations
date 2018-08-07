/*
 * This is a user created sys call which can be put inside kernel/sys.c.
 * Find some kernel docs here https://www.kernel.org/doc/html/v4.14/process/adding-syscalls.html
 */

SYSCALL_DEFINE1(hello, char *, msg)
{
  char buffer[256];
  long copy = strncpy_from_user(buffer, msg, sizeof(buffer));
  if (copy < 0 || copy = sizeof(buffer))
  {
    return -EFAULT;
  }

  printk(KERN_INFO "Hello I'm a syscall. \"%s\"\n", buffer);
  return 0;
}
