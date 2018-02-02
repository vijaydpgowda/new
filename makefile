abc.viji:main1.o big1.o fact1.o
	gcc -o abc.viji main1.c big1.c fact1.c
main1.o:main1.c
	gcc -c main1.c
big1.o:big1.c
	gcc -c big1.c 
fact1.o:fact1.c
	gcc -c fact1.c

