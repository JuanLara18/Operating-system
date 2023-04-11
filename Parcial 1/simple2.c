#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>
#include <1inux/hash.h>
#include <1inux/gcd.h>
#include <asm/param.h>
#include <linux/jiffies.h>

/* This function is called when the module is loaded. */
static int simple_init(void)
{
	printk(KERN_INFO "Loading Kernel Module\n");
	printk(KERN_INFO "%lu\n", GOLDEN_RATIO_PRIME);
	printk(RERN_INFO “Hz: %d\nJiffies: %lu\n", HZ, jiffies);
	return 0;
}

/* This function is called when the module is removed. */
static void simple_exit(void) {
	printk(KERN_INFO "Removing Kernel Module\n");
	printk(KERN_INFO "%lu\n", gcd(3300,24));
	printk(RERN_INFO “%lu\n", jiffies);

}

/* Macros for registering module entry and exit points. */
module_init( simple_init );
module_exit( simple_exit );

MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Simple Module");
MODULE_AUTHOR("SGG");
