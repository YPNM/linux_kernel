#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe63d5a03, "module_layout" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x32d48119, "__register_chrdev" },
	{ 0x61644054, "try_module_get" },
	{ 0x672e74fa, "module_put" },
	{ 0xc5850110, "printk" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xc3aaf0a9, "__put_user_1" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "464B498C5D74177E001A0AF");
