
const MAX_SIZE= 100;
struct operandos{
	double values<MAX_SIZE>;
};

program CALCULADORA {
	version CALCULADORA_1 {
		operandos suma(operandos op1, operandos op2) = 1;
		operandos restar(operandos op1, operandos op2) = 2;
		operandos multiplica(operandos op1, operandos op2) = 3;
		operandos divide(operandos op1, operandos op2) = 4;
	} = 1;
} = 0x20000001;

program CALC_VEC_COMPLEJO {
	version CALC_VEC_COMPLEJO_1 {
		operandos producto_escalar(operandos op1, operandos op2) = 1;
		operandos producto_vectorial(operandos op1, operandos op2) = 2;
	} = 1;
} = 0x20000002;