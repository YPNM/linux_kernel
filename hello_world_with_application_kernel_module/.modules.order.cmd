cmd_/home/yan/linux_kernel/hello_world_with_application_kernel_module/modules.order := {   echo /home/yan/linux_kernel/hello_world_with_application_kernel_module/hello_app.ko; :; } | awk '!x[$$0]++' - > /home/yan/linux_kernel/hello_world_with_application_kernel_module/modules.order
