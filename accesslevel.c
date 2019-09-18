#include<stdlib.h>
int set_access_level(int pid, int new_level){
    int retval;
    retval=syscall(336,pid,new_level);
    if(retval==new_level){
        return new_level;
    }else{
        return -1;
    }
}
int get_access_level(int pid){
    int retval;
    retval=syscall(335,pid);
    if(retval==-1){
	return -1;
    }else{
        return retval;
    }
}
int* retrieve_set_access_params(int pid, int new_level){
	int* retArr;
	retArr = malloc(sizeof(int));
	retArr[0] = 336;
	retArr[1] = 2;
	retArr[2] = pid;
	retArr[3] = new_level;
	return retArr;
}

int* retrieve_get_access_params(int pid){
	int* ret;
	ret = malloc(sizeof(int));
	ret[0] = 335;
	ret[1] = 1;
	ret[2] = pid;
	return ret;
}

int interpret_set_access_result (int ret_value){
	return ret_value;
}
int interpret_get_access_result (int ret_value){
	return ret_value;
}
