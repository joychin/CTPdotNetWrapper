
#include "StdAfx.h"
#include "TraderSpi.h"
#include "CTPTraderAdapter.h"


using namespace Native;

namespace CTP
{
	CTPTraderAdapter::CTPTraderAdapter(void)
	{
		m_pApi = CThostFtdcTraderApi::CreateFtdcTraderApi();
		m_pSpi = new CTraderSpi(this);
#ifdef __CTP_MA__
		RegisterCallbacks();
#endif
		m_pApi->RegisterSpi((CThostFtdcTraderSpi*)m_pSpi);
	}

	CTPTraderAdapter::CTPTraderAdapter(String^ pszFlowPath, bool bIsUsingUdp)
	{
		CAutoStrPtr asp(pszFlowPath);
		m_pApi = CThostFtdcTraderApi::CreateFtdcTraderApi(asp.m_pChar);
		m_pSpi = new CTraderSpi(this);
#ifdef __CTP_MA__
		RegisterCallbacks();
#endif
		m_pApi->RegisterSpi(m_pSpi);
	}

	CTPTraderAdapter::~CTPTraderAdapter(void)
	{
		Release();
	}

	void CTPTraderAdapter::Release(void)
	{
		if (m_pApi)
		{
			m_pApi->RegisterSpi(0);
			m_pApi->Release();
			m_pApi = nullptr;
			delete m_pSpi;
			m_pSpi = nullptr;
		}
	}
	///ע��ǰ�û������ַ
	void CTPTraderAdapter::RegisterFront(String^  pszFrontAddress)
	{
		CAutoStrPtr asp = CAutoStrPtr(pszFrontAddress);
		m_pApi->RegisterFront(asp.m_pChar);
	}
	// ע�����ַ����������ַ
	void CTPTraderAdapter::RegisterNameServer(String^  pszNsAddress)
	{
		CAutoStrPtr asp = CAutoStrPtr(pszNsAddress);
		m_pApi->RegisterNameServer(asp.m_pChar);
	}

	///����˽������
	void CTPTraderAdapter::SubscribePrivateTopic(EnumTeResumeType nResumeType)
	{
		m_pApi->SubscribePrivateTopic((THOST_TE_RESUME_TYPE)nResumeType);
	}
	///���Ĺ�����
	void CTPTraderAdapter::SubscribePublicTopic(EnumTeResumeType nResumeType)
	{
		m_pApi->SubscribePublicTopic((THOST_TE_RESUME_TYPE)nResumeType);
	}

	void CTPTraderAdapter::Init(void)
	{
		m_pApi->Init();
	}

	int CTPTraderAdapter::Join(void)
	{
		return m_pApi->Join();
	}

