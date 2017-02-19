/////////////////////////////////////////////////////////////////////////
/// ���ڼ��� CTP C++ => .Net Framework Adapter
/// Author:	shawn666.liu@gmail.com
/// Date: 20121027
/////////////////////////////////////////////////////////////////////////

#include "StdAfx.h"
#include "TraderSpi.h"
#include "CTPTraderAdapter.h"
#include "Callbacks.h"


namespace Native
{
	CTraderSpi::CTraderSpi(CTPTraderAdapter^ pAdapter) {
#ifndef __CTP_MA__
		m_pAdapter = pAdapter;
#endif
	};

#ifdef __CTP_MA__
	///���ͻ����뽻�׺�̨������ͨ������ʱ����δ��¼ǰ�����÷��������á�
	void CTraderSpi::OnFrontConnected() {
		p_OnFrontConnected();
	};

	///���ͻ����뽻�׺�̨ͨ�����ӶϿ�ʱ���÷��������á���������������API���Զ��������ӣ��ͻ��˿ɲ�������
	///@param nReason ����ԭ��
	///        0x1001 �����ʧ��
	///        0x1002 ����дʧ��
	///        0x2001 ����������ʱ
	///        0x2002 ��������ʧ��
	///        0x2003 �յ�������
	void CTraderSpi::OnFrontDisconnected(int nReason) {
		p_OnFrontDisconnected(nReason);
	};

	///������ʱ���档����ʱ��δ�յ�����ʱ���÷��������á�
	///@param nTimeLapse �����ϴν��ձ��ĵ�ʱ��
	void CTraderSpi::OnHeartBeatWarning(int nTimeLapse) {
		p_OnHeartBeatWarning(nTimeLapse);
	};

	///�ͻ�����֤��Ӧ
	void CTraderSpi::OnRspAuthenticate(CThostFtdcRspAuthenticateField *pRspAuthenticateField, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		p_OnRspAuthenticate(pRspAuthenticateField, pRspInfo, nRequestID, bIsLast);
	};

	///��¼������Ӧ
	void CTraderSpi::OnRspUserLogin(CThostFtdcRspUserLoginField *pRspUserLogin, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		p_OnRspUserLogin(pRspUserLogin, pRspInfo, nRequestID, bIsLast);
	};

	///�ǳ�������Ӧ
	void CTraderSpi::OnRspUserLogout(CThostFtdcUserLogoutField *pUserLogout, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		p_OnRspUserLogout(pUserLogout, pRspInfo, nRequestID, bIsLast);
	};

	///�û��������������Ӧ
	void CTraderSpi::OnRspUserPasswordUpdate(CThostFtdcUserPasswordUpdateField *pUserPasswordUpdate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		p_OnRspUserPasswordUpdate(pUserPasswordUpdate, pRspInfo, nRequestID, bIsLast);
	};

	///�ʽ��˻��������������Ӧ
	void CTraderSpi::OnRspTradingAccountPasswordUpdate(CThostFtdcTradingAccountPasswordUpdateField *pTradingAccountPasswordUpdate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		p_OnRspTradingAccountPasswordUpdate(pTradingAccountPasswordUpdate, pRspInfo, nRequestID, bIsLast);
	};

	///����¼��������Ӧ
	void CTraderSpi::OnRspOrderInsert(CThostFtdcInputOrderField *pInputOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		p_OnRspOrderInsert(pInputOrder, pRspInfo, nRequestID, bIsLast);
	};

	///Ԥ��¼��������Ӧ
	void CTraderSpi::OnRspParkedOrderInsert(CThostFtdcParkedOrderField *pParkedOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		p_OnRspParkedOrderInsert(pParkedOrder, pRspInfo, nRequestID, bIsLast);
	};

	///Ԥ�񳷵�¼��������Ӧ
	void CTraderSpi::OnRspParkedOrderAction(CThostFtdcParkedOrderActionField *pParkedOrderAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		p_OnRspParkedOrderAction(pParkedOrderAction, pRspInfo, nRequestID, bIsLast);
	};

	///��������������Ӧ
	void CTraderSpi::OnRspOrderAction(CThostFtdcInputOrderActionField *pInputOrderAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		p_OnRspOrderAction(pInputOrderAction, pRspInfo, nRequestID, bIsLast);
	};

	///��ѯ��󱨵�������Ӧ
	void CTraderSpi::OnRspQueryMaxOrderVolume(CThostFtdcQueryMaxOrderVolumeField *pQueryMaxOrderVolume, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		p_OnRspQueryMaxOrderVolume(pQueryMaxOrderVolume, pRspInfo, nRequestID, bIsLast);
	};

	///Ͷ���߽�����ȷ����Ӧ
	void CTraderSpi::OnRspSettlementInfoConfirm(CThostFtdcSettlementInfoConfirmField *pSettlementInfoConfirm, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		p_OnRspSettlementInfoConfirm(pSettlementInfoConfirm, pRspInfo, nRequestID, bIsLast);
	};

	///ɾ��Ԥ����Ӧ
	void CTraderSpi::OnRspRemoveParkedOrder(CThostFtdcRemoveParkedOrderField *pRemoveParkedOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		p_OnRspRemoveParkedOrder(pRemoveParkedOrder, pRspInfo, nRequestID, bIsLast);
	};

	///ɾ��Ԥ�񳷵���Ӧ
	void CTraderSpi::OnRspRemoveParkedOrderAction(CThostFtdcRemoveParkedOrderActionField *pRemoveParkedOrderAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		p_OnRspRemoveParkedOrderAction(pRemoveParkedOrderAction, pRspInfo, nRequestID, bIsLast);
	};

	///�����ѯ������Ӧ
	void CTraderSpi::OnRspQryOrder(CThostFtdcOrderField *pOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		p_OnRspQryOrder(pOrder, pRspInfo, nRequestID, bIsLast);
	};

	///�����ѯ�ɽ���Ӧ
	void CTraderSpi::OnRspQryTrade(CThostFtdcTradeField *pTrade, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		p_OnRspQryTrade(pTrade, pRspInfo, nRequestID, bIsLast);
	};

	///�����ѯͶ���ֲ߳���Ӧ
	void CTraderSpi::OnRspQryInvestorPosition(CThostFtdcInvestorPositionField *pInvestorPosition, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		p_OnRspQryInvestorPosition(pInvestorPosition, pRspInfo, nRequestID, bIsLast);
	};

	///�����ѯ�ʽ��˻���Ӧ
	void CTraderSpi::OnRspQryTradingAccount(CThostFtdcTradingAccountField *pTradingAccount, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		p_OnRspQryTradingAccount(pTradingAccount, pRspInfo, nRequestID, bIsLast);
	};

