pwd_checker: pwd_checker.c test_pwd_checker.c
	gcc -g -o $@ pwd_checker.c test_pwd_checker.c

.PHONY: clean 
# 声明clean是"伪目标"之后，make就不会去检查是否存在一个叫做clean的文件，而是每次运行都执行对应的命令
clean:
	rm pwd_checker