	String^ CTPTraderAdapter::GetTradingDay()
	{
		return gcnew String(m_pApi->GetTradingDay());
	}
	///�ͻ�����֤����
	int CTPTraderAdapter::ReqAuthenticate(ThostFtdcReqAuthenticateField^ pReqAuthenticateField, int nRequestID) {
		CThostFtdcReqAuthenticateField native;
		MNConv<ThostFtdcReqAuthenticateField^, CThostFtdcReqAuthenticateField>::M2N(pReqAuthenticateField, &native);
		return m_pApi->ReqAuthenticate(&native, nRequestID);
	}
	///�û���¼����
	int CTPTraderAdapter::ReqUserLogin(ThostFtdcReqUserLoginField^ pReqUserLoginField, int nRequestID)
	{
		CThostFtdcReqUserLoginField native;
		MNConv<ThostFtdcReqUserLoginField^, CThostFtdcReqUserLoginField>::M2N(pReqUserLoginField, &native);
		return m_pApi->ReqUserLogin(&native, nRequestID);
	}
	///�ǳ�����
	int CTPTraderAdapter::ReqUserLogout(ThostFtdcUserLogoutField^ pUserLogout, int nRequestID)
	{
		CThostFtdcUserLogoutField native;
		MNConv<ThostFtdcUserLogoutField^, CThostFtdcUserLogoutField>::M2N(pUserLogout, &native);
		return m_pApi->ReqUserLogout(&native, nRequestID);
	}
	///�û������������
	int CTPTraderAdapter::ReqUserPasswordUpdate(ThostFtdcUserPasswordUpdateField^ pUserPasswordUpdate, int nRequestID)
	{
		CThostFtdcUserPasswordUpdateField native;
		MNConv<ThostFtdcUserPasswordUpdateField^, CThostFtdcUserPasswordUpdateField>::M2N(pUserPasswordUpdate, &native);
		return m_pApi->ReqUserPasswordUpdate(&native, nRequestID);
	}
	///�ʽ��˻������������
	int CTPTraderAdapter::ReqTradingAccountPasswordUpdate(ThostFtdcTradingAccountPasswordUpdateField^ pTradingAccountPasswordUpdate, int nRequestID)
	{
		CThostFtdcTradingAccountPasswordUpdateField native;
		MNConv<ThostFtdcTradingAccountPasswordUpdateField^, CThostFtdcTradingAccountPasswordUpdateField>::M2N(pTradingAccountPasswordUpdate, &native);
		return m_pApi->ReqTradingAccountPasswordUpdate(&native, nRequestID);
	}
	///����¼������
	int CTPTraderAdapter::ReqOrderInsert(ThostFtdcInputOrderField^ pInputOrder, int nRequestID)
	{
		CThostFtdcInputOrderField native;
		MNConv<ThostFtdcInputOrderField^, CThostFtdcInputOrderField>::M2N(pInputOrder, &native);
		return m_pApi->ReqOrderInsert(&native, nRequestID);
	}
	///Ԥ��¼������
	int CTPTraderAdapter::ReqParkedOrderInsert(ThostFtdcParkedOrderField^ pParkedOrder, int nRequestID)
	{
		CThostFtdcParkedOrderField native;
		MNConv<ThostFtdcParkedOrderField^, CThostFtdcParkedOrderField>::M2N(pParkedOrder, &native);
		return m_pApi->ReqParkedOrderInsert(&native, nRequestID);
	}
	///Ԥ�񳷵�¼������
	int CTPTraderAdapter::ReqParkedOrderAction(ThostFtdcParkedOrderActionField^ pParkedOrderAction, int nRequestID)
	{
		CThostFtdcParkedOrderActionField native;
		MNConv<ThostFtdcParkedOrderActionField^, CThostFtdcParkedOrderActionField>::M2N(pParkedOrderAction, &native);
		return m_pApi->ReqParkedOrderAction(&native, nRequestID);
	}
	///������������
	int CTPTraderAdapter::ReqOrderAction(ThostFtdcInputOrderActionField^ pInputOrderAction, int nRequestID)
	{
		CThostFtdcInputOrderActionField native;
		MNConv<ThostFtdcInputOrderActionField^, CThostFtdcInputOrderActionField>::M2N(pInputOrderAction, &native);
		return m_pApi->ReqOrderAction(&native, nRequestID);
	}
	///��ѯ��󱨵���������
	int CTPTraderAdapter::ReqQueryMaxOrderVolume(ThostFtdcQueryMaxOrderVolumeField^ pQueryMaxOrderVolume, int nRequestID)
	{
		CThostFtdcQueryMaxOrderVolumeField native;
		MNConv<ThostFtdcQueryMaxOrderVolumeField^, CThostFtdcQueryMaxOrderVolumeField>::M2N(pQueryMaxOrderVolume, &native);
		return m_pApi->ReqQueryMaxOrderVolume(&native, nRequestID);
	}
	///Ͷ���߽�����ȷ��
	int CTPTraderAdapter::ReqSettlementInfoConfirm(ThostFtdcSettlementInfoConfirmField^ pSettlementInfoConfirm, int nRequestID)
	{
		CThostFtdcSettlementInfoConfirmField native;
		MNConv<ThostFtdcSettlementInfoConfirmField^, CThostFtdcSettlementInfoConfirmField>::M2N(pSettlementInfoConfirm, &native);
		return m_pApi->ReqSettlementInfoConfirm(&native, nRequestID);
	}
	///����ɾ��Ԥ��
	int CTPTraderAdapter::ReqRemoveParkedOrder(ThostFtdcRemoveParkedOrderField^ pRemoveParkedOrder, int nRequestID)
	{
		CThostFtdcRemoveParkedOrderField native;
		MNConv<ThostFtdcRemoveParkedOrderField^, CThostFtdcRemoveParkedOrderField>::M2N(pRemoveParkedOrder, &native);
		return m_pApi->ReqRemoveParkedOrder(&native, nRequestID);
	}
	///����ɾ��Ԥ�񳷵�
	int CTPTraderAdapter::ReqRemoveParkedOrderAction(ThostFtdcRemoveParkedOrderActionField^ pRemoveParkedOrderAction, int nRequestID)
	{
		CThostFtdcRemoveParkedOrderActionField native;
		MNConv<ThostFtdcRemoveParkedOrderActionField^, CThostFtdcRemoveParkedOrderActionField>::M2N(pRemoveParkedOrderAction, &native);
		return m_pApi->ReqRemoveParkedOrderAction(&native, nRequestID);
	}
	///�����ѯ����
	int CTPTraderAdapter::ReqQryOrder(ThostFtdcQryOrderField^ pQryOrder, int nRequestID)
	{
		CThostFtdcQryOrderField native;
		MNConv<ThostFtdcQryOrderField^, CThostFtdcQryOrderField>::M2N(pQryOrder, &native);
		return m_pApi->ReqQryOrder(&native, nRequestID);
	}
	///�����ѯ�ɽ�
	int CTPTraderAdapter::ReqQryTrade(ThostFtdcQryTradeField^ pQryTrade, int nRequestID)
	{
		CThostFtdcQryTradeField native;
		MNConv<ThostFtdcQryTradeField^, CThostFtdcQryTradeField>::M2N(pQryTrade, &native);
		return m_pApi->ReqQryTrade(&native, nRequestID);
	}
	///�����ѯͶ���ֲ߳�
	int CTPTraderAdapter::ReqQryInvestorPosition(ThostFtdcQryInvestorPositionField^ pQryInvestorPosition, int nRequestID)
	{
		CThostFtdcQryInvestorPositionField native;
		MNConv<ThostFtdcQryInvestorPositionField^, CThostFtdcQryInvestorPositionField>::M2N(pQryInvestorPosition, &native);
		return m_pApi->ReqQryInvestorPosition(&native, nRequestID);
	}
	///�����ѯ�ʽ��˻�
	int CTPTraderAdapter::ReqQryTradingAccount(ThostFtdcQryTradingAccountField^ pQryTradingAccount, int nRequestID)
	{
		CThostFtdcQryTradingAccountField native;
		MNConv<ThostFtdcQryTradingAccountField^, CThostFtdcQryTradingAccountField>::M2N(pQryTradingAccount, &native);
		return m_pApi->ReqQryTradingAccount(&native, nRequestID);
	}
	///�����ѯͶ����
	int CTPTraderAdapter::ReqQryInvestor(ThostFtdcQryInvestorField^ pQryInvestor, int nRequestID)
	{
		CThostFtdcQryInvestorField native;
		MNConv<ThostFtdcQryInvestorField^, CThostFtdcQryInvestorField>::M2N(pQryInvestor, &native);
		return m_pApi->ReqQryInvestor(&native, nRequestID);
	}
	///�����ѯ���ױ���
	int CTPTraderAdapter::ReqQryTradingCode(ThostFtdcQryTradingCodeField^ pQryTradingCode, int nRequestID)
	{
		CThostFtdcQryTradingCodeField native;
		MNConv<ThostFtdcQryTradingCodeField^, CThostFtdcQryTradingCodeField>::M2N(pQryTradingCode, &native);
		return m_pApi->ReqQryTradingCode(&native, nRequestID);
	}
	///�����ѯ��Լ��֤����
	int CTPTraderAdapter::ReqQryInstrumentMarginRate(ThostFtdcQryInstrumentMarginRateField^ pQryInstrumentMarginRate, int nRequestID)
	{
		CThostFtdcQryInstrumentMarginRateField native;
		MNConv<ThostFtdcQryInstrumentMarginRateField^, CThostFtdcQryInstrumentMarginRateField>::M2N(pQryInstrumentMarginRate, &native);
		return m_pApi->ReqQryInstrumentMarginRate(&native, nRequestID);
	}
	///�����ѯ��Լ��������
	int CTPTraderAdapter::ReqQryInstrumentCommissionRate(ThostFtdcQryInstrumentCommissionRateField^ pQryInstrumentCommissionRate, int nRequestID)
	{
		CThostFtdcQryInstrumentCommissionRateField native;
		MNConv<ThostFtdcQryInstrumentCommissionRateField^, CThostFtdcQryInstrumentCommissionRateField>::M2N(pQryInstrumentCommissionRate, &native);
		return m_pApi->ReqQryInstrumentCommissionRate(&native, nRequestID);
	}
	///�����ѯ������
	int CTPTraderAdapter::ReqQryExchange(ThostFtdcQryExchangeField^ pQryExchange, int nRequestID)
	{
		CThostFtdcQryExchangeField native;
		MNConv<ThostFtdcQryExchangeField^, CThostFtdcQryExchangeField>::M2N(pQryExchange, &native);
		return m_pApi->ReqQryExchange(&native, nRequestID);
	}
	///�����ѯ��Լ
	int CTPTraderAdapter::ReqQryInstrument(ThostFtdcQryInstrumentField^ pQryInstrument, int nRequestID)
	{
		CThostFtdcQryInstrumentField native;
		MNConv<ThostFtdcQryInstrumentField^, CThostFtdcQryInstrumentField>::M2N(pQryInstrument, &native);
		return m_pApi->ReqQryInstrument(&native, nRequestID);
	}
	///�����ѯ����
	int CTPTraderAdapter::ReqQryDepthMarketData(ThostFtdcQryDepthMarketDataField^ pQryDepthMarketData, int nRequestID)
	{
		CThostFtdcQryDepthMarketDataField native;
		MNConv<ThostFtdcQryDepthMarketDataField^, CThostFtdcQryDepthMarketDataField>::M2N(pQryDepthMarketData, &native);
		return m_pApi->ReqQryDepthMarketData(&native, nRequestID);
	}
	///�����ѯͶ���߽�����
	int CTPTraderAdapter::ReqQrySettlementInfo(ThostFtdcQrySettlementInfoField^ pQrySettlementInfo, int nRequestID)
	{
		CThostFtdcQrySettlementInfoField native;
		MNConv<ThostFtdcQrySettlementInfoField^, CThostFtdcQrySettlementInfoField>::M2N(pQrySettlementInfo, &native);
		return m_pApi->ReqQrySettlementInfo(&native, nRequestID);
	}
	///�����ѯת������
	int CTPTraderAdapter::ReqQryTransferBank(ThostFtdcQryTransferBankField^ pQryTransferBank, int nRequestID)
	{
		CThostFtdcQryTransferBankField native;
		MNConv<ThostFtdcQryTransferBankField^, CThostFtdcQryTransferBankField>::M2N(pQryTransferBank, &native);
		return m_pApi->ReqQryTransferBank(&native, nRequestID);
	}
	///�����ѯͶ���ֲ߳���ϸ
	int CTPTraderAdapter::ReqQryInvestorPositionDetail(ThostFtdcQryInvestorPositionDetailField^ pQryInvestorPositionDetail, int nRequestID)
	{
		CThostFtdcQryInvestorPositionDetailField native;
		MNConv<ThostFtdcQryInvestorPositionDetailField^, CThostFtdcQryInvestorPositionDetailField>::M2N(pQryInvestorPositionDetail, &native);
		return m_pApi->ReqQryInvestorPositionDetail(&native, nRequestID);
	}
	///�����ѯ�ͻ�֪ͨ
	int CTPTraderAdapter::ReqQryNotice(ThostFtdcQryNoticeField^ pQryNotice, int nRequestID)
	{
		CThostFtdcQryNoticeField native;
		MNConv<ThostFtdcQryNoticeField^, CThostFtdcQryNoticeField>::M2N(pQryNotice, &native);
		return m_pApi->ReqQryNotice(&native, nRequestID);
	}
	///�����ѯ������Ϣȷ��
	int CTPTraderAdapter::ReqQrySettlementInfoConfirm(ThostFtdcQrySettlementInfoConfirmField^ pQrySettlementInfoConfirm, int nRequestID)
	{
		CThostFtdcQrySettlementInfoConfirmField native;
		MNConv<ThostFtdcQrySettlementInfoConfirmField^, CThostFtdcQrySettlementInfoConfirmField>::M2N(pQrySettlementInfoConfirm, &native);
		return m_pApi->ReqQrySettlementInfoConfirm(&native, nRequestID);
	}
	///�����ѯͶ���ֲ߳���ϸ
	int CTPTraderAdapter::ReqQryInvestorPositionCombineDetail(ThostFtdcQryInvestorPositionCombineDetailField^ pQryInvestorPositionCombineDetail, int nRequestID)
	{
		CThostFtdcQryInvestorPositionCombineDetailField native;
		MNConv<ThostFtdcQryInvestorPositionCombineDetailField^, CThostFtdcQryInvestorPositionCombineDetailField>::M2N(pQryInvestorPositionCombineDetail, &native);
		return m_pApi->ReqQryInvestorPositionCombineDetail(&native, nRequestID);
	}
	///�����ѯ��֤����ϵͳ���͹�˾�ʽ��˻���Կ
	int CTPTraderAdapter::ReqQryCFMMCTradingAccountKey(ThostFtdcQryCFMMCTradingAccountKeyField^ pQryCFMMCTradingAccountKey, int nRequestID)
	{
		CThostFtdcQryCFMMCTradingAccountKeyField native;
		MNConv<ThostFtdcQryCFMMCTradingAccountKeyField^, CThostFtdcQryCFMMCTradingAccountKeyField>::M2N(pQryCFMMCTradingAccountKey, &native);
		return m_pApi->ReqQryCFMMCTradingAccountKey(&native, nRequestID);
	}
	///�����ѯ�ֵ��۵���Ϣ
	int CTPTraderAdapter::ReqQryEWarrantOffset(ThostFtdcQryEWarrantOffsetField^ pQryEWarrantOffset, int nRequestID)
	{
		CThostFtdcQryEWarrantOffsetField native;
		MNConv<ThostFtdcQryEWarrantOffsetField^, CThostFtdcQryEWarrantOffsetField>::M2N(pQryEWarrantOffset, &native);
		return m_pApi->ReqQryEWarrantOffset(&native, nRequestID);
	}
	///�����ѯת����ˮ
	int CTPTraderAdapter::ReqQryTransferSerial(ThostFtdcQryTransferSerialField^ pQryTransferSerial, int nRequestID)
	{
		CThostFtdcQryTransferSerialField native;
		MNConv<ThostFtdcQryTransferSerialField^, CThostFtdcQryTransferSerialField>::M2N(pQryTransferSerial, &native);
		return m_pApi->ReqQryTransferSerial(&native, nRequestID);
	}
	///�����ѯ����ǩԼ��ϵ
	int CTPTraderAdapter::ReqQryAccountregister(ThostFtdcQryAccountregisterField^ pQryAccountregister, int nRequestID)
	{
		CThostFtdcQryAccountregisterField native;
		MNConv<ThostFtdcQryAccountregisterField^, CThostFtdcQryAccountregisterField>::M2N(pQryAccountregister, &native);
		return m_pApi->ReqQryAccountregister(&native, nRequestID);
	}
	///�����ѯǩԼ����
	int CTPTraderAdapter::ReqQryContractBank(ThostFtdcQryContractBankField^ pQryContractBank, int nRequestID)
	{
		CThostFtdcQryContractBankField native;
		MNConv<ThostFtdcQryContractBankField^, CThostFtdcQryContractBankField>::M2N(pQryContractBank, &native);
		return m_pApi->ReqQryContractBank(&native, nRequestID);
	}
	///�����ѯԤ��
	int CTPTraderAdapter::ReqQryParkedOrder(ThostFtdcQryParkedOrderField^ pQryParkedOrder, int nRequestID)
	{
		CThostFtdcQryParkedOrderField native;
		MNConv<ThostFtdcQryParkedOrderField^, CThostFtdcQryParkedOrderField>::M2N(pQryParkedOrder, &native);
		return m_pApi->ReqQryParkedOrder(&native, nRequestID);
	}
	///�����ѯԤ�񳷵�
	int CTPTraderAdapter::ReqQryParkedOrderAction(ThostFtdcQryParkedOrderActionField^ pQryParkedOrderAction, int nRequestID)
	{
		CThostFtdcQryParkedOrderActionField native;
		MNConv<ThostFtdcQryParkedOrderActionField^, CThostFtdcQryParkedOrderActionField>::M2N(pQryParkedOrderAction, &native);
		return m_pApi->ReqQryParkedOrderAction(&native, nRequestID);
	}
	///�����ѯ����֪ͨ
	int CTPTraderAdapter::ReqQryTradingNotice(ThostFtdcQryTradingNoticeField^ pQryTradingNotice, int nRequestID)
	{
		CThostFtdcQryTradingNoticeField native;
		MNConv<ThostFtdcQryTradingNoticeField^, CThostFtdcQryTradingNoticeField>::M2N(pQryTradingNotice, &native);
		return m_pApi->ReqQryTradingNotice(&native, nRequestID);
	}
	///�����ѯ���͹�˾���ײ���
	int CTPTraderAdapter::ReqQryBrokerTradingParams(ThostFtdcQryBrokerTradingParamsField^ pQryBrokerTradingParams, int nRequestID)
	{
		CThostFtdcQryBrokerTradingParamsField native;
		MNConv<ThostFtdcQryBrokerTradingParamsField^, CThostFtdcQryBrokerTradingParamsField>::M2N(pQryBrokerTradingParams, &native);
		return m_pApi->ReqQryBrokerTradingParams(&native, nRequestID);
	}
	///�����ѯ���͹�˾�����㷨
	int CTPTraderAdapter::ReqQryBrokerTradingAlgos(ThostFtdcQryBrokerTradingAlgosField^ pQryBrokerTradingAlgos, int nRequestID)
	{
		CThostFtdcQryBrokerTradingAlgosField native;
		MNConv<ThostFtdcQryBrokerTradingAlgosField^, CThostFtdcQryBrokerTradingAlgosField>::M2N(pQryBrokerTradingAlgos, &native);
		return m_pApi->ReqQryBrokerTradingAlgos(&native, nRequestID);
	}
	///�ڻ����������ʽ�ת�ڻ�����
	int CTPTraderAdapter::ReqFromBankToFutureByFuture(ThostFtdcReqTransferField^ pReqTransfer, int nRequestID)
	{
		CThostFtdcReqTransferField native;
		MNConv<ThostFtdcReqTransferField^, CThostFtdcReqTransferField>::M2N(pReqTransfer, &native);
		return m_pApi->ReqFromBankToFutureByFuture(&native, nRequestID);
	}
	///�ڻ������ڻ��ʽ�ת��������
	int CTPTraderAdapter::ReqFromFutureToBankByFuture(ThostFtdcReqTransferField^ pReqTransfer, int nRequestID)
	{
		CThostFtdcReqTransferField native;
		MNConv<ThostFtdcReqTransferField^, CThostFtdcReqTransferField>::M2N(pReqTransfer, &native);
		return m_pApi->ReqFromFutureToBankByFuture(&native, nRequestID);
	}
	///�ڻ������ѯ�����������
	int CTPTraderAdapter::ReqQueryBankAccountMoneyByFuture(ThostFtdcReqQueryAccountField^ pReqQueryAccount, int nRequestID)
	{
		CThostFtdcReqQueryAccountField native;
		MNConv<ThostFtdcReqQueryAccountField^, CThostFtdcReqQueryAccountField>::M2N(pReqQueryAccount, &native);
		return m_pApi->ReqQueryBankAccountMoneyByFuture(&native, nRequestID);
	}

#ifdef __CTP_MA__

