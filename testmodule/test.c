#undef __KERNEL__
#define __KERNEL__
 
#undef MODULE
#define MODULE

#include <linux/module.h>
#include <linux/kernel.h>    
#include <linux/init.h>
#include <linux/kallsyms.h>
#include "mach/socinfo.h"

MODULE_LICENSE("GPL");


uint32_t socinfo_get_id(void);



static int __init init_test_mod(void)
{
	printk(KERN_INFO "soc_id %u\n", socinfo_get_id());

	if (cpu_is_msm8960ab()) {
		printk(KERN_INFO "8960ab\n");
	} else if (cpu_is_apq8064()) {
		printk(KERN_INFO "8064\n");
	} else if (cpu_is_apq8064ab()) {
		printk(KERN_INFO "8064ab\n");
	}
	return 0;
}

static void __exit exit_test_mod(void)
{
}

module_init(init_test_mod);
module_exit(exit_test_mod);
