obj-m += helloworld.o

CFLAGS_helloworld.o := -DDEBUG

all:
		@echo 'Checking patch'
		../checkpatch.pl -no-tree -file helloworld.c
		@echo
		
		make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules

clean:
		make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean
