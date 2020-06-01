/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.h 
 * @brief Function prototypes
 *
 * There are eight functions in all.
   -Main function to invoke all the functions.
   -Four functions find find minimum, maximum, mean, median of the data in the
    array
   -Three functions to display the data, Sorting the data and Displaying all
    the statistics. 
 *
 * @author Geeta Navalyal
 * @date 30-05-2020
 **/
#ifndef __STATS_H__
#define __STATS_H__

void main()
/* Function:main        
   Description: Invokes all other functions 
 * Input Parameters : None
 * Returns: None
 *
 *
 */

unsigned char find_min(int count, unsigned char *ptr )
/* Function:find_min       
 * Description:
 * This function takes a set of numbers and finds the minimum number of
   the set.
 * Parameters:
 *     int * ptr: Pointer to a data set
 *     int count: Number of items in data set
 * Return: 
 *     Minimum of the numbers provided.
 */


unsigned char find_max(int count, unsigned char *ptr ) 
/* Function:find_max       
 * Description:
 * This function takes a set of numbers and finds the maximum number of
   the set.
 * Parameters:
 *     int * ptr: Pointer to a data set
 *     int count: Number of items in data set
 * Return: 
 *     Maximum of the numbers provided.
 */

unsigned char find_mean(int count, unsigned char *ptr )
/* Function:find_mean       
 * Description:
 * This function takes a set of numbers and finds the average of
   the set.
 * Parameters:
 *     int * ptr: Pointer to a data set
 *     int count: Number of items in data set
 * Return: 
 *     Average of the numbers provided.
 */


unsigned char find_median(int count, unsigned char *ptr ) 
/* Function:find_median       
 * Description:
 * This function takes a set of numbers and finds the median of
   the set.
 * Parameters:
 *     int * ptr: Pointer to a data set
 *     int count: Number of items in data set
 * Return: 
 *     Median of the numbers provided.
 */

void sort_array(int count, unsigned char *ptr )
/* Function:sort_array       
 * Description:
 * This function takes a set of numbers and sorts the number of
   the set in descending order
 * Parameters:
 *     int * ptr: Pointer to a data set
 *     int count: Number of items in data set
 * Return: 
 *     None
 */

void print_array(int count, unsigned char *ptr )
/* Function:print_array
 * Description:
 *     This function takes a set of numbers and prints the numbers of the set.
 * Parameters:
 *     int * ptr: Pointer to a data set
 *     int count: Number of items in data set
 * Return: 
 *     None
 */

void print_statistics(char w, char z, char u, char a ) 
/* Function:print_statistics
 * Description:
 *     This function takes minimum, maximum, Mean, median values and prints them
 * Parameters:
 *     char minimum: Minimum value returned by find_min
 *     char maximum: Maximum value returned by find_max
 *     char Mean:Mean value returned by find_mean
 *     char Median :Median value returned by find_median
 * Return: 
 *     None
 */


#endif /* __STATS_H__ */
