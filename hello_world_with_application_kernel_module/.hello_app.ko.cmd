cmd_/home/yan/linux_kernel/hello_world_with_application_kernel_module/hello_app.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T arch/x86/module.lds -o /home/yan/linux_kernel/hello_world_with_application_kernel_module/hello_app.ko /home/yan/linux_kernel/hello_world_with_application_kernel_module/hello_app.o /home/yan/linux_kernel/hello_world_with_application_kernel_module/hello_app.mod.o;  true