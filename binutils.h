/*
 * =====================================================================================
 *
 *       Filename:  binutils.h
 *
 *    Description:  binutils header file
 *
 *        Version:  1.0
 *        Created:  01/24/2019 23:21:16
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  terasum (terasum@163.com)
 *
 * =====================================================================================
 */

#include <string>

#include <zlib.h> //todo delete this
/*
 *
 * convert BigEndian 4 bytes unsigned char array to uint32 integer
 *
 **/
uint32_t be_bin_to_u32(const unsigned char* bin /* 4 bytes char array  */);

uint64_t be_bin_to_u64(const unsigned char* bin /* 8 bytes char array*/);



int bin_slice(const char* srcByte, int srcByteLen, int offset, int len, char* distByte);


void putbytes(const char* bytes,int len, bool hex);

int gzDecompress(const char *src, int srcLen, const char *dst, int dstLen);

int gzipDecompress(const char *src, unsigned int srcLen, const char *dst, unsigned int dstLen);

int UncompressData( const char* abSrc, int nLenSrc, char* abDst, int nLenDst );

int zipUncompress(Bytef *dest, uLongf *destLen, const Bytef *source, uLong sourceLen);


// ================================================
// code convert part
// ===============================================
std::string le_bin_utf16_to_utf8(const char* bytes, int offset, int len);
