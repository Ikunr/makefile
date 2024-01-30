# 自定义变量
OBJ=main.o add.o sub.o div.o mul.o
TARGET=main

#使用$(TARGET) 必须要加 '$' 符号
# ^表示所有不充分的依赖 
$(TARGET):$(OBJ)
	$(CC) $^ -o $@

# 模式匹配  %目标 : % 依赖
%.o:%.c
	$(CC) -c $^ -o $@


clean:
#@ 表示不显示输出
	@$(RM) -rf *.o $(TARGET)

show:
	@echo $(CC)
	@echo $(RM)
	echo $(wildcard ./*.c)
# 匹配 代表  $(wildcard ./*.c) patsubst匹配 第三个参数在当前文件夹下的所有.c 文件  将所有的.c 替换为.o
	@echo $(patsubst %.c, %.o , $(wildcard ./*.c))
	


