/////////////////////////////////////////////////////////////////////////
/// ���ڼ��� CTP C++ => .Net Framework Adapter
/// Author:	shawn666.liu@gmail.com
/// Date: 20120422
/////////////////////////////////////////////////////////////////////////

#pragma once

#include "Util.h"
#include <vcclr.h>
#include "Callbacks.h"
#include "CTPTraderAdapter.h"

namespace Native
{
	/// ���й���
	class CTraderSpi : public CThostFtdcTraderSpi
	{
	public:
		/// ���캯��
		CTraderSpi(CTPTraderAdapter^ pAdapter);

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

		///�ͻ�����֤��Ӧ
		virtual void OnRspAuthenticate(CThostFtdcRspAuthenticateField *pRspAuthenticateField, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

		///��¼������Ӧ
		virtual void OnRspUserLogin(CThostFtdcRspUserLoginField *pRspUserLogin, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

		///�ǳ�������Ӧ
		virtual void OnRspUserLogout(CThostFtdcUserLogoutField *pUserLogout, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

		///�û��������������Ӧ
		virtual void OnRspUserPasswordUpdate(CThostFtdcUserPasswordUpdateField *pUserPasswordUpdate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

		///�ʽ��˻��������������Ӧ
		virtual void OnRspTradingAccountPasswordUpdate(CThostFtdcTradingAccountPasswordUpdateField *pTradingAccountPasswordUpdate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

		///����¼��������Ӧ
		virtual void OnRspOrderInsert(CThostFtdcInputOrderField *pInputOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

		///Ԥ��¼��������Ӧ
		virtual void OnRspParkedOrderInsert(CThostFtdcParkedOrderField *pParkedOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

		///Ԥ�񳷵�¼��������Ӧ
		virtual void OnRspParkedOrderAction(CThostFtdcParkedOrderActionField *pParkedOrderAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

		///��������������Ӧ
		virtual void OnRspOrderAction(CThostFtdcInputOrderActionField *pInputOrderAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

		///��ѯ��󱨵�������Ӧ
		virtual void OnRspQueryMaxOrderVolume(CThostFtdcQueryMaxOrderVolumeField *pQueryMaxOrderVolume, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

		///Ͷ���߽�����ȷ����Ӧ
		virtual void OnRspSettlementInfoConfirm(CThostFtdcSettlementInfoConfirmField *pSettlementInfoConfirm, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

		///ɾ��Ԥ����Ӧ
		virtual void OnRspRemoveParkedOrder(CThostFtdcRemoveParkedOrderField *pRemoveParkedOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

		///ɾ��Ԥ�񳷵���Ӧ
		virtual void OnRspRemoveParkedOrderAction(CThostFtdcRemoveParkedOrderActionField *pRemoveParkedOrderAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

		///�����ѯ������Ӧ
		virtual void OnRspQryOrder(CThostFtdcOrderField *pOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

		///�����ѯ�ɽ���Ӧ
		virtual void OnRspQryTrade(CThostFtdcTradeField *pTrade, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

		///�����ѯͶ���ֲ߳���Ӧ
		virtual void OnRspQryInvestorPosition(CThostFtdcInvestorPositionField *pInvestorPosition, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

		///�����ѯ�ʽ��˻���Ӧ
		virtual void OnRspQryTradingAccount(CThostFtdcTradingAccountField *pTradingAccount, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

		///�����ѯͶ������Ӧ
		virtual void OnRspQryInvestor(CThostFtdcInvestorField *pInvestor, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

		///�����ѯ���ױ�����Ӧ
		virtual void OnRspQryTradingCode(CThostFtdcTradingCodeField *pTradingCode, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

		///�����ѯ��Լ��֤������Ӧ
		virtual void OnRspQryInstrumentMarginRate(CThostFtdcInstrumentMarginRateField *pInstrumentMarginRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

		///�����ѯ��Լ����������Ӧ
		virtual void OnRspQryInstrumentCommissionRate(CThostFtdcInstrumentCommissionRateField *pInstrumentCommissionRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

		///�����ѯ��������Ӧ
		virtual void OnRspQryExchange(CThostFtdcExchangeField *pExchange, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

		///�����ѯ��Լ��Ӧ
		virtual void OnRspQryInstrument(CThostFtdcInstrumentField *pInstrument, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

		///�����ѯ������Ӧ
		virtual void OnRspQryDepthMarketData(CThostFtdcDepthMarketDataField *pDepthMarketData, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

		///�����ѯͶ���߽�������Ӧ
		virtual void OnRspQrySettlementInfo(CThostFtdcSettlementInfoField *pSettlementInfo, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

		///�����ѯת��������Ӧ
		virtual void OnRspQryTransferBank(CThostFtdcTransferBankField *pTransferBank, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

		///�����ѯͶ���ֲ߳���ϸ��Ӧ
		virtual void OnRspQryInvestorPositionDetail(CThostFtdcInvestorPositionDetailField *pInvestorPositionDetail, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

		///�����ѯ�ͻ�֪ͨ��Ӧ
		virtual void OnRspQryNotice(CThostFtdcNoticeField *pNotice, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

		///�����ѯ������Ϣȷ����Ӧ
		virtual void OnRspQrySettlementInfoConfirm(CThostFtdcSettlementInfoConfirmField *pSettlementInfoConfirm, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

		///�����ѯͶ���ֲ߳���ϸ��Ӧ
		virtual void OnRspQryInvestorPositionCombineDetail(CThostFtdcInvestorPositionCombineDetailField *pInvestorPositionCombineDetail, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

		///��ѯ��֤����ϵͳ���͹�˾�ʽ��˻���Կ��Ӧ
		virtual void OnRspQryCFMMCTradingAccountKey(CThostFtdcCFMMCTradingAccountKeyField *pCFMMCTradingAccountKey, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

		///�����ѯ�ֵ��۵���Ϣ��Ӧ
		virtual void OnRspQryEWarrantOffset(CThostFtdcEWarrantOffsetField *pEWarrantOffset, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

		///�����ѯת����ˮ��Ӧ
		virtual void OnRspQryTransferSerial(CThostFtdcTransferSerialField *pTransferSerial, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

		///�����ѯ����ǩԼ��ϵ��Ӧ
		virtual void OnRspQryAccountregister(CThostFtdcAccountregisterField *pAccountregister, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

		///����Ӧ��
		virtual void OnRspError(CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

		///����֪ͨ
		virtual void OnRtnOrder(CThostFtdcOrderField *pOrder);

		///�ɽ�֪ͨ
		virtual void OnRtnTrade(CThostFtdcTradeField *pTrade);

		///����¼�����ر�
		virtual void OnErrRtnOrderInsert(CThostFtdcInputOrderField *pInputOrder, CThostFtdcRspInfoField *pRspInfo);

		///������������ر�
		virtual void OnErrRtnOrderAction(CThostFtdcOrderActionField *pOrderAction, CThostFtdcRspInfoField *pRspInfo);

		///��Լ����״̬֪ͨ
		virtual void OnRtnInstrumentStatus(CThostFtdcInstrumentStatusField *pInstrumentStatus);

		///����֪ͨ
		virtual void OnRtnTradingNotice(CThostFtdcTradingNoticeInfoField *pTradingNoticeInfo);

		///��ʾ������У�����
		virtual void OnRtnErrorConditionalOrder(CThostFtdcErrorConditionalOrderField *pErrorConditionalOrder);

		///�����ѯǩԼ������Ӧ
		virtual void OnRspQryContractBank(CThostFtdcContractBankField *pContractBank, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

		///�����ѯԤ����Ӧ
		virtual void OnRspQryParkedOrder(CThostFtdcParkedOrderField *pParkedOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

		///�����ѯԤ�񳷵���Ӧ
		virtual void OnRspQryParkedOrderAction(CThostFtdcParkedOrderActionField *pParkedOrderAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

		///�����ѯ����֪ͨ��Ӧ
		virtual void OnRspQryTradingNotice(CThostFtdcTradingNoticeField *pTradingNotice, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

		///�����ѯ���͹�˾���ײ�����Ӧ
		virtual void OnRspQryBrokerTradingParams(CThostFtdcBrokerTradingParamsField *pBrokerTradingParams, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

		///�����ѯ���͹�˾�����㷨��Ӧ
		virtual void OnRspQryBrokerTradingAlgos(CThostFtdcBrokerTradingAlgosField *pBrokerTradingAlgos, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

		///���з��������ʽ�ת�ڻ�֪ͨ
		virtual void OnRtnFromBankToFutureByBank(CThostFtdcRspTransferField *pRspTransfer);

		///���з����ڻ��ʽ�ת����֪ͨ
		virtual void OnRtnFromFutureToBankByBank(CThostFtdcRspTransferField *pRspTransfer);

		///���з����������ת�ڻ�֪ͨ
		virtual void OnRtnRepealFromBankToFutureByBank(CThostFtdcRspRepealField *pRspRepeal);

		///���з�������ڻ�ת����֪ͨ
		virtual void OnRtnRepealFromFutureToBankByBank(CThostFtdcRspRepealField *pRspRepeal);

		///�ڻ����������ʽ�ת�ڻ�֪ͨ
		virtual void OnRtnFromBankToFutureByFuture(CThostFtdcRspTransferField *pRspTransfer);

		///�ڻ������ڻ��ʽ�ת����֪ͨ
		virtual void OnRtnFromFutureToBankByFuture(CThostFtdcRspTransferField *pRspTransfer);

		///ϵͳ����ʱ�ڻ����ֹ������������ת�ڻ��������д�����Ϻ��̷��ص�֪ͨ
		virtual void OnRtnRepealFromBankToFutureByFutureManual(CThostFtdcRspRepealField *pRspRepeal);

		///ϵͳ����ʱ�ڻ����ֹ���������ڻ�ת�����������д�����Ϻ��̷��ص�֪ͨ
		virtual void OnRtnRepealFromFutureToBankByFutureManual(CThostFtdcRspRepealField *pRspRepeal);

		///�ڻ������ѯ�������֪ͨ
		virtual void OnRtnQueryBankBalanceByFuture(CThostFtdcNotifyQueryAccountField *pNotifyQueryAccount);

		///�ڻ����������ʽ�ת�ڻ�����ر�
		virtual void OnErrRtnBankToFutureByFuture(CThostFtdcReqTransferField *pReqTransfer, CThostFtdcRspInfoField *pRspInfo);

		///�ڻ������ڻ��ʽ�ת���д���ر�
		virtual void OnErrRtnFutureToBankByFuture(CThostFtdcReqTransferField *pReqTransfer, CThostFtdcRspInfoField *pRspInfo);

		///ϵͳ����ʱ�ڻ����ֹ������������ת�ڻ�����ر�
		virtual void OnErrRtnRepealBankToFutureByFutureManual(CThostFtdcReqRepealField *pReqRepeal, CThostFtdcRspInfoField *pRspInfo);

		///ϵͳ����ʱ�ڻ����ֹ���������ڻ�ת���д���ر�
		virtual void OnErrRtnRepealFutureToBankByFutureManual(CThostFtdcReqRepealField *pReqRepeal, CThostFtdcRspInfoField *pRspInfo);

		///�ڻ������ѯ����������ر�
		virtual void OnErrRtnQueryBankBalanceByFuture(CThostFtdcReqQueryAccountField *pReqQueryAccount, CThostFtdcRspInfoField *pRspInfo);

		///�ڻ������������ת�ڻ��������д�����Ϻ��̷��ص�֪ͨ
		virtual void OnRtnRepealFromBankToFutureByFuture(CThostFtdcRspRepealField *pRspRepeal);

		///�ڻ���������ڻ�ת�����������д�����Ϻ��̷��ص�֪ͨ
		virtual void OnRtnRepealFromFutureToBankByFuture(CThostFtdcRspRepealField *pRspRepeal);

		///�ڻ����������ʽ�ת�ڻ�Ӧ��
		virtual void OnRspFromBankToFutureByFuture(CThostFtdcReqTransferField *pReqTransfer, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

		///�ڻ������ڻ��ʽ�ת����Ӧ��
		virtual void OnRspFromFutureToBankByFuture(CThostFtdcReqTransferField *pReqTransfer, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

		///�ڻ������ѯ�������Ӧ��
		virtual void OnRspQueryBankAccountMoneyByFuture(CThostFtdcReqQueryAccountField *pReqQueryAccount, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

		///���з������ڿ���֪ͨ
		virtual void OnRtnOpenAccountByBank(CThostFtdcOpenAccountField *pOpenAccount);

		///���з�����������֪ͨ
		virtual void OnRtnCancelAccountByBank(CThostFtdcCancelAccountField *pCancelAccount);

		///���з����������˺�֪ͨ
		virtual void OnRtnChangeAccountByBank(CThostFtdcChangeAccountField *pChangeAccount);

#ifdef __CTP_MA__
		// �ص�����
	public:
		Callback_OnFrontConnected p_OnFrontConnected;
		Callback_OnFrontDisconnected p_OnFrontDisconnected;
		Callback_OnHeartBeatWarning p_OnHeartBeatWarning;
		Callback_OnRspAuthenticate p_OnRspAuthenticate;
		Callback_OnRspUserLogin p_OnRspUserLogin;
		Callback_OnRspUserLogout p_OnRspUserLogout;
		Callback_OnRspUserPasswordUpdate p_OnRspUserPasswordUpdate;
		Callback_OnRspTradingAccountPasswordUpdate p_OnRspTradingAccountPasswordUpdate;
		Callback_OnRspOrderInsert p_OnRspOrderInsert;
		Callback_OnRspParkedOrderInsert p_OnRspParkedOrderInsert;
		Callback_OnRspParkedOrderAction p_OnRspParkedOrderAction;
		Callback_OnRspOrderAction p_OnRspOrderAction;
		Callback_OnRspQueryMaxOrderVolume p_OnRspQueryMaxOrderVolume;
		Callback_OnRspSettlementInfoConfirm p_OnRspSettlementInfoConfirm;
		Callback_OnRspRemoveParkedOrder p_OnRspRemoveParkedOrder;
		Callback_OnRspRemoveParkedOrderAction p_OnRspRemoveParkedOrderAction;
		Callback_OnRspQryOrder p_OnRspQryOrder;
		Callback_OnRspQryTrade p_OnRspQryTrade;
		Callback_OnRspQryInvestorPosition p_OnRspQryInvestorPosition;
		Callback_OnRspQryTradingAccount p_OnRspQryTradingAccount;
		Callback_OnRspQryInvestor p_OnRspQryInvestor;
		Callback_OnRspQryTradingCode p_OnRspQryTradingCode;
		Callback_OnRspQryInstrumentMarginRate p_OnRspQryInstrumentMarginRate;
		Callback_OnRspQryInstrumentCommissionRate p_OnRspQryInstrumentCommissionRate;
		Callback_OnRspQryExchange p_OnRspQryExchange;
		Callback_OnRspQryInstrument p_OnRspQryInstrument;
		Callback_OnRspQryDepthMarketData p_OnRspQryDepthMarketData;
		Callback_OnRspQrySettlementInfo p_OnRspQrySettlementInfo;
		Callback_OnRspQryTransferBank p_OnRspQryTransferBank;
		Callback_OnRspQryInvestorPositionDetail p_OnRspQryInvestorPositionDetail;
		Callback_OnRspQryNotice p_OnRspQryNotice;
		Callback_OnRspQrySettlementInfoConfirm p_OnRspQrySettlementInfoConfirm;
		Callback_OnRspQryInvestorPositionCombineDetail p_OnRspQryInvestorPositionCombineDetail;
		Callback_OnRspQryCFMMCTradingAccountKey p_OnRspQryCFMMCTradingAccountKey;
		Callback_OnRspQryEWarrantOffset p_OnRspQryEWarrantOffset;
		Callback_OnRspQryTransferSerial p_OnRspQryTransferSerial;
		Callback_OnRspQryAccountregister p_OnRspQryAccountregister;
		Callback_OnRspError p_OnRspError;
		Callback_OnRtnOrder p_OnRtnOrder;
		Callback_OnRtnTrade p_OnRtnTrade;
		Callback_OnErrRtnOrderInsert p_OnErrRtnOrderInsert;
		Callback_OnErrRtnOrderAction p_OnErrRtnOrderAction;
		Callback_OnRtnInstrumentStatus p_OnRtnInstrumentStatus;
		Callback_OnRtnTradingNotice p_OnRtnTradingNotice;
		Callback_OnRtnErrorConditionalOrder p_OnRtnErrorConditionalOrder;
		Callback_OnRspQryContractBank p_OnRspQryContractBank;
		Callback_OnRspQryParkedOrder p_OnRspQryParkedOrder;
		Callback_OnRspQryParkedOrderAction p_OnRspQryParkedOrderAction;
		Callback_OnRspQryTradingNotice p_OnRspQryTradingNotice;
		Callback_OnRspQryBrokerTradingParams p_OnRspQryBrokerTradingParams;
		Callback_OnRspQryBrokerTradingAlgos p_OnRspQryBrokerTradingAlgos;
		Callback_OnRtnFromBankToFutureByBank p_OnRtnFromBankToFutureByBank;
		Callback_OnRtnFromFutureToBankByBank p_OnRtnFromFutureToBankByBank;
		Callback_OnRtnRepealFromBankToFutureByBank p_OnRtnRepealFromBankToFutureByBank;
		Callback_OnRtnRepealFromFutureToBankByBank p_OnRtnRepealFromFutureToBankByBank;
		Callback_OnRtnFromBankToFutureByFuture p_OnRtnFromBankToFutureByFuture;
		Callback_OnRtnFromFutureToBankByFuture p_OnRtnFromFutureToBankByFuture;
		Callback_OnRtnRepealFromBankToFutureByFutureManual p_OnRtnRepealFromBankToFutureByFutureManual;
		Callback_OnRtnRepealFromFutureToBankByFutureManual p_OnRtnRepealFromFutureToBankByFutureManual;
		Callback_OnRtnQueryBankBalanceByFuture p_OnRtnQueryBankBalanceByFuture;
		Callback_OnErrRtnBankToFutureByFuture p_OnErrRtnBankToFutureByFuture;
		Callback_OnErrRtnFutureToBankByFuture p_OnErrRtnFutureToBankByFuture;
		Callback_OnErrRtnRepealBankToFutureByFutureManual p_OnErrRtnRepealBankToFutureByFutureManual;
		Callback_OnErrRtnRepealFutureToBankByFutureManual p_OnErrRtnRepealFutureToBankByFutureManual;
		Callback_OnErrRtnQueryBankBalanceByFuture p_OnErrRtnQueryBankBalanceByFuture;
		Callback_OnRtnRepealFromBankToFutureByFuture p_OnRtnRepealFromBankToFutureByFuture;
		Callback_OnRtnRepealFromFutureToBankByFuture p_OnRtnRepealFromFutureToBankByFuture;
		Callback_OnRspFromBankToFutureByFuture p_OnRspFromBankToFutureByFuture;
		Callback_OnRspFromFutureToBankByFuture p_OnRspFromFutureToBankByFuture;
		Callback_OnRspQueryBankAccountMoneyByFuture p_OnRspQueryBankAccountMoneyByFuture;
		Callback_OnRtnOpenAccountByBank p_OnRtnOpenAccountByBank;
		Callback_OnRtnCancelAccountByBank p_OnRtnCancelAccountByBank;
		Callback_OnRtnChangeAccountByBank p_OnRtnChangeAccountByBank;

		// �ص�������Ӧ��delegate�����뱣��һ�ݶԸ�deleage�����ã�����GC���Զ����ո�deleage����������Ļص�����ʧЧ
		gcroot<Internal_FrontConnected^> d_FrontConnected;
		gcroot<Internal_FrontDisconnected^> d_FrontDisconnected;
		gcroot<Internal_HeartBeatWarning^> d_HeartBeatWarning;
		gcroot<Internal_RspUserLogin^> d_RspUserLogin;
		gcroot<Internal_RspUserLogout^> d_RspUserLogout;
		gcroot<Internal_RspError^> d_RspError;

		gcroot<Internal_RspAuthenticate^> d_RspAuthenticate;
		gcroot<Internal_RspUserPasswordUpdate^> d_RspUserPasswordUpdate;
		gcroot<Internal_RspTradingAccountPasswordUpdate^> d_RspTradingAccountPasswordUpdate;
		gcroot<Internal_RspOrderInsert^> d_RspOrderInsert;
		gcroot<Internal_RspParkedOrderInsert^> d_RspParkedOrderInsert;
		gcroot<Internal_RspParkedOrderAction^> d_RspParkedOrderAction;
		gcroot<Internal_RspOrderAction^> d_RspOrderAction;
		gcroot<Internal_RspQueryMaxOrderVolume^> d_RspQueryMaxOrderVolume;
		gcroot<Internal_RspSettlementInfoConfirm^> d_RspSettlementInfoConfirm;
		gcroot<Internal_RspRemoveParkedOrder^> d_RspRemoveParkedOrder;
		gcroot<Internal_RspRemoveParkedOrderAction^> d_RspRemoveParkedOrderAction;
		gcroot<Internal_RspQryOrder^> d_RspQryOrder;
		gcroot<Internal_RspQryTrade^> d_RspQryTrade;
		gcroot<Internal_RspQryInvestorPosition^> d_RspQryInvestorPosition;
		gcroot<Internal_RspQryTradingAccount^> d_RspQryTradingAccount;
		gcroot<Internal_RspQryInvestor^> d_RspQryInvestor;
		gcroot<Internal_RspQryTradingCode^> d_RspQryTradingCode;
		gcroot<Internal_RspQryInstrumentMarginRate^> d_RspQryInstrumentMarginRate;
		gcroot<Internal_RspQryInstrumentCommissionRate^> d_RspQryInstrumentCommissionRate;
		gcroot<Internal_RspQryExchange^> d_RspQryExchange;
		gcroot<Internal_RspQryInstrument^> d_RspQryInstrument;
		gcroot<Internal_RspQryDepthMarketData^> d_RspQryDepthMarketData;
		gcroot<Internal_RspQrySettlementInfo^> d_RspQrySettlementInfo;
		gcroot<Internal_RspQryTransferBank^> d_RspQryTransferBank;
		gcroot<Internal_RspQryInvestorPositionDetail^> d_RspQryInvestorPositionDetail;
		gcroot<Internal_RspQryNotice^> d_RspQryNotice;
		gcroot<Internal_RspQrySettlementInfoConfirm^> d_RspQrySettlementInfoConfirm;
		gcroot<Internal_RspQryInvestorPositionCombineDetail^> d_RspQryInvestorPositionCombineDetail;
		gcroot<Internal_RspQryCFMMCTradingAccountKey^> d_RspQryCFMMCTradingAccountKey;
		gcroot<Internal_RspQryEWarrantOffset^> d_RspQryEWarrantOffset;
		gcroot<Internal_RspQryTransferSerial^> d_RspQryTransferSerial;
		gcroot<Internal_RspQryAccountregister^> d_RspQryAccountregister;
		gcroot<Internal_RtnOrder^> d_RtnOrder;
		gcroot<Internal_RtnTrade^> d_RtnTrade;
		gcroot<Internal_ErrRtnOrderInsert^> d_ErrRtnOrderInsert;
		gcroot<Internal_ErrRtnOrderAction^> d_ErrRtnOrderAction;
		gcroot<Internal_RtnInstrumentStatus^> d_RtnInstrumentStatus;
		gcroot<Internal_RtnTradingNotice^> d_RtnTradingNotice;
		gcroot<Internal_RtnErrorConditionalOrder^> d_RtnErrorConditionalOrder;
		gcroot<Internal_RspQryContractBank^> d_RspQryContractBank;
		gcroot<Internal_RspQryParkedOrder^> d_RspQryParkedOrder;
		gcroot<Internal_RspQryParkedOrderAction^> d_RspQryParkedOrderAction;
		gcroot<Internal_RspQryTradingNotice^> d_RspQryTradingNotice;
		gcroot<Internal_RspQryBrokerTradingParams^> d_RspQryBrokerTradingParams;
		gcroot<Internal_RspQryBrokerTradingAlgos^> d_RspQryBrokerTradingAlgos;
		gcroot<Internal_RtnFromBankToFutureByBank^> d_RtnFromBankToFutureByBank;
		gcroot<Internal_RtnFromFutureToBankByBank^> d_RtnFromFutureToBankByBank;
		gcroot<Internal_RtnRepealFromBankToFutureByBank^> d_RtnRepealFromBankToFutureByBank;
		gcroot<Internal_RtnRepealFromFutureToBankByBank^> d_RtnRepealFromFutureToBankByBank;
		gcroot<Internal_RtnFromBankToFutureByFuture^> d_RtnFromBankToFutureByFuture;
		gcroot<Internal_RtnFromFutureToBankByFuture^> d_RtnFromFutureToBankByFuture;
		gcroot<Internal_RtnRepealFromBankToFutureByFutureManual^> d_RtnRepealFromBankToFutureByFutureManual;
		gcroot<Internal_RtnRepealFromFutureToBankByFutureManual^> d_RtnRepealFromFutureToBankByFutureManual;
		gcroot<Internal_RtnQueryBankBalanceByFuture^> d_RtnQueryBankBalanceByFuture;
		gcroot<Internal_ErrRtnBankToFutureByFuture^> d_ErrRtnBankToFutureByFuture;
		gcroot<Internal_ErrRtnFutureToBankByFuture^> d_ErrRtnFutureToBankByFuture;
		gcroot<Internal_ErrRtnRepealBankToFutureByFutureManual^> d_ErrRtnRepealBankToFutureByFutureManual;
		gcroot<Internal_ErrRtnRepealFutureToBankByFutureManual^> d_ErrRtnRepealFutureToBankByFutureManual;
		gcroot<Internal_ErrRtnQueryBankBalanceByFuture^> d_ErrRtnQueryBankBalanceByFuture;
		gcroot<Internal_RtnRepealFromBankToFutureByFuture^> d_RtnRepealFromBankToFutureByFuture;
		gcroot<Internal_RtnRepealFromFutureToBankByFuture^> d_RtnRepealFromFutureToBankByFuture;
		gcroot<Internal_RspFromBankToFutureByFuture^> d_RspFromBankToFutureByFuture;
		gcroot<Internal_RspFromFutureToBankByFuture^> d_RspFromFutureToBankByFuture;
		gcroot<Internal_RspQueryBankAccountMoneyByFuture^> d_RspQueryBankAccountMoneyByFuture;
		gcroot<Internal_RtnOpenAccountByBank^> d_RtnOpenAccountByBank;
		gcroot<Internal_RtnCancelAccountByBank^> d_RtnCancelAccountByBank;
		gcroot<Internal_RtnChangeAccountByBank^> d_RtnChangeAccountByBank;
#else
	private:
		gcroot<CTPTraderAdapter^> m_pAdapter;
#endif

	};

};