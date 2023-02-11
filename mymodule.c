#include <linux/module.h>
#include <linux/init.h>

/* Meta Informmation */
MODULE_LICENSE("GPL");
MODULE_AUTHOR("JOSE LINUX DRIVER");
MODULE_DESCRIPTION("HOLA MUNDO");

/**
 *  @brief This function is called, when the module is loaded into the kernel
 */
static int __init ModuleInit(void) {
	printk ("Hola Mundo!\n");
	return 0;
}

/**
 *  @brief This function is called, when the module is removed from the Kernel
 */
static void __exit ModuleExit(void){
	printk("Adios Mundo\n");
}

module_init(ModuleInit);
module_exit(ModuleExit);






