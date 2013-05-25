KERNEL_BUILD := /home/aaron/HTC_One/ElementalX-m7
KERNEL_CROSS_COMPILE := /home/aaron/x-tools/arm-cortexa15neon-eabi/bin/arm-cortexa15neon-eabi-

obj-m += test.o

all:
	make -C $(KERNEL_BUILD) CROSS_COMPILE=$(KERNEL_CROSS_COMPILE) M=$(PWD) modules

clean:
	make -C $(KERNEL_BUILD) M=$(PWD) clean 2> /dev/null
	rm -f modules.order *~
