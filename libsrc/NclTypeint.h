
/*
 *      $Id: NclType.h.sed,v 1.2 2008-12-10 20:12:17 dbrown Exp $
 */
/************************************************************************
*									*
*			     Copyright (C)  1995			*
*	     University Corporation for Atmospheric Research		*
*			     All Rights Reserved			*
*									*
************************************************************************/
/*
 *	File:		
 *
 *	Author:		Ethan Alpert
 *			National Center for Atmospheric Research
 *			PO 3000, Boulder, Colorado
 *
 *	Date:		Fri Jan 27 18:25:39 MST 1995
 *
 *	Description:	
 */
#ifndef NclTypeint_h
#define NclTypeint_h
#ifdef NIO_LIB_ONLY
#include "nioConvertP.h"
#else
#include <ncarg/hlu/ConvertP.h>
#endif
#include "defs.h"
#include "NclType.h"
#include "NclTypedouble.h"
#include <math.h>
#include "NclMultiDValData.h"
#include "DataSupport.h"


typedef struct _NclTypeintClassPart {
	char * foo;
} NclTypeintClassPart;

typedef struct _NclTypeintPart {
	char * foo;
} NclTypeintPart;

typedef struct _NclTypeintClassRec {
	NclObjClassPart	obj_class;
	NclTypeClassPart type_class;
	NclTypeintClassPart intval_class;
}NclTypeintClassRec;

typedef struct _NclTypeintRec {
	NclObjPart	obj;
	NclTypePart	type;
	NclTypeintPart	intval;
}NclTypeintRec;

typedef NclTypeintRec *NclTypeint;
typedef NclTypeintClassRec *NclTypeintClass;

extern NclObjClass nclTypeintClass;
extern NclTypeintClassRec nclTypeintClassRec;

NclType _NclTypeintCreate(
#if	NhlNeedProto
NclObj /* inst */, 
NclObjClass /* theclass */,
NclObjTypes /* obj_type */, 
unsigned int /* obj_type_mask */, 
NclStatus /* status*/
#endif
);

#endif /* NclTypeint_h*/
