# linux_kernel_security
Some test code of linux kernel security


#### 19.namespace

注意:
git config --global core.excludesfile ./.gitignore

因为chroot之后，存在lib依赖的问题，需要提前将自己系统的 /lib* 目录拷贝过来

    # 测试程序
    gcc 1.test_chroot.c
    sudo ./a.out

