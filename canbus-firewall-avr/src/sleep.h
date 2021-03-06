/*
 * sleep.h
 *
 * Created: 9/14/2015 12:06:28 PM
 *  Author: smiller6
 */ 


/*
*  Sleep routine(s) for our main program
*/

#ifndef SLEEP_H_
#define SLEEP_H_

#include <asf.h>

/**
 * \brief Turn off active peripherals, set wakeup modes, and initiate sleep of micro
 * 
 * \param 
 * 
 * \return extern void
 */
extern void sleep_mode_start(void);



#endif /* SLEEP_H_ */