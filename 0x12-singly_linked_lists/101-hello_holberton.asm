	  global    main
          extern    printf
main:
	  push	rbp
	  mov	rdi,fmt
	  mov	rsi,msg
	  mov	rax,0
	  call	printf
	  pop	rbp
	  mov	rax,0
	  ret
format: db `Hello, Holberton\n`,0
