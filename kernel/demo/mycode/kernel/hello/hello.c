#include<linux/kernel.h>
#include<linux/init.h>
#include<linux/module.h>

MODULE_LICENSE("GPL");

static int __init lkp_init(void)
{
	printk("<1 hello world! From the kernel..\n.");
	return 0;

}

static void __exit lkp_cleanup(void)
{
	printk("<1>Goodbye World, learving kernel space...\n");


}

module_init(lkp_init);
module_exit(lkp_cleanup);
