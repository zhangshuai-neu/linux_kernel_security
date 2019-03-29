# linux_kernel_security
Some test code of linux kernel security


19.namespace：

因为chroot之后，存在lib依赖的问题，需要提前将
自己系统的 /lib* 目录拷贝过来