/**
 * WinPR: Windows Portable Runtime
 * String Manipulation (CRT)
 *
 * Copyright 2012 Marc-Andre Moreau <marcandre.moreau@gmail.com>
 * Copyright 2016 David PHAM-VAN <d.phamvan@inuvika.com>
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef WINPR_CRT_STRING_H
#define WINPR_CRT_STRING_H

#include <wchar.h>
#include <string.h>
#include <winpr/config.h>
#include <winpr/winpr.h>
#include <winpr/wtypes.h>

#ifdef __cplusplus
extern "C"
{
#endif

	WINPR_API BOOL winpr_str_append(const char* what, char* buffer, size_t size,
	                                const char* separator);

#ifndef _WIN32

#define CSTR_LESS_THAN 1
#define CSTR_EQUAL 2
#define CSTR_GREATER_THAN 3

#define CP_ACP 0
#define CP_OEMCP 1
#define CP_MACCP 2
#define CP_THREAD_ACP 3
#define CP_SYMBOL 42
#define CP_UTF7 65000
#define CP_UTF8 65001

#define MB_PRECOMPOSED 0x00000001
#define MB_COMPOSITE 0x00000002
#define MB_USEGLYPHCHARS 0x00000004
#define MB_ERR_INVALID_CHARS 0x00000008

	WINPR_API char* _strdup(const char* strSource);
	WINPR_API WCHAR* _wcsdup(const WCHAR* strSource);

	WINPR_API int _stricmp(const char* string1, const char* string2);
	WINPR_API int _strnicmp(const char* string1, const char* string2, size_t count);

	WINPR_API int _wcscmp(const WCHAR* string1, const WCHAR* string2);

	WINPR_API size_t _wcslen(const WCHAR* str);
	WINPR_API size_t _wcsnlen(const WCHAR* str, size_t maxNumberOfElements);

	WINPR_API WCHAR* _wcschr(const WCHAR* str, WCHAR c);
	WINPR_API WCHAR* _wcsrchr(const WCHAR* str, WCHAR c);

	WINPR_API char* strtok_s(char* strToken, const char* strDelimit, char** context);
	WINPR_API WCHAR* wcstok_s(WCHAR* strToken, const WCHAR* strDelimit, WCHAR** context);

#else

#define _wcscmp wcscmp
#define _wcslen wcslen
#define _wcsnlen wcsnlen
#define _wcschr wcschr
#define _wcsrchr wcsrchr

#endif /* _WIN32 */

#if !defined(_WIN32) || defined(_UWP)

	WINPR_API LPSTR CharUpperA(LPSTR lpsz);
	WINPR_API LPWSTR CharUpperW(LPWSTR lpsz);

#ifdef UNICODE
#define CharUpper CharUpperW
#else
#define CharUpper CharUpperA
#endif

	WINPR_API DWORD CharUpperBuffA(LPSTR lpsz, DWORD cchLength);
	WINPR_API DWORD CharUpperBuffW(LPWSTR lpsz, DWORD cchLength);

#ifdef UNICODE
#define CharUpperBuff CharUpperBuffW
#else
#define CharUpperBuff CharUpperBuffA
#endif

	WINPR_API LPSTR CharLowerA(LPSTR lpsz);
	WINPR_API LPWSTR CharLowerW(LPWSTR lpsz);

#ifdef UNICODE
#define CharLower CharLowerW
#else
#define CharLower CharLowerA
#endif

	WINPR_API DWORD CharLowerBuffA(LPSTR lpsz, DWORD cchLength);
	WINPR_API DWORD CharLowerBuffW(LPWSTR lpsz, DWORD cchLength);

#ifdef UNICODE
#define CharLowerBuff CharLowerBuffW
#else
#define CharLowerBuff CharLowerBuffA
#endif

	WINPR_API BOOL IsCharAlphaA(CHAR ch);
	WINPR_API BOOL IsCharAlphaW(WCHAR ch);

#ifdef UNICODE
#define IsCharAlpha IsCharAlphaW
#else
#define IsCharAlpha IsCharAlphaA
#endif

	WINPR_API BOOL IsCharAlphaNumericA(CHAR ch);
	WINPR_API BOOL IsCharAlphaNumericW(WCHAR ch);

