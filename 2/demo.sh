echoex () {
	echo "\$ $@"
	eval $@
}


echo '___Proof of building kernel module:___'
echo

echoex pwd
echoex ls
echo

echoex make
echo

echoex ls
echo

echo '___Proof of module running on kernel___'
echo

echoex "lsmod | grep helloworld"
echo

echoex "dmesg -l debug | tail -10"
echo

echoex sudo insmod helloworld.ko
echo

echoex "lsmod | grep helloworld"
echo

echoex "dmesg -l debug | tail -10"
echo

echoex sudo rmmod helloworld
echo

echoex "lsmod | grep helloworld"
echo

echoex "sudo dmesg -l debug -c | tail -10"
echo

echo '___Kernel module code___'
echo

echoex cat helloworld.c
echo

echo '___Makefile code___'
echo

echoex cat Makefile
