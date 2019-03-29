// c标准库
#include <stdio.h>

// 系统调用库
#include <unistd.h>


int main(){
    
    printf("test chroot\n");
    
    
    // 修改当前进程的root目录
    if(chroot("/home/lzk/Desktop/linux_kernel_security/19.namespace")==-1){
        perror("chroot");
        return 0;
    }
    
    // 执行新的bash进行测试
    char path[] = "/bin/test_code";
    printf("[%s]\n",path);
    if(execv(path, NULL) == -1){
        perror("execv");
        return 0;
    }
    

    return 0;
}
