/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "calculadora.h"

bool_t
xdr_operandos (XDR *xdrs, operandos *objp)
{
	register int32_t *buf;

	 if (!xdr_array (xdrs, (char **)&objp->values.values_val, (u_int *) &objp->values.values_len, MAX_SIZE,
		sizeof (double), (xdrproc_t) xdr_double))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_suma_1_argument (XDR *xdrs, suma_1_argument *objp)
{
	 if (!xdr_operandos (xdrs, &objp->op1))
		 return FALSE;
	 if (!xdr_operandos (xdrs, &objp->op2))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_restar_1_argument (XDR *xdrs, restar_1_argument *objp)
{
	 if (!xdr_operandos (xdrs, &objp->op1))
		 return FALSE;
	 if (!xdr_operandos (xdrs, &objp->op2))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_multiplica_1_argument (XDR *xdrs, multiplica_1_argument *objp)
{
	 if (!xdr_operandos (xdrs, &objp->op1))
		 return FALSE;
	 if (!xdr_operandos (xdrs, &objp->op2))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_divide_1_argument (XDR *xdrs, divide_1_argument *objp)
{
	 if (!xdr_operandos (xdrs, &objp->op1))
		 return FALSE;
	 if (!xdr_operandos (xdrs, &objp->op2))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_producto_escalar_1_argument (XDR *xdrs, producto_escalar_1_argument *objp)
{
	 if (!xdr_operandos (xdrs, &objp->op1))
		 return FALSE;
	 if (!xdr_operandos (xdrs, &objp->op2))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_producto_vectorial_1_argument (XDR *xdrs, producto_vectorial_1_argument *objp)
{
	 if (!xdr_operandos (xdrs, &objp->op1))
		 return FALSE;
	 if (!xdr_operandos (xdrs, &objp->op2))
		 return FALSE;
	return TRUE;
}