	//------------------------------------ Callbacks ------------------------------------

	void CTPTraderAdapter::cbk_OnFrontConnected() {
		this->OnFrontConnected();
	}
	void CTPTraderAdapter::cbk_OnFrontDisconnected(int nReason) {
		this->OnFrontDisconnected(nReason);
	}
	void CTPTraderAdapter::cbk_OnHeartBeatWarning(int nTimeLapse) {
		this->OnHeartBeatWarning(nTimeLapse);
	}
	void CTPTraderAdapter::cbk_OnRspAuthenticate(CThostFtdcRspAuthenticateField *pRspAuthenticateField, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		this->OnRspAuthenticate(MNConv<ThostFtdcRspAuthenticateField^, CThostFtdcRspAuthenticateField>::N2M(pRspAuthenticateField), RspInfoField(pRspInfo), nRequestID, bIsLast);
	}
	void CTPTraderAdapter::cbk_OnRspUserLogin(CThostFtdcRspUserLoginField *pRspUserLogin, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		this->OnRspUserLogin(MNConv<ThostFtdcRspUserLoginField^, CThostFtdcRspUserLoginField>::N2M(pRspUserLogin), RspInfoField(pRspInfo), nRequestID, bIsLast);
	}
	void CTPTraderAdapter::cbk_OnRspUserLogout(CThostFtdcUserLogoutField *pUserLogout, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		this->OnRspUserLogout(MNConv<ThostFtdcUserLogoutField^, CThostFtdcUserLogoutField>::N2M(pUserLogout), RspInfoField(pRspInfo), nRequestID, bIsLast);
	}
	void CTPTraderAdapter::cbk_OnRspUserPasswordUpdate(CThostFtdcUserPasswordUpdateField *pUserPasswordUpdate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		this->OnRspUserPasswordUpdate(MNConv<ThostFtdcUserPasswordUpdateField^, CThostFtdcUserPasswordUpdateField>::N2M(pUserPasswordUpdate), RspInfoField(pRspInfo), nRequestID, bIsLast);
	}
	void CTPTraderAdapter::cbk_OnRspTradingAccountPasswordUpdate(CThostFtdcTradingAccountPasswordUpdateField *pTradingAccountPasswordUpdate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		this->OnRspTradingAccountPasswordUpdate(MNConv<ThostFtdcTradingAccountPasswordUpdateField^, CThostFtdcTradingAccountPasswordUpdateField>::N2M(pTradingAccountPasswordUpdate), RspInfoField(pRspInfo), nRequestID, bIsLast);
	}
	void CTPTraderAdapter::cbk_OnRspOrderInsert(CThostFtdcInputOrderField *pInputOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		this->OnRspOrderInsert(MNConv<ThostFtdcInputOrderField^, CThostFtdcInputOrderField>::N2M(pInputOrder), RspInfoField(pRspInfo), nRequestID, bIsLast);
	}
	void CTPTraderAdapter::cbk_OnRspParkedOrderInsert(CThostFtdcParkedOrderField *pParkedOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		this->OnRspParkedOrderInsert(MNConv<ThostFtdcParkedOrderField^, CThostFtdcParkedOrderField>::N2M(pParkedOrder), RspInfoField(pRspInfo), nRequestID, bIsLast);
	}
	void CTPTraderAdapter::cbk_OnRspParkedOrderAction(CThostFtdcParkedOrderActionField *pParkedOrderAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		this->OnRspParkedOrderAction(MNConv<ThostFtdcParkedOrderActionField^, CThostFtdcParkedOrderActionField>::N2M(pParkedOrderAction), RspInfoField(pRspInfo), nRequestID, bIsLast);
	}
	void CTPTraderAdapter::cbk_OnRspOrderAction(CThostFtdcInputOrderActionField *pInputOrderAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		this->OnRspOrderAction(MNConv<ThostFtdcInputOrderActionField^, CThostFtdcInputOrderActionField>::N2M(pInputOrderAction), RspInfoField(pRspInfo), nRequestID, bIsLast);
	}
	void CTPTraderAdapter::cbk_OnRspQueryMaxOrderVolume(CThostFtdcQueryMaxOrderVolumeField *pQueryMaxOrderVolume, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		this->OnRspQueryMaxOrderVolume(MNConv<ThostFtdcQueryMaxOrderVolumeField^, CThostFtdcQueryMaxOrderVolumeField>::N2M(pQueryMaxOrderVolume), RspInfoField(pRspInfo), nRequestID, bIsLast);
	}
	void CTPTraderAdapter::cbk_OnRspSettlementInfoConfirm(CThostFtdcSettlementInfoConfirmField *pSettlementInfoConfirm, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		this->OnRspSettlementInfoConfirm(MNConv<ThostFtdcSettlementInfoConfirmField^, CThostFtdcSettlementInfoConfirmField>::N2M(pSettlementInfoConfirm), RspInfoField(pRspInfo), nRequestID, bIsLast);
	}
	void CTPTraderAdapter::cbk_OnRspRemoveParkedOrder(CThostFtdcRemoveParkedOrderField *pRemoveParkedOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		this->OnRspRemoveParkedOrder(MNConv<ThostFtdcRemoveParkedOrderField^, CThostFtdcRemoveParkedOrderField>::N2M(pRemoveParkedOrder), RspInfoField(pRspInfo), nRequestID, bIsLast);
	}
	void CTPTraderAdapter::cbk_OnRspRemoveParkedOrderAction(CThostFtdcRemoveParkedOrderActionField *pRemoveParkedOrderAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		this->OnRspRemoveParkedOrderAction(MNConv<ThostFtdcRemoveParkedOrderActionField^, CThostFtdcRemoveParkedOrderActionField>::N2M(pRemoveParkedOrderAction), RspInfoField(pRspInfo), nRequestID, bIsLast);
	}
	void CTPTraderAdapter::cbk_OnRspQryOrder(CThostFtdcOrderField *pOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		this->OnRspQryOrder(MNConv<ThostFtdcOrderField^, CThostFtdcOrderField>::N2M(pOrder), RspInfoField(pRspInfo), nRequestID, bIsLast);
	}
	void CTPTraderAdapter::cbk_OnRspQryTrade(CThostFtdcTradeField *pTrade, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		this->OnRspQryTrade(MNConv<ThostFtdcTradeField^, CThostFtdcTradeField>::N2M(pTrade), RspInfoField(pRspInfo), nRequestID, bIsLast);
	}
	void CTPTraderAdapter::cbk_OnRspQryInvestorPosition(CThostFtdcInvestorPositionField *pInvestorPosition, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		this->OnRspQryInvestorPosition(MNConv<ThostFtdcInvestorPositionField^, CThostFtdcInvestorPositionField>::N2M(pInvestorPosition), RspInfoField(pRspInfo), nRequestID, bIsLast);
	}
	void CTPTraderAdapter::cbk_OnRspQryTradingAccount(CThostFtdcTradingAccountField *pTradingAccount, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		this->OnRspQryTradingAccount(MNConv<ThostFtdcTradingAccountField^, CThostFtdcTradingAccountField>::N2M(pTradingAccount), RspInfoField(pRspInfo), nRequestID, bIsLast);
	}
	void CTPTraderAdapter::cbk_OnRspQryInvestor(CThostFtdcInvestorField *pInvestor, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		this->OnRspQryInvestor(MNConv<ThostFtdcInvestorField^, CThostFtdcInvestorField>::N2M(pInvestor), RspInfoField(pRspInfo), nRequestID, bIsLast);
	}
	void CTPTraderAdapter::cbk_OnRspQryTradingCode(CThostFtdcTradingCodeField *pTradingCode, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		this->OnRspQryTradingCode(MNConv<ThostFtdcTradingCodeField^, CThostFtdcTradingCodeField>::N2M(pTradingCode), RspInfoField(pRspInfo), nRequestID, bIsLast);
	}
	void CTPTraderAdapter::cbk_OnRspQryInstrumentMarginRate(CThostFtdcInstrumentMarginRateField *pInstrumentMarginRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		this->OnRspQryInstrumentMarginRate(MNConv<ThostFtdcInstrumentMarginRateField^, CThostFtdcInstrumentMarginRateField>::N2M(pInstrumentMarginRate), RspInfoField(pRspInfo), nRequestID, bIsLast);
	}
	void CTPTraderAdapter::cbk_OnRspQryInstrumentCommissionRate(CThostFtdcInstrumentCommissionRateField *pInstrumentCommissionRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		this->OnRspQryInstrumentCommissionRate(MNConv<ThostFtdcInstrumentCommissionRateField^, CThostFtdcInstrumentCommissionRateField>::N2M(pInstrumentCommissionRate), RspInfoField(pRspInfo), nRequestID, bIsLast);
	}
	void CTPTraderAdapter::cbk_OnRspQryExchange(CThostFtdcExchangeField *pExchange, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		this->OnRspQryExchange(MNConv<ThostFtdcExchangeField^, CThostFtdcExchangeField>::N2M(pExchange), RspInfoField(pRspInfo), nRequestID, bIsLast);
	}
	void CTPTraderAdapter::cbk_OnRspQryInstrument(CThostFtdcInstrumentField *pInstrument, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		this->OnRspQryInstrument(MNConv<ThostFtdcInstrumentField^, CThostFtdcInstrumentField>::N2M(pInstrument), RspInfoField(pRspInfo), nRequestID, bIsLast);
	}
	void CTPTraderAdapter::cbk_OnRspQryDepthMarketData(CThostFtdcDepthMarketDataField *pDepthMarketData, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		this->OnRspQryDepthMarketData(MNConv<ThostFtdcDepthMarketDataField^, CThostFtdcDepthMarketDataField>::N2M(pDepthMarketData), RspInfoField(pRspInfo), nRequestID, bIsLast);
	}
	void CTPTraderAdapter::cbk_OnRspQrySettlementInfo(CThostFtdcSettlementInfoField *pSettlementInfo, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		this->OnRspQrySettlementInfo(MNConv<ThostFtdcSettlementInfoField^, CThostFtdcSettlementInfoField>::N2M(pSettlementInfo), RspInfoField(pRspInfo), nRequestID, bIsLast);
	}
	void CTPTraderAdapter::cbk_OnRspQryTransferBank(CThostFtdcTransferBankField *pTransferBank, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		this->OnRspQryTransferBank(MNConv<ThostFtdcTransferBankField^, CThostFtdcTransferBankField>::N2M(pTransferBank), RspInfoField(pRspInfo), nRequestID, bIsLast);
	}
	void CTPTraderAdapter::cbk_OnRspQryInvestorPositionDetail(CThostFtdcInvestorPositionDetailField *pInvestorPositionDetail, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		this->OnRspQryInvestorPositionDetail(MNConv<ThostFtdcInvestorPositionDetailField^, CThostFtdcInvestorPositionDetailField>::N2M(pInvestorPositionDetail), RspInfoField(pRspInfo), nRequestID, bIsLast);
	}
	void CTPTraderAdapter::cbk_OnRspQryNotice(CThostFtdcNoticeField *pNotice, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		this->OnRspQryNotice(MNConv<ThostFtdcNoticeField^, CThostFtdcNoticeField>::N2M(pNotice), RspInfoField(pRspInfo), nRequestID, bIsLast);
	}
	void CTPTraderAdapter::cbk_OnRspQrySettlementInfoConfirm(CThostFtdcSettlementInfoConfirmField *pSettlementInfoConfirm, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		this->OnRspQrySettlementInfoConfirm(MNConv<ThostFtdcSettlementInfoConfirmField^, CThostFtdcSettlementInfoConfirmField>::N2M(pSettlementInfoConfirm), RspInfoField(pRspInfo), nRequestID, bIsLast);
	}
	void CTPTraderAdapter::cbk_OnRspQryInvestorPositionCombineDetail(CThostFtdcInvestorPositionCombineDetailField *pInvestorPositionCombineDetail, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		this->OnRspQryInvestorPositionCombineDetail(MNConv<ThostFtdcInvestorPositionCombineDetailField^, CThostFtdcInvestorPositionCombineDetailField>::N2M(pInvestorPositionCombineDetail), RspInfoField(pRspInfo), nRequestID, bIsLast);
	}
	void CTPTraderAdapter::cbk_OnRspQryCFMMCTradingAccountKey(CThostFtdcCFMMCTradingAccountKeyField *pCFMMCTradingAccountKey, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		this->OnRspQryCFMMCTradingAccountKey(MNConv<ThostFtdcCFMMCTradingAccountKeyField^, CThostFtdcCFMMCTradingAccountKeyField>::N2M(pCFMMCTradingAccountKey), RspInfoField(pRspInfo), nRequestID, bIsLast);
	}
	void CTPTraderAdapter::cbk_OnRspQryEWarrantOffset(CThostFtdcEWarrantOffsetField *pEWarrantOffset, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		this->OnRspQryEWarrantOffset(MNConv<ThostFtdcEWarrantOffsetField^, CThostFtdcEWarrantOffsetField>::N2M(pEWarrantOffset), RspInfoField(pRspInfo), nRequestID, bIsLast);
	}
	void CTPTraderAdapter::cbk_OnRspQryTransferSerial(CThostFtdcTransferSerialField *pTransferSerial, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		this->OnRspQryTransferSerial(MNConv<ThostFtdcTransferSerialField^, CThostFtdcTransferSerialField>::N2M(pTransferSerial), RspInfoField(pRspInfo), nRequestID, bIsLast);
	}
	void CTPTraderAdapter::cbk_OnRspQryAccountregister(CThostFtdcAccountregisterField *pAccountregister, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		this->OnRspQryAccountregister(MNConv<ThostFtdcAccountregisterField^, CThostFtdcAccountregisterField>::N2M(pAccountregister), RspInfoField(pRspInfo), nRequestID, bIsLast);
	}
	void CTPTraderAdapter::cbk_OnRspError(CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		this->OnRspError(RspInfoField(pRspInfo), nRequestID, bIsLast);
	}
	void CTPTraderAdapter::cbk_OnRtnOrder(CThostFtdcOrderField *pOrder) {
		this->OnRtnOrder(MNConv<ThostFtdcOrderField^, CThostFtdcOrderField>::N2M(pOrder));
	}
	void CTPTraderAdapter::cbk_OnRtnTrade(CThostFtdcTradeField *pTrade) {
		this->OnRtnTrade(MNConv<ThostFtdcTradeField^, CThostFtdcTradeField>::N2M(pTrade));
	}
	void CTPTraderAdapter::cbk_OnErrRtnOrderInsert(CThostFtdcInputOrderField *pInputOrder, CThostFtdcRspInfoField *pRspInfo) {
		this->OnErrRtnOrderInsert(MNConv<ThostFtdcInputOrderField^, CThostFtdcInputOrderField>::N2M(pInputOrder), RspInfoField(pRspInfo));
	}
	void CTPTraderAdapter::cbk_OnErrRtnOrderAction(CThostFtdcOrderActionField *pOrderAction, CThostFtdcRspInfoField *pRspInfo) {
		this->OnErrRtnOrderAction(MNConv<ThostFtdcOrderActionField^, CThostFtdcOrderActionField>::N2M(pOrderAction), RspInfoField(pRspInfo));
	}
	void CTPTraderAdapter::cbk_OnRtnInstrumentStatus(CThostFtdcInstrumentStatusField *pInstrumentStatus) {
		this->OnRtnInstrumentStatus(MNConv<ThostFtdcInstrumentStatusField^, CThostFtdcInstrumentStatusField>::N2M(pInstrumentStatus));
	}
	void CTPTraderAdapter::cbk_OnRtnTradingNotice(CThostFtdcTradingNoticeInfoField *pTradingNoticeInfo) {
		this->OnRtnTradingNotice(MNConv<ThostFtdcTradingNoticeInfoField^, CThostFtdcTradingNoticeInfoField>::N2M(pTradingNoticeInfo));
	}
	void CTPTraderAdapter::cbk_OnRtnErrorConditionalOrder(CThostFtdcErrorConditionalOrderField *pErrorConditionalOrder) {
		this->OnRtnErrorConditionalOrder(MNConv<ThostFtdcErrorConditionalOrderField^, CThostFtdcErrorConditionalOrderField>::N2M(pErrorConditionalOrder));
	}
	void CTPTraderAdapter::cbk_OnRspQryContractBank(CThostFtdcContractBankField *pContractBank, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		this->OnRspQryContractBank(MNConv<ThostFtdcContractBankField^, CThostFtdcContractBankField>::N2M(pContractBank), RspInfoField(pRspInfo), nRequestID, bIsLast);
	}
	void CTPTraderAdapter::cbk_OnRspQryParkedOrder(CThostFtdcParkedOrderField *pParkedOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		this->OnRspQryParkedOrder(MNConv<ThostFtdcParkedOrderField^, CThostFtdcParkedOrderField>::N2M(pParkedOrder), RspInfoField(pRspInfo), nRequestID, bIsLast);
	}
	void CTPTraderAdapter::cbk_OnRspQryParkedOrderAction(CThostFtdcParkedOrderActionField *pParkedOrderAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		this->OnRspQryParkedOrderAction(MNConv<ThostFtdcParkedOrderActionField^, CThostFtdcParkedOrderActionField>::N2M(pParkedOrderAction), RspInfoField(pRspInfo), nRequestID, bIsLast);
	}
	void CTPTraderAdapter::cbk_OnRspQryTradingNotice(CThostFtdcTradingNoticeField *pTradingNotice, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		this->OnRspQryTradingNotice(MNConv<ThostFtdcTradingNoticeField^, CThostFtdcTradingNoticeField>::N2M(pTradingNotice), RspInfoField(pRspInfo), nRequestID, bIsLast);
	}
	void CTPTraderAdapter::cbk_OnRspQryBrokerTradingParams(CThostFtdcBrokerTradingParamsField *pBrokerTradingParams, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		this->OnRspQryBrokerTradingParams(MNConv<ThostFtdcBrokerTradingParamsField^, CThostFtdcBrokerTradingParamsField>::N2M(pBrokerTradingParams), RspInfoField(pRspInfo), nRequestID, bIsLast);
	}
	void CTPTraderAdapter::cbk_OnRspQryBrokerTradingAlgos(CThostFtdcBrokerTradingAlgosField *pBrokerTradingAlgos, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		this->OnRspQryBrokerTradingAlgos(MNConv<ThostFtdcBrokerTradingAlgosField^, CThostFtdcBrokerTradingAlgosField>::N2M(pBrokerTradingAlgos), RspInfoField(pRspInfo), nRequestID, bIsLast);
	}
	void CTPTraderAdapter::cbk_OnRtnFromBankToFutureByBank(CThostFtdcRspTransferField *pRspTransfer) {
		this->OnRtnFromBankToFutureByBank(MNConv<ThostFtdcRspTransferField^, CThostFtdcRspTransferField>::N2M(pRspTransfer));
	}
	void CTPTraderAdapter::cbk_OnRtnFromFutureToBankByBank(CThostFtdcRspTransferField *pRspTransfer) {
		this->OnRtnFromFutureToBankByBank(MNConv<ThostFtdcRspTransferField^, CThostFtdcRspTransferField>::N2M(pRspTransfer));
	}
	void CTPTraderAdapter::cbk_OnRtnRepealFromBankToFutureByBank(CThostFtdcRspRepealField *pRspRepeal) {
		this->OnRtnRepealFromBankToFutureByBank(MNConv<ThostFtdcRspRepealField^, CThostFtdcRspRepealField>::N2M(pRspRepeal));
	}
	void CTPTraderAdapter::cbk_OnRtnRepealFromFutureToBankByBank(CThostFtdcRspRepealField *pRspRepeal) {
		this->OnRtnRepealFromFutureToBankByBank(MNConv<ThostFtdcRspRepealField^, CThostFtdcRspRepealField>::N2M(pRspRepeal));
	}
	void CTPTraderAdapter::cbk_OnRtnFromBankToFutureByFuture(CThostFtdcRspTransferField *pRspTransfer) {
		this->OnRtnFromBankToFutureByFuture(MNConv<ThostFtdcRspTransferField^, CThostFtdcRspTransferField>::N2M(pRspTransfer));
	}
	void CTPTraderAdapter::cbk_OnRtnFromFutureToBankByFuture(CThostFtdcRspTransferField *pRspTransfer) {
		this->OnRtnFromFutureToBankByFuture(MNConv<ThostFtdcRspTransferField^, CThostFtdcRspTransferField>::N2M(pRspTransfer));
	}
	void CTPTraderAdapter::cbk_OnRtnRepealFromBankToFutureByFutureManual(CThostFtdcRspRepealField *pRspRepeal) {
		this->OnRtnRepealFromBankToFutureByFutureManual(MNConv<ThostFtdcRspRepealField^, CThostFtdcRspRepealField>::N2M(pRspRepeal));
	}
	void CTPTraderAdapter::cbk_OnRtnRepealFromFutureToBankByFutureManual(CThostFtdcRspRepealField *pRspRepeal) {
		this->OnRtnRepealFromFutureToBankByFutureManual(MNConv<ThostFtdcRspRepealField^, CThostFtdcRspRepealField>::N2M(pRspRepeal));
	}
	void CTPTraderAdapter::cbk_OnRtnQueryBankBalanceByFuture(CThostFtdcNotifyQueryAccountField *pNotifyQueryAccount) {
		this->OnRtnQueryBankBalanceByFuture(MNConv<ThostFtdcNotifyQueryAccountField^, CThostFtdcNotifyQueryAccountField>::N2M(pNotifyQueryAccount));
	}
	void CTPTraderAdapter::cbk_OnErrRtnBankToFutureByFuture(CThostFtdcReqTransferField *pReqTransfer, CThostFtdcRspInfoField *pRspInfo) {
		this->OnErrRtnBankToFutureByFuture(MNConv<ThostFtdcReqTransferField^, CThostFtdcReqTransferField>::N2M(pReqTransfer), RspInfoField(pRspInfo));
	}
	void CTPTraderAdapter::cbk_OnErrRtnFutureToBankByFuture(CThostFtdcReqTransferField *pReqTransfer, CThostFtdcRspInfoField *pRspInfo) {
		this->OnErrRtnFutureToBankByFuture(MNConv<ThostFtdcReqTransferField^, CThostFtdcReqTransferField>::N2M(pReqTransfer), RspInfoField(pRspInfo));
	}
	void CTPTraderAdapter::cbk_OnErrRtnRepealBankToFutureByFutureManual(CThostFtdcReqRepealField *pReqRepeal, CThostFtdcRspInfoField *pRspInfo) {
		this->OnErrRtnRepealBankToFutureByFutureManual(MNConv<ThostFtdcReqRepealField^, CThostFtdcReqRepealField>::N2M(pReqRepeal), RspInfoField(pRspInfo));
	}
	void CTPTraderAdapter::cbk_OnErrRtnRepealFutureToBankByFutureManual(CThostFtdcReqRepealField *pReqRepeal, CThostFtdcRspInfoField *pRspInfo) {
		this->OnErrRtnRepealFutureToBankByFutureManual(MNConv<ThostFtdcReqRepealField^, CThostFtdcReqRepealField>::N2M(pReqRepeal), RspInfoField(pRspInfo));
	}
	void CTPTraderAdapter::cbk_OnErrRtnQueryBankBalanceByFuture(CThostFtdcReqQueryAccountField *pReqQueryAccount, CThostFtdcRspInfoField *pRspInfo) {
		this->OnErrRtnQueryBankBalanceByFuture(MNConv<ThostFtdcReqQueryAccountField^, CThostFtdcReqQueryAccountField>::N2M(pReqQueryAccount), RspInfoField(pRspInfo));
	}
	void CTPTraderAdapter::cbk_OnRtnRepealFromBankToFutureByFuture(CThostFtdcRspRepealField *pRspRepeal) {
		this->OnRtnRepealFromBankToFutureByFuture(MNConv<ThostFtdcRspRepealField^, CThostFtdcRspRepealField>::N2M(pRspRepeal));
	}
	void CTPTraderAdapter::cbk_OnRtnRepealFromFutureToBankByFuture(CThostFtdcRspRepealField *pRspRepeal) {
		this->OnRtnRepealFromFutureToBankByFuture(MNConv<ThostFtdcRspRepealField^, CThostFtdcRspRepealField>::N2M(pRspRepeal));
	}
	void CTPTraderAdapter::cbk_OnRspFromBankToFutureByFuture(CThostFtdcReqTransferField *pReqTransfer, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		this->OnRspFromBankToFutureByFuture(MNConv<ThostFtdcReqTransferField^, CThostFtdcReqTransferField>::N2M(pReqTransfer), RspInfoField(pRspInfo), nRequestID, bIsLast);
	}
	void CTPTraderAdapter::cbk_OnRspFromFutureToBankByFuture(CThostFtdcReqTransferField *pReqTransfer, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		this->OnRspFromFutureToBankByFuture(MNConv<ThostFtdcReqTransferField^, CThostFtdcReqTransferField>::N2M(pReqTransfer), RspInfoField(pRspInfo), nRequestID, bIsLast);
	}
	void CTPTraderAdapter::cbk_OnRspQueryBankAccountMoneyByFuture(CThostFtdcReqQueryAccountField *pReqQueryAccount, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		this->OnRspQueryBankAccountMoneyByFuture(MNConv<ThostFtdcReqQueryAccountField^, CThostFtdcReqQueryAccountField>::N2M(pReqQueryAccount), RspInfoField(pRspInfo), nRequestID, bIsLast);
	}
	void CTPTraderAdapter::cbk_OnRtnOpenAccountByBank(CThostFtdcOpenAccountField *pOpenAccount) {
		this->OnRtnOpenAccountByBank(MNConv<ThostFtdcOpenAccountField^, CThostFtdcOpenAccountField>::N2M(pOpenAccount));
	}
	void CTPTraderAdapter::cbk_OnRtnCancelAccountByBank(CThostFtdcCancelAccountField *pCancelAccount) {
		this->OnRtnCancelAccountByBank(MNConv<ThostFtdcCancelAccountField^, CThostFtdcCancelAccountField>::N2M(pCancelAccount));
	}
	void CTPTraderAdapter::cbk_OnRtnChangeAccountByBank(CThostFtdcChangeAccountField *pChangeAccount) {
		this->OnRtnChangeAccountByBank(MNConv<ThostFtdcChangeAccountField^, CThostFtdcChangeAccountField>::N2M(pChangeAccount));
	}