	///�����ѯͶ������Ӧ
	void CTraderSpi::OnRspQryInvestor(CThostFtdcInvestorField *pInvestor, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		p_OnRspQryInvestor(pInvestor, pRspInfo, nRequestID, bIsLast);
	};

	///�����ѯ���ױ�����Ӧ
	void CTraderSpi::OnRspQryTradingCode(CThostFtdcTradingCodeField *pTradingCode, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		p_OnRspQryTradingCode(pTradingCode, pRspInfo, nRequestID, bIsLast);
	};

	///�����ѯ��Լ��֤������Ӧ
	void CTraderSpi::OnRspQryInstrumentMarginRate(CThostFtdcInstrumentMarginRateField *pInstrumentMarginRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		p_OnRspQryInstrumentMarginRate(pInstrumentMarginRate, pRspInfo, nRequestID, bIsLast);
	};

	///�����ѯ��Լ����������Ӧ
	void CTraderSpi::OnRspQryInstrumentCommissionRate(CThostFtdcInstrumentCommissionRateField *pInstrumentCommissionRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		p_OnRspQryInstrumentCommissionRate(pInstrumentCommissionRate, pRspInfo, nRequestID, bIsLast);
	};

	///�����ѯ��������Ӧ
	void CTraderSpi::OnRspQryExchange(CThostFtdcExchangeField *pExchange, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		p_OnRspQryExchange(pExchange, pRspInfo, nRequestID, bIsLast);
	};

	///�����ѯ��Լ��Ӧ
	void CTraderSpi::OnRspQryInstrument(CThostFtdcInstrumentField *pInstrument, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		p_OnRspQryInstrument(pInstrument, pRspInfo, nRequestID, bIsLast);
	};

	///�����ѯ������Ӧ
	void CTraderSpi::OnRspQryDepthMarketData(CThostFtdcDepthMarketDataField *pDepthMarketData, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		p_OnRspQryDepthMarketData(pDepthMarketData, pRspInfo, nRequestID, bIsLast);
	};

	///�����ѯͶ���߽�������Ӧ
	void CTraderSpi::OnRspQrySettlementInfo(CThostFtdcSettlementInfoField *pSettlementInfo, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		p_OnRspQrySettlementInfo(pSettlementInfo, pRspInfo, nRequestID, bIsLast);
	};

	///�����ѯת��������Ӧ
	void CTraderSpi::OnRspQryTransferBank(CThostFtdcTransferBankField *pTransferBank, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		p_OnRspQryTransferBank(pTransferBank, pRspInfo, nRequestID, bIsLast);
	};

	///�����ѯͶ���ֲ߳���ϸ��Ӧ
	void CTraderSpi::OnRspQryInvestorPositionDetail(CThostFtdcInvestorPositionDetailField *pInvestorPositionDetail, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		p_OnRspQryInvestorPositionDetail(pInvestorPositionDetail, pRspInfo, nRequestID, bIsLast);
	};

	///�����ѯ�ͻ�֪ͨ��Ӧ
	void CTraderSpi::OnRspQryNotice(CThostFtdcNoticeField *pNotice, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		p_OnRspQryNotice(pNotice, pRspInfo, nRequestID, bIsLast);
	};

	///�����ѯ������Ϣȷ����Ӧ
	void CTraderSpi::OnRspQrySettlementInfoConfirm(CThostFtdcSettlementInfoConfirmField *pSettlementInfoConfirm, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		p_OnRspQrySettlementInfoConfirm(pSettlementInfoConfirm, pRspInfo, nRequestID, bIsLast);
	};

	///�����ѯͶ���ֲ߳���ϸ��Ӧ
	void CTraderSpi::OnRspQryInvestorPositionCombineDetail(CThostFtdcInvestorPositionCombineDetailField *pInvestorPositionCombineDetail, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		p_OnRspQryInvestorPositionCombineDetail(pInvestorPositionCombineDetail, pRspInfo, nRequestID, bIsLast);
	};

	///��ѯ��֤����ϵͳ���͹�˾�ʽ��˻���Կ��Ӧ
	void CTraderSpi::OnRspQryCFMMCTradingAccountKey(CThostFtdcCFMMCTradingAccountKeyField *pCFMMCTradingAccountKey, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		p_OnRspQryCFMMCTradingAccountKey(pCFMMCTradingAccountKey, pRspInfo, nRequestID, bIsLast);
	};

	///�����ѯ�ֵ��۵���Ϣ��Ӧ
	void CTraderSpi::OnRspQryEWarrantOffset(CThostFtdcEWarrantOffsetField *pEWarrantOffset, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		p_OnRspQryEWarrantOffset(pEWarrantOffset, pRspInfo, nRequestID, bIsLast);
	};

	///�����ѯת����ˮ��Ӧ
	void CTraderSpi::OnRspQryTransferSerial(CThostFtdcTransferSerialField *pTransferSerial, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		p_OnRspQryTransferSerial(pTransferSerial, pRspInfo, nRequestID, bIsLast);
	};

	///�����ѯ����ǩԼ��ϵ��Ӧ
	void CTraderSpi::OnRspQryAccountregister(CThostFtdcAccountregisterField *pAccountregister, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		p_OnRspQryAccountregister(pAccountregister, pRspInfo, nRequestID, bIsLast);
	};

	///����Ӧ��
	void CTraderSpi::OnRspError(CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		p_OnRspError(pRspInfo, nRequestID, bIsLast);
	};

	///����֪ͨ
	void CTraderSpi::OnRtnOrder(CThostFtdcOrderField *pOrder) {
		p_OnRtnOrder(pOrder);
	};

	///�ɽ�֪ͨ
	void CTraderSpi::OnRtnTrade(CThostFtdcTradeField *pTrade) {
		p_OnRtnTrade(pTrade);
	};

	///����¼�����ر�
	void CTraderSpi::OnErrRtnOrderInsert(CThostFtdcInputOrderField *pInputOrder, CThostFtdcRspInfoField *pRspInfo) {
		p_OnErrRtnOrderInsert(pInputOrder, pRspInfo);
	};

	///������������ر�
	void CTraderSpi::OnErrRtnOrderAction(CThostFtdcOrderActionField *pOrderAction, CThostFtdcRspInfoField *pRspInfo) {
		p_OnErrRtnOrderAction(pOrderAction, pRspInfo);
	};

	///��Լ����״̬֪ͨ
	void CTraderSpi::OnRtnInstrumentStatus(CThostFtdcInstrumentStatusField *pInstrumentStatus) {
		p_OnRtnInstrumentStatus(pInstrumentStatus);
	};

	///����֪ͨ
	void CTraderSpi::OnRtnTradingNotice(CThostFtdcTradingNoticeInfoField *pTradingNoticeInfo) {
		p_OnRtnTradingNotice(pTradingNoticeInfo);
	};

