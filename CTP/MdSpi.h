/////////////////////////////////////////////////////////////////////////
/// ���ڼ��� CTP C++ => .Net Framework Adapter
/// Author:	shawn666.liu@gmail.com
/// Date: 20120420
/////////////////////////////////////////////////////////////////////////

#pragma once

#include <vcclr.h>
#include "util.h"
#include "Callbacks.h"
#include "CTPMdAdapter.h"


namespace Native
{
	/// ���й���
	class CMdSpi : public CThostFtdcMdSpi
	{
	public:
		/// ���캯��
		CMdSpi(CTPMDAdapter^ pAdapter);

		///���ͻ����뽻�׺�̨������ͨ������ʱ����δ��¼ǰ�����÷��������á�
		virtual void OnFrontConnected();

		///���ͻ����뽻�׺�̨ͨ�����ӶϿ�ʱ���÷��������á���������������API���Զ��������ӣ��ͻ��˿ɲ�������
		///@param nReason ����ԭ��
		///        0x1001 �����ʧ��
		///        0x1002 ����дʧ��
		///        0x2001 ����������ʱ
		///        0x2002 ��������ʧ��
		///        0x2003 �յ�������
		virtual void OnFrontDisconnected(int nReason);

		///������ʱ���档����ʱ��δ�յ�����ʱ���÷��������á�
		///@param nTimeLapse �����ϴν��ձ��ĵ�ʱ��
		virtual void OnHeartBeatWarning(int nTimeLapse);

		///��¼������Ӧ
		virtual void OnRspUserLogin(CThostFtdcRspUserLoginField *pRspUserLogin, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

		///�ǳ�������Ӧ
		virtual void OnRspUserLogout(CThostFtdcUserLogoutField *pUserLogout, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

		///����Ӧ��
		virtual void OnRspError(CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

		///��������Ӧ��
		virtual void OnRspSubMarketData(CThostFtdcSpecificInstrumentField *pSpecificInstrument, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

		///ȡ����������Ӧ��
		virtual void OnRspUnSubMarketData(CThostFtdcSpecificInstrumentField *pSpecificInstrument, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

		///�������֪ͨ
		virtual void OnRtnDepthMarketData(CThostFtdcDepthMarketDataField *pDepthMarketData);

#ifdef __CTP_MA__
	public:
		// �ص�����
		Callback_OnFrontConnected p_OnFrontConnected;
		Callback_OnFrontDisconnected p_OnFrontDisconnected;
		Callback_OnHeartBeatWarning p_OnHeartBeatWarning;
		Callback_OnRspUserLogin p_OnRspUserLogin;
		Callback_OnRspUserLogout p_OnRspUserLogout;
		Callback_OnRspError p_OnRspError;
		Callback_OnRspSubMarketData p_OnRspSubMarketData;
		Callback_OnRspUnSubMarketData p_OnRspUnSubMarketData;
		Callback_OnRtnDepthMarketData p_OnRtnDepthMarketData;

		// �ص�������Ӧ��delegate�����뱣��һ�ݶԸ�deleage�����ã�����GC���Զ����ո�deleage����������Ļص�����ʧЧ
		gcroot<Internal_FrontConnected^> d_FrontConnected;
		gcroot<Internal_FrontDisconnected^> d_FrontDisconnected;
		gcroot<Internal_HeartBeatWarning^> d_HeartBeatWarning;
		gcroot<Internal_RspUserLogin^> d_RspUserLogin;
		gcroot<Internal_RspUserLogout^> d_RspUserLogout;
		gcroot<Internal_RspError^> d_RspError;

		gcroot<Internal_RspSubMarketData^> d_RspSubMarketData;
		gcroot<Internal_RspUnSubMarketData^> d_RspUnSubMarketData;
		gcroot<Internal_RtnDepthMarketData^> d_RtnDepthMarketData;
#else
	private:
		gcroot<CTPMDAdapter^> m_pAdapter;
#endif

	};
};