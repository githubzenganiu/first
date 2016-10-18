#define MOUDLE
#define LINUX
#define __KERNEL__


#include<linux/module.h>
#include<linux/kernel.h>
int int_module(void)
{
	printk("<1> Hello World\n");
	return 0;
}

void cleanup_module(void)
{
	printk(KERN_ALERT "Good bye.\n")
}

MODULE_LICENSE("GPL");
