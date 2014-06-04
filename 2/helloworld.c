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

static int onLoad(void)
{
	pr_debug("Hello World!\n");

	/* A non 0 return means init_module failed; module can't be loaded. */
	return 0;
}

static void onUnload(void)
{
	pr_debug("Goodbye World!\n");
}
/* Registering init and cleanup functions */
module_init(onLoad);
module_exit(onUnload);