#ifdef UNICODE
#define IsCharAlphaNumeric IsCharAlphaNumericW
#else
#define IsCharAlphaNumeric IsCharAlphaNumericA
#endif

	WINPR_API BOOL IsCharUpperA(CHAR ch);
	WINPR_API BOOL IsCharUpperW(WCHAR ch);

#ifdef UNICODE
#define IsCharUpper IsCharUpperW
#else
#define IsCharUpper IsCharUpperA
#endif

	WINPR_API BOOL IsCharLowerA(CHAR ch);
	WINPR_API BOOL IsCharLowerW(WCHAR ch);

#ifdef UNICODE
#define IsCharLower IsCharLowerW
#else
#define IsCharLower IsCharLowerA
#endif

	WINPR_API int lstrlenA(LPCSTR lpString);
	WINPR_API int lstrlenW(LPCWSTR lpString);

#ifdef UNICODE
#define lstrlen lstrlenW
#else
#define lstrlen lstrlenA
#endif

	WINPR_API int lstrcmpA(LPCSTR lpString1, LPCSTR lpString2);
	WINPR_API int lstrcmpW(LPCWSTR lpString1, LPCWSTR lpString2);

#ifdef UNICODE
#define lstrcmp lstrcmpW
#else
#define lstrcmp lstrcmpA
#endif

#endif

#ifndef _WIN32

#define sprintf_s snprintf
#define _snprintf snprintf
#define _scprintf(...) snprintf(NULL, 0, __VA_ARGS__)

#define _scprintf(...) snprintf(NULL, 0, __VA_ARGS__)

	/* Unicode Conversion */

	WINPR_API int MultiByteToWideChar(UINT CodePage, DWORD dwFlags, LPCSTR lpMultiByteStr,
	                                  int cbMultiByte, LPWSTR lpWideCharStr, int cchWideChar);

	WINPR_API int WideCharToMultiByte(UINT CodePage, DWORD dwFlags, LPCWSTR lpWideCharStr,
	                                  int cchWideChar, LPSTR lpMultiByteStr, int cbMultiByte,
	                                  LPCSTR lpDefaultChar, LPBOOL lpUsedDefaultChar);

