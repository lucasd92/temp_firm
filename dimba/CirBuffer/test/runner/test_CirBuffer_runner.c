/**
 *  \file       test_cirBuffer_runner.c
 *  \brief      Test runner of circular buffer
 */

/* -------------------------- Development history -------------------------- */
/*
 *  2018.05.15  LeFr  v1.0.00  ---
 */

/* -------------------------------- Authors -------------------------------- */
/*
 *  LeFr  Leandro Francucci  lf@vortexmakes.com
 */

/* --------------------------------- Notes --------------------------------- */
/* ----------------------------- Include files ----------------------------- */
#include "unity_fixture.h"

/* ----------------------------- Local macros ------------------------------ */
/* ------------------------------- Constants ------------------------------- */
/* ---------------------------- Local data types --------------------------- */
/* ---------------------------- Global variables --------------------------- */
/* ---------------------------- Local variables ---------------------------- */
/* ----------------------- Local function prototypes ----------------------- */
/* ---------------------------- Local functions ---------------------------- */
/* ---------------------------- Global functions --------------------------- */
TEST_GROUP_RUNNER(cirBuffer)
{
	RUN_TEST_CASE(cirBuffer, ClearAfterInit);
	RUN_TEST_CASE(cirBuffer, WrongArgsOnInit);
	RUN_TEST_CASE(cirBuffer, PutOneElement);
	RUN_TEST_CASE(cirBuffer, PutOneElementWrapAround);
	RUN_TEST_CASE(cirBuffer, GetOneElement);
	RUN_TEST_CASE(cirBuffer, GetFromEmpty);
	RUN_TEST_CASE(cirBuffer, GetInOrderWrapAround);
	RUN_TEST_CASE(cirBuffer, GetManyElemsLessThanStored);
	RUN_TEST_CASE(cirBuffer, GetManyElemsEqualThanStored);
	RUN_TEST_CASE(cirBuffer, GetManyElemsMoreThanStored);
	RUN_TEST_CASE(cirBuffer, GetManyElemsEqualThanStoredWrapAround);
	RUN_TEST_CASE(cirBuffer, GetManyElemsLessThanStoredWrapAround);
	RUN_TEST_CASE(cirBuffer, GetManyElemsMoreThanStoredWrapAround);
	RUN_TEST_CASE(cirBuffer, GetManyFromEmpty);
}

/* ------------------------------ End of file ------------------------------ */