	///��ʾ������У�����
	void CTraderSpi::OnRtnErrorConditionalOrder(CThostFtdcErrorConditionalOrderField *pErrorConditionalOrder) {
		p_OnRtnErrorConditionalOrder(pErrorConditionalOrder);
	};

	///�����ѯǩԼ������Ӧ
	void CTraderSpi::OnRspQryContractBank(CThostFtdcContractBankField *pContractBank, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		p_OnRspQryContractBank(pContractBank, pRspInfo, nRequestID, bIsLast);
	};

	///�����ѯԤ����Ӧ
	void CTraderSpi::OnRspQryParkedOrder(CThostFtdcParkedOrderField *pParkedOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		p_OnRspQryParkedOrder(pParkedOrder, pRspInfo, nRequestID, bIsLast);
	};

	///�����ѯԤ�񳷵���Ӧ
	void CTraderSpi::OnRspQryParkedOrderAction(CThostFtdcParkedOrderActionField *pParkedOrderAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		p_OnRspQryParkedOrderAction(pParkedOrderAction, pRspInfo, nRequestID, bIsLast);
	};

	///�����ѯ����֪ͨ��Ӧ
	void CTraderSpi::OnRspQryTradingNotice(CThostFtdcTradingNoticeField *pTradingNotice, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		p_OnRspQryTradingNotice(pTradingNotice, pRspInfo, nRequestID, bIsLast);
	};

	///�����ѯ���͹�˾���ײ�����Ӧ
	void CTraderSpi::OnRspQryBrokerTradingParams(CThostFtdcBrokerTradingParamsField *pBrokerTradingParams, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		p_OnRspQryBrokerTradingParams(pBrokerTradingParams, pRspInfo, nRequestID, bIsLast);
	};

	///�����ѯ���͹�˾�����㷨��Ӧ
	void CTraderSpi::OnRspQryBrokerTradingAlgos(CThostFtdcBrokerTradingAlgosField *pBrokerTradingAlgos, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		p_OnRspQryBrokerTradingAlgos(pBrokerTradingAlgos, pRspInfo, nRequestID, bIsLast);
	};

	///���з��������ʽ�ת�ڻ�֪ͨ
	void CTraderSpi::OnRtnFromBankToFutureByBank(CThostFtdcRspTransferField *pRspTransfer) {
		p_OnRtnFromBankToFutureByBank(pRspTransfer);
	};

	///���з����ڻ��ʽ�ת����֪ͨ
	void CTraderSpi::OnRtnFromFutureToBankByBank(CThostFtdcRspTransferField *pRspTransfer) {
		p_OnRtnFromFutureToBankByBank(pRspTransfer);
	};

	///���з����������ת�ڻ�֪ͨ
	void CTraderSpi::OnRtnRepealFromBankToFutureByBank(CThostFtdcRspRepealField *pRspRepeal) {
		p_OnRtnRepealFromBankToFutureByBank(pRspRepeal);
	};

	///���з�������ڻ�ת����֪ͨ
	void CTraderSpi::OnRtnRepealFromFutureToBankByBank(CThostFtdcRspRepealField *pRspRepeal) {
		p_OnRtnRepealFromFutureToBankByBank(pRspRepeal);
	};

	///�ڻ����������ʽ�ת�ڻ�֪ͨ
	void CTraderSpi::OnRtnFromBankToFutureByFuture(CThostFtdcRspTransferField *pRspTransfer) {
		p_OnRtnFromBankToFutureByFuture(pRspTransfer);
	};

	///�ڻ������ڻ��ʽ�ת����֪ͨ
	void CTraderSpi::OnRtnFromFutureToBankByFuture(CThostFtdcRspTransferField *pRspTransfer) {
		p_OnRtnFromFutureToBankByFuture(pRspTransfer);
	};

	///ϵͳ����ʱ�ڻ����ֹ������������ת�ڻ��������д�����Ϻ��̷��ص�֪ͨ
	void CTraderSpi::OnRtnRepealFromBankToFutureByFutureManual(CThostFtdcRspRepealField *pRspRepeal) {
		p_OnRtnRepealFromBankToFutureByFutureManual(pRspRepeal);
	};

	///ϵͳ����ʱ�ڻ����ֹ���������ڻ�ת�����������д�����Ϻ��̷��ص�֪ͨ
	void CTraderSpi::OnRtnRepealFromFutureToBankByFutureManual(CThostFtdcRspRepealField *pRspRepeal) {
		p_OnRtnRepealFromFutureToBankByFutureManual(pRspRepeal);
	};

	///�ڻ������ѯ�������֪ͨ
	void CTraderSpi::OnRtnQueryBankBalanceByFuture(CThostFtdcNotifyQueryAccountField *pNotifyQueryAccount) {
		p_OnRtnQueryBankBalanceByFuture(pNotifyQueryAccount);
	};

	///�ڻ����������ʽ�ת�ڻ�����ر�
	void CTraderSpi::OnErrRtnBankToFutureByFuture(CThostFtdcReqTransferField *pReqTransfer, CThostFtdcRspInfoField *pRspInfo) {
		p_OnErrRtnBankToFutureByFuture(pReqTransfer, pRspInfo);
	};

	///�ڻ������ڻ��ʽ�ת���д���ر�
	void CTraderSpi::OnErrRtnFutureToBankByFuture(CThostFtdcReqTransferField *pReqTransfer, CThostFtdcRspInfoField *pRspInfo) {
		p_OnErrRtnFutureToBankByFuture(pReqTransfer, pRspInfo);
	};

	///ϵͳ����ʱ�ڻ����ֹ������������ת�ڻ�����ر�
	void CTraderSpi::OnErrRtnRepealBankToFutureByFutureManual(CThostFtdcReqRepealField *pReqRepeal, CThostFtdcRspInfoField *pRspInfo) {
		p_OnErrRtnRepealBankToFutureByFutureManual(pReqRepeal, pRspInfo);
	};

	///ϵͳ����ʱ�ڻ����ֹ���������ڻ�ת���д���ر�
	void CTraderSpi::OnErrRtnRepealFutureToBankByFutureManual(CThostFtdcReqRepealField *pReqRepeal, CThostFtdcRspInfoField *pRspInfo) {
		p_OnErrRtnRepealFutureToBankByFutureManual(pReqRepeal, pRspInfo);
	};

	///�ڻ������ѯ����������ر�
	void CTraderSpi::OnErrRtnQueryBankBalanceByFuture(CThostFtdcReqQueryAccountField *pReqQueryAccount, CThostFtdcRspInfoField *pRspInfo) {
		p_OnErrRtnQueryBankBalanceByFuture(pReqQueryAccount, pRspInfo);
	};

