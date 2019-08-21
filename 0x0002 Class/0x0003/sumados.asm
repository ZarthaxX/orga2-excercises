global primerMaximo

;int* primerMaximo(int (*matriz)[sizeC], int* f, int* c);
;					RDI                    RSI  RDX
section .text
primerMaximo:

	;calculo tamaño de matriz y lo guardo en RCX
	mov EAX,[RSI]
	mul dword [RDX]
	mov ECX,EDX
	shl RCX,32
	mov ECX,EAX

	;guardo direccion de mejor elemento en RAX 
	mov RAX,RDI

	;recorro la matriz usando como contador el tamaño de la matriz

	.ciclo:
		mov ESI,[RDI+RCX*4-4] ;Guardo valor de matriz en posicion RCX
		sub ESI,[RAX]
		JB .menor
		lea RAX,[RDI+RCX*4-4] ;Guardo direccion de nuevo maximo en RAX
		.menor:	
		loop .ciclo
ret
