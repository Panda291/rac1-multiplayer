#ifndef STRING_H
#define STRING_H

#include "lib/common.h"

/**
 * @brief Gets the number of characters in the string.
 * 
 * @param s The first string. The input string.
 * @return u32 
 */
u32 stringGetLength( const char* s );

/**
 * @brief Compares two specified strings, ignoring or honoring their case, and returns an integer that indicates their relative position in the sort order.
 * 
 * @param s The first string. 
 * @param s2 The second string. 
 * @param ignoreCase Boolean indicating whether to ignore case or not.
 * @return s32 
 */
s32 stringCompareEx( const char* s, const char* s2, bool ignoreCase );

/**
 * @brief Compares two specified strings and returns an integer that indicates their relative position in the sort order.
 * 
 * @param s The first string. 
 * @param s2 The second string. 
 * @return s32 
 */
s32 stringCompare( const char* s, const char* s2 );

/**
 * @brief Concatenates one or more strings.
 * 
 * @param destination The output buffer to write the result to.
 * @param destinationLength The total size of the output buffer.
 * @param source The string to process.
 * @return char* The destination buffer pointer.
 */
char* stringConcat( char* destination, size_t destinationLength, const char* source );

/**
 * @brief Returns a value indicating whether a specified substring occurs within this string.
 * 
 * @param s The first string. 
 * @param s2 The second string. 
 * @param ignoreCase Boolean indicating whether to ignore case or not.
 * @return bool
 */
bool stringContainsEx( const char* s, const char* s2, bool ignoreCase );

/**
 * @brief Returns a value indicating whether a specified substring occurs within this string.
 * 
 * @param s The first string. 
 * @param s2 The second string. 
 * @return bool
 */
bool stringContains( const char* s, const char* s2 );

/**
 * @brief Copies a specified number of characters from a specified position in this instance to a specified position in an array of Unicode characters.
 * 
 * @param destination The output buffer to write the result to.
 * @param destinationLength The total size of the output buffer.
 * @param source The string to process.
 * @return char* The destination buffer pointer.
 */
char* stringCopyTo( char* destination, size_t destinationLength, const char* source );

/**
 * @brief Determines whether the end of this string instance matches a specified string.
 * 
 * @param s The first string. 
 * @param s2 The second string. 
 * @param ignoreCase Boolean indicating whether to ignore case or not.
 * @return bool
 */
bool stringEndsWithEx( const char* s, const char* s2, bool ignoreCase );

/**
 * @brief Determines whether the end of this string instance matches a specified string.
 * 
 * @param s The first string. 
 * @param s2 The second string. 
 * @return bool
 */
bool stringEndsWith( const char* s, const char* s2 );

/**
 * @brief Determines whether two String objects have the same value.
 * 
 * @param s The first string. 
 * @param s2 The second string. 
 * @param ignoreCase Boolean indicating whether to ignore case or not.
 * @return bool
 */
bool stringEqualsEx( const char* s, const char* s2, bool ignoreCase );

/**
 * @brief Determines whether two String objects have the same value.
 * 
 * @param s The first string. 
 * @param s2 The second string. 
 * @return bool
 */
bool stringEquals( const char* s, const char* s2 );

/**
 * @brief Converts the value of objects to strings based on the formats specified and inserts them into another string.
 * 
 * @param destination The output buffer to write the result to.
 * @param destinationLength The total size of the output buffer.
 * @param format 
 * @param ... 
 * @return s32 
 */
s32 stringFormat( char* destination, size_t destinationLength, const char* format, ... );

/**
 * @brief Reports the zero-based index of the first occurrence of a specified ASCII character or string within this instance. 
 * @param s The first string. 
 * @param s2 The second string. 
 * @param ignoreCase Boolean indicating whether to ignore case or not.
 * @return s32 Index of the first occurence, or -1 if the character or string is not found in this instance.
 */
s32 stringIndexOfEx( const char* s, const char* s2, bool ignoreCase );

