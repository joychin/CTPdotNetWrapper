/////////////////////////////////////////////////////////////////////////
/// ���ڼ��� CTP C++ => .Net Framework Adapter
/// Author:	shawn666.liu@gmail.com
/// Date: 20121027
/////////////////////////////////////////////////////////////////////////

#include "StdAfx.h"

#include <vcclr.h>
#include "util.h"
#include "Callbacks.h"
#include "MdSpi.h"



namespace Native
{
	CMdSpi::CMdSpi(CTPMDAdapter^ pAdapter) {
#ifndef __CTP_MA__
		m_pAdapter = pAdapter;
#endif

	};

#ifdef __CTP_MA__
	///���ͻ����뽻�׺�̨������ͨ������ʱ����δ��¼ǰ�����÷��������á�
	void CMdSpi::OnFrontConnected() {
		p_OnFrontConnected();
	};

	///���ͻ����뽻�׺�̨ͨ�����ӶϿ�ʱ���÷��������á���������������API���Զ��������ӣ��ͻ��˿ɲ�������
	void CMdSpi::OnFrontDisconnected(int nReason) {
		p_OnFrontDisconnected(nReason);
	};

	///������ʱ���档����ʱ��δ�յ�����ʱ���÷��������á�
	///@param nTimeLapse �����ϴν��ձ��ĵ�ʱ��
	void CMdSpi::OnHeartBeatWarning(int nTimeLapse) {
		p_OnHeartBeatWarning(nTimeLapse);
	};

	///��¼������Ӧ
	void CMdSpi::OnRspUserLogin(CThostFtdcRspUserLoginField *pRspUserLogin, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		p_OnRspUserLogin(pRspUserLogin, pRspInfo, nRequestID, bIsLast);
	};

	///�ǳ�������Ӧ
	void CMdSpi::OnRspUserLogout(CThostFtdcUserLogoutField *pUserLogout, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		p_OnRspUserLogout(pUserLogout, pRspInfo, nRequestID, bIsLast);
	};

	///����Ӧ��
	void CMdSpi::OnRspError(CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		p_OnRspError(pRspInfo, nRequestID, bIsLast);
	};

	///��������Ӧ��
	void CMdSpi::OnRspSubMarketData(CThostFtdcSpecificInstrumentField *pSpecificInstrument, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		p_OnRspSubMarketData(pSpecificInstrument, pRspInfo, nRequestID, bIsLast);
	};

	///ȡ����������Ӧ��
	void CMdSpi::OnRspUnSubMarketData(CThostFtdcSpecificInstrumentField *pSpecificInstrument, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		p_OnRspUnSubMarketData(pSpecificInstrument, pRspInfo, nRequestID, bIsLast);
	};

	///�������֪ͨ
	void CMdSpi::OnRtnDepthMarketData(CThostFtdcDepthMarketDataField *pDepthMarketData) {
		p_OnRtnDepthMarketData(pDepthMarketData);
	};
#else
	///���ͻ����뽻�׺�̨������ͨ������ʱ����δ��¼ǰ�����÷��������á�
	void CMdSpi::OnFrontConnected() {
		m_pAdapter->OnFrontConnected();
	};

	///���ͻ����뽻�׺�̨ͨ�����ӶϿ�ʱ���÷��������á���������������API���Զ��������ӣ��ͻ��˿ɲ�������
	///@param nReason ����ԭ��
	///        0x1001 �����ʧ��
	///        0x1002 ����дʧ��
	///        0x2001 ����������ʱ
	///        0x2002 ��������ʧ��
	///        0x2003 �յ�������
	void CMdSpi::OnFrontDisconnected(int nReason) {
		m_pAdapter->OnFrontDisconnected(nReason);
	};

	///������ʱ���档����ʱ��δ�յ�����ʱ���÷��������á�
	///@param nTimeLapse �����ϴν��ձ��ĵ�ʱ��
	void CMdSpi::OnHeartBeatWarning(int nTimeLapse) {
		m_pAdapter->OnHeartBeatWarning(nTimeLapse);
	};


	///��¼������Ӧ
	void CMdSpi::OnRspUserLogin(CThostFtdcRspUserLoginField *pRspUserLogin, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		ThostFtdcRspUserLoginField^ field = MNConv<ThostFtdcRspUserLoginField^, CThostFtdcRspUserLoginField>::N2M(pRspUserLogin);
		m_pAdapter->OnRspUserLogin(field, RspInfoField(pRspInfo), nRequestID, bIsLast);
	};

	///�ǳ�������Ӧ
	void CMdSpi::OnRspUserLogout(CThostFtdcUserLogoutField *pUserLogout, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		m_pAdapter->OnRspUserLogout(MNConv<ThostFtdcUserLogoutField^, CThostFtdcUserLogoutField>::N2M(pUserLogout), RspInfoField(pRspInfo), nRequestID, bIsLast);
	};

	///����Ӧ��
	void CMdSpi::OnRspError(CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		m_pAdapter->OnRspError(RspInfoField(pRspInfo), nRequestID, bIsLast);
	};

	///��������Ӧ��
	void CMdSpi::OnRspSubMarketData(CThostFtdcSpecificInstrumentField *pSpecificInstrument, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		m_pAdapter->OnRspSubMarketData(MNConv<ThostFtdcSpecificInstrumentField^, CThostFtdcSpecificInstrumentField>::N2M(pSpecificInstrument), RspInfoField(pRspInfo), nRequestID, bIsLast);
	};

	///ȡ����������Ӧ��
	void CMdSpi::OnRspUnSubMarketData(CThostFtdcSpecificInstrumentField *pSpecificInstrument, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		m_pAdapter->OnRspUnSubMarketData(MNConv<ThostFtdcSpecificInstrumentField^, CThostFtdcSpecificInstrumentField>::N2M(pSpecificInstrument), RspInfoField(pRspInfo), nRequestID, bIsLast);
	};

	///�������֪ͨ
	void CMdSpi::OnRtnDepthMarketData(CThostFtdcDepthMarketDataField *pDepthMarketData) {
		ThostFtdcDepthMarketDataField^ field = safe_cast<ThostFtdcDepthMarketDataField^>(Marshal::PtrToStructure(IntPtr(pDepthMarketData), ThostFtdcDepthMarketDataField::typeid));
		m_pAdapter->OnRtnDepthMarketData(field);
	};
#endif
};	// end of namespace