#endif

	/* Extended API */
	/** \brief Converts form UTF-16 to UTF-8
	 *
	 * The function does string conversions of any '\0' terminated input string
	 *
	 *  \param wstr A '\0' terminated WCHAR string, must not be NULL
	 *  \param str A pointer to the result string
	 *  \param len The length in characters of the result buffer
	 *
	 *  \return the size of the converted string in char (strlen), or -1 for failure
	 */
	WINPR_API SSIZE_T ConvertWCharToUtf8(const WCHAR* wstr, char* str, size_t len);

	/** \brief Converts form UTF-16 to UTF-8
	 *
	 * The function does string conversions of any input string of wlen (or less)
	 * characters until it reaches the first '\0'.
	 *
	 *  \param wstr A WCHAR string of \b wlen length
	 *  \param wlen The (buffer) length in characters of \b wstr
	 *  \param str A pointer to the result string
	 *  \param len The length in characters of the result buffer
	 *
	 *  \return the size of the converted string in char (strlen), or -1 for failure
	 */
	WINPR_API SSIZE_T ConvertWCharNToUtf8(const WCHAR* wstr, size_t wlen, char* str, size_t len);

	/** \brief Converts form UTF-8 to UTF-16
	 *
	 * The function does string conversions of any '\0' terminated input string
	 *
	 *  \param str A '\0' terminated CHAR string, must not be NULL
	 *  \param wstr A pointer to the result WCHAR string
	 *  \param wlen The length in WCHAR characters of the result buffer
	 *
	 *  \return the size of the converted string in WCHAR characters (wcslen), or -1 for failure
	 */
	WINPR_API SSIZE_T ConvertUtf8ToWChar(const char* str, WCHAR* wstr, size_t wlen);

	/** \brief Converts form UTF-8 to UTF-16
	 *
	 * The function does string conversions of any input string of len (or less)
	 * characters until it reaches the first '\0'.
	 *
	 *  \param str A CHAR string of \b len length
	 *  \param len The (buffer) length in characters of \b str
	 *  \param wstr A pointer to the result WCHAR string
	 *  \param wlen The length in WCHAR characters of the result buffer
	 *
	 *  \return the size of the converted string in WCHAR characters (wcslen), or -1 for failure
	 */
	WINPR_API SSIZE_T ConvertUtf8NToWChar(const char* str, size_t len, WCHAR* wstr, size_t wlen);

	/** \brief Converts form UTF-16 to UTF-8, returns an allocated string
	 *
	 * The function does string conversions of any '\0' terminated input string
	 *
	 *  \param wstr A '\0' terminated WCHAR string, must not be NULL
	 *  \param pSize Ignored if NULL, otherwise receives the length of the result string in
	 * characters (strlen)
	 *
	 *  \return An allocated zero terminated UTF-8 string or NULL in case of failure.
	 */
	WINPR_API char* ConvertWCharToUtf8Alloc(const WCHAR* wstr, size_t* pSize);

	/** \brief Converts form UTF-16 to UTF-8, returns an allocated string
	 *
	 * The function does string conversions of any input string of wlen (or less)
	 * characters until it reaches the first '\0'.
	 *
	 *  \param wstr A WCHAR string of \b wlen length
	 *  \param wlen The (buffer) length in characters of \b wstr
	 *  \param pSize Ignored if NULL, otherwise receives the length of the result string in
	 * characters (strlen)
	 *
	 *  \return An allocated zero terminated UTF-8 string or NULL in case of failure.
	 */
	WINPR_API char* ConvertWCharNToUtf8Alloc(const WCHAR* wstr, size_t wlen, size_t* pSize);

	/** \brief Converts form UTF-8 to UTF-16, returns an allocated string
	 *
	 * The function does string conversions of any '\0' terminated input string
	 *
	 *  \param str A '\0' terminated CHAR string, must not be NULL
	 *  \param len The (buffer) length in characters of \b str
	 *  \param pSize Ignored if NULL, otherwise receives the length of the result string in
	 * characters (wcslen)
	 *
	 *  \return An allocated zero terminated UTF-16 string or NULL in case of failure.
	 */
	WINPR_API WCHAR* ConvertUtf8ToWCharAlloc(const char* str, size_t* pSize);

	/** \brief Converts form UTF-8 to UTF-16, returns an allocated string
	 *
	 * The function does string conversions of any input string of len (or less)
	 * characters until it reaches the first '\0'.
	 *
	 *  \param str A CHAR string of \b len length
	 *  \param len The (buffer) length in characters of \b str
	 *  \param pSize Ignored if NULL, otherwise receives the length of the result string in
	 * characters (wcslen)
	 *
	 *  \return An allocated zero terminated UTF-16 string or NULL in case of failure.
	 */
	WINPR_API WCHAR* ConvertUtf8NToWCharAlloc(const char* str, size_t len, size_t* pSize);

#if defined(WITH_WINPR_DEPRECATED)
	WINPR_API WINPR_DEPRECATED_VAR("Use ConvertUtf8ToWChar functions instead",
	                               int ConvertToUnicode(UINT CodePage, DWORD dwFlags,
	                                                    LPCSTR lpMultiByteStr, int cbMultiByte,
	                                                    LPWSTR* lpWideCharStr, int cchWideChar));

	WINPR_API WINPR_DEPRECATED_VAR("Use ConvertWCharToUtf8 functions instead",
	                               int ConvertFromUnicode(UINT CodePage, DWORD dwFlags,
	                                                      LPCWSTR lpWideCharStr, int cchWideChar,
	                                                      LPSTR* lpMultiByteStr, int cbMultiByte,
	                                                      LPCSTR lpDefaultChar,
	                                                      LPBOOL lpUsedDefaultChar));
#endif

	WINPR_API void ByteSwapUnicode(WCHAR* wstr, size_t length);

	WINPR_API size_t ConvertLineEndingToLF(char* str, size_t size);
	WINPR_API char* ConvertLineEndingToCRLF(const char* str, size_t* size);

	WINPR_API char* StrSep(char** stringp, const char* delim);

	WINPR_API INT64 GetLine(char** lineptr, size_t* size, FILE* stream);

#if !defined(HAVE_STRNDUP)
	WINPR_API char* strndup(const char* s, size_t n);
#endif

#ifdef __cplusplus
}
#endif

#endif /* WINPR_CRT_STRING_H */
