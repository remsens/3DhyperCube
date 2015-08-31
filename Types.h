#ifndef TYPES_H
#define TYPES_H

//! ������������ ���� ����������� ����� � �������
namespace u
{
	typedef bool           logic;	//!< ���������� ���
	typedef void*          ptr;		//!< ���������
	typedef const void*    cptr;	//!< ����������� ���������
	typedef char           chr;		//!< ������
	typedef chr*           str;		//!< ������
	typedef const chr*     cstr;	//!< ����������� ������
	typedef char		   int8;	//!< �������� 1-�� �������� ���
	typedef short		   int16;	//!< �������� 2-� �������� ���
	typedef long		   int32;	//!< �������� 4-� �������� ���
	typedef long long	   int64;	//!< �������� 8-� �������� ���
	typedef unsigned char  uint8;   //!< ����������� 1-�� �������� ���
	typedef unsigned short uint16;  //!< ����������� 2-� �������� ���
	typedef unsigned long  uint32;  //!< ����������� 4-� �������� ���
	typedef unsigned long  uint64;  //!< ����������� 8-� �������� ���

};

#endif //TYPES_H
