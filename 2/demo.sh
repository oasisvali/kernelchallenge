echoex () {
	echo "\$ $@"
	eval $@
	echo
}


echo '___Proof of running custom kernel:___'
echo

echoex pwd
echoex uname -r
