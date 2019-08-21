global sumarDos

section .text
	
	sumarDos: ; (double a, double b)

		ADDPD XMM0, XMM1
		RET