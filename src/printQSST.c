/*
 * Copyright (c) 2016 IBM Corporation and other Contributors.
 *
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License v1.0
 * which accompanies this distribution, and is available at
 * http://www.eclipse.org/legal/epl-v10.html
 *
 * Contributors:
 *   Mark Taylor - Initial Contribution
 */

#include <stdio.h>
#include "mqsmf.h"

SMFPRINTGLOB;

/*******************************************************************/
/* Print out buffer manager (QPST) records.                        */
/*******************************************************************/
void printQSST(qsst *p)
{
  SMFPRINTSTART("QSST", p, conv16(p->qsstlen));

  ADDU32("GPLF",p->qsstdata.qsstgplf);
  ADDU32("FPLF",p->qsstdata.qsstfplf);
  ADDU32("FREF",p->qsstdata.qsstfref);
  ADDU32("EXPF",p->qsstdata.qsstexpf);
  ADDU32("CONF",p->qsstdata.qsstconf);
  ADDU32("GPLV",p->qsstdata.qsstgplv);
  ADDU32("FPLV",p->qsstdata.qsstfplv);
  ADDU32("FREV",p->qsstdata.qsstfrev);
  ADDU32("EXPV",p->qsstdata.qsstexpv);
  ADDU32("CONV",p->qsstdata.qsstconv);
  ADDU32("GETM",p->qsstdata.qsstgetm);
  ADDU32("FREM",p->qsstdata.qsstfrem);
  ADDU32("RCNZ",p->qsstdata.qsstrcnz);
  ADDU32("CONT",p->qsstdata.qsstcont);
  ADDU32("CRIT",p->qsstdata.qsstcrit);
  ADDU32("ABND",p->qsstdata.qsstabnd);
  SMFPRINTSTOP;

  return;
}
