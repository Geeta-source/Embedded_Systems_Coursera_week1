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
 * @file <stats.h> 
 * @brief <Declare various functions to fine mean, median, maximum and minimum of an Array>
 *
 * @author <Geeta Navalyal>
 * @date <30-05-2020>
 *
 */
#include <stdio.h>
#define SIZE (40)
#ifndef __STATS_H__
#define __STATS_H__

/* Given an array of data and a length, sorts the array from largest to smallest. (The zeroth Element should be the largest value, and the last element (n-1) should be the smallest value. )  */
    void sort_array(unsigned char* arr)
	{
	} 
/**
 * @brief <Given an array of data and a length, returns the median value>
 *
 * @param <arr> <Pointer to Sorted Array>
 * @param <len> <Length of Array>
 *
 * @return <Median Value>
 */
unsigned char find_median(unsigned char* arr, int len)
{
	unsigned char med=0;

	return med;
}

/**
 * @brief <Given an array of data and a length, returns the mean>
 *
 * @param <arr> <Pointer to Sorted Array>
 * @param <len> <Length of Array>
 *
 * @return <Mean Value>
 */
unsigned char find_mean(unsigned char* arr, int len)
{
	unsigned char mean=0;

	return mean;
}

/**
 * @brief <Given an array of data and a length, returns the maximum>
 *
 * @param <arr> <Pointer to Sorted Array>
 * @param <len> <Length of Array>
 *
 * @return <Maximun Value>
 */
unsigned char find_maximum(unsigned char* arr, int len)
{
	unsigned char max=0;

	return max;
}

/**
 * @brief <Given an array of data and a length, returns the minimum>
 *
 * @param <arr> <Pointer to Sorted Array>
 * @param <len> <Length of Array>
 *
 * @return <Minimum Value>
 */
unsigned char find_minimum(unsigned char* arr, int len)
{
	unsigned char min=0;

	return min;
}

#endif /* __STATS_H__ */
