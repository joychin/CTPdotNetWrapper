#pragma once

#include "ThostFtdcTraderApi.h"
#include "ThostFtdcMdApi.h"
#include "Struct.h"
//#include "Delegates.h"


using namespace CTP;

namespace Native
{
	/// ���й���,�Զ��ͷ��ַ���ָ���ڴ�
	class CAutoStrPtr
	{
	public:
		char* m_pChar;
		//int m_Length;
		CAutoStrPtr(String^ str);
		//CAutoStrPtr(String^ str, void* pDst, int length);
		~CAutoStrPtr();
	};


	/// ���й���, �Զ�ת�� Managed <==> Native 
	// M: managed
	// N: native
	template<typename M, typename N>
	class MNConv
	{
	public:
		// ģ�����ʵ�ֲ��ֱ������ͷ�ļ���������ӻ����
		/// Native to Managed
		static M N2M(N* pNative) {
			return safe_cast<M>(Marshal::PtrToStructure(IntPtr(pNative), M::typeid));
		};
		// Managed to Native
		static void M2N(M managed, N* pNative) {
			Marshal::StructureToPtr(managed, IntPtr(pNative), true);
		};
	};

	/// ȫ�ֺ���
	ThostFtdcRspInfoField^ RspInfoField(CThostFtdcRspInfoField *pRspInfo);

};