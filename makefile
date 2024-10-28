a.out: main.o add.o List.o find.o save.o sync.o cnt.o edit.o Issue.o Return.o
	gcc  main.o add.o List.o find.o save.o sync.o cnt.o edit.o Issue.o Return.o -o a.out 

main.o: main.c
	gcc -c main.c

add.o: add.c
	gcc -c add.c

List.o: List.c
	gcc -c List.c

find.o: find.c
	gcc -c find.c

save.o: save.c
	gcc -c save.c

sync.o: sync.c
	gcc -c sync.c

cnt.o: cnt.c
	gcc -c cnt.c
	
edit.o: edit.c
	gcc -c edit.c

Issue.o: Issue.c
	gcc -c Issue.c

Return.o: Return.c
	gcc -c Return.c