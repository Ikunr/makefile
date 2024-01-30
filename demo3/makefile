# 自定义变量
OBJ=$(patsubst %.c, %.o, $(wildcard ./*.c))
TARGET=main

# 指定文件路径 -L 搜索动态库的指定路径  
# 将静态库  和动态库一起链接
LDFLAGS=-L./src_so -L./src_a
LIBS=-lSoMyAdd -lMyDiv

#使用$(TARGET) 必须要加 '$' 符号
# ^表示所有不重复的依赖项 
$(TARGET): $(OBJ)
#发布

	$(CC)  $^ $(LDFLAGS) $(LIBS) -o $@

# 模式匹配  %目标 : % 依赖
%.o:%.c
	$(CC) -c $^ -o $@


# 伪目标
.PHONY: clean

# 清除编译的依赖文件 和 二进制文件 
clean:
#@ 表示不显示输出
	@$(RM) *.o $(TARGET)

show:
	@echo $(CC)
	@echo $(RM)
	echo $(wildcard ./*.c)
# 匹配 代表  $(wildcard ./*.c) patsubst匹配 第三个参数在当前文件夹下的所有.c 文件  将所有的.c 替换为.o
	@echo $(patsubst %.c, %.o , $(wildcard ./*.c))
	