	// �����лص�������ַ���ݸ�SPI���������delegate������
	void CTPTraderAdapter::RegisterCallbacks()
	{
		m_pSpi->d_FrontConnected = gcnew Internal_FrontConnected(this, &CTPTraderAdapter::cbk_OnFrontConnected);
		m_pSpi->p_OnFrontConnected = (Callback_OnFrontConnected)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_FrontConnected).ToPointer();

		m_pSpi->d_FrontDisconnected = gcnew Internal_FrontDisconnected(this, &CTPTraderAdapter::cbk_OnFrontDisconnected);
		m_pSpi->p_OnFrontDisconnected = (Callback_OnFrontDisconnected)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_FrontDisconnected).ToPointer();

		m_pSpi->d_HeartBeatWarning = gcnew Internal_HeartBeatWarning(this, &CTPTraderAdapter::cbk_OnHeartBeatWarning);
		m_pSpi->p_OnHeartBeatWarning = (Callback_OnHeartBeatWarning)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_HeartBeatWarning).ToPointer();

		m_pSpi->d_RspAuthenticate = gcnew Internal_RspAuthenticate(this, &CTPTraderAdapter::cbk_OnRspAuthenticate);
		m_pSpi->p_OnRspAuthenticate = (Callback_OnRspAuthenticate)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_RspAuthenticate).ToPointer();

		m_pSpi->d_RspUserLogin = gcnew Internal_RspUserLogin(this, &CTPTraderAdapter::cbk_OnRspUserLogin);
		m_pSpi->p_OnRspUserLogin = (Callback_OnRspUserLogin)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_RspUserLogin).ToPointer();

		m_pSpi->d_RspUserLogout = gcnew Internal_RspUserLogout(this, &CTPTraderAdapter::cbk_OnRspUserLogout);
		m_pSpi->p_OnRspUserLogout = (Callback_OnRspUserLogout)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_RspUserLogout).ToPointer();

		m_pSpi->d_RspUserPasswordUpdate = gcnew Internal_RspUserPasswordUpdate(this, &CTPTraderAdapter::cbk_OnRspUserPasswordUpdate);
		m_pSpi->p_OnRspUserPasswordUpdate = (Callback_OnRspUserPasswordUpdate)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_RspUserPasswordUpdate).ToPointer();

		m_pSpi->d_RspTradingAccountPasswordUpdate = gcnew Internal_RspTradingAccountPasswordUpdate(this, &CTPTraderAdapter::cbk_OnRspTradingAccountPasswordUpdate);
		m_pSpi->p_OnRspTradingAccountPasswordUpdate = (Callback_OnRspTradingAccountPasswordUpdate)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_RspTradingAccountPasswordUpdate).ToPointer();

		m_pSpi->d_RspOrderInsert = gcnew Internal_RspOrderInsert(this, &CTPTraderAdapter::cbk_OnRspOrderInsert);
		m_pSpi->p_OnRspOrderInsert = (Callback_OnRspOrderInsert)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_RspOrderInsert).ToPointer();

		m_pSpi->d_RspParkedOrderInsert = gcnew Internal_RspParkedOrderInsert(this, &CTPTraderAdapter::cbk_OnRspParkedOrderInsert);
		m_pSpi->p_OnRspParkedOrderInsert = (Callback_OnRspParkedOrderInsert)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_RspParkedOrderInsert).ToPointer();

		m_pSpi->d_RspParkedOrderAction = gcnew Internal_RspParkedOrderAction(this, &CTPTraderAdapter::cbk_OnRspParkedOrderAction);
		m_pSpi->p_OnRspParkedOrderAction = (Callback_OnRspParkedOrderAction)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_RspParkedOrderAction).ToPointer();

		m_pSpi->d_RspOrderAction = gcnew Internal_RspOrderAction(this, &CTPTraderAdapter::cbk_OnRspOrderAction);
		m_pSpi->p_OnRspOrderAction = (Callback_OnRspOrderAction)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_RspOrderAction).ToPointer();

		m_pSpi->d_RspQueryMaxOrderVolume = gcnew Internal_RspQueryMaxOrderVolume(this, &CTPTraderAdapter::cbk_OnRspQueryMaxOrderVolume);
		m_pSpi->p_OnRspQueryMaxOrderVolume = (Callback_OnRspQueryMaxOrderVolume)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_RspQueryMaxOrderVolume).ToPointer();

		m_pSpi->d_RspSettlementInfoConfirm = gcnew Internal_RspSettlementInfoConfirm(this, &CTPTraderAdapter::cbk_OnRspSettlementInfoConfirm);
		m_pSpi->p_OnRspSettlementInfoConfirm = (Callback_OnRspSettlementInfoConfirm)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_RspSettlementInfoConfirm).ToPointer();

		m_pSpi->d_RspRemoveParkedOrder = gcnew Internal_RspRemoveParkedOrder(this, &CTPTraderAdapter::cbk_OnRspRemoveParkedOrder);
		m_pSpi->p_OnRspRemoveParkedOrder = (Callback_OnRspRemoveParkedOrder)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_RspRemoveParkedOrder).ToPointer();

		m_pSpi->d_RspRemoveParkedOrderAction = gcnew Internal_RspRemoveParkedOrderAction(this, &CTPTraderAdapter::cbk_OnRspRemoveParkedOrderAction);
		m_pSpi->p_OnRspRemoveParkedOrderAction = (Callback_OnRspRemoveParkedOrderAction)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_RspRemoveParkedOrderAction).ToPointer();

		m_pSpi->d_RspQryOrder = gcnew Internal_RspQryOrder(this, &CTPTraderAdapter::cbk_OnRspQryOrder);
		m_pSpi->p_OnRspQryOrder = (Callback_OnRspQryOrder)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_RspQryOrder).ToPointer();

		m_pSpi->d_RspQryTrade = gcnew Internal_RspQryTrade(this, &CTPTraderAdapter::cbk_OnRspQryTrade);
		m_pSpi->p_OnRspQryTrade = (Callback_OnRspQryTrade)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_RspQryTrade).ToPointer();

		m_pSpi->d_RspQryInvestorPosition = gcnew Internal_RspQryInvestorPosition(this, &CTPTraderAdapter::cbk_OnRspQryInvestorPosition);
		m_pSpi->p_OnRspQryInvestorPosition = (Callback_OnRspQryInvestorPosition)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_RspQryInvestorPosition).ToPointer();

		m_pSpi->d_RspQryTradingAccount = gcnew Internal_RspQryTradingAccount(this, &CTPTraderAdapter::cbk_OnRspQryTradingAccount);
		m_pSpi->p_OnRspQryTradingAccount = (Callback_OnRspQryTradingAccount)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_RspQryTradingAccount).ToPointer();

		m_pSpi->d_RspQryInvestor = gcnew Internal_RspQryInvestor(this, &CTPTraderAdapter::cbk_OnRspQryInvestor);
		m_pSpi->p_OnRspQryInvestor = (Callback_OnRspQryInvestor)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_RspQryInvestor).ToPointer();

		m_pSpi->d_RspQryTradingCode = gcnew Internal_RspQryTradingCode(this, &CTPTraderAdapter::cbk_OnRspQryTradingCode);
		m_pSpi->p_OnRspQryTradingCode = (Callback_OnRspQryTradingCode)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_RspQryTradingCode).ToPointer();

		m_pSpi->d_RspQryInstrumentMarginRate = gcnew Internal_RspQryInstrumentMarginRate(this, &CTPTraderAdapter::cbk_OnRspQryInstrumentMarginRate);
		m_pSpi->p_OnRspQryInstrumentMarginRate = (Callback_OnRspQryInstrumentMarginRate)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_RspQryInstrumentMarginRate).ToPointer();

		m_pSpi->d_RspQryInstrumentCommissionRate = gcnew Internal_RspQryInstrumentCommissionRate(this, &CTPTraderAdapter::cbk_OnRspQryInstrumentCommissionRate);
		m_pSpi->p_OnRspQryInstrumentCommissionRate = (Callback_OnRspQryInstrumentCommissionRate)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_RspQryInstrumentCommissionRate).ToPointer();

		m_pSpi->d_RspQryExchange = gcnew Internal_RspQryExchange(this, &CTPTraderAdapter::cbk_OnRspQryExchange);
		m_pSpi->p_OnRspQryExchange = (Callback_OnRspQryExchange)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_RspQryExchange).ToPointer();

		m_pSpi->d_RspQryInstrument = gcnew Internal_RspQryInstrument(this, &CTPTraderAdapter::cbk_OnRspQryInstrument);
		m_pSpi->p_OnRspQryInstrument = (Callback_OnRspQryInstrument)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_RspQryInstrument).ToPointer();

		m_pSpi->d_RspQryDepthMarketData = gcnew Internal_RspQryDepthMarketData(this, &CTPTraderAdapter::cbk_OnRspQryDepthMarketData);
		m_pSpi->p_OnRspQryDepthMarketData = (Callback_OnRspQryDepthMarketData)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_RspQryDepthMarketData).ToPointer();

		m_pSpi->d_RspQrySettlementInfo = gcnew Internal_RspQrySettlementInfo(this, &CTPTraderAdapter::cbk_OnRspQrySettlementInfo);
		m_pSpi->p_OnRspQrySettlementInfo = (Callback_OnRspQrySettlementInfo)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_RspQrySettlementInfo).ToPointer();

		m_pSpi->d_RspQryTransferBank = gcnew Internal_RspQryTransferBank(this, &CTPTraderAdapter::cbk_OnRspQryTransferBank);
		m_pSpi->p_OnRspQryTransferBank = (Callback_OnRspQryTransferBank)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_RspQryTransferBank).ToPointer();

		m_pSpi->d_RspQryInvestorPositionDetail = gcnew Internal_RspQryInvestorPositionDetail(this, &CTPTraderAdapter::cbk_OnRspQryInvestorPositionDetail);
		m_pSpi->p_OnRspQryInvestorPositionDetail = (Callback_OnRspQryInvestorPositionDetail)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_RspQryInvestorPositionDetail).ToPointer();

		m_pSpi->d_RspQryNotice = gcnew Internal_RspQryNotice(this, &CTPTraderAdapter::cbk_OnRspQryNotice);
		m_pSpi->p_OnRspQryNotice = (Callback_OnRspQryNotice)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_RspQryNotice).ToPointer();

		m_pSpi->d_RspQrySettlementInfoConfirm = gcnew Internal_RspQrySettlementInfoConfirm(this, &CTPTraderAdapter::cbk_OnRspQrySettlementInfoConfirm);
		m_pSpi->p_OnRspQrySettlementInfoConfirm = (Callback_OnRspQrySettlementInfoConfirm)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_RspQrySettlementInfoConfirm).ToPointer();

		m_pSpi->d_RspQryInvestorPositionCombineDetail = gcnew Internal_RspQryInvestorPositionCombineDetail(this, &CTPTraderAdapter::cbk_OnRspQryInvestorPositionCombineDetail);
		m_pSpi->p_OnRspQryInvestorPositionCombineDetail = (Callback_OnRspQryInvestorPositionCombineDetail)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_RspQryInvestorPositionCombineDetail).ToPointer();

		m_pSpi->d_RspQryCFMMCTradingAccountKey = gcnew Internal_RspQryCFMMCTradingAccountKey(this, &CTPTraderAdapter::cbk_OnRspQryCFMMCTradingAccountKey);
		m_pSpi->p_OnRspQryCFMMCTradingAccountKey = (Callback_OnRspQryCFMMCTradingAccountKey)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_RspQryCFMMCTradingAccountKey).ToPointer();

		m_pSpi->d_RspQryEWarrantOffset = gcnew Internal_RspQryEWarrantOffset(this, &CTPTraderAdapter::cbk_OnRspQryEWarrantOffset);
		m_pSpi->p_OnRspQryEWarrantOffset = (Callback_OnRspQryEWarrantOffset)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_RspQryEWarrantOffset).ToPointer();

		m_pSpi->d_RspQryTransferSerial = gcnew Internal_RspQryTransferSerial(this, &CTPTraderAdapter::cbk_OnRspQryTransferSerial);
		m_pSpi->p_OnRspQryTransferSerial = (Callback_OnRspQryTransferSerial)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_RspQryTransferSerial).ToPointer();

		m_pSpi->d_RspQryAccountregister = gcnew Internal_RspQryAccountregister(this, &CTPTraderAdapter::cbk_OnRspQryAccountregister);
		m_pSpi->p_OnRspQryAccountregister = (Callback_OnRspQryAccountregister)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_RspQryAccountregister).ToPointer();

		m_pSpi->d_RspError = gcnew Internal_RspError(this, &CTPTraderAdapter::cbk_OnRspError);
		m_pSpi->p_OnRspError = (Callback_OnRspError)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_RspError).ToPointer();

		m_pSpi->d_RtnOrder = gcnew Internal_RtnOrder(this, &CTPTraderAdapter::cbk_OnRtnOrder);
		m_pSpi->p_OnRtnOrder = (Callback_OnRtnOrder)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_RtnOrder).ToPointer();

		m_pSpi->d_RtnTrade = gcnew Internal_RtnTrade(this, &CTPTraderAdapter::cbk_OnRtnTrade);
		m_pSpi->p_OnRtnTrade = (Callback_OnRtnTrade)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_RtnTrade).ToPointer();

		m_pSpi->d_ErrRtnOrderInsert = gcnew Internal_ErrRtnOrderInsert(this, &CTPTraderAdapter::cbk_OnErrRtnOrderInsert);
		m_pSpi->p_OnErrRtnOrderInsert = (Callback_OnErrRtnOrderInsert)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_ErrRtnOrderInsert).ToPointer();

		m_pSpi->d_ErrRtnOrderAction = gcnew Internal_ErrRtnOrderAction(this, &CTPTraderAdapter::cbk_OnErrRtnOrderAction);
		m_pSpi->p_OnErrRtnOrderAction = (Callback_OnErrRtnOrderAction)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_ErrRtnOrderAction).ToPointer();

		m_pSpi->d_RtnInstrumentStatus = gcnew Internal_RtnInstrumentStatus(this, &CTPTraderAdapter::cbk_OnRtnInstrumentStatus);
		m_pSpi->p_OnRtnInstrumentStatus = (Callback_OnRtnInstrumentStatus)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_RtnInstrumentStatus).ToPointer();

		m_pSpi->d_RtnTradingNotice = gcnew Internal_RtnTradingNotice(this, &CTPTraderAdapter::cbk_OnRtnTradingNotice);
		m_pSpi->p_OnRtnTradingNotice = (Callback_OnRtnTradingNotice)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_RtnTradingNotice).ToPointer();

		m_pSpi->d_RtnErrorConditionalOrder = gcnew Internal_RtnErrorConditionalOrder(this, &CTPTraderAdapter::cbk_OnRtnErrorConditionalOrder);
		m_pSpi->p_OnRtnErrorConditionalOrder = (Callback_OnRtnErrorConditionalOrder)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_RtnErrorConditionalOrder).ToPointer();

		m_pSpi->d_RspQryContractBank = gcnew Internal_RspQryContractBank(this, &CTPTraderAdapter::cbk_OnRspQryContractBank);
		m_pSpi->p_OnRspQryContractBank = (Callback_OnRspQryContractBank)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_RspQryContractBank).ToPointer();

		m_pSpi->d_RspQryParkedOrder = gcnew Internal_RspQryParkedOrder(this, &CTPTraderAdapter::cbk_OnRspQryParkedOrder);
		m_pSpi->p_OnRspQryParkedOrder = (Callback_OnRspQryParkedOrder)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_RspQryParkedOrder).ToPointer();

		m_pSpi->d_RspQryParkedOrderAction = gcnew Internal_RspQryParkedOrderAction(this, &CTPTraderAdapter::cbk_OnRspQryParkedOrderAction);
		m_pSpi->p_OnRspQryParkedOrderAction = (Callback_OnRspQryParkedOrderAction)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_RspQryParkedOrderAction).ToPointer();

		m_pSpi->d_RspQryTradingNotice = gcnew Internal_RspQryTradingNotice(this, &CTPTraderAdapter::cbk_OnRspQryTradingNotice);
		m_pSpi->p_OnRspQryTradingNotice = (Callback_OnRspQryTradingNotice)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_RspQryTradingNotice).ToPointer();

		m_pSpi->d_RspQryBrokerTradingParams = gcnew Internal_RspQryBrokerTradingParams(this, &CTPTraderAdapter::cbk_OnRspQryBrokerTradingParams);
		m_pSpi->p_OnRspQryBrokerTradingParams = (Callback_OnRspQryBrokerTradingParams)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_RspQryBrokerTradingParams).ToPointer();

		m_pSpi->d_RspQryBrokerTradingAlgos = gcnew Internal_RspQryBrokerTradingAlgos(this, &CTPTraderAdapter::cbk_OnRspQryBrokerTradingAlgos);
		m_pSpi->p_OnRspQryBrokerTradingAlgos = (Callback_OnRspQryBrokerTradingAlgos)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_RspQryBrokerTradingAlgos).ToPointer();

		m_pSpi->d_RtnFromBankToFutureByBank = gcnew Internal_RtnFromBankToFutureByBank(this, &CTPTraderAdapter::cbk_OnRtnFromBankToFutureByBank);
		m_pSpi->p_OnRtnFromBankToFutureByBank = (Callback_OnRtnFromBankToFutureByBank)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_RtnFromBankToFutureByBank).ToPointer();

		m_pSpi->d_RtnFromFutureToBankByBank = gcnew Internal_RtnFromFutureToBankByBank(this, &CTPTraderAdapter::cbk_OnRtnFromFutureToBankByBank);
		m_pSpi->p_OnRtnFromFutureToBankByBank = (Callback_OnRtnFromFutureToBankByBank)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_RtnFromFutureToBankByBank).ToPointer();

		m_pSpi->d_RtnRepealFromBankToFutureByBank = gcnew Internal_RtnRepealFromBankToFutureByBank(this, &CTPTraderAdapter::cbk_OnRtnRepealFromBankToFutureByBank);
		m_pSpi->p_OnRtnRepealFromBankToFutureByBank = (Callback_OnRtnRepealFromBankToFutureByBank)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_RtnRepealFromBankToFutureByBank).ToPointer();

		m_pSpi->d_RtnRepealFromFutureToBankByBank = gcnew Internal_RtnRepealFromFutureToBankByBank(this, &CTPTraderAdapter::cbk_OnRtnRepealFromFutureToBankByBank);
		m_pSpi->p_OnRtnRepealFromFutureToBankByBank = (Callback_OnRtnRepealFromFutureToBankByBank)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_RtnRepealFromFutureToBankByBank).ToPointer();

		m_pSpi->d_RtnFromBankToFutureByFuture = gcnew Internal_RtnFromBankToFutureByFuture(this, &CTPTraderAdapter::cbk_OnRtnFromBankToFutureByFuture);
		m_pSpi->p_OnRtnFromBankToFutureByFuture = (Callback_OnRtnFromBankToFutureByFuture)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_RtnFromBankToFutureByFuture).ToPointer();

		m_pSpi->d_RtnFromFutureToBankByFuture = gcnew Internal_RtnFromFutureToBankByFuture(this, &CTPTraderAdapter::cbk_OnRtnFromFutureToBankByFuture);
		m_pSpi->p_OnRtnFromFutureToBankByFuture = (Callback_OnRtnFromFutureToBankByFuture)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_RtnFromFutureToBankByFuture).ToPointer();

		m_pSpi->d_RtnRepealFromBankToFutureByFutureManual = gcnew Internal_RtnRepealFromBankToFutureByFutureManual(this, &CTPTraderAdapter::cbk_OnRtnRepealFromBankToFutureByFutureManual);
		m_pSpi->p_OnRtnRepealFromBankToFutureByFutureManual = (Callback_OnRtnRepealFromBankToFutureByFutureManual)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_RtnRepealFromBankToFutureByFutureManual).ToPointer();

		m_pSpi->d_RtnRepealFromFutureToBankByFutureManual = gcnew Internal_RtnRepealFromFutureToBankByFutureManual(this, &CTPTraderAdapter::cbk_OnRtnRepealFromFutureToBankByFutureManual);
		m_pSpi->p_OnRtnRepealFromFutureToBankByFutureManual = (Callback_OnRtnRepealFromFutureToBankByFutureManual)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_RtnRepealFromFutureToBankByFutureManual).ToPointer();

		m_pSpi->d_RtnQueryBankBalanceByFuture = gcnew Internal_RtnQueryBankBalanceByFuture(this, &CTPTraderAdapter::cbk_OnRtnQueryBankBalanceByFuture);
		m_pSpi->p_OnRtnQueryBankBalanceByFuture = (Callback_OnRtnQueryBankBalanceByFuture)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_RtnQueryBankBalanceByFuture).ToPointer();

		m_pSpi->d_ErrRtnBankToFutureByFuture = gcnew Internal_ErrRtnBankToFutureByFuture(this, &CTPTraderAdapter::cbk_OnErrRtnBankToFutureByFuture);
		m_pSpi->p_OnErrRtnBankToFutureByFuture = (Callback_OnErrRtnBankToFutureByFuture)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_ErrRtnBankToFutureByFuture).ToPointer();

		m_pSpi->d_ErrRtnFutureToBankByFuture = gcnew Internal_ErrRtnFutureToBankByFuture(this, &CTPTraderAdapter::cbk_OnErrRtnFutureToBankByFuture);
		m_pSpi->p_OnErrRtnFutureToBankByFuture = (Callback_OnErrRtnFutureToBankByFuture)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_ErrRtnFutureToBankByFuture).ToPointer();

		m_pSpi->d_ErrRtnRepealBankToFutureByFutureManual = gcnew Internal_ErrRtnRepealBankToFutureByFutureManual(this, &CTPTraderAdapter::cbk_OnErrRtnRepealBankToFutureByFutureManual);
		m_pSpi->p_OnErrRtnRepealBankToFutureByFutureManual = (Callback_OnErrRtnRepealBankToFutureByFutureManual)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_ErrRtnRepealBankToFutureByFutureManual).ToPointer();

		m_pSpi->d_ErrRtnRepealFutureToBankByFutureManual = gcnew Internal_ErrRtnRepealFutureToBankByFutureManual(this, &CTPTraderAdapter::cbk_OnErrRtnRepealFutureToBankByFutureManual);
		m_pSpi->p_OnErrRtnRepealFutureToBankByFutureManual = (Callback_OnErrRtnRepealFutureToBankByFutureManual)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_ErrRtnRepealFutureToBankByFutureManual).ToPointer();

		m_pSpi->d_ErrRtnQueryBankBalanceByFuture = gcnew Internal_ErrRtnQueryBankBalanceByFuture(this, &CTPTraderAdapter::cbk_OnErrRtnQueryBankBalanceByFuture);
		m_pSpi->p_OnErrRtnQueryBankBalanceByFuture = (Callback_OnErrRtnQueryBankBalanceByFuture)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_ErrRtnQueryBankBalanceByFuture).ToPointer();

		m_pSpi->d_RtnRepealFromBankToFutureByFuture = gcnew Internal_RtnRepealFromBankToFutureByFuture(this, &CTPTraderAdapter::cbk_OnRtnRepealFromBankToFutureByFuture);
		m_pSpi->p_OnRtnRepealFromBankToFutureByFuture = (Callback_OnRtnRepealFromBankToFutureByFuture)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_RtnRepealFromBankToFutureByFuture).ToPointer();

		m_pSpi->d_RtnRepealFromFutureToBankByFuture = gcnew Internal_RtnRepealFromFutureToBankByFuture(this, &CTPTraderAdapter::cbk_OnRtnRepealFromFutureToBankByFuture);
		m_pSpi->p_OnRtnRepealFromFutureToBankByFuture = (Callback_OnRtnRepealFromFutureToBankByFuture)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_RtnRepealFromFutureToBankByFuture).ToPointer();

		m_pSpi->d_RspFromBankToFutureByFuture = gcnew Internal_RspFromBankToFutureByFuture(this, &CTPTraderAdapter::cbk_OnRspFromBankToFutureByFuture);
		m_pSpi->p_OnRspFromBankToFutureByFuture = (Callback_OnRspFromBankToFutureByFuture)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_RspFromBankToFutureByFuture).ToPointer();

		m_pSpi->d_RspFromFutureToBankByFuture = gcnew Internal_RspFromFutureToBankByFuture(this, &CTPTraderAdapter::cbk_OnRspFromFutureToBankByFuture);
		m_pSpi->p_OnRspFromFutureToBankByFuture = (Callback_OnRspFromFutureToBankByFuture)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_RspFromFutureToBankByFuture).ToPointer();

		m_pSpi->d_RspQueryBankAccountMoneyByFuture = gcnew Internal_RspQueryBankAccountMoneyByFuture(this, &CTPTraderAdapter::cbk_OnRspQueryBankAccountMoneyByFuture);
		m_pSpi->p_OnRspQueryBankAccountMoneyByFuture = (Callback_OnRspQueryBankAccountMoneyByFuture)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_RspQueryBankAccountMoneyByFuture).ToPointer();

		m_pSpi->d_RtnOpenAccountByBank = gcnew Internal_RtnOpenAccountByBank(this, &CTPTraderAdapter::cbk_OnRtnOpenAccountByBank);
		m_pSpi->p_OnRtnOpenAccountByBank = (Callback_OnRtnOpenAccountByBank)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_RtnOpenAccountByBank).ToPointer();

		m_pSpi->d_RtnCancelAccountByBank = gcnew Internal_RtnCancelAccountByBank(this, &CTPTraderAdapter::cbk_OnRtnCancelAccountByBank);
		m_pSpi->p_OnRtnCancelAccountByBank = (Callback_OnRtnCancelAccountByBank)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_RtnCancelAccountByBank).ToPointer();

		m_pSpi->d_RtnChangeAccountByBank = gcnew Internal_RtnChangeAccountByBank(this, &CTPTraderAdapter::cbk_OnRtnChangeAccountByBank);
		m_pSpi->p_OnRtnChangeAccountByBank = (Callback_OnRtnChangeAccountByBank)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_RtnChangeAccountByBank).ToPointer();
	}

#else
#endif

} // end of namespace