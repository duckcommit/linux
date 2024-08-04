#include <linux/module.h>
#include <linux/init.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Vyshnav Ajith");
MODULE_DESCRIPTION("Hello world module");

/**
 * @brief This function is called, when the module is loaded into the kernel
 */
static int __init my_init(void) {
	printk("Hello, World!\n");
	return 0;
}


module_init(my_init);