// c标准库
#include <stdio.h>

// 系统调用库
#include <unistd.h>


int main(){
    // 1.修改当前工作目录
    if(chdir("/home/lzk/Desktop/linux_kernel_security/19.namespace")==-1){
        perror("chdir");
        return 0;
    }
    
    // 2.修改当前进程的root目录
    if(chroot("/home/lzk/Desktop/linux_kernel_security/19.namespace")==-1){
        perror("chroot");
        return 0;
    }
    
    // 3.执行新的bash进行测试, 运行成功，"/"目录被修改为当前目录
    char path[] = "/bin/test_code";
    if(execv(path, NULL) == -1){
        perror("execv");
        return 0;
    }
    

    return 0;
}
