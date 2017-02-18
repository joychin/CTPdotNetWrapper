/////////////////////////////////////////////////////////////////////////
/// ���ڼ��� CTP C++ ==> .Net Framework Adapter
/// Author:	shawn666.liu@gmail.com
/// Date: 20120422
/////////////////////////////////////////////////////////////////////////

#pragma once


#include "Util.h"
#include "TraderSpi.h"

using namespace Native;

namespace  Native{
	class CTraderSpi;
};

namespace CTP {

	/// <summary>
	/// �й���,TraderAPI Adapter
	/// </summary>
	public ref class CTPTraderAdapter
	{
	public:
		/// <summary>
		///����CTPTraderAdapter
		///����������Ϣ�ļ���Ŀ¼��Ĭ��Ϊ��ǰĿ¼
		/// </summary>
		CTPTraderAdapter(void);
		/// <summary>
		///����CTPTraderAdapter
		/// </summary>
		/// <param name="pszFlowPath">����������Ϣ�ļ���Ŀ¼��Ĭ��Ϊ��ǰĿ¼</param>
		/// <param name="bIsUsingUdp">�Ƿ�ʹ��UDPЭ��</param>
		CTPTraderAdapter(String^ pszFlowPath, bool bIsUsingUdp);
	private:
		~CTPTraderAdapter(void);
		CThostFtdcTraderApi* m_pApi;
		CTraderSpi* m_pSpi;
	public:
		/// <summary>
		///ɾ���ӿڶ�����
		///@remark ����ʹ�ñ��ӿڶ���ʱ,���øú���ɾ���ӿڶ���
		/// </summary>
		void Release();

		/// <summary>
		///��ʼ��
		///@remark ��ʼ�����л���,ֻ�е��ú�,�ӿڲſ�ʼ����
		/// </summary>
		void Init();

		/// <summary>
		///�ȴ��ӿ��߳̽�������
		///@return �߳��˳�����
		/// </summary>
		int Join();

		/// <summary>
		///��ȡ��ǰ������
		///@remark ֻ�е�¼�ɹ���,���ܵõ���ȷ�Ľ�����
		/// </summary>
		/// <returns>��ȡ���Ľ�����</returns>
		String^ GetTradingDay();

		/// <summary>
		///ע��ǰ�û������ַ
		///@param pszFrontAddress��ǰ�û������ַ��
		///@remark �����ַ�ĸ�ʽΪ����protocol://ipaddress:port�����磺��tcp://127.0.0.1:17001���� 
		///@remark ��tcp��������Э�飬��127.0.0.1�������������ַ����17001������������˿ںš�
		/// </summary>
		void RegisterFront(String^ pszFrontAddress);

		/// <summary>
		///ע�����ַ����������ַ
		///@param pszNsAddress�����ַ����������ַ��
		///@remark �����ַ�ĸ�ʽΪ����protocol://ipaddress:port�����磺��tcp://127.0.0.1:12001���� 
		///@remark ��tcp��������Э�飬��127.0.0.1�������������ַ����12001������������˿ںš�
		///@remark RegisterNameServer������RegisterFront
		/// </summary>
		void RegisterNameServer(String^ pszNsAddress);

		///ע��ص��ӿ�
		///@param pSpi �����Իص��ӿ����ʵ��
		/// void RegisterSpi(ThostFtdcTraderSpi^ pSpi);

		/// <summary>
		///����˽������
		///@param nResumeType ˽�����ش���ʽ  
		///        THOST_TERT_RESTART:�ӱ������տ�ʼ�ش�
		///        THOST_TERT_RESUME:���ϴ��յ�������
		///        THOST_TERT_QUICK:ֻ���͵�¼��˽����������
		///@remark �÷���Ҫ��Init����ǰ���á����������򲻻��յ�˽���������ݡ�
		/// </summary>
		void SubscribePrivateTopic(EnumTeResumeType nResumeType);

		/// <summary>
		///���Ĺ�������
		///@param nResumeType �������ش���ʽ  
		///        THOST_TERT_RESTART:�ӱ������տ�ʼ�ش�
		///        THOST_TERT_RESUME:���ϴ��յ�������
		///        THOST_TERT_QUICK:ֻ���͵�¼�󹫹���������
		///@remark �÷���Ҫ��Init����ǰ���á����������򲻻��յ������������ݡ�
		/// </summary>
		void SubscribePublicTopic(EnumTeResumeType nResumeType);

		/// <summary>
		///�ͻ�����֤����
		/// </summary>
		int ReqAuthenticate(ThostFtdcReqAuthenticateField^ pReqAuthenticateField, int nRequestID);

		/// <summary>
		///�û���¼����
		/// </summary>
		int ReqUserLogin(ThostFtdcReqUserLoginField^ pReqUserLoginField, int nRequestID);

		/// <summary>
		///�ǳ�����
		/// </summary>
		int ReqUserLogout(ThostFtdcUserLogoutField^ pUserLogout, int nRequestID);

		/// <summary>
		///�û������������
		/// </summary>
		int ReqUserPasswordUpdate(ThostFtdcUserPasswordUpdateField^ pUserPasswordUpdate, int nRequestID);

		/// <summary>
		///�ʽ��˻������������
		/// </summary>
		int ReqTradingAccountPasswordUpdate(ThostFtdcTradingAccountPasswordUpdateField^ pTradingAccountPasswordUpdate, int nRequestID);

		/// <summary>
		///����¼������
		/// </summary>
		int ReqOrderInsert(ThostFtdcInputOrderField^ pInputOrder, int nRequestID);

		/// <summary>
		///Ԥ��¼������
		/// </summary>
		int ReqParkedOrderInsert(ThostFtdcParkedOrderField^ pParkedOrder, int nRequestID);

		/// <summary>
		///Ԥ�񳷵�¼������
		/// </summary>
		int ReqParkedOrderAction(ThostFtdcParkedOrderActionField^ pParkedOrderAction, int nRequestID);

		/// <summary>
		///������������
		/// </summary>
		int ReqOrderAction(ThostFtdcInputOrderActionField^ pInputOrderAction, int nRequestID);

		/// <summary>
		///��ѯ��󱨵���������
		/// </summary>
		int ReqQueryMaxOrderVolume(ThostFtdcQueryMaxOrderVolumeField^ pQueryMaxOrderVolume, int nRequestID);

		/// <summary>
		///Ͷ���߽�����ȷ��
		/// </summary>
		int ReqSettlementInfoConfirm(ThostFtdcSettlementInfoConfirmField^ pSettlementInfoConfirm, int nRequestID);

		/// <summary>
		///����ɾ��Ԥ��
		/// </summary>
		int ReqRemoveParkedOrder(ThostFtdcRemoveParkedOrderField^ pRemoveParkedOrder, int nRequestID);

		/// <summary>
		///����ɾ��Ԥ�񳷵�
		/// </summary>
		int ReqRemoveParkedOrderAction(ThostFtdcRemoveParkedOrderActionField^ pRemoveParkedOrderAction, int nRequestID);

		/// <summary>
		///�����ѯ����
		/// </summary>
		int ReqQryOrder(ThostFtdcQryOrderField^ pQryOrder, int nRequestID);

		/// <summary>
		///�����ѯ�ɽ�
		/// </summary>
		int ReqQryTrade(ThostFtdcQryTradeField^ pQryTrade, int nRequestID);

		/// <summary>
		///�����ѯͶ���ֲ߳�
		/// </summary>
		int ReqQryInvestorPosition(ThostFtdcQryInvestorPositionField^ pQryInvestorPosition, int nRequestID);

		/// <summary>
		///�����ѯ�ʽ��˻�
		/// </summary>
		int ReqQryTradingAccount(ThostFtdcQryTradingAccountField^ pQryTradingAccount, int nRequestID);

		/// <summary>
		///�����ѯͶ����
		/// </summary>
		int ReqQryInvestor(ThostFtdcQryInvestorField^ pQryInvestor, int nRequestID);

		/// <summary>
		///�����ѯ���ױ���
		/// </summary>
		int ReqQryTradingCode(ThostFtdcQryTradingCodeField^ pQryTradingCode, int nRequestID);

		/// <summary>
		///�����ѯ��Լ��֤����
		/// </summary>
		int ReqQryInstrumentMarginRate(ThostFtdcQryInstrumentMarginRateField^ pQryInstrumentMarginRate, int nRequestID);

		/// <summary>
		///�����ѯ��Լ��������
		/// </summary>
		int ReqQryInstrumentCommissionRate(ThostFtdcQryInstrumentCommissionRateField^ pQryInstrumentCommissionRate, int nRequestID);

		/// <summary>
		///�����ѯ������
		/// </summary>
		int ReqQryExchange(ThostFtdcQryExchangeField^ pQryExchange, int nRequestID);

		/// <summary>
		///�����ѯ��Լ
		/// </summary>
		int ReqQryInstrument(ThostFtdcQryInstrumentField^ pQryInstrument, int nRequestID);

		/// <summary>
		///�����ѯ����
		/// </summary>
		int ReqQryDepthMarketData(ThostFtdcQryDepthMarketDataField^ pQryDepthMarketData, int nRequestID);

		/// <summary>
		///�����ѯͶ���߽�����
		/// </summary>
		int ReqQrySettlementInfo(ThostFtdcQrySettlementInfoField^ pQrySettlementInfo, int nRequestID);

		/// <summary>
		///�����ѯת������
		/// </summary>
		int ReqQryTransferBank(ThostFtdcQryTransferBankField^ pQryTransferBank, int nRequestID);

		/// <summary>
		///�����ѯͶ���ֲ߳���ϸ
		/// </summary>
		int ReqQryInvestorPositionDetail(ThostFtdcQryInvestorPositionDetailField^ pQryInvestorPositionDetail, int nRequestID);

		/// <summary>
		///�����ѯ�ͻ�֪ͨ
		/// </summary>
		int ReqQryNotice(ThostFtdcQryNoticeField^ pQryNotice, int nRequestID);

		/// <summary>
		///�����ѯ������Ϣȷ��
		/// </summary>
		int ReqQrySettlementInfoConfirm(ThostFtdcQrySettlementInfoConfirmField^ pQrySettlementInfoConfirm, int nRequestID);

		/// <summary>
		///�����ѯͶ���ֲ߳���ϸ
		/// </summary>
		int ReqQryInvestorPositionCombineDetail(ThostFtdcQryInvestorPositionCombineDetailField^ pQryInvestorPositionCombineDetail, int nRequestID);

		/// <summary>
		///�����ѯ��֤����ϵͳ���͹�˾�ʽ��˻���Կ
		/// </summary>
		int ReqQryCFMMCTradingAccountKey(ThostFtdcQryCFMMCTradingAccountKeyField^ pQryCFMMCTradingAccountKey, int nRequestID);

		/// <summary>
		///�����ѯ�ֵ��۵���Ϣ
		/// </summary>
		int ReqQryEWarrantOffset(ThostFtdcQryEWarrantOffsetField^ pQryEWarrantOffset, int nRequestID);

		/// <summary>
		///�����ѯת����ˮ
		/// </summary>
		int ReqQryTransferSerial(ThostFtdcQryTransferSerialField^ pQryTransferSerial, int nRequestID);

		/// <summary>
		///�����ѯ����ǩԼ��ϵ
		/// </summary>
		int ReqQryAccountregister(ThostFtdcQryAccountregisterField^ pQryAccountregister, int nRequestID);

		/// <summary>
		///�����ѯǩԼ����
		/// </summary>
		int ReqQryContractBank(ThostFtdcQryContractBankField^ pQryContractBank, int nRequestID);

		/// <summary>
		///�����ѯԤ��
		/// </summary>
		int ReqQryParkedOrder(ThostFtdcQryParkedOrderField^ pQryParkedOrder, int nRequestID);

		/// <summary>
		///�����ѯԤ�񳷵�
		/// </summary>
		int ReqQryParkedOrderAction(ThostFtdcQryParkedOrderActionField^ pQryParkedOrderAction, int nRequestID);

		/// <summary>
		///�����ѯ����֪ͨ
		/// </summary>
		int ReqQryTradingNotice(ThostFtdcQryTradingNoticeField^ pQryTradingNotice, int nRequestID);

		/// <summary>
		///�����ѯ���͹�˾���ײ���
		/// </summary>
		int ReqQryBrokerTradingParams(ThostFtdcQryBrokerTradingParamsField^ pQryBrokerTradingParams, int nRequestID);

		/// <summary>
		///�����ѯ���͹�˾�����㷨
		/// </summary>
		int ReqQryBrokerTradingAlgos(ThostFtdcQryBrokerTradingAlgosField^ pQryBrokerTradingAlgos, int nRequestID);

		/// <summary>
		///�ڻ����������ʽ�ת�ڻ�����
		/// </summary>
		int ReqFromBankToFutureByFuture(ThostFtdcReqTransferField^ pReqTransfer, int nRequestID);

		/// <summary>
		///�ڻ������ڻ��ʽ�ת��������
		/// </summary>
		int ReqFromFutureToBankByFuture(ThostFtdcReqTransferField^ pReqTransfer, int nRequestID);

		/// <summary>
		///�ڻ������ѯ�����������
		/// </summary>
		int ReqQueryBankAccountMoneyByFuture(ThostFtdcReqQueryAccountField^ pReqQueryAccount, int nRequestID);

		// events
	public:
		/// <summary>
		/// ���ͻ����뽻�׺�̨������ͨ������ʱ����δ��¼ǰ�����÷��������á�
		/// </summary>
		event FrontConnected^ OnFrontConnected {
			void add(FrontConnected^ handler ) {
				FrontConnected_delegate += handler;
			}
			void remove(FrontConnected^ handler) {
				FrontConnected_delegate -= handler;
			}
			void raise() {
				if(FrontConnected_delegate)
					FrontConnected_delegate();
			}
		}

		/// <summary>
		/// ���ͻ����뽻�׺�̨ͨ�����ӶϿ�ʱ���÷��������á���������������API���Զ��������ӣ��ͻ��˿ɲ�������
		/// ����ԭ��
		/// 0x1001 �����ʧ��
		/// 0x1002 ����дʧ��
		/// 0x2001 ����������ʱ
		/// 0x2002 ��������ʧ��
		/// 0x2003 �յ�������
		/// </summary>
		event FrontDisconnected^ OnFrontDisconnected {
			void add(FrontDisconnected^ handler ) {
				FrontDisconnected_delegate += handler;
			}
			void remove(FrontDisconnected^ handler) {
				FrontDisconnected_delegate -= handler;
			}
			void raise(int nReason) {
				if(FrontDisconnected_delegate)
					FrontDisconnected_delegate(nReason);
			}
		}

		/// <summary>
		///������ʱ���档����ʱ��δ�յ�����ʱ���÷��������á�
		///@param nTimeLapse �����ϴν��ձ��ĵ�ʱ��
		/// </summary>
		event HeartBeatWarning^ OnHeartBeatWarning {
			void add(HeartBeatWarning^ handler ) {
				HeartBeatWarning_delegate += handler;
			}
			void remove(HeartBeatWarning^ handler) {
				HeartBeatWarning_delegate -= handler;
			}
			void raise(int nTimeLapse) {
				if(HeartBeatWarning_delegate)
					HeartBeatWarning_delegate(nTimeLapse);
			}
		}

		/// <summary>
		/// ��¼������Ӧ
		/// </summary>
		event RspUserLogin^ OnRspUserLogin {
			void add(RspUserLogin^ handler ) {
				RspUserLogin_delegate += handler;
			}
			void remove(RspUserLogin^ handler) {
				RspUserLogin_delegate -= handler;
			}
			void raise(ThostFtdcRspUserLoginField^ pRspUserLogin, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast) { 
				if(RspUserLogin_delegate)
					RspUserLogin_delegate(pRspUserLogin, pRspInfo, nRequestID, bIsLast);
			}
		}

		/// <summary>
		/// �ǳ�������Ӧ
		/// </summary>
		event RspUserLogout^ OnRspUserLogout {
			void add(RspUserLogout^ handler ) {RspUserLogout_delegate += handler;}
			void remove(RspUserLogout^ handler) {RspUserLogout_delegate -= handler;}
			void raise(ThostFtdcUserLogoutField^ pUserLogout, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast) { 
				if(RspUserLogout_delegate) RspUserLogout_delegate(pUserLogout, pRspInfo, nRequestID, bIsLast); }
		}


		/// <summary>
		/// �ͻ�����֤��Ӧ
		/// </summary>
		event RspAuthenticate^ OnRspAuthenticate{
			void add(RspAuthenticate^ handler) { RspAuthenticate_delegate += handler; }
			void remove(RspAuthenticate^ handler) { RspAuthenticate_delegate -= handler; }
			void raise(ThostFtdcRspAuthenticateField^ pRspAuthenticateField, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast) {
				if(RspAuthenticate_delegate) RspAuthenticate_delegate(pRspAuthenticateField, pRspInfo, nRequestID, bIsLast);
			}
		}

		/// <summary>
		/// �û��������������Ӧ
		/// </summary>
		event RspUserPasswordUpdate^ OnRspUserPasswordUpdate{
			void add(RspUserPasswordUpdate^ handler) { RspUserPasswordUpdate_delegate += handler; }
			void remove(RspUserPasswordUpdate^ handler) { RspUserPasswordUpdate_delegate -= handler; }
			void raise(ThostFtdcUserPasswordUpdateField^ pUserPasswordUpdate, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast) {
				if(RspUserPasswordUpdate_delegate) RspUserPasswordUpdate_delegate(pUserPasswordUpdate, pRspInfo, nRequestID, bIsLast);
			}
		}

		/// <summary>
		/// �ʽ��˻��������������Ӧ
		/// </summary>
		event RspTradingAccountPasswordUpdate^ OnRspTradingAccountPasswordUpdate{
			void add(RspTradingAccountPasswordUpdate^ handler) { RspTradingAccountPasswordUpdate_delegate += handler; }
			void remove(RspTradingAccountPasswordUpdate^ handler) { RspTradingAccountPasswordUpdate_delegate -= handler; }
			void raise(ThostFtdcTradingAccountPasswordUpdateField^ pTradingAccountPasswordUpdate, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast) {
				if(RspTradingAccountPasswordUpdate_delegate) RspTradingAccountPasswordUpdate_delegate(pTradingAccountPasswordUpdate, pRspInfo, nRequestID, bIsLast);
			}
		}

		/// <summary>
		/// ����¼��������Ӧ
		/// </summary>
		event RspOrderInsert^ OnRspOrderInsert{
			void add(RspOrderInsert^ handler) { RspOrderInsert_delegate += handler; }
			void remove(RspOrderInsert^ handler) { RspOrderInsert_delegate -= handler; }
			void raise(ThostFtdcInputOrderField^ pInputOrder, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast) {
				if(RspOrderInsert_delegate) RspOrderInsert_delegate(pInputOrder, pRspInfo, nRequestID, bIsLast);
			}
		}

		/// <summary>
		/// Ԥ��¼��������Ӧ
		/// </summary>
		event RspParkedOrderInsert^ OnRspParkedOrderInsert{
			void add(RspParkedOrderInsert^ handler) { RspParkedOrderInsert_delegate += handler; }
			void remove(RspParkedOrderInsert^ handler) { RspParkedOrderInsert_delegate -= handler; }
			void raise(ThostFtdcParkedOrderField^ pParkedOrder, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast) {
				if(RspParkedOrderInsert_delegate) RspParkedOrderInsert_delegate(pParkedOrder, pRspInfo, nRequestID, bIsLast);
			}
		}

		/// <summary>
		/// Ԥ�񳷵�¼��������Ӧ
		/// </summary>
		event RspParkedOrderAction^ OnRspParkedOrderAction{
			void add(RspParkedOrderAction^ handler) { RspParkedOrderAction_delegate += handler; }
			void remove(RspParkedOrderAction^ handler) { RspParkedOrderAction_delegate -= handler; }
			void raise(ThostFtdcParkedOrderActionField^ pParkedOrderAction, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast) {
				if(RspParkedOrderAction_delegate) RspParkedOrderAction_delegate(pParkedOrderAction, pRspInfo, nRequestID, bIsLast);
			}
		}

		/// <summary>
		/// ��������������Ӧ
		/// </summary>
		event RspOrderAction^ OnRspOrderAction{
			void add(RspOrderAction^ handler) { RspOrderAction_delegate += handler; }
			void remove(RspOrderAction^ handler) { RspOrderAction_delegate -= handler; }
			void raise(ThostFtdcInputOrderActionField^ pInputOrderAction, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast) {
				if(RspOrderAction_delegate) RspOrderAction_delegate(pInputOrderAction, pRspInfo, nRequestID, bIsLast);
			}
		}

		/// <summary>
		/// ��ѯ��󱨵�������Ӧ
		/// </summary>
		event RspQueryMaxOrderVolume^ OnRspQueryMaxOrderVolume{
			void add(RspQueryMaxOrderVolume^ handler) { RspQueryMaxOrderVolume_delegate += handler; }
			void remove(RspQueryMaxOrderVolume^ handler) { RspQueryMaxOrderVolume_delegate -= handler; }
			void raise(ThostFtdcQueryMaxOrderVolumeField^ pQueryMaxOrderVolume, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast) {
				if(RspQueryMaxOrderVolume_delegate) RspQueryMaxOrderVolume_delegate(pQueryMaxOrderVolume, pRspInfo, nRequestID, bIsLast);
			}
		}

		/// <summary>
		/// Ͷ���߽�����ȷ����Ӧ
		/// </summary>
		event RspSettlementInfoConfirm^ OnRspSettlementInfoConfirm{
			void add(RspSettlementInfoConfirm^ handler) { RspSettlementInfoConfirm_delegate += handler; }
			void remove(RspSettlementInfoConfirm^ handler) { RspSettlementInfoConfirm_delegate -= handler; }
			void raise(ThostFtdcSettlementInfoConfirmField^ pSettlementInfoConfirm, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast) {
				if(RspSettlementInfoConfirm_delegate) RspSettlementInfoConfirm_delegate(pSettlementInfoConfirm, pRspInfo, nRequestID, bIsLast);
			}
		}

		/// <summary>
		/// ɾ��Ԥ����Ӧ
		/// </summary>
		event RspRemoveParkedOrder^ OnRspRemoveParkedOrder{
			void add(RspRemoveParkedOrder^ handler) { RspRemoveParkedOrder_delegate += handler; }
			void remove(RspRemoveParkedOrder^ handler) { RspRemoveParkedOrder_delegate -= handler; }
			void raise(ThostFtdcRemoveParkedOrderField^ pRemoveParkedOrder, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast) {
				if(RspRemoveParkedOrder_delegate) RspRemoveParkedOrder_delegate(pRemoveParkedOrder, pRspInfo, nRequestID, bIsLast);
			}
		}
		/// <summary>
		/// ɾ��Ԥ�񳷵���Ӧ
		/// </summary>
		event RspRemoveParkedOrderAction^ OnRspRemoveParkedOrderAction{
			void add(RspRemoveParkedOrderAction^ handler) { RspRemoveParkedOrderAction_delegate += handler; }
			void remove(RspRemoveParkedOrderAction^ handler) { RspRemoveParkedOrderAction_delegate -= handler; }
			void raise(ThostFtdcRemoveParkedOrderActionField^ pRemoveParkedOrderAction, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast) {
				if(RspRemoveParkedOrderAction_delegate) RspRemoveParkedOrderAction_delegate(pRemoveParkedOrderAction, pRspInfo, nRequestID, bIsLast);
			}
		}
		/// <summary>
		/// �����ѯ������Ӧ
		/// </summary>
		event RspQryOrder^ OnRspQryOrder{
			void add(RspQryOrder^ handler) { RspQryOrder_delegate += handler; }
			void remove(RspQryOrder^ handler) { RspQryOrder_delegate -= handler; }
			void raise(ThostFtdcOrderField^ pOrder, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast) {
				if(RspQryOrder_delegate) RspQryOrder_delegate(pOrder, pRspInfo, nRequestID, bIsLast);
			}
		}
		/// <summary>
		/// �����ѯ�ɽ���Ӧ
		/// </summary>
		event RspQryTrade^ OnRspQryTrade{
			void add(RspQryTrade^ handler) { RspQryTrade_delegate += handler; }
			void remove(RspQryTrade^ handler) { RspQryTrade_delegate -= handler; }
			void raise(ThostFtdcTradeField^ pTrade, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast) {
				if(RspQryTrade_delegate) RspQryTrade_delegate(pTrade, pRspInfo, nRequestID, bIsLast);
			}
		}
		/// <summary>
		/// �����ѯͶ���ֲ߳���Ӧ
		/// </summary>
		event RspQryInvestorPosition^ OnRspQryInvestorPosition{
			void add(RspQryInvestorPosition^ handler) { RspQryInvestorPosition_delegate += handler; }
			void remove(RspQryInvestorPosition^ handler) { RspQryInvestorPosition_delegate -= handler; }
			void raise(ThostFtdcInvestorPositionField^ pInvestorPosition, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast) {
				if(RspQryInvestorPosition_delegate) RspQryInvestorPosition_delegate(pInvestorPosition, pRspInfo, nRequestID, bIsLast);
			}
		}
		/// <summary>
		/// �����ѯ�ʽ��˻���Ӧ
		/// </summary>
		event RspQryTradingAccount^ OnRspQryTradingAccount{
			void add(RspQryTradingAccount^ handler) { RspQryTradingAccount_delegate += handler; }
			void remove(RspQryTradingAccount^ handler) { RspQryTradingAccount_delegate -= handler; }
			void raise(ThostFtdcTradingAccountField^ pTradingAccount, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast) {
				if(RspQryTradingAccount_delegate) RspQryTradingAccount_delegate(pTradingAccount, pRspInfo, nRequestID, bIsLast);
			}
		}
		/// <summary>
		/// �����ѯͶ������Ӧ
		/// </summary>
		event RspQryInvestor^ OnRspQryInvestor{
			void add(RspQryInvestor^ handler) { RspQryInvestor_delegate += handler; }
			void remove(RspQryInvestor^ handler) { RspQryInvestor_delegate -= handler; }
			void raise(ThostFtdcInvestorField^ pInvestor, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast) {
				if(RspQryInvestor_delegate) RspQryInvestor_delegate(pInvestor, pRspInfo, nRequestID, bIsLast);
			}
		}
		/// <summary>
		/// �����ѯ���ױ�����Ӧ
		/// </summary>
		event RspQryTradingCode^ OnRspQryTradingCode{
			void add(RspQryTradingCode^ handler) { RspQryTradingCode_delegate += handler; }
			void remove(RspQryTradingCode^ handler) { RspQryTradingCode_delegate -= handler; }
			void raise(ThostFtdcTradingCodeField^ pTradingCode, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast) {
				if(RspQryTradingCode_delegate) RspQryTradingCode_delegate(pTradingCode, pRspInfo, nRequestID, bIsLast);
			}
		}
		/// <summary>
		/// �����ѯ��Լ��֤������Ӧ
		/// </summary>
		event RspQryInstrumentMarginRate^ OnRspQryInstrumentMarginRate{
			void add(RspQryInstrumentMarginRate^ handler) { RspQryInstrumentMarginRate_delegate += handler; }
			void remove(RspQryInstrumentMarginRate^ handler) { RspQryInstrumentMarginRate_delegate -= handler; }
			void raise(ThostFtdcInstrumentMarginRateField^ pInstrumentMarginRate, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast) {
				if(RspQryInstrumentMarginRate_delegate) RspQryInstrumentMarginRate_delegate(pInstrumentMarginRate, pRspInfo, nRequestID, bIsLast);
			}
		}
		/// <summary>
		/// �����ѯ��Լ����������Ӧ
		/// </summary>
		event RspQryInstrumentCommissionRate^ OnRspQryInstrumentCommissionRate{
			void add(RspQryInstrumentCommissionRate^ handler) { RspQryInstrumentCommissionRate_delegate += handler; }
			void remove(RspQryInstrumentCommissionRate^ handler) { RspQryInstrumentCommissionRate_delegate -= handler; }
			void raise(ThostFtdcInstrumentCommissionRateField^ pInstrumentCommissionRate, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast) {
				if(RspQryInstrumentCommissionRate_delegate) RspQryInstrumentCommissionRate_delegate(pInstrumentCommissionRate, pRspInfo, nRequestID, bIsLast);
			}
		}
		/// <summary>
		/// �����ѯ��������Ӧ
		/// </summary>
		event RspQryExchange^ OnRspQryExchange{
			void add(RspQryExchange^ handler) { RspQryExchange_delegate += handler; }
			void remove(RspQryExchange^ handler) { RspQryExchange_delegate -= handler; }
			void raise(ThostFtdcExchangeField^ pExchange, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast) {
				if(RspQryExchange_delegate) RspQryExchange_delegate(pExchange, pRspInfo, nRequestID, bIsLast);
			}
		}
		/// <summary>
		/// �����ѯ��Լ��Ӧ
		/// </summary>
		event RspQryInstrument^ OnRspQryInstrument{
			void add(RspQryInstrument^ handler) { RspQryInstrument_delegate += handler; }
			void remove(RspQryInstrument^ handler) { RspQryInstrument_delegate -= handler; }
			void raise(ThostFtdcInstrumentField^ pInstrument, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast) {
				if(RspQryInstrument_delegate) RspQryInstrument_delegate(pInstrument, pRspInfo, nRequestID, bIsLast);
			}
		}
		/// <summary>
		/// �����ѯ������Ӧ
		/// </summary>
		event RspQryDepthMarketData^ OnRspQryDepthMarketData{
			void add(RspQryDepthMarketData^ handler) { RspQryDepthMarketData_delegate += handler; }
			void remove(RspQryDepthMarketData^ handler) { RspQryDepthMarketData_delegate -= handler; }
			void raise(ThostFtdcDepthMarketDataField^ pDepthMarketData, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast) {
				if(RspQryDepthMarketData_delegate) RspQryDepthMarketData_delegate(pDepthMarketData, pRspInfo, nRequestID, bIsLast);
			}
		}
		/// <summary>
		/// �����ѯͶ���߽�������Ӧ
		/// </summary>
		event RspQrySettlementInfo^ OnRspQrySettlementInfo{
			void add(RspQrySettlementInfo^ handler) { RspQrySettlementInfo_delegate += handler; }
			void remove(RspQrySettlementInfo^ handler) { RspQrySettlementInfo_delegate -= handler; }
			void raise(ThostFtdcSettlementInfoField^ pSettlementInfo, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast) {
				if(RspQrySettlementInfo_delegate) RspQrySettlementInfo_delegate(pSettlementInfo, pRspInfo, nRequestID, bIsLast);
			}
		}
		/// <summary>
		/// �����ѯת��������Ӧ
		/// </summary>
		event RspQryTransferBank^ OnRspQryTransferBank{
			void add(RspQryTransferBank^ handler) { RspQryTransferBank_delegate += handler; }
			void remove(RspQryTransferBank^ handler) { RspQryTransferBank_delegate -= handler; }
			void raise(ThostFtdcTransferBankField^ pTransferBank, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast) {
				if(RspQryTransferBank_delegate) RspQryTransferBank_delegate(pTransferBank, pRspInfo, nRequestID, bIsLast);
			}
		}
		/// <summary>
		/// �����ѯͶ���ֲ߳���ϸ��Ӧ
		/// </summary>
		event RspQryInvestorPositionDetail^ OnRspQryInvestorPositionDetail{
			void add(RspQryInvestorPositionDetail^ handler) { RspQryInvestorPositionDetail_delegate += handler; }
			void remove(RspQryInvestorPositionDetail^ handler) { RspQryInvestorPositionDetail_delegate -= handler; }
			void raise(ThostFtdcInvestorPositionDetailField^ pInvestorPositionDetail, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast) {
				if(RspQryInvestorPositionDetail_delegate) RspQryInvestorPositionDetail_delegate(pInvestorPositionDetail, pRspInfo, nRequestID, bIsLast);
			}
		}
		/// <summary>
		/// �����ѯ�ͻ�֪ͨ��Ӧ
		/// </summary>
		event RspQryNotice^ OnRspQryNotice{
			void add(RspQryNotice^ handler) { RspQryNotice_delegate += handler; }
			void remove(RspQryNotice^ handler) { RspQryNotice_delegate -= handler; }
			void raise(ThostFtdcNoticeField^ pNotice, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast) {
				if(RspQryNotice_delegate) RspQryNotice_delegate(pNotice, pRspInfo, nRequestID, bIsLast);
			}
		}
		/// <summary>
		/// �����ѯ������Ϣȷ����Ӧ
		/// </summary>
		event RspQrySettlementInfoConfirm^ OnRspQrySettlementInfoConfirm{
			void add(RspQrySettlementInfoConfirm^ handler) { RspQrySettlementInfoConfirm_delegate += handler; }
			void remove(RspQrySettlementInfoConfirm^ handler) { RspQrySettlementInfoConfirm_delegate -= handler; }
			void raise(ThostFtdcSettlementInfoConfirmField^ pSettlementInfoConfirm, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast) {
				if(RspQrySettlementInfoConfirm_delegate) RspQrySettlementInfoConfirm_delegate(pSettlementInfoConfirm, pRspInfo, nRequestID, bIsLast);
			}
		}
		/// <summary>
		/// �����ѯͶ���ֲ߳���ϸ��Ӧ
		/// </summary>
		event RspQryInvestorPositionCombineDetail^ OnRspQryInvestorPositionCombineDetail{
			void add(RspQryInvestorPositionCombineDetail^ handler) { RspQryInvestorPositionCombineDetail_delegate += handler; }
			void remove(RspQryInvestorPositionCombineDetail^ handler) { RspQryInvestorPositionCombineDetail_delegate -= handler; }
			void raise(ThostFtdcInvestorPositionCombineDetailField^ pInvestorPositionCombineDetail, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast) {
				if(RspQryInvestorPositionCombineDetail_delegate) RspQryInvestorPositionCombineDetail_delegate(pInvestorPositionCombineDetail, pRspInfo, nRequestID, bIsLast);
			}
		}
		/// <summary>
		/// ��ѯ��֤����ϵͳ���͹�˾�ʽ��˻���Կ��Ӧ
		/// </summary>
		event RspQryCFMMCTradingAccountKey^ OnRspQryCFMMCTradingAccountKey{
			void add(RspQryCFMMCTradingAccountKey^ handler) { RspQryCFMMCTradingAccountKey_delegate += handler; }
			void remove(RspQryCFMMCTradingAccountKey^ handler) { RspQryCFMMCTradingAccountKey_delegate -= handler; }
			void raise(ThostFtdcCFMMCTradingAccountKeyField^ pCFMMCTradingAccountKey, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast) {
				if(RspQryCFMMCTradingAccountKey_delegate) RspQryCFMMCTradingAccountKey_delegate(pCFMMCTradingAccountKey, pRspInfo, nRequestID, bIsLast);
			}
		}
		/// <summary>
		/// �����ѯ�ֵ��۵���Ϣ��Ӧ
		/// </summary>
		event RspQryEWarrantOffset^ OnRspQryEWarrantOffset{
			void add(RspQryEWarrantOffset^ handler) { RspQryEWarrantOffset_delegate += handler; }
			void remove(RspQryEWarrantOffset^ handler) { RspQryEWarrantOffset_delegate -= handler; }
			void raise(ThostFtdcEWarrantOffsetField^ pEWarrantOffset, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast) {
				if(RspQryEWarrantOffset_delegate) RspQryEWarrantOffset_delegate(pEWarrantOffset, pRspInfo, nRequestID, bIsLast);
			}
		}
		/// <summary>
		/// �����ѯת����ˮ��Ӧ
		/// </summary>
		event RspQryTransferSerial^ OnRspQryTransferSerial{
			void add(RspQryTransferSerial^ handler) { RspQryTransferSerial_delegate += handler; }
			void remove(RspQryTransferSerial^ handler) { RspQryTransferSerial_delegate -= handler; }
			void raise(ThostFtdcTransferSerialField^ pTransferSerial, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast) {
				if(RspQryTransferSerial_delegate) RspQryTransferSerial_delegate(pTransferSerial, pRspInfo, nRequestID, bIsLast);
			}
		}
		/// <summary>
		/// �����ѯ����ǩԼ��ϵ��Ӧ
		/// </summary>
		event RspQryAccountregister^ OnRspQryAccountregister{
			void add(RspQryAccountregister^ handler) { RspQryAccountregister_delegate += handler; }
			void remove(RspQryAccountregister^ handler) { RspQryAccountregister_delegate -= handler; }
			void raise(ThostFtdcAccountregisterField^ pAccountregister, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast) {
				if(RspQryAccountregister_delegate) RspQryAccountregister_delegate(pAccountregister, pRspInfo, nRequestID, bIsLast);
			}
		}

		/// <summary>
		/// ����Ӧ��
		/// </summary>
		event RspError^ OnRspError {
			void add(RspError^ handler ) { RspError_delegate += handler; }
			void remove(RspError^ handler) {RspError_delegate -= handler; }
			void raise(ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast) { if(RspError_delegate) RspError_delegate(pRspInfo, nRequestID, bIsLast); }
		}
		/// <summary>
		/// ����֪ͨ
		/// </summary>
		event RtnOrder^ OnRtnOrder{
			void add(RtnOrder^ handler) { RtnOrder_delegate += handler; }
			void remove(RtnOrder^ handler) { RtnOrder_delegate -= handler; }
			void raise(ThostFtdcOrderField^ pOrder) {
				if(RtnOrder_delegate) RtnOrder_delegate(pOrder);
			}
		}
		/// <summary>
		/// �ɽ�֪ͨ
		/// </summary>
		event RtnTrade^ OnRtnTrade{
			void add(RtnTrade^ handler) { RtnTrade_delegate += handler; }
			void remove(RtnTrade^ handler) { RtnTrade_delegate -= handler; }
			void raise(ThostFtdcTradeField^ pTrade) {
				if(RtnTrade_delegate) RtnTrade_delegate(pTrade);
			}
		}
		/// <summary>
		/// ����¼�����ر�
		/// </summary>
		event ErrRtnOrderInsert^ OnErrRtnOrderInsert{
			void add(ErrRtnOrderInsert^ handler) { ErrRtnOrderInsert_delegate += handler; }
			void remove(ErrRtnOrderInsert^ handler) { ErrRtnOrderInsert_delegate -= handler; }
			void raise(ThostFtdcInputOrderField^ pInputOrder, ThostFtdcRspInfoField^ pRspInfo) {
				if(ErrRtnOrderInsert_delegate) ErrRtnOrderInsert_delegate(pInputOrder, pRspInfo);
			}
		}
		/// <summary>
		/// ������������ر�
		/// </summary>
		event ErrRtnOrderAction^ OnErrRtnOrderAction{
			void add(ErrRtnOrderAction^ handler) { ErrRtnOrderAction_delegate += handler; }
			void remove(ErrRtnOrderAction^ handler) { ErrRtnOrderAction_delegate -= handler; }
			void raise(ThostFtdcOrderActionField^ pOrderAction, ThostFtdcRspInfoField^ pRspInfo) {
				if(ErrRtnOrderAction_delegate) ErrRtnOrderAction_delegate(pOrderAction, pRspInfo);
			}
		}
		/// <summary>
		/// ��Լ����״̬֪ͨ
		/// </summary>
		event RtnInstrumentStatus^ OnRtnInstrumentStatus{
			void add(RtnInstrumentStatus^ handler) { RtnInstrumentStatus_delegate += handler; }
			void remove(RtnInstrumentStatus^ handler) { RtnInstrumentStatus_delegate -= handler; }
			void raise(ThostFtdcInstrumentStatusField^ pInstrumentStatus) {
				if(RtnInstrumentStatus_delegate) RtnInstrumentStatus_delegate(pInstrumentStatus);
			}
		}
		/// <summary>
		/// ����֪ͨ
		/// </summary>
		event RtnTradingNotice^ OnRtnTradingNotice{
			void add(RtnTradingNotice^ handler) { RtnTradingNotice_delegate += handler; }
			void remove(RtnTradingNotice^ handler) { RtnTradingNotice_delegate -= handler; }
			void raise(ThostFtdcTradingNoticeInfoField^ pTradingNoticeInfo) {
				if(RtnTradingNotice_delegate) RtnTradingNotice_delegate(pTradingNoticeInfo);
			}
		}
		/// <summary>
		/// ��ʾ������У�����
		/// </summary>
		event RtnErrorConditionalOrder^ OnRtnErrorConditionalOrder{
			void add(RtnErrorConditionalOrder^ handler) { RtnErrorConditionalOrder_delegate += handler; }
			void remove(RtnErrorConditionalOrder^ handler) { RtnErrorConditionalOrder_delegate -= handler; }
			void raise(ThostFtdcErrorConditionalOrderField^ pErrorConditionalOrder) {
				if(RtnErrorConditionalOrder_delegate) RtnErrorConditionalOrder_delegate(pErrorConditionalOrder);
			}
		}
		/// <summary>
		/// �����ѯǩԼ������Ӧ
		/// </summary>
		event RspQryContractBank^ OnRspQryContractBank{
			void add(RspQryContractBank^ handler) { RspQryContractBank_delegate += handler; }
			void remove(RspQryContractBank^ handler) { RspQryContractBank_delegate -= handler; }
			void raise(ThostFtdcContractBankField^ pContractBank, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast) {
				if(RspQryContractBank_delegate) RspQryContractBank_delegate(pContractBank, pRspInfo, nRequestID, bIsLast);
			}
		}
		/// <summary>
		/// �����ѯԤ����Ӧ
		/// </summary>
		event RspQryParkedOrder^ OnRspQryParkedOrder{
			void add(RspQryParkedOrder^ handler) { RspQryParkedOrder_delegate += handler; }
			void remove(RspQryParkedOrder^ handler) { RspQryParkedOrder_delegate -= handler; }
			void raise(ThostFtdcParkedOrderField^ pParkedOrder, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast) {
				if(RspQryParkedOrder_delegate) RspQryParkedOrder_delegate(pParkedOrder, pRspInfo, nRequestID, bIsLast);
			}
		}
		/// <summary>
		/// �����ѯԤ�񳷵���Ӧ
		/// </summary>
		event RspQryParkedOrderAction^ OnRspQryParkedOrderAction{
			void add(RspQryParkedOrderAction^ handler) { RspQryParkedOrderAction_delegate += handler; }
			void remove(RspQryParkedOrderAction^ handler) { RspQryParkedOrderAction_delegate -= handler; }
			void raise(ThostFtdcParkedOrderActionField^ pParkedOrderAction, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast) {
				if(RspQryParkedOrderAction_delegate) RspQryParkedOrderAction_delegate(pParkedOrderAction, pRspInfo, nRequestID, bIsLast);
			}
		}
		/// <summary>
		/// �����ѯ����֪ͨ��Ӧ
		/// </summary>
		event RspQryTradingNotice^ OnRspQryTradingNotice{
			void add(RspQryTradingNotice^ handler) { RspQryTradingNotice_delegate += handler; }
			void remove(RspQryTradingNotice^ handler) { RspQryTradingNotice_delegate -= handler; }
			void raise(ThostFtdcTradingNoticeField^ pTradingNotice, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast) {
				if(RspQryTradingNotice_delegate) RspQryTradingNotice_delegate(pTradingNotice, pRspInfo, nRequestID, bIsLast);
			}
		}
		/// <summary>
		/// �����ѯ���͹�˾���ײ�����Ӧ
		/// </summary>
		event RspQryBrokerTradingParams^ OnRspQryBrokerTradingParams{
			void add(RspQryBrokerTradingParams^ handler) { RspQryBrokerTradingParams_delegate += handler; }
			void remove(RspQryBrokerTradingParams^ handler) { RspQryBrokerTradingParams_delegate -= handler; }
			void raise(ThostFtdcBrokerTradingParamsField^ pBrokerTradingParams, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast) {
				if(RspQryBrokerTradingParams_delegate) RspQryBrokerTradingParams_delegate(pBrokerTradingParams, pRspInfo, nRequestID, bIsLast);
			}
		}
		/// <summary>
		/// �����ѯ���͹�˾�����㷨��Ӧ
		/// </summary>
		event RspQryBrokerTradingAlgos^ OnRspQryBrokerTradingAlgos{
			void add(RspQryBrokerTradingAlgos^ handler) { RspQryBrokerTradingAlgos_delegate += handler; }
			void remove(RspQryBrokerTradingAlgos^ handler) { RspQryBrokerTradingAlgos_delegate -= handler; }
			void raise(ThostFtdcBrokerTradingAlgosField^ pBrokerTradingAlgos, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast) {
				if(RspQryBrokerTradingAlgos_delegate) RspQryBrokerTradingAlgos_delegate(pBrokerTradingAlgos, pRspInfo, nRequestID, bIsLast);
			}
		}
		/// <summary>
		/// ���з��������ʽ�ת�ڻ�֪ͨ
		/// </summary>
		event RtnFromBankToFutureByBank^ OnRtnFromBankToFutureByBank{
			void add(RtnFromBankToFutureByBank^ handler) { RtnFromBankToFutureByBank_delegate += handler; }
			void remove(RtnFromBankToFutureByBank^ handler) { RtnFromBankToFutureByBank_delegate -= handler; }
			void raise(ThostFtdcRspTransferField^ pRspTransfer) {
				if(RtnFromBankToFutureByBank_delegate) RtnFromBankToFutureByBank_delegate(pRspTransfer);
			}
		}
		/// <summary>
		/// ���з����ڻ��ʽ�ת����֪ͨ
		/// </summary>
		event RtnFromFutureToBankByBank^ OnRtnFromFutureToBankByBank{
			void add(RtnFromFutureToBankByBank^ handler) { RtnFromFutureToBankByBank_delegate += handler; }
			void remove(RtnFromFutureToBankByBank^ handler) { RtnFromFutureToBankByBank_delegate -= handler; }
			void raise(ThostFtdcRspTransferField^ pRspTransfer) {
				if(RtnFromFutureToBankByBank_delegate) RtnFromFutureToBankByBank_delegate(pRspTransfer);
			}
		}
		/// <summary>
		/// ���з����������ת�ڻ�֪ͨ
		/// </summary>
		event RtnRepealFromBankToFutureByBank^ OnRtnRepealFromBankToFutureByBank{
			void add(RtnRepealFromBankToFutureByBank^ handler) { RtnRepealFromBankToFutureByBank_delegate += handler; }
			void remove(RtnRepealFromBankToFutureByBank^ handler) { RtnRepealFromBankToFutureByBank_delegate -= handler; }
			void raise(ThostFtdcRspRepealField^ pRspRepeal) {
				if(RtnRepealFromBankToFutureByBank_delegate) RtnRepealFromBankToFutureByBank_delegate(pRspRepeal);
			}
		}
		/// <summary>
		/// ���з�������ڻ�ת����֪ͨ
		/// </summary>
		event RtnRepealFromFutureToBankByBank^ OnRtnRepealFromFutureToBankByBank{
			void add(RtnRepealFromFutureToBankByBank^ handler) { RtnRepealFromFutureToBankByBank_delegate += handler; }
			void remove(RtnRepealFromFutureToBankByBank^ handler) { RtnRepealFromFutureToBankByBank_delegate -= handler; }
			void raise(ThostFtdcRspRepealField^ pRspRepeal) {
				if(RtnRepealFromFutureToBankByBank_delegate) RtnRepealFromFutureToBankByBank_delegate(pRspRepeal);
			}
		}
		/// <summary>
		/// �ڻ����������ʽ�ת�ڻ�֪ͨ
		/// </summary>
		event RtnFromBankToFutureByFuture^ OnRtnFromBankToFutureByFuture{
			void add(RtnFromBankToFutureByFuture^ handler) { RtnFromBankToFutureByFuture_delegate += handler; }
			void remove(RtnFromBankToFutureByFuture^ handler) { RtnFromBankToFutureByFuture_delegate -= handler; }
			void raise(ThostFtdcRspTransferField^ pRspTransfer) {
				if(RtnFromBankToFutureByFuture_delegate) RtnFromBankToFutureByFuture_delegate(pRspTransfer);
			}
		}
		/// <summary>
		/// �ڻ������ڻ��ʽ�ת����֪ͨ
		/// </summary>
		event RtnFromFutureToBankByFuture^ OnRtnFromFutureToBankByFuture{
			void add(RtnFromFutureToBankByFuture^ handler) { RtnFromFutureToBankByFuture_delegate += handler; }
			void remove(RtnFromFutureToBankByFuture^ handler) { RtnFromFutureToBankByFuture_delegate -= handler; }
			void raise(ThostFtdcRspTransferField^ pRspTransfer) {
				if(RtnFromFutureToBankByFuture_delegate) RtnFromFutureToBankByFuture_delegate(pRspTransfer);
			}
		}
		/// <summary>
		/// ϵͳ����ʱ�ڻ����ֹ������������ת�ڻ��������д�����Ϻ��̷��ص�֪ͨ
		/// </summary>
		event RtnRepealFromBankToFutureByFutureManual^ OnRtnRepealFromBankToFutureByFutureManual{
			void add(RtnRepealFromBankToFutureByFutureManual^ handler) { RtnRepealFromBankToFutureByFutureManual_delegate += handler; }
			void remove(RtnRepealFromBankToFutureByFutureManual^ handler) { RtnRepealFromBankToFutureByFutureManual_delegate -= handler; }
			void raise(ThostFtdcRspRepealField^ pRspRepeal) {
				if(RtnRepealFromBankToFutureByFutureManual_delegate) RtnRepealFromBankToFutureByFutureManual_delegate(pRspRepeal);
			}
		}
		/// <summary>
		/// ϵͳ����ʱ�ڻ����ֹ���������ڻ�ת�����������д�����Ϻ��̷��ص�֪ͨ
		/// </summary>
		event RtnRepealFromFutureToBankByFutureManual^ OnRtnRepealFromFutureToBankByFutureManual{
			void add(RtnRepealFromFutureToBankByFutureManual^ handler) { RtnRepealFromFutureToBankByFutureManual_delegate += handler; }
			void remove(RtnRepealFromFutureToBankByFutureManual^ handler) { RtnRepealFromFutureToBankByFutureManual_delegate -= handler; }
			void raise(ThostFtdcRspRepealField^ pRspRepeal) {
				if(RtnRepealFromFutureToBankByFutureManual_delegate) RtnRepealFromFutureToBankByFutureManual_delegate(pRspRepeal);
			}
		}
		/// <summary>
		/// �ڻ������ѯ�������֪ͨ
		/// </summary>
		event RtnQueryBankBalanceByFuture^ OnRtnQueryBankBalanceByFuture{
			void add(RtnQueryBankBalanceByFuture^ handler) { RtnQueryBankBalanceByFuture_delegate += handler; }
			void remove(RtnQueryBankBalanceByFuture^ handler) { RtnQueryBankBalanceByFuture_delegate -= handler; }
			void raise(ThostFtdcNotifyQueryAccountField^ pNotifyQueryAccount) {
				if(RtnQueryBankBalanceByFuture_delegate) RtnQueryBankBalanceByFuture_delegate(pNotifyQueryAccount);
			}
		}
		/// <summary>
		/// �ڻ����������ʽ�ת�ڻ�����ر�
		/// </summary>
		event ErrRtnBankToFutureByFuture^ OnErrRtnBankToFutureByFuture{
			void add(ErrRtnBankToFutureByFuture^ handler) { ErrRtnBankToFutureByFuture_delegate += handler; }
			void remove(ErrRtnBankToFutureByFuture^ handler) { ErrRtnBankToFutureByFuture_delegate -= handler; }
			void raise(ThostFtdcReqTransferField^ pReqTransfer, ThostFtdcRspInfoField^ pRspInfo) {
				if(ErrRtnBankToFutureByFuture_delegate) ErrRtnBankToFutureByFuture_delegate(pReqTransfer, pRspInfo);
			}
		}
		/// <summary>
		/// �ڻ������ڻ��ʽ�ת���д���ر�
		/// </summary>
		event ErrRtnFutureToBankByFuture^ OnErrRtnFutureToBankByFuture{
			void add(ErrRtnFutureToBankByFuture^ handler) { ErrRtnFutureToBankByFuture_delegate += handler; }
			void remove(ErrRtnFutureToBankByFuture^ handler) { ErrRtnFutureToBankByFuture_delegate -= handler; }
			void raise(ThostFtdcReqTransferField^ pReqTransfer, ThostFtdcRspInfoField^ pRspInfo) {
				if(ErrRtnFutureToBankByFuture_delegate) ErrRtnFutureToBankByFuture_delegate(pReqTransfer, pRspInfo);
			}
		}
		/// <summary>
		/// ϵͳ����ʱ�ڻ����ֹ������������ת�ڻ�����ر�
		/// </summary>
		event ErrRtnRepealBankToFutureByFutureManual^ OnErrRtnRepealBankToFutureByFutureManual{
			void add(ErrRtnRepealBankToFutureByFutureManual^ handler) { ErrRtnRepealBankToFutureByFutureManual_delegate += handler; }
			void remove(ErrRtnRepealBankToFutureByFutureManual^ handler) { ErrRtnRepealBankToFutureByFutureManual_delegate -= handler; }
			void raise(ThostFtdcReqRepealField^ pReqRepeal, ThostFtdcRspInfoField^ pRspInfo) {
				if(ErrRtnRepealBankToFutureByFutureManual_delegate) ErrRtnRepealBankToFutureByFutureManual_delegate(pReqRepeal, pRspInfo);
			}
		}
		/// <summary>
		/// ϵͳ����ʱ�ڻ����ֹ���������ڻ�ת���д���ر�
		/// </summary>
		event ErrRtnRepealFutureToBankByFutureManual^ OnErrRtnRepealFutureToBankByFutureManual{
			void add(ErrRtnRepealFutureToBankByFutureManual^ handler) { ErrRtnRepealFutureToBankByFutureManual_delegate += handler; }
			void remove(ErrRtnRepealFutureToBankByFutureManual^ handler) { ErrRtnRepealFutureToBankByFutureManual_delegate -= handler; }
			void raise(ThostFtdcReqRepealField^ pReqRepeal, ThostFtdcRspInfoField^ pRspInfo) {
				if(ErrRtnRepealFutureToBankByFutureManual_delegate) ErrRtnRepealFutureToBankByFutureManual_delegate(pReqRepeal, pRspInfo);
			}
		}
		/// <summary>
		/// �ڻ������ѯ����������ر�
		/// </summary>
		event ErrRtnQueryBankBalanceByFuture^ OnErrRtnQueryBankBalanceByFuture{
			void add(ErrRtnQueryBankBalanceByFuture^ handler) { ErrRtnQueryBankBalanceByFuture_delegate += handler; }
			void remove(ErrRtnQueryBankBalanceByFuture^ handler) { ErrRtnQueryBankBalanceByFuture_delegate -= handler; }
			void raise(ThostFtdcReqQueryAccountField^ pReqQueryAccount, ThostFtdcRspInfoField^ pRspInfo) {
				if(ErrRtnQueryBankBalanceByFuture_delegate) ErrRtnQueryBankBalanceByFuture_delegate(pReqQueryAccount, pRspInfo);
			}
		}
		/// <summary>
		/// �ڻ������������ת�ڻ��������д�����Ϻ��̷��ص�֪ͨ
		/// </summary>
		event RtnRepealFromBankToFutureByFuture^ OnRtnRepealFromBankToFutureByFuture{
			void add(RtnRepealFromBankToFutureByFuture^ handler) { RtnRepealFromBankToFutureByFuture_delegate += handler; }
			void remove(RtnRepealFromBankToFutureByFuture^ handler) { RtnRepealFromBankToFutureByFuture_delegate -= handler; }
			void raise(ThostFtdcRspRepealField^ pRspRepeal) {
				if(RtnRepealFromBankToFutureByFuture_delegate) RtnRepealFromBankToFutureByFuture_delegate(pRspRepeal);
			}
		}
		/// <summary>
		/// �ڻ���������ڻ�ת�����������д�����Ϻ��̷��ص�֪ͨ
		/// </summary>
		event RtnRepealFromFutureToBankByFuture^ OnRtnRepealFromFutureToBankByFuture{
			void add(RtnRepealFromFutureToBankByFuture^ handler) { RtnRepealFromFutureToBankByFuture_delegate += handler; }
			void remove(RtnRepealFromFutureToBankByFuture^ handler) { RtnRepealFromFutureToBankByFuture_delegate -= handler; }
			void raise(ThostFtdcRspRepealField^ pRspRepeal) {
				if(RtnRepealFromFutureToBankByFuture_delegate) RtnRepealFromFutureToBankByFuture_delegate(pRspRepeal);
			}
		}
		/// <summary>
		/// �ڻ����������ʽ�ת�ڻ�Ӧ��
		/// </summary>
		event RspFromBankToFutureByFuture^ OnRspFromBankToFutureByFuture{
			void add(RspFromBankToFutureByFuture^ handler) { RspFromBankToFutureByFuture_delegate += handler; }
			void remove(RspFromBankToFutureByFuture^ handler) { RspFromBankToFutureByFuture_delegate -= handler; }
			void raise(ThostFtdcReqTransferField^ pReqTransfer, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast) {
				if(RspFromBankToFutureByFuture_delegate) RspFromBankToFutureByFuture_delegate(pReqTransfer, pRspInfo, nRequestID, bIsLast);
			}
		}
		/// <summary>
		/// �ڻ������ڻ��ʽ�ת����Ӧ��
		/// </summary>
		event RspFromFutureToBankByFuture^ OnRspFromFutureToBankByFuture{
			void add(RspFromFutureToBankByFuture^ handler) { RspFromFutureToBankByFuture_delegate += handler; }
			void remove(RspFromFutureToBankByFuture^ handler) { RspFromFutureToBankByFuture_delegate -= handler; }
			void raise(ThostFtdcReqTransferField^ pReqTransfer, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast) {
				if(RspFromFutureToBankByFuture_delegate) RspFromFutureToBankByFuture_delegate(pReqTransfer, pRspInfo, nRequestID, bIsLast);
			}
		}
		/// <summary>
		/// �ڻ������ѯ�������Ӧ��
		/// </summary>
		event RspQueryBankAccountMoneyByFuture^ OnRspQueryBankAccountMoneyByFuture{
			void add(RspQueryBankAccountMoneyByFuture^ handler) { RspQueryBankAccountMoneyByFuture_delegate += handler; }
			void remove(RspQueryBankAccountMoneyByFuture^ handler) { RspQueryBankAccountMoneyByFuture_delegate -= handler; }
			void raise(ThostFtdcReqQueryAccountField^ pReqQueryAccount, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast) {
				if(RspQueryBankAccountMoneyByFuture_delegate) RspQueryBankAccountMoneyByFuture_delegate(pReqQueryAccount, pRspInfo, nRequestID, bIsLast);
			}
		}
		/// <summary>
		/// ���з������ڿ���֪ͨ
		/// </summary>
		event RtnOpenAccountByBank^ OnRtnOpenAccountByBank{
			void add(RtnOpenAccountByBank^ handler) { RtnOpenAccountByBank_delegate += handler; }
			void remove(RtnOpenAccountByBank^ handler) { RtnOpenAccountByBank_delegate -= handler; }
			void raise(ThostFtdcOpenAccountField^ pOpenAccount) {
				if(RtnOpenAccountByBank_delegate) RtnOpenAccountByBank_delegate(pOpenAccount);
			}
		}
		/// <summary>
		/// ���з�����������֪ͨ
		/// </summary>
		event RtnCancelAccountByBank^ OnRtnCancelAccountByBank{
			void add(RtnCancelAccountByBank^ handler) { RtnCancelAccountByBank_delegate += handler; }
			void remove(RtnCancelAccountByBank^ handler) { RtnCancelAccountByBank_delegate -= handler; }
			void raise(ThostFtdcCancelAccountField^ pCancelAccount) {
				if(RtnCancelAccountByBank_delegate) RtnCancelAccountByBank_delegate(pCancelAccount);
			}
		}
		/// <summary>
		/// ���з����������˺�֪ͨ
		/// </summary>
		event RtnChangeAccountByBank^ OnRtnChangeAccountByBank{
			void add(RtnChangeAccountByBank^ handler) { RtnChangeAccountByBank_delegate += handler; }
			void remove(RtnChangeAccountByBank^ handler) { RtnChangeAccountByBank_delegate -= handler; }
			void raise(ThostFtdcChangeAccountField^ pChangeAccount) {
				if(RtnChangeAccountByBank_delegate) RtnChangeAccountByBank_delegate(pChangeAccount);
			}
		}
		
		// delegates
	private:
		FrontConnected^ FrontConnected_delegate;
		FrontDisconnected^ FrontDisconnected_delegate;
		HeartBeatWarning^ HeartBeatWarning_delegate;
		RspUserLogin^ RspUserLogin_delegate;
		RspUserLogout^ RspUserLogout_delegate;
		RspError^ RspError_delegate;

		RspAuthenticate^ RspAuthenticate_delegate;
		RspUserPasswordUpdate^ RspUserPasswordUpdate_delegate;
		RspTradingAccountPasswordUpdate^ RspTradingAccountPasswordUpdate_delegate;
		RspOrderInsert^ RspOrderInsert_delegate;
		RspParkedOrderInsert^ RspParkedOrderInsert_delegate;
		RspParkedOrderAction^ RspParkedOrderAction_delegate;
		RspOrderAction^ RspOrderAction_delegate;
		RspQueryMaxOrderVolume^ RspQueryMaxOrderVolume_delegate;
		RspSettlementInfoConfirm^ RspSettlementInfoConfirm_delegate;
		RspRemoveParkedOrder^ RspRemoveParkedOrder_delegate;
		RspRemoveParkedOrderAction^ RspRemoveParkedOrderAction_delegate;
		RspQryOrder^ RspQryOrder_delegate;
		RspQryTrade^ RspQryTrade_delegate;
		RspQryInvestorPosition^ RspQryInvestorPosition_delegate;
		RspQryTradingAccount^ RspQryTradingAccount_delegate;
		RspQryInvestor^ RspQryInvestor_delegate;
		RspQryTradingCode^ RspQryTradingCode_delegate;
		RspQryInstrumentMarginRate^ RspQryInstrumentMarginRate_delegate;
		RspQryInstrumentCommissionRate^ RspQryInstrumentCommissionRate_delegate;
		RspQryExchange^ RspQryExchange_delegate;
		RspQryInstrument^ RspQryInstrument_delegate;
		RspQryDepthMarketData^ RspQryDepthMarketData_delegate;
		RspQrySettlementInfo^ RspQrySettlementInfo_delegate;
		RspQryTransferBank^ RspQryTransferBank_delegate;
		RspQryInvestorPositionDetail^ RspQryInvestorPositionDetail_delegate;
		RspQryNotice^ RspQryNotice_delegate;
		RspQrySettlementInfoConfirm^ RspQrySettlementInfoConfirm_delegate;
		RspQryInvestorPositionCombineDetail^ RspQryInvestorPositionCombineDetail_delegate;
		RspQryCFMMCTradingAccountKey^ RspQryCFMMCTradingAccountKey_delegate;
		RspQryEWarrantOffset^ RspQryEWarrantOffset_delegate;
		RspQryTransferSerial^ RspQryTransferSerial_delegate;
		RspQryAccountregister^ RspQryAccountregister_delegate;
		RtnOrder^ RtnOrder_delegate;
		RtnTrade^ RtnTrade_delegate;
		ErrRtnOrderInsert^ ErrRtnOrderInsert_delegate;
		ErrRtnOrderAction^ ErrRtnOrderAction_delegate;
		RtnInstrumentStatus^ RtnInstrumentStatus_delegate;
		RtnTradingNotice^ RtnTradingNotice_delegate;
		RtnErrorConditionalOrder^ RtnErrorConditionalOrder_delegate;
		RspQryContractBank^ RspQryContractBank_delegate;
		RspQryParkedOrder^ RspQryParkedOrder_delegate;
		RspQryParkedOrderAction^ RspQryParkedOrderAction_delegate;
		RspQryTradingNotice^ RspQryTradingNotice_delegate;
		RspQryBrokerTradingParams^ RspQryBrokerTradingParams_delegate;
		RspQryBrokerTradingAlgos^ RspQryBrokerTradingAlgos_delegate;
		RtnFromBankToFutureByBank^ RtnFromBankToFutureByBank_delegate;
		RtnFromFutureToBankByBank^ RtnFromFutureToBankByBank_delegate;
		RtnRepealFromBankToFutureByBank^ RtnRepealFromBankToFutureByBank_delegate;
		RtnRepealFromFutureToBankByBank^ RtnRepealFromFutureToBankByBank_delegate;
		RtnFromBankToFutureByFuture^ RtnFromBankToFutureByFuture_delegate;
		RtnFromFutureToBankByFuture^ RtnFromFutureToBankByFuture_delegate;
		RtnRepealFromBankToFutureByFutureManual^ RtnRepealFromBankToFutureByFutureManual_delegate;
		RtnRepealFromFutureToBankByFutureManual^ RtnRepealFromFutureToBankByFutureManual_delegate;
		RtnQueryBankBalanceByFuture^ RtnQueryBankBalanceByFuture_delegate;
		ErrRtnBankToFutureByFuture^ ErrRtnBankToFutureByFuture_delegate;
		ErrRtnFutureToBankByFuture^ ErrRtnFutureToBankByFuture_delegate;
		ErrRtnRepealBankToFutureByFutureManual^ ErrRtnRepealBankToFutureByFutureManual_delegate;
		ErrRtnRepealFutureToBankByFutureManual^ ErrRtnRepealFutureToBankByFutureManual_delegate;
		ErrRtnQueryBankBalanceByFuture^ ErrRtnQueryBankBalanceByFuture_delegate;
		RtnRepealFromBankToFutureByFuture^ RtnRepealFromBankToFutureByFuture_delegate;
		RtnRepealFromFutureToBankByFuture^ RtnRepealFromFutureToBankByFuture_delegate;
		RspFromBankToFutureByFuture^ RspFromBankToFutureByFuture_delegate;
		RspFromFutureToBankByFuture^ RspFromFutureToBankByFuture_delegate;
		RspQueryBankAccountMoneyByFuture^ RspQueryBankAccountMoneyByFuture_delegate;
		RtnOpenAccountByBank^ RtnOpenAccountByBank_delegate;
		RtnCancelAccountByBank^ RtnCancelAccountByBank_delegate;
		RtnChangeAccountByBank^ RtnChangeAccountByBank_delegate;
#ifdef __CTP_MA__
		// callbacks for MA
	private:
		void cbk_OnFrontConnected();
		void cbk_OnFrontDisconnected(int nReason);
		void cbk_OnHeartBeatWarning(int nTimeLapse);
		void cbk_OnRspAuthenticate(CThostFtdcRspAuthenticateField *pRspAuthenticateField, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
		void cbk_OnRspUserLogin(CThostFtdcRspUserLoginField *pRspUserLogin, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
		void cbk_OnRspUserLogout(CThostFtdcUserLogoutField *pUserLogout, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
		void cbk_OnRspUserPasswordUpdate(CThostFtdcUserPasswordUpdateField *pUserPasswordUpdate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
		void cbk_OnRspTradingAccountPasswordUpdate(CThostFtdcTradingAccountPasswordUpdateField *pTradingAccountPasswordUpdate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
		void cbk_OnRspOrderInsert(CThostFtdcInputOrderField *pInputOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
		void cbk_OnRspParkedOrderInsert(CThostFtdcParkedOrderField *pParkedOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
		void cbk_OnRspParkedOrderAction(CThostFtdcParkedOrderActionField *pParkedOrderAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
		void cbk_OnRspOrderAction(CThostFtdcInputOrderActionField *pInputOrderAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
		void cbk_OnRspQueryMaxOrderVolume(CThostFtdcQueryMaxOrderVolumeField *pQueryMaxOrderVolume, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
		void cbk_OnRspSettlementInfoConfirm(CThostFtdcSettlementInfoConfirmField *pSettlementInfoConfirm, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
		void cbk_OnRspRemoveParkedOrder(CThostFtdcRemoveParkedOrderField *pRemoveParkedOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
		void cbk_OnRspRemoveParkedOrderAction(CThostFtdcRemoveParkedOrderActionField *pRemoveParkedOrderAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
		void cbk_OnRspQryOrder(CThostFtdcOrderField *pOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
		void cbk_OnRspQryTrade(CThostFtdcTradeField *pTrade, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
		void cbk_OnRspQryInvestorPosition(CThostFtdcInvestorPositionField *pInvestorPosition, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
		void cbk_OnRspQryTradingAccount(CThostFtdcTradingAccountField *pTradingAccount, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
		void cbk_OnRspQryInvestor(CThostFtdcInvestorField *pInvestor, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
		void cbk_OnRspQryTradingCode(CThostFtdcTradingCodeField *pTradingCode, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
		void cbk_OnRspQryInstrumentMarginRate(CThostFtdcInstrumentMarginRateField *pInstrumentMarginRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
		void cbk_OnRspQryInstrumentCommissionRate(CThostFtdcInstrumentCommissionRateField *pInstrumentCommissionRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
		void cbk_OnRspQryExchange(CThostFtdcExchangeField *pExchange, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
		void cbk_OnRspQryInstrument(CThostFtdcInstrumentField *pInstrument, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
		void cbk_OnRspQryDepthMarketData(CThostFtdcDepthMarketDataField *pDepthMarketData, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
		void cbk_OnRspQrySettlementInfo(CThostFtdcSettlementInfoField *pSettlementInfo, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
		void cbk_OnRspQryTransferBank(CThostFtdcTransferBankField *pTransferBank, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
		void cbk_OnRspQryInvestorPositionDetail(CThostFtdcInvestorPositionDetailField *pInvestorPositionDetail, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
		void cbk_OnRspQryNotice(CThostFtdcNoticeField *pNotice, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
		void cbk_OnRspQrySettlementInfoConfirm(CThostFtdcSettlementInfoConfirmField *pSettlementInfoConfirm, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
		void cbk_OnRspQryInvestorPositionCombineDetail(CThostFtdcInvestorPositionCombineDetailField *pInvestorPositionCombineDetail, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
		void cbk_OnRspQryCFMMCTradingAccountKey(CThostFtdcCFMMCTradingAccountKeyField *pCFMMCTradingAccountKey, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
		void cbk_OnRspQryEWarrantOffset(CThostFtdcEWarrantOffsetField *pEWarrantOffset, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
		void cbk_OnRspQryTransferSerial(CThostFtdcTransferSerialField *pTransferSerial, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
		void cbk_OnRspQryAccountregister(CThostFtdcAccountregisterField *pAccountregister, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
		void cbk_OnRspError(CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
		void cbk_OnRtnOrder(CThostFtdcOrderField *pOrder);
		void cbk_OnRtnTrade(CThostFtdcTradeField *pTrade);
		void cbk_OnErrRtnOrderInsert(CThostFtdcInputOrderField *pInputOrder, CThostFtdcRspInfoField *pRspInfo);
		void cbk_OnErrRtnOrderAction(CThostFtdcOrderActionField *pOrderAction, CThostFtdcRspInfoField *pRspInfo);
		void cbk_OnRtnInstrumentStatus(CThostFtdcInstrumentStatusField *pInstrumentStatus);
		void cbk_OnRtnTradingNotice(CThostFtdcTradingNoticeInfoField *pTradingNoticeInfo);
		void cbk_OnRtnErrorConditionalOrder(CThostFtdcErrorConditionalOrderField *pErrorConditionalOrder);
		void cbk_OnRspQryContractBank(CThostFtdcContractBankField *pContractBank, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
		void cbk_OnRspQryParkedOrder(CThostFtdcParkedOrderField *pParkedOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
		void cbk_OnRspQryParkedOrderAction(CThostFtdcParkedOrderActionField *pParkedOrderAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
		void cbk_OnRspQryTradingNotice(CThostFtdcTradingNoticeField *pTradingNotice, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
		void cbk_OnRspQryBrokerTradingParams(CThostFtdcBrokerTradingParamsField *pBrokerTradingParams, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
		void cbk_OnRspQryBrokerTradingAlgos(CThostFtdcBrokerTradingAlgosField *pBrokerTradingAlgos, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
		void cbk_OnRtnFromBankToFutureByBank(CThostFtdcRspTransferField *pRspTransfer);
		void cbk_OnRtnFromFutureToBankByBank(CThostFtdcRspTransferField *pRspTransfer);
		void cbk_OnRtnRepealFromBankToFutureByBank(CThostFtdcRspRepealField *pRspRepeal);
		void cbk_OnRtnRepealFromFutureToBankByBank(CThostFtdcRspRepealField *pRspRepeal);
		void cbk_OnRtnFromBankToFutureByFuture(CThostFtdcRspTransferField *pRspTransfer);
		void cbk_OnRtnFromFutureToBankByFuture(CThostFtdcRspTransferField *pRspTransfer);
		void cbk_OnRtnRepealFromBankToFutureByFutureManual(CThostFtdcRspRepealField *pRspRepeal);
		void cbk_OnRtnRepealFromFutureToBankByFutureManual(CThostFtdcRspRepealField *pRspRepeal);
		void cbk_OnRtnQueryBankBalanceByFuture(CThostFtdcNotifyQueryAccountField *pNotifyQueryAccount);
		void cbk_OnErrRtnBankToFutureByFuture(CThostFtdcReqTransferField *pReqTransfer, CThostFtdcRspInfoField *pRspInfo);
		void cbk_OnErrRtnFutureToBankByFuture(CThostFtdcReqTransferField *pReqTransfer, CThostFtdcRspInfoField *pRspInfo);
		void cbk_OnErrRtnRepealBankToFutureByFutureManual(CThostFtdcReqRepealField *pReqRepeal, CThostFtdcRspInfoField *pRspInfo);
		void cbk_OnErrRtnRepealFutureToBankByFutureManual(CThostFtdcReqRepealField *pReqRepeal, CThostFtdcRspInfoField *pRspInfo);
		void cbk_OnErrRtnQueryBankBalanceByFuture(CThostFtdcReqQueryAccountField *pReqQueryAccount, CThostFtdcRspInfoField *pRspInfo);
		void cbk_OnRtnRepealFromBankToFutureByFuture(CThostFtdcRspRepealField *pRspRepeal);
		void cbk_OnRtnRepealFromFutureToBankByFuture(CThostFtdcRspRepealField *pRspRepeal);
		void cbk_OnRspFromBankToFutureByFuture(CThostFtdcReqTransferField *pReqTransfer, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
		void cbk_OnRspFromFutureToBankByFuture(CThostFtdcReqTransferField *pReqTransfer, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
		void cbk_OnRspQueryBankAccountMoneyByFuture(CThostFtdcReqQueryAccountField *pReqQueryAccount, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
		void cbk_OnRtnOpenAccountByBank(CThostFtdcOpenAccountField *pOpenAccount);
		void cbk_OnRtnCancelAccountByBank(CThostFtdcCancelAccountField *pCancelAccount);
		void cbk_OnRtnChangeAccountByBank(CThostFtdcChangeAccountField *pChangeAccount);
		// �����лص�������ַ���ݸ�SPI
		void RegisterCallbacks();
#endif

	};
};