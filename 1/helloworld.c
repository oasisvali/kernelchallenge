/*  helloworld.c - The simplest kernel module */

/* Kernel Programming */
#undef MODULE
#define MODULE

#define LINUX

#undef __KERNEL__
#define __KERNEL__

#include <linux/module.h>  /* Needed by all modules */
#include <linux/kernel.h>  /* Needed for KERN_ALERT */
#include <linux/init.h>    /* Needed for macros */

/* Module Info */
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Oasis Vali");
MODULE_DESCRIPTION("A simple Hello World module");

static int init(void)
{
  printk(KERN_ALERT "Hello World!\n");
      
  // A non 0 return means init_module failed; module can't be loaded.
  return 0;
}
        
static void exit(void)
{
  printk(KERN_ALERT "Goodbye world!\n");
}

/* Registering init and cleanup functions */
module_init(init);
module_exit(exit);

