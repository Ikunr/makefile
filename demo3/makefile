# 自定义变量
OBJ=main.o add.o sub.o div.o mul.o
TARGET=main

#使用$(TARGET) 必须要加 '$' 符号

$(TARGET):$(OBJ)
	$(CC) $^ -o $@

add.o:add.c
	$(CC) -c $^ -o $@

sub.o:sub.c
	$(CC) -c $^ -o $@

div.o:div.c
	$(CC) -c $^ -o $@

mul.o:mul.c
	$(CC) -c $^ -o $@

main.o:main.c
	$(CC) -c $^ -o $@

clean:
#@ 表示不显示输出
	@$(RM) -rf *.o $(TARGET)

show:
	@echo $(CC)
	@echo $(RM)
	