/**
 * @brief Reports the zero-based index of the first occurrence of a specified ASCII character or string within this instance. 
 * @param s The first string. 
 * @param s2 The second string. 
 * @return s32 Index of the first occurence, or -1 if the character or string is not found in this instance.
 */
s32 stringIndexOf( const char* s, const char* s2 );

/**
 * @brief Reports the index of the first occurrence in this instance of any character in a specified array of ASCII characters. 
 * 
 * @param s The first string. 
 * @param anyOf 
 * @param ignoreCase Boolean indicating whether to ignore case or not.
 * @return s32 Index of first occurence or -1 if not found.
 */
s32 stringIndexOfAnyEx( const char* s, const char* anyOf, bool ignoreCase );

/**
 * @brief Reports the index of the first occurrence in this instance of any character in a specified array of ASCII characters. 
 * 
 * @param s The first string. 
 * @param anyOf 
 * @return s32 Index of first occurence or -1 if not found.
 */
s32 stringIndexOfAny( const char* s, const char* anyOf );

/**
 * @brief Reports the index of the last occurence of the second string in the first string.
 * 
 * @param s The first string. 
 * @param s2 The second string. 
 * @param ignoreCase Boolean indicating whether to ignore case or not.
 * @return size_t 
 */
size_t stringLastIndexOfEx( const char* s, const char* s2, bool ignoreCase );

/**
 * @brief Returns a new string in which a specified string is inserted at a specified index position in this instance.
 * 
 * @param destination The output buffer to write the result to.
 * @param destinationLength The total size of the output buffer.
 * @param s The first string. 
 * @param startIndex 
 * @param s2 The second string. 
 * @return char* The destination buffer pointer.
 */
char* stringInsert( char* destination, size_t destinationLength, const char* s, size_t startIndex, const char* s2 );

/**
 * @brief Indicates whether the specified string is null or an empty string ("").
 * 
 * @param s The first string. 
 * @return bool
 */
bool stringIsNullOrEmpty( const char* s );

/**
 * @brief  Indicates whether a specified string is null, empty, or consists only of white-space characters.
 * 
 * @param s The first string. 
 * @return bool
 */
bool stringIsNullOrWhitespace( const char* s );

/**
 * @brief Concatenates the elements of a specified strings, using the specified separator between each element.
 * The last argument must be NULL.
 * @param destination The output buffer to write the result to.
 * @param destinationLength The total size of the output buffer.
 * @param seperator 
 * @param ... 
 * @return char* The destination buffer pointer.
 */
char* stringJoinArgs( char* destination, size_t destinationLength, const char* seperator, ... );

/**
 * @brief Concatenates the elements of a specified strings, using the specified separator between each element.
 * 
 * @param destination The output buffer to write the result to.
 * @param destinationLength The total size of the output buffer.
 * @param seperator 
 * @param elements 
 * @param elementCount 
 * @return char* The destination buffer pointer.
 */
char* stringJoinArray( char* destination, size_t destinationLength, const char* seperator, const char** elements, size_t elementCount );

/**
 * @brief Returns the length of the new string in which all occurrences of a specified ASCII character or String in the current string are replaced with another specified ASCII character or String.
 * 
 * @param destination The output buffer to write the result to.
 * @param destinationLength The total size of the output buffer.
 * @param source The string to process.
 * @param oldValue 
 * @param newValue 
 * @param ignoreCase Boolean indicating whether to ignore case or not.
 * @return char* The destination buffer pointer.
 */
char* stringReplaceEx( char* destination, size_t destinationLength, const char* source, const char* oldValue, const char* newValue, bool ignoreCase );

/**
 * @brief Returns the length of the new string in which all occurrences of a specified ASCII character or String in the current string are replaced with another specified ASCII character or String.
 * 
 * @param destination The output buffer to write the result to.
 * @param destinationLength The total size of the output buffer.
 * @param source The string to process.
 * @param oldValue 
 * @param newValue 
 * @return char* The destination buffer pointer.
 */