	///�ڻ������������ת�ڻ��������д�����Ϻ��̷��ص�֪ͨ
	void CTraderSpi::OnRtnRepealFromBankToFutureByFuture(CThostFtdcRspRepealField *pRspRepeal) {
		p_OnRtnRepealFromBankToFutureByFuture(pRspRepeal);
	};

	///�ڻ���������ڻ�ת�����������д�����Ϻ��̷��ص�֪ͨ
	void CTraderSpi::OnRtnRepealFromFutureToBankByFuture(CThostFtdcRspRepealField *pRspRepeal) {
		p_OnRtnRepealFromFutureToBankByFuture(pRspRepeal);
	};

	///�ڻ����������ʽ�ת�ڻ�Ӧ��
	void CTraderSpi::OnRspFromBankToFutureByFuture(CThostFtdcReqTransferField *pReqTransfer, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		p_OnRspFromBankToFutureByFuture(pReqTransfer, pRspInfo, nRequestID, bIsLast);
	};

	///�ڻ������ڻ��ʽ�ת����Ӧ��
	void CTraderSpi::OnRspFromFutureToBankByFuture(CThostFtdcReqTransferField *pReqTransfer, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		p_OnRspFromFutureToBankByFuture(pReqTransfer, pRspInfo, nRequestID, bIsLast);
	};

	///�ڻ������ѯ�������Ӧ��
	void CTraderSpi::OnRspQueryBankAccountMoneyByFuture(CThostFtdcReqQueryAccountField *pReqQueryAccount, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		p_OnRspQueryBankAccountMoneyByFuture(pReqQueryAccount, pRspInfo, nRequestID, bIsLast);
	};

	///���з������ڿ���֪ͨ
	void CTraderSpi::OnRtnOpenAccountByBank(CThostFtdcOpenAccountField *pOpenAccount) {
		p_OnRtnOpenAccountByBank(pOpenAccount);
	};

	///���з�����������֪ͨ
	void CTraderSpi::OnRtnCancelAccountByBank(CThostFtdcCancelAccountField *pCancelAccount) {
		p_OnRtnCancelAccountByBank(pCancelAccount);
	};

	///���з����������˺�֪ͨ
	void CTraderSpi::OnRtnChangeAccountByBank(CThostFtdcChangeAccountField *pChangeAccount) {
		p_OnRtnChangeAccountByBank(pChangeAccount);
	};
#else

	///���ͻ����뽻�׺�̨������ͨ������ʱ����δ��¼ǰ�����÷��������á�
	void CTraderSpi::OnFrontConnected() {
		m_pAdapter->OnFrontConnected();
	};

	///���ͻ����뽻�׺�̨ͨ�����ӶϿ�ʱ���÷��������á���������������API���Զ��������ӣ��ͻ��˿ɲ�������
	///@param nReason ����ԭ��
	///        0x1001 �����ʧ��
	///        0x1002 ����дʧ��
	///        0x2001 ����������ʱ
	///        0x2002 ��������ʧ��
	///        0x2003 �յ�������
	void CTraderSpi::OnFrontDisconnected(int nReason) {
		m_pAdapter->OnFrontDisconnected(nReason);
	};

	///������ʱ���档����ʱ��δ�յ�����ʱ���÷��������á�
	///@param nTimeLapse �����ϴν��ձ��ĵ�ʱ��
	void CTraderSpi::OnHeartBeatWarning(int nTimeLapse) {
		m_pAdapter->OnHeartBeatWarning(nTimeLapse);
	};

	///�ͻ�����֤��Ӧ
	void CTraderSpi::OnRspAuthenticate(CThostFtdcRspAuthenticateField *pRspAuthenticateField, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		m_pAdapter->OnRspAuthenticate(MNConv<ThostFtdcRspAuthenticateField^, CThostFtdcRspAuthenticateField>::N2M(pRspAuthenticateField), RspInfoField(pRspInfo), nRequestID, bIsLast);
	};

