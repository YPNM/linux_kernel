cmd_/home/yan/linux_kernel/hello_kernel_module/Module.symvers := sed 's/ko$$/o/' /home/yan/linux_kernel/hello_kernel_module/modules.order | scripts/mod/modpost -m    -o /home/yan/linux_kernel/hello_kernel_module/Module.symvers -e -i Module.symvers   -T -