char* stringReplace( char* destination, size_t destinationLength, const char* source, const char* oldValue, const char* newValue );

/**
 * @brief Determines whether the beginning of this string instance matches the specified string.
 * 
 * @param s The first string. 
 * @param s2 The second string. 
 * @param ignoreCase Boolean indicating whether to ignore case or not.
 * @return bool
 */
bool stringStartsWithEx( const char* s, const char* s2, bool ignoreCase );

/**
 * @brief Determines whether the beginning of this string instance matches the specified string.
 * 
 * @param s The first string. 
 * @param s2 The second string. 
 * @return bool
 */
bool stringStartsWith( const char* s, const char* s2 );

/**
 * @brief Retrieves a substring from this instance. The substring starts at a specified character position and has a specified length.
 * 
 * @param destination The output buffer to write the result to.
 * @param destinationLength The total size of the output buffer.
 * @param source The string to process.
 * @param startIndex 
 * @param length 
 * @return char* The destination buffer pointer.
 */
char* stringSubstringEx( char* destination, size_t destinationLength, const char* source, size_t startIndex, size_t length );

/**
 * @brief Retrieves a substring from this instance. The substring starts at a specified character position and has a specified length.
 * 
 * @param destination The output buffer to write the result to.
 * @param destinationLength The total size of the output buffer.
 * @param source The string to process.
 * @param startIndex 
 * @return char* The destination buffer pointer.
 */
char* stringSubstring( char* destination, size_t destinationLength, const char* source, size_t startIndex );

/**
 * @brief Returns a copy of this string converted to lowercase.
 * 
 * @param destination The output buffer to write the result to.
 * @param destinationLength The total size of the output buffer.
 * @param source The string to process.
 * @return char* The destination buffer pointer.
 */
char* stringToLower( char* destination, size_t destinationLength, const char* source );

/**
 * @brief Returns a copy of this string converted to uppercase.
 * 
 * @param destination The output buffer to write the result to.
 * @param destinationLength The total size of the output buffer.
 * @param source The string to process.
 * @return char* The destination buffer pointer.
 */
char* stringToUpper( char* destination, size_t destinationLength, const char* source );

/**
 * @brief Trims any whitespace characters from the string.
 *
 * @param destination The output buffer to write the result to.
 * @param destinationLength The total size of the output buffer.The total size of the output buffer.
 * @param source The string to process.The string to process.
 * @return char* The destination buffer pointer.The destination buffer pointer.
 */
char* stringTrim( char* destination, size_t destinationLength, const char* source );

/**
 * @brief Trims any whitespace characters from the left side of the string.
 *
 * @param destination The output buffer to write the result to.
 * @param destinationLength The total size of the output buffer.The total size of the output buffer.
 * @param source The string to process.The string to process.
 * @return char* The destination buffer pointer.The destination buffer pointer.
 */
char* stringTrimLeft( char* destination, size_t destinationLength, const char* source );

/**
 * @brief Trims any whitespace characters from the right side of the string.
 *
 * @param destination The output buffer to write the result to.
 * @param destinationLength The total size of the output buffer.The total size of the output buffer.
 * @param source The string to process.The string to process.
 * @return char* The destination buffer pointer.The destination buffer pointer.
 */
char* stringTrimRight( char* destination, size_t destinationLength, const char* source );

/**
 * @brief Splits a string using the given seperator.
 * 
 * @param outputBuffer The output buffer to which the split strings are written.
 * @param outputBufferSize The size of the output buffer.
 * @param splits The array of string pointers to where the start of each string.
 * @param splitsBufferSize The size of the string pointer array.
 * @param splitCount The number of total splits
 * @param input The input string
 * @param seperator The seperator string
 */
void stringSplit( char* outputBuffer, size_t outputBufferSize, 
    char** splits, size_t splitsBufferSize, u32* splitCount,
    const char* input, const char* seperator );

#endif