	///��¼������Ӧ
	void CTraderSpi::OnRspUserLogin(CThostFtdcRspUserLoginField *pRspUserLogin, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {

		m_pAdapter->OnRspUserLogin(MNConv<ThostFtdcRspUserLoginField^, CThostFtdcRspUserLoginField>::N2M(pRspUserLogin), RspInfoField(pRspInfo), nRequestID, bIsLast);
	};

	///�ǳ�������Ӧ
	void CTraderSpi::OnRspUserLogout(CThostFtdcUserLogoutField *pUserLogout, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		m_pAdapter->OnRspUserLogout(MNConv<ThostFtdcUserLogoutField^, CThostFtdcUserLogoutField>::N2M(pUserLogout), RspInfoField(pRspInfo), nRequestID, bIsLast);
	};

	///�û��������������Ӧ
	void CTraderSpi::OnRspUserPasswordUpdate(CThostFtdcUserPasswordUpdateField *pUserPasswordUpdate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		m_pAdapter->OnRspUserPasswordUpdate(MNConv<ThostFtdcUserPasswordUpdateField^, CThostFtdcUserPasswordUpdateField>::N2M(pUserPasswordUpdate), RspInfoField(pRspInfo), nRequestID, bIsLast);
	};

	///�ʽ��˻��������������Ӧ
	void CTraderSpi::OnRspTradingAccountPasswordUpdate(CThostFtdcTradingAccountPasswordUpdateField *pTradingAccountPasswordUpdate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		m_pAdapter->OnRspTradingAccountPasswordUpdate(MNConv<ThostFtdcTradingAccountPasswordUpdateField^, CThostFtdcTradingAccountPasswordUpdateField>::N2M(pTradingAccountPasswordUpdate), RspInfoField(pRspInfo), nRequestID, bIsLast);
	};

	///����¼��������Ӧ
	void CTraderSpi::OnRspOrderInsert(CThostFtdcInputOrderField *pInputOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		m_pAdapter->OnRspOrderInsert(MNConv<ThostFtdcInputOrderField^, CThostFtdcInputOrderField>::N2M(pInputOrder), RspInfoField(pRspInfo), nRequestID, bIsLast);
	};

	///Ԥ��¼��������Ӧ
	void CTraderSpi::OnRspParkedOrderInsert(CThostFtdcParkedOrderField *pParkedOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		m_pAdapter->OnRspParkedOrderInsert(MNConv<ThostFtdcParkedOrderField^, CThostFtdcParkedOrderField>::N2M(pParkedOrder), RspInfoField(pRspInfo), nRequestID, bIsLast);
	};

	///Ԥ�񳷵�¼��������Ӧ
	void CTraderSpi::OnRspParkedOrderAction(CThostFtdcParkedOrderActionField *pParkedOrderAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		m_pAdapter->OnRspParkedOrderAction(MNConv<ThostFtdcParkedOrderActionField^, CThostFtdcParkedOrderActionField>::N2M(pParkedOrderAction), RspInfoField(pRspInfo), nRequestID, bIsLast);
	};

	///��������������Ӧ
	void CTraderSpi::OnRspOrderAction(CThostFtdcInputOrderActionField *pInputOrderAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		m_pAdapter->OnRspOrderAction(MNConv<ThostFtdcInputOrderActionField^, CThostFtdcInputOrderActionField>::N2M(pInputOrderAction), RspInfoField(pRspInfo), nRequestID, bIsLast);
	};

	///��ѯ��󱨵�������Ӧ
	void CTraderSpi::OnRspQueryMaxOrderVolume(CThostFtdcQueryMaxOrderVolumeField *pQueryMaxOrderVolume, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		m_pAdapter->OnRspQueryMaxOrderVolume(MNConv<ThostFtdcQueryMaxOrderVolumeField^, CThostFtdcQueryMaxOrderVolumeField>::N2M(pQueryMaxOrderVolume), RspInfoField(pRspInfo), nRequestID, bIsLast);
	};

	///Ͷ���߽�����ȷ����Ӧ
	void CTraderSpi::OnRspSettlementInfoConfirm(CThostFtdcSettlementInfoConfirmField *pSettlementInfoConfirm, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		m_pAdapter->OnRspSettlementInfoConfirm(MNConv<ThostFtdcSettlementInfoConfirmField^, CThostFtdcSettlementInfoConfirmField>::N2M(pSettlementInfoConfirm), RspInfoField(pRspInfo), nRequestID, bIsLast);
	};

	///ɾ��Ԥ����Ӧ
	void CTraderSpi::OnRspRemoveParkedOrder(CThostFtdcRemoveParkedOrderField *pRemoveParkedOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		m_pAdapter->OnRspRemoveParkedOrder(MNConv<ThostFtdcRemoveParkedOrderField^, CThostFtdcRemoveParkedOrderField>::N2M(pRemoveParkedOrder), RspInfoField(pRspInfo), nRequestID, bIsLast);
	};

	///ɾ��Ԥ�񳷵���Ӧ
	void CTraderSpi::OnRspRemoveParkedOrderAction(CThostFtdcRemoveParkedOrderActionField *pRemoveParkedOrderAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		m_pAdapter->OnRspRemoveParkedOrderAction(MNConv<ThostFtdcRemoveParkedOrderActionField^, CThostFtdcRemoveParkedOrderActionField>::N2M(pRemoveParkedOrderAction), RspInfoField(pRspInfo), nRequestID, bIsLast);
	};

	///�����ѯ������Ӧ
	void CTraderSpi::OnRspQryOrder(CThostFtdcOrderField *pOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		m_pAdapter->OnRspQryOrder(MNConv<ThostFtdcOrderField^, CThostFtdcOrderField>::N2M(pOrder), RspInfoField(pRspInfo), nRequestID, bIsLast);
	};

	///�����ѯ�ɽ���Ӧ
	void CTraderSpi::OnRspQryTrade(CThostFtdcTradeField *pTrade, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		m_pAdapter->OnRspQryTrade(MNConv<ThostFtdcTradeField^, CThostFtdcTradeField>::N2M(pTrade), RspInfoField(pRspInfo), nRequestID, bIsLast);
	};

	///�����ѯͶ���ֲ߳���Ӧ
	void CTraderSpi::OnRspQryInvestorPosition(CThostFtdcInvestorPositionField *pInvestorPosition, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		m_pAdapter->OnRspQryInvestorPosition(MNConv<ThostFtdcInvestorPositionField^, CThostFtdcInvestorPositionField>::N2M(pInvestorPosition), RspInfoField(pRspInfo), nRequestID, bIsLast);
	};

	///�����ѯ�ʽ��˻���Ӧ
	void CTraderSpi::OnRspQryTradingAccount(CThostFtdcTradingAccountField *pTradingAccount, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		m_pAdapter->OnRspQryTradingAccount(MNConv<ThostFtdcTradingAccountField^, CThostFtdcTradingAccountField>::N2M(pTradingAccount), RspInfoField(pRspInfo), nRequestID, bIsLast);
	};

	///�����ѯͶ������Ӧ
	void CTraderSpi::OnRspQryInvestor(CThostFtdcInvestorField *pInvestor, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		m_pAdapter->OnRspQryInvestor(MNConv<ThostFtdcInvestorField^, CThostFtdcInvestorField>::N2M(pInvestor), RspInfoField(pRspInfo), nRequestID, bIsLast);
	};

	///�����ѯ���ױ�����Ӧ
	void CTraderSpi::OnRspQryTradingCode(CThostFtdcTradingCodeField *pTradingCode, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		m_pAdapter->OnRspQryTradingCode(MNConv<ThostFtdcTradingCodeField^, CThostFtdcTradingCodeField>::N2M(pTradingCode), RspInfoField(pRspInfo), nRequestID, bIsLast);
	};

	///�����ѯ��Լ��֤������Ӧ
	void CTraderSpi::OnRspQryInstrumentMarginRate(CThostFtdcInstrumentMarginRateField *pInstrumentMarginRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		m_pAdapter->OnRspQryInstrumentMarginRate(MNConv<ThostFtdcInstrumentMarginRateField^, CThostFtdcInstrumentMarginRateField>::N2M(pInstrumentMarginRate), RspInfoField(pRspInfo), nRequestID, bIsLast);
	};

	///�����ѯ��Լ����������Ӧ
	void CTraderSpi::OnRspQryInstrumentCommissionRate(CThostFtdcInstrumentCommissionRateField *pInstrumentCommissionRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		m_pAdapter->OnRspQryInstrumentCommissionRate(MNConv<ThostFtdcInstrumentCommissionRateField^, CThostFtdcInstrumentCommissionRateField>::N2M(pInstrumentCommissionRate), RspInfoField(pRspInfo), nRequestID, bIsLast);
	};

	///�����ѯ��������Ӧ
	void CTraderSpi::OnRspQryExchange(CThostFtdcExchangeField *pExchange, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		m_pAdapter->OnRspQryExchange(MNConv<ThostFtdcExchangeField^, CThostFtdcExchangeField>::N2M(pExchange), RspInfoField(pRspInfo), nRequestID, bIsLast);
	};

	///�����ѯ��Լ��Ӧ
	void CTraderSpi::OnRspQryInstrument(CThostFtdcInstrumentField *pInstrument, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		m_pAdapter->OnRspQryInstrument(MNConv<ThostFtdcInstrumentField^, CThostFtdcInstrumentField>::N2M(pInstrument), RspInfoField(pRspInfo), nRequestID, bIsLast);
	};

	///�����ѯ������Ӧ
	void CTraderSpi::OnRspQryDepthMarketData(CThostFtdcDepthMarketDataField *pDepthMarketData, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		m_pAdapter->OnRspQryDepthMarketData(MNConv<ThostFtdcDepthMarketDataField^, CThostFtdcDepthMarketDataField>::N2M(pDepthMarketData), RspInfoField(pRspInfo), nRequestID, bIsLast);
	};

	///�����ѯͶ���߽�������Ӧ
	void CTraderSpi::OnRspQrySettlementInfo(CThostFtdcSettlementInfoField *pSettlementInfo, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		m_pAdapter->OnRspQrySettlementInfo(MNConv<ThostFtdcSettlementInfoField^, CThostFtdcSettlementInfoField>::N2M(pSettlementInfo), RspInfoField(pRspInfo), nRequestID, bIsLast);
	};

	///�����ѯת��������Ӧ
	void CTraderSpi::OnRspQryTransferBank(CThostFtdcTransferBankField *pTransferBank, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		m_pAdapter->OnRspQryTransferBank(MNConv<ThostFtdcTransferBankField^, CThostFtdcTransferBankField>::N2M(pTransferBank), RspInfoField(pRspInfo), nRequestID, bIsLast);
	};

	///�����ѯͶ���ֲ߳���ϸ��Ӧ
	void CTraderSpi::OnRspQryInvestorPositionDetail(CThostFtdcInvestorPositionDetailField *pInvestorPositionDetail, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		m_pAdapter->OnRspQryInvestorPositionDetail(MNConv<ThostFtdcInvestorPositionDetailField^, CThostFtdcInvestorPositionDetailField>::N2M(pInvestorPositionDetail), RspInfoField(pRspInfo), nRequestID, bIsLast);
	};

	///�����ѯ�ͻ�֪ͨ��Ӧ
	void CTraderSpi::OnRspQryNotice(CThostFtdcNoticeField *pNotice, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		m_pAdapter->OnRspQryNotice(MNConv<ThostFtdcNoticeField^, CThostFtdcNoticeField>::N2M(pNotice), RspInfoField(pRspInfo), nRequestID, bIsLast);
	};

	///�����ѯ������Ϣȷ����Ӧ
	void CTraderSpi::OnRspQrySettlementInfoConfirm(CThostFtdcSettlementInfoConfirmField *pSettlementInfoConfirm, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		m_pAdapter->OnRspQrySettlementInfoConfirm(MNConv<ThostFtdcSettlementInfoConfirmField^, CThostFtdcSettlementInfoConfirmField>::N2M(pSettlementInfoConfirm), RspInfoField(pRspInfo), nRequestID, bIsLast);
	};

	///�����ѯͶ���ֲ߳���ϸ��Ӧ
	void CTraderSpi::OnRspQryInvestorPositionCombineDetail(CThostFtdcInvestorPositionCombineDetailField *pInvestorPositionCombineDetail, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		m_pAdapter->OnRspQryInvestorPositionCombineDetail(MNConv<ThostFtdcInvestorPositionCombineDetailField^, CThostFtdcInvestorPositionCombineDetailField>::N2M(pInvestorPositionCombineDetail), RspInfoField(pRspInfo), nRequestID, bIsLast);
	};

	///��ѯ��֤����ϵͳ���͹�˾�ʽ��˻���Կ��Ӧ
	void CTraderSpi::OnRspQryCFMMCTradingAccountKey(CThostFtdcCFMMCTradingAccountKeyField *pCFMMCTradingAccountKey, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		m_pAdapter->OnRspQryCFMMCTradingAccountKey(MNConv<ThostFtdcCFMMCTradingAccountKeyField^, CThostFtdcCFMMCTradingAccountKeyField>::N2M(pCFMMCTradingAccountKey), RspInfoField(pRspInfo), nRequestID, bIsLast);
	};

	///�����ѯ�ֵ��۵���Ϣ��Ӧ
	void CTraderSpi::OnRspQryEWarrantOffset(CThostFtdcEWarrantOffsetField *pEWarrantOffset, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		m_pAdapter->OnRspQryEWarrantOffset(MNConv<ThostFtdcEWarrantOffsetField^, CThostFtdcEWarrantOffsetField>::N2M(pEWarrantOffset), RspInfoField(pRspInfo), nRequestID, bIsLast);
	};

	///�����ѯת����ˮ��Ӧ
	void CTraderSpi::OnRspQryTransferSerial(CThostFtdcTransferSerialField *pTransferSerial, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		m_pAdapter->OnRspQryTransferSerial(MNConv<ThostFtdcTransferSerialField^, CThostFtdcTransferSerialField>::N2M(pTransferSerial), RspInfoField(pRspInfo), nRequestID, bIsLast);
	};

	///�����ѯ����ǩԼ��ϵ��Ӧ
	void CTraderSpi::OnRspQryAccountregister(CThostFtdcAccountregisterField *pAccountregister, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		m_pAdapter->OnRspQryAccountregister(MNConv<ThostFtdcAccountregisterField^, CThostFtdcAccountregisterField>::N2M(pAccountregister), RspInfoField(pRspInfo), nRequestID, bIsLast);
	};

	///����Ӧ��
	void CTraderSpi::OnRspError(CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		m_pAdapter->OnRspError(RspInfoField(pRspInfo), nRequestID, bIsLast);
	};

	///����֪ͨ
	void CTraderSpi::OnRtnOrder(CThostFtdcOrderField *pOrder) {
		m_pAdapter->OnRtnOrder(MNConv<ThostFtdcOrderField^, CThostFtdcOrderField>::N2M(pOrder));
	};

	///�ɽ�֪ͨ
	void CTraderSpi::OnRtnTrade(CThostFtdcTradeField *pTrade) {
		m_pAdapter->OnRtnTrade(MNConv<ThostFtdcTradeField^, CThostFtdcTradeField>::N2M(pTrade));
	};

	///����¼�����ر�
	void CTraderSpi::OnErrRtnOrderInsert(CThostFtdcInputOrderField *pInputOrder, CThostFtdcRspInfoField *pRspInfo) {
		m_pAdapter->OnErrRtnOrderInsert(MNConv<ThostFtdcInputOrderField^, CThostFtdcInputOrderField>::N2M(pInputOrder), RspInfoField(pRspInfo));
	};

	///������������ر�
	void CTraderSpi::OnErrRtnOrderAction(CThostFtdcOrderActionField *pOrderAction, CThostFtdcRspInfoField *pRspInfo) {
		m_pAdapter->OnErrRtnOrderAction(MNConv<ThostFtdcOrderActionField^, CThostFtdcOrderActionField>::N2M(pOrderAction), RspInfoField(pRspInfo));
	};

	///��Լ����״̬֪ͨ
	void CTraderSpi::OnRtnInstrumentStatus(CThostFtdcInstrumentStatusField *pInstrumentStatus) {
		m_pAdapter->OnRtnInstrumentStatus(MNConv<ThostFtdcInstrumentStatusField^, CThostFtdcInstrumentStatusField>::N2M(pInstrumentStatus));
	};

	///����֪ͨ
	void CTraderSpi::OnRtnTradingNotice(CThostFtdcTradingNoticeInfoField *pTradingNoticeInfo) {
		m_pAdapter->OnRtnTradingNotice(MNConv<ThostFtdcTradingNoticeInfoField^, CThostFtdcTradingNoticeInfoField>::N2M(pTradingNoticeInfo));
	};

	///��ʾ������У�����
	void CTraderSpi::OnRtnErrorConditionalOrder(CThostFtdcErrorConditionalOrderField *pErrorConditionalOrder) {
		m_pAdapter->OnRtnErrorConditionalOrder(MNConv<ThostFtdcErrorConditionalOrderField^, CThostFtdcErrorConditionalOrderField>::N2M(pErrorConditionalOrder));
	};

	///�����ѯǩԼ������Ӧ
	void CTraderSpi::OnRspQryContractBank(CThostFtdcContractBankField *pContractBank, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		m_pAdapter->OnRspQryContractBank(MNConv<ThostFtdcContractBankField^, CThostFtdcContractBankField>::N2M(pContractBank), RspInfoField(pRspInfo), nRequestID, bIsLast);
	};

	///�����ѯԤ����Ӧ
	void CTraderSpi::OnRspQryParkedOrder(CThostFtdcParkedOrderField *pParkedOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		m_pAdapter->OnRspQryParkedOrder(MNConv<ThostFtdcParkedOrderField^, CThostFtdcParkedOrderField>::N2M(pParkedOrder), RspInfoField(pRspInfo), nRequestID, bIsLast);
	};

	///�����ѯԤ�񳷵���Ӧ
	void CTraderSpi::OnRspQryParkedOrderAction(CThostFtdcParkedOrderActionField *pParkedOrderAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		m_pAdapter->OnRspQryParkedOrderAction(MNConv<ThostFtdcParkedOrderActionField^, CThostFtdcParkedOrderActionField>::N2M(pParkedOrderAction), RspInfoField(pRspInfo), nRequestID, bIsLast);
	};

	///�����ѯ����֪ͨ��Ӧ
	void CTraderSpi::OnRspQryTradingNotice(CThostFtdcTradingNoticeField *pTradingNotice, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		m_pAdapter->OnRspQryTradingNotice(MNConv<ThostFtdcTradingNoticeField^, CThostFtdcTradingNoticeField>::N2M(pTradingNotice), RspInfoField(pRspInfo), nRequestID, bIsLast);
	};

	///�����ѯ���͹�˾���ײ�����Ӧ
	void CTraderSpi::OnRspQryBrokerTradingParams(CThostFtdcBrokerTradingParamsField *pBrokerTradingParams, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		m_pAdapter->OnRspQryBrokerTradingParams(MNConv<ThostFtdcBrokerTradingParamsField^, CThostFtdcBrokerTradingParamsField>::N2M(pBrokerTradingParams), RspInfoField(pRspInfo), nRequestID, bIsLast);
	};

	///�����ѯ���͹�˾�����㷨��Ӧ
	void CTraderSpi::OnRspQryBrokerTradingAlgos(CThostFtdcBrokerTradingAlgosField *pBrokerTradingAlgos, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		m_pAdapter->OnRspQryBrokerTradingAlgos(MNConv<ThostFtdcBrokerTradingAlgosField^, CThostFtdcBrokerTradingAlgosField>::N2M(pBrokerTradingAlgos), RspInfoField(pRspInfo), nRequestID, bIsLast);
	};

	///���з��������ʽ�ת�ڻ�֪ͨ
	void CTraderSpi::OnRtnFromBankToFutureByBank(CThostFtdcRspTransferField *pRspTransfer) {
		m_pAdapter->OnRtnFromBankToFutureByBank(MNConv<ThostFtdcRspTransferField^, CThostFtdcRspTransferField>::N2M(pRspTransfer));
	};

	///���з����ڻ��ʽ�ת����֪ͨ
	void CTraderSpi::OnRtnFromFutureToBankByBank(CThostFtdcRspTransferField *pRspTransfer) {
		m_pAdapter->OnRtnFromFutureToBankByBank(MNConv<ThostFtdcRspTransferField^, CThostFtdcRspTransferField>::N2M(pRspTransfer));
	};

	///���з����������ת�ڻ�֪ͨ
	void CTraderSpi::OnRtnRepealFromBankToFutureByBank(CThostFtdcRspRepealField *pRspRepeal) {
		m_pAdapter->OnRtnRepealFromBankToFutureByBank(MNConv<ThostFtdcRspRepealField^, CThostFtdcRspRepealField>::N2M(pRspRepeal));
	};

	///���з�������ڻ�ת����֪ͨ
	void CTraderSpi::OnRtnRepealFromFutureToBankByBank(CThostFtdcRspRepealField *pRspRepeal) {
		m_pAdapter->OnRtnRepealFromFutureToBankByBank(MNConv<ThostFtdcRspRepealField^, CThostFtdcRspRepealField>::N2M(pRspRepeal));
	};

	///�ڻ����������ʽ�ת�ڻ�֪ͨ
	void CTraderSpi::OnRtnFromBankToFutureByFuture(CThostFtdcRspTransferField *pRspTransfer) {
		m_pAdapter->OnRtnFromBankToFutureByFuture(MNConv<ThostFtdcRspTransferField^, CThostFtdcRspTransferField>::N2M(pRspTransfer));
	};

	///�ڻ������ڻ��ʽ�ת����֪ͨ
	void CTraderSpi::OnRtnFromFutureToBankByFuture(CThostFtdcRspTransferField *pRspTransfer) {
		m_pAdapter->OnRtnFromFutureToBankByFuture(MNConv<ThostFtdcRspTransferField^, CThostFtdcRspTransferField>::N2M(pRspTransfer));
	};

	///ϵͳ����ʱ�ڻ����ֹ������������ת�ڻ��������д�����Ϻ��̷��ص�֪ͨ
	void CTraderSpi::OnRtnRepealFromBankToFutureByFutureManual(CThostFtdcRspRepealField *pRspRepeal) {
		m_pAdapter->OnRtnRepealFromBankToFutureByFutureManual(MNConv<ThostFtdcRspRepealField^, CThostFtdcRspRepealField>::N2M(pRspRepeal));
	};

	///ϵͳ����ʱ�ڻ����ֹ���������ڻ�ת�����������д�����Ϻ��̷��ص�֪ͨ
	void CTraderSpi::OnRtnRepealFromFutureToBankByFutureManual(CThostFtdcRspRepealField *pRspRepeal) {
		m_pAdapter->OnRtnRepealFromFutureToBankByFutureManual(MNConv<ThostFtdcRspRepealField^, CThostFtdcRspRepealField>::N2M(pRspRepeal));
	};

	///�ڻ������ѯ�������֪ͨ
	void CTraderSpi::OnRtnQueryBankBalanceByFuture(CThostFtdcNotifyQueryAccountField *pNotifyQueryAccount) {
		m_pAdapter->OnRtnQueryBankBalanceByFuture(MNConv<ThostFtdcNotifyQueryAccountField^, CThostFtdcNotifyQueryAccountField>::N2M(pNotifyQueryAccount));
	};

	///�ڻ����������ʽ�ת�ڻ�����ر�
	void CTraderSpi::OnErrRtnBankToFutureByFuture(CThostFtdcReqTransferField *pReqTransfer, CThostFtdcRspInfoField *pRspInfo) {
		m_pAdapter->OnErrRtnBankToFutureByFuture(MNConv<ThostFtdcReqTransferField^, CThostFtdcReqTransferField>::N2M(pReqTransfer), RspInfoField(pRspInfo));
	};

	///�ڻ������ڻ��ʽ�ת���д���ر�
	void CTraderSpi::OnErrRtnFutureToBankByFuture(CThostFtdcReqTransferField *pReqTransfer, CThostFtdcRspInfoField *pRspInfo) {
		m_pAdapter->OnErrRtnFutureToBankByFuture(MNConv<ThostFtdcReqTransferField^, CThostFtdcReqTransferField>::N2M(pReqTransfer), RspInfoField(pRspInfo));
	};

	///ϵͳ����ʱ�ڻ����ֹ������������ת�ڻ�����ر�
	void CTraderSpi::OnErrRtnRepealBankToFutureByFutureManual(CThostFtdcReqRepealField *pReqRepeal, CThostFtdcRspInfoField *pRspInfo) {
		m_pAdapter->OnErrRtnRepealBankToFutureByFutureManual(MNConv<ThostFtdcReqRepealField^, CThostFtdcReqRepealField>::N2M(pReqRepeal), RspInfoField(pRspInfo));
	};

	///ϵͳ����ʱ�ڻ����ֹ���������ڻ�ת���д���ر�
	void CTraderSpi::OnErrRtnRepealFutureToBankByFutureManual(CThostFtdcReqRepealField *pReqRepeal, CThostFtdcRspInfoField *pRspInfo) {
		m_pAdapter->OnErrRtnRepealFutureToBankByFutureManual(MNConv<ThostFtdcReqRepealField^, CThostFtdcReqRepealField>::N2M(pReqRepeal), RspInfoField(pRspInfo));
	};

	///�ڻ������ѯ����������ر�
	void CTraderSpi::OnErrRtnQueryBankBalanceByFuture(CThostFtdcReqQueryAccountField *pReqQueryAccount, CThostFtdcRspInfoField *pRspInfo) {
		m_pAdapter->OnErrRtnQueryBankBalanceByFuture(MNConv<ThostFtdcReqQueryAccountField^, CThostFtdcReqQueryAccountField>::N2M(pReqQueryAccount), RspInfoField(pRspInfo));
	};

	///�ڻ������������ת�ڻ��������д�����Ϻ��̷��ص�֪ͨ
	void CTraderSpi::OnRtnRepealFromBankToFutureByFuture(CThostFtdcRspRepealField *pRspRepeal) {
		m_pAdapter->OnRtnRepealFromBankToFutureByFuture(MNConv<ThostFtdcRspRepealField^, CThostFtdcRspRepealField>::N2M(pRspRepeal));
	};

	///�ڻ���������ڻ�ת�����������д�����Ϻ��̷��ص�֪ͨ
	void CTraderSpi::OnRtnRepealFromFutureToBankByFuture(CThostFtdcRspRepealField *pRspRepeal) {
		m_pAdapter->OnRtnRepealFromFutureToBankByFuture(MNConv<ThostFtdcRspRepealField^, CThostFtdcRspRepealField>::N2M(pRspRepeal));
	};

	///�ڻ����������ʽ�ת�ڻ�Ӧ��
	void CTraderSpi::OnRspFromBankToFutureByFuture(CThostFtdcReqTransferField *pReqTransfer, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		m_pAdapter->OnRspFromBankToFutureByFuture(MNConv<ThostFtdcReqTransferField^, CThostFtdcReqTransferField>::N2M(pReqTransfer), RspInfoField(pRspInfo), nRequestID, bIsLast);
	};

	///�ڻ������ڻ��ʽ�ת����Ӧ��
	void CTraderSpi::OnRspFromFutureToBankByFuture(CThostFtdcReqTransferField *pReqTransfer, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		m_pAdapter->OnRspFromFutureToBankByFuture(MNConv<ThostFtdcReqTransferField^, CThostFtdcReqTransferField>::N2M(pReqTransfer), RspInfoField(pRspInfo), nRequestID, bIsLast);
	};

	///�ڻ������ѯ�������Ӧ��
	void CTraderSpi::OnRspQueryBankAccountMoneyByFuture(CThostFtdcReqQueryAccountField *pReqQueryAccount, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
		m_pAdapter->OnRspQueryBankAccountMoneyByFuture(MNConv<ThostFtdcReqQueryAccountField^, CThostFtdcReqQueryAccountField>::N2M(pReqQueryAccount), RspInfoField(pRspInfo), nRequestID, bIsLast);
	};

	///���з������ڿ���֪ͨ
	void CTraderSpi::OnRtnOpenAccountByBank(CThostFtdcOpenAccountField *pOpenAccount) {
		m_pAdapter->OnRtnOpenAccountByBank(MNConv<ThostFtdcOpenAccountField^, CThostFtdcOpenAccountField>::N2M(pOpenAccount));
	};

	///���з�����������֪ͨ
	void CTraderSpi::OnRtnCancelAccountByBank(CThostFtdcCancelAccountField *pCancelAccount) {
		m_pAdapter->OnRtnCancelAccountByBank(MNConv<ThostFtdcCancelAccountField^, CThostFtdcCancelAccountField>::N2M(pCancelAccount));
	};

	///���з����������˺�֪ͨ
	void CTraderSpi::OnRtnChangeAccountByBank(CThostFtdcChangeAccountField *pChangeAccount) {
		m_pAdapter->OnRtnChangeAccountByBank(MNConv<ThostFtdcChangeAccountField^, CThostFtdcChangeAccountField>::N2M(pChangeAccount));
	};
#endif

};