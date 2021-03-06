//-----------------------------------------------------------------------------
//
// File:          tbblabel.h
// Creation date: November 26, 2003 14:11
// Author:        Kenneth L. Hurley
// Purpose:       Declaration of class 'tbblabel'
//
// Modifications: @INSERT_MODIFICATIONS(* )
* November 26, 2003 14:11 Kenneth Hurley
*     Added method 'DestructorInclude'
*     Added method 'ConstructorInclude'
*     Added method '~tbblabel'
*     Added member 'label'
*     Added member 'id'
//
// Copyright 2003, Signature Devices, Inc.
// All rights are reserved. Reproduction in whole or part is prohibited
// without the written consent of the copyright owner.
//
//-----------------------------------------------------------------------------

#ifndef _TBBLABEL_H
#define _TBBLABEL_H

//@START_USER1
//@END_USER1



class tbblabel
{

//@START_USER2
//@END_USER2

//
// Group: ClassBuilder methods
//

private:
    void ConstructorInclude();
    void DestructorInclude();

//
// Non-Grouped Members
//

private:
    UINT id;
    char* label;

//
// Non-Grouped Methods
//

public:
    virtual ~tbblabel();
};

#endif


#ifdef CB_INLINES
#ifndef _TBBLABEL_H_INLINES
#define _TBBLABEL_H_INLINES

//@START_USER3
//@END_USER3

#endif
#endif
