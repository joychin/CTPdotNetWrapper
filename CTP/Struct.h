/////////////////////////////////////////////////////////////////////////
/// ���ڼ��� CTP C++ => .Net Framework Adapter
/// ���ļ��޸��Ժ����C#�ӿ�struct.cs�ļ���ʮ�ָ�л 
/// http://www.oceantribe.org/vb/showthread.php?t=26711
/////////////////////////////////////////////////////////////////////////

#pragma once

using namespace System;
using namespace System::Runtime::InteropServices;

namespace CTP
{

	public enum struct EnumTeResumeType : Byte	//THOST_TE_RESUME_TYPE
	{
		THOST_TERT_RESTART = 0,
		THOST_TERT_RESUME,
		THOST_TERT_QUICK
	};

	/// <summary>
	/// TFtdcExchangePropertyType��һ����������������
	/// </summary>
	public enum struct EnumExchangePropertyType : Byte
	{
		/// <summary>
		/// ����
		/// </summary>
		Normal = (Byte)'0',

		/// <summary>
		/// ���ݳɽ����ɱ���
		/// </summary>
		GenOrderByTrade = (Byte)'1'
	};

	/// <summary>
	/// TFtdcIdCardTypeType��һ��֤����������
	/// </summary>
	public enum struct EnumIdCardTypeType : Byte
	{
		/// <summary>
		/// ��֯��������
		/// </summary>
		EID = (Byte)'0',

		/// <summary>
		/// ���֤
		/// </summary>
		IDCard = (Byte)'1',

		/// <summary>
		/// ����֤
		/// </summary>
		OfficerIDCard = (Byte)'2',

		/// <summary>
		/// ����֤
		/// </summary>
		PoliceIDCard = (Byte)'3',

		/// <summary>
		/// ʿ��֤
		/// </summary>
		SoldierIDCard = (Byte)'4',

		/// <summary>
		/// ���ڲ�
		/// </summary>
		HouseholdRegister = (Byte)'5',

		/// <summary>
		/// ����
		/// </summary>
		Passport = (Byte)'6',

		/// <summary>
		/// ̨��֤
		/// </summary>
		TaiwanCompatriotIDCard = (Byte)'7',

		/// <summary>
		/// ����֤
		/// </summary>
		HomeComingCard = (Byte)'8',

		/// <summary>
		/// Ӫҵִ�պ�
		/// </summary>
		LicenseNo = (Byte)'9',

		/// <summary>
		/// ����֤��
		/// </summary>
		OtherCard = (Byte)'x'
	};

	/// <summary>
	/// TFtdcInvestorRangeType��һ��Ͷ���߷�Χ����
	/// </summary>
	public enum struct EnumInvestorRangeType : Byte
	{
		/// <summary>
		/// ����
		/// </summary>
		All = (Byte)'1',

		/// <summary>
		/// Ͷ������
		/// </summary>
		Group = (Byte)'2',

		/// <summary>
		/// ��һͶ����
		/// </summary>
		Single = (Byte)'3'
	};

	/// <summary>
	/// TFtdcDepartmentRangeType��һ��Ͷ���߷�Χ����
	/// </summary>
	public enum struct EnumDepartmentRangeType : Byte
	{
		/// <summary>
		/// ����
		/// </summary>
		All = (Byte)'1',

		/// <summary>
		/// ��֯�ܹ�
		/// </summary>
		Group = (Byte)'2',

		/// <summary>
		/// ��һͶ����
		/// </summary>
		Single = (Byte)'3'
	};

	/// <summary>
	/// TFtdcDataSyncStatusType��һ������ͬ��״̬����
	/// </summary>
	public enum struct EnumDataSyncStatusType : Byte
	{
		/// <summary>
		/// δͬ��
		/// </summary>
		Asynchronous = (Byte)'1',

		/// <summary>
		/// ͬ����
		/// </summary>
		Synchronizing = (Byte)'2',

		/// <summary>
		/// ��ͬ��
		/// </summary>
		Synchronized = (Byte)'3'
	};

	/// <summary>
	/// TFtdcBrokerDataSyncStatusType��һ�����͹�˾����ͬ��״̬����
	/// </summary>
	public enum struct EnumBrokerDataSyncStatusType : Byte
	{
		/// <summary>
		/// ��ͬ��
		/// </summary>
		Synchronized = (Byte)'1',

		/// <summary>
		/// ͬ����
		/// </summary>
		Synchronizing = (Byte)'2'
	};

	/// <summary>
	/// TFtdcExchangeConnectStatusType��һ������������״̬����
	/// </summary>
	public enum struct EnumExchangeConnectStatusType : Byte
	{
		/// <summary>
		/// û���κ�����
		/// </summary>
		NoConnection = (Byte)'1',

		/// <summary>
		/// �Ѿ�������Լ��ѯ����
		/// </summary>
		QryInstrumentSent = (Byte)'2',

		/// <summary>
		/// �Ѿ���ȡ��Ϣ
		/// </summary>
		GotInformation = (Byte)'9'
	};

	/// <summary>
	/// TFtdcTraderConnectStatusType��һ������������Ա����״̬����
	/// </summary>
	public enum struct EnumTraderConnectStatusType : Byte
	{
		/// <summary>
		/// û���κ�����
		/// </summary>
		NotConnected = (Byte)'1',

		/// <summary>
		/// �Ѿ�����
		/// </summary>
		Connected = (Byte)'2',

		/// <summary>
		/// �Ѿ�������Լ��ѯ����
		/// </summary>
		QryInstrumentSent = (Byte)'3',

		/// <summary>
		/// ����˽����
		/// </summary>
		SubPrivateFlow = (Byte)'4'
	};

	/// <summary>
	/// TFtdcFunctionCodeType��һ�����ܴ�������
	/// </summary>
	public enum struct EnumFunctionCodeType : Byte
	{
		/// <summary>
		/// �����첽��
		/// </summary>
		DataAsync = (Byte)'1',

		/// <summary>
		/// ǿ���û��ǳ�
		/// </summary>
		ForceUserLogout = (Byte)'2',

		/// <summary>
		/// ��������û�����
		/// </summary>
		UserPasswordUpdate = (Byte)'3',

		/// <summary>
		/// ������͹�˾����
		/// </summary>
		BrokerPasswordUpdate = (Byte)'4',

		/// <summary>
		/// ���Ͷ���߿���
		/// </summary>
		InvestorPasswordUpdate = (Byte)'5',

		/// <summary>
		/// ��������
		/// </summary>
		OrderInsert = (Byte)'6',

		/// <summary>
		/// ��������
		/// </summary>
		OrderAction = (Byte)'7',

		/// <summary>
		/// ͬ��ϵͳ����
		/// </summary>
		SyncSystemData = (Byte)'8',

		/// <summary>
		/// ͬ�����͹�˾����
		/// </summary>
		SyncBrokerData = (Byte)'9',

		/// <summary>
		/// ����ͬ�����͹�˾����
		/// </summary>
		BachSyncBrokerData = (Byte)'A',

		/// <summary>
		/// ������ѯ
		/// </summary>
		SuperQuery = (Byte)'B',

		/// <summary>
		/// ��������
		/// </summary>
		ParkedOrderInsert = (Byte)'C',

		/// <summary>
		/// ��������
		/// </summary>
		ParkedOrderAction = (Byte)'D',

		/// <summary>
		/// ͬ����̬����
		/// </summary>
		SyncOTP = (Byte)'E'
	};

	/// <summary>
	/// TFtdcBrokerFunctionCodeType��һ�����͹�˾���ܴ�������
	/// </summary>
	public enum struct EnumBrokerFunctionCodeType : Byte
	{
		/// <summary>
		/// ǿ���û��ǳ�
		/// </summary>
		ForceUserLogout = (Byte)'1',

		/// <summary>
		/// ����û�����
		/// </summary>
		UserPasswordUpdate = (Byte)'2',

		/// <summary>
		/// ͬ�����͹�˾����
		/// </summary>
		SyncBrokerData = (Byte)'3',

		/// <summary>
		/// ����ͬ�����͹�˾����
		/// </summary>
		BachSyncBrokerData = (Byte)'4',

		/// <summary>
		/// ��������
		/// </summary>
		OrderInsert = (Byte)'5',

		/// <summary>
		/// ��������
		/// </summary>
		OrderAction = (Byte)'6',

		/// <summary>
		/// ȫ����ѯ
		/// </summary>
		AllQuery = (Byte)'7',

		/// <summary>
		/// ϵͳ���ܣ�����/�ǳ�/�޸������
		/// </summary>
		log = (Byte)'a',

		/// <summary>
		/// ������ѯ����ѯ�������ݣ����Լ���������ȳ���
		/// </summary>
		BaseQry = (Byte)'b',

		/// <summary>
		/// ���ײ�ѯ�����ɽ���ί��
		/// </summary>
		TradeQry = (Byte)'c',

		/// <summary>
		/// ���׹��ܣ�����������
		/// </summary>
		Trade = (Byte)'d',

		/// <summary>
		/// ����ת��
		/// </summary>
		Virement = (Byte)'e',

		/// <summary>
		/// ���ռ��
		/// </summary>
		Risk = (Byte)'f',

		/// <summary>
		/// ��ѯ/������ѯ�Ự�����˵�
		/// </summary>
		Session = (Byte)'g',

		/// <summary>
		/// ���֪ͨ����
		/// </summary>
		RiskNoticeCtl = (Byte)'h',

		/// <summary>
		/// ���֪ͨ����
		/// </summary>
		RiskNotice = (Byte)'i',

		/// <summary>
		/// �쿴���͹�˾�ʽ�Ȩ��
		/// </summary>
		BrokerDeposit = (Byte)'j',

		/// <summary>
		/// �ʽ��ѯ
		/// </summary>
		QueryFund = (Byte)'k',

		/// <summary>
		/// ������ѯ
		/// </summary>
		QueryOrder = (Byte)'l',

		/// <summary>
		/// �ɽ���ѯ
		/// </summary>
		QueryTrade = (Byte)'m',

		/// <summary>
		/// �ֲֲ�ѯ
		/// </summary>
		QueryPosition = (Byte)'n',

		/// <summary>
		/// �����ѯ
		/// </summary>
		QueryMarketData = (Byte)'o',

		/// <summary>
		/// �û��¼���ѯ
		/// </summary>
		QueryUserEvent = (Byte)'p',

		/// <summary>
		/// ����֪ͨ��ѯ
		/// </summary>
		QueryRiskNotify = (Byte)'q',

		/// <summary>
		/// ������ѯ
		/// </summary>
		QueryFundChange = (Byte)'r',

		/// <summary>
		/// Ͷ������Ϣ��ѯ
		/// </summary>
		QueryInvestor = (Byte)'s',

		/// <summary>
		/// ���ױ����ѯ
		/// </summary>
		QueryTradingCode = (Byte)'t',

		/// <summary>
		/// ǿƽ
		/// </summary>
		ForceClose = (Byte)'u',

		/// <summary>
		/// ѹ������
		/// </summary>
		PressTest = (Byte)'v',

		/// <summary>
		/// Ȩ�淴��
		/// </summary>
		RemainCalc = (Byte)'w',

		/// <summary>
		/// ���ֱֲ�֤��ָ��
		/// </summary>
		NetPositionInd = (Byte)'x',

		/// <summary>
		/// ����Ԥ��
		/// </summary>
		RiskPredict = (Byte)'y',

		/// <summary>
		/// ���ݵ���
		/// </summary>
		DataExport = (Byte)'z',

		/// <summary>
		/// ���ָ������
		/// </summary>
		RiskTargetSetup = (Byte)'A',

		/// <summary>
		/// ����Ԥ��
		/// </summary>
		MarketDataWarn = (Byte)'B',

		/// <summary>
		/// ҵ��֪ͨ��ѯ
		/// </summary>
		QryBizNotice = (Byte)'C',

		/// <summary>
		/// ҵ��֪ͨģ������
		/// </summary>
		CfgBizNotice = (Byte)'D',

		/// <summary>
		/// ͬ����̬����
		/// </summary>
		SyncOTP = (Byte)'E',

		/// <summary>
		/// ����ҵ��֪ͨ
		/// </summary>
		SendBizNotice = (Byte)'F',

		/// <summary>
		/// ���ռ����׼����
		/// </summary>
		CfgRiskLevelStd = (Byte)'G',

		/// <summary>
		/// �����ն�Ӧ������
		/// </summary>
		TbCommand = (Byte)'H'
	};

	/// <summary>
	/// TFtdcOrderActionStatusType��һ����������״̬����
	/// </summary>
	public enum struct EnumOrderActionStatusType : Byte
	{
		/// <summary>
		/// �Ѿ��ύ
		/// </summary>
		Submitted = (Byte)'a',

		/// <summary>
		/// �Ѿ�����
		/// </summary>
		Accepted = (Byte)'b',

		/// <summary>
		/// �Ѿ����ܾ�
		/// </summary>
		Rejected = (Byte)'c'
	};

	/// <summary>
	/// TFtdcOrderStatusType��һ������״̬����
	/// </summary>
	public enum struct EnumOrderStatusType : Byte
	{
		/// <summary>
		/// ȫ���ɽ�
		/// </summary>
		AllTraded = (Byte)'0',

		/// <summary>
		/// ���ֳɽ����ڶ�����
		/// </summary>
		PartTradedQueueing = (Byte)'1',

		/// <summary>
		/// ���ֳɽ����ڶ�����
		/// </summary>
		PartTradedNotQueueing = (Byte)'2',

		/// <summary>
		/// δ�ɽ����ڶ�����
		/// </summary>
		NoTradeQueueing = (Byte)'3',

		/// <summary>
		/// δ�ɽ����ڶ�����
		/// </summary>
		NoTradeNotQueueing = (Byte)'4',

		/// <summary>
		/// ����
		/// </summary>
		Canceled = (Byte)'5',

		/// <summary>
		/// δ֪
		/// </summary>
		Unknown = (Byte)'a',

		/// <summary>
		/// ��δ����
		/// </summary>
		NotTouched = (Byte)'b',

		/// <summary>
		/// �Ѵ���
		/// </summary>
		Touched = (Byte)'c'
	};

	/// <summary>
	/// TFtdcOrderSubmitStatusType��һ�������ύ״̬����
	/// </summary>
	public enum struct EnumOrderSubmitStatusType : Byte
	{
		/// <summary>
		/// �Ѿ��ύ
		/// </summary>
		InsertSubmitted = (Byte)'0',

		/// <summary>
		/// �����Ѿ��ύ
		/// </summary>
		CancelSubmitted = (Byte)'1',

		/// <summary>
		/// �޸��Ѿ��ύ
		/// </summary>
		ModifySubmitted = (Byte)'2',

		/// <summary>
		/// �Ѿ�����
		/// </summary>
		Accepted = (Byte)'3',

		/// <summary>
		/// �����Ѿ����ܾ�
		/// </summary>
		InsertRejected = (Byte)'4',

		/// <summary>
		/// �����Ѿ����ܾ�
		/// </summary>
		CancelRejected = (Byte)'5',

		/// <summary>
		/// �ĵ��Ѿ����ܾ�
		/// </summary>
		ModifyRejected = (Byte)'6'
	};

	/// <summary>
	/// TFtdcPositionDateType��һ���ֲ���������
	/// </summary>
	public enum struct EnumPositionDateType : Byte
	{
		/// <summary>
		/// ���ճֲ�
		/// </summary>
		Today = (Byte)'1',

		/// <summary>
		/// ��ʷ�ֲ�
		/// </summary>
		History = (Byte)'2'
	};

	/// <summary>
	/// TFtdcPositionDateTypeType��һ���ֲ�������������
	/// </summary>
	public enum struct EnumPositionDateTypeType : Byte
	{
		/// <summary>
		/// ʹ����ʷ�ֲ�
		/// </summary>
		UseHistory = (Byte)'1',

		/// <summary>
		/// ��ʹ����ʷ�ֲ�
		/// </summary>
		NoUseHistory = (Byte)'2'
	};

	/// <summary>
	/// TFtdcOptionsTypeType��һ����Ȩ��������
	/// </summary>
	public enum struct EnumOptionsTypeType : Byte
	{
		/// <summary>
		/// ����
		/// </summary>
		CallOptions = (Byte)'1',

		/// <summary>
		/// ����
		/// </summary>
		PutOptions = (Byte)'2'
	};

	/// <summary>
	/// TFtdcCombinationTypeType��һ�������������
	/// </summary>
	public enum struct EnumCombinationTypeType : Byte
	{
		/// <summary>
		/// �ڻ����
		/// </summary>
		Future = (Byte)'0',
		/// <summary>
		/// ��ֱ�۲�BUL
		/// </summary>
		BUL = (Byte)'1',
		/// <summary>
		///��ֱ�۲�BER
		BER = (Byte)'2',
		/// <summary>
		///��ʽ���			  
		/// </summary>
		STD = (Byte)'3',
		/// <summary>
		///���ʽ���		 
		STG = (Byte)'4',
		/// <summary>
		///�������			  
		/// </summary>
		PRT = (Byte)'5',
		/// <summary>
		///ʱ��۲����		
		/// </summary>
		CLD = (Byte)'6'
	};

	/// <summary>
	/// TFtdcTradingRoleType��һ�����׽�ɫ����
	/// </summary>
	public enum struct EnumTradingRoleType : Byte
	{
		/// <summary>
		/// ����
		/// </summary>
		Broker = (Byte)'1',

		/// <summary>
		/// ��Ӫ
		/// </summary>
		Host = (Byte)'2',

		/// <summary>
		/// ������
		/// </summary>
		Maker = (Byte)'3'
	};

	/// <summary>
	/// TFtdcProductClassType��һ����Ʒ��������
	/// </summary>
	public enum struct EnumProductClassTypeType : Byte
	{
		/// <summary>
		/// �ڻ�
		/// </summary>
		Futures = (Byte)'1',

		/// <summary>
		/// ��Ȩ
		/// </summary>
		Options = (Byte)'2',

		/// <summary>
		/// ���
		/// </summary>
		Combination = (Byte)'3',

		/// <summary>
		/// ����
		/// </summary>
		Spot = (Byte)'4',

		/// <summary>
		/// ��ת��
		/// </summary>
		EFP = (Byte)'5'
	};

	/// <summary>
	/// TFtdcInstLifePhaseType��һ����Լ��������״̬����
	/// </summary>
	public enum struct EnumInstLifePhaseType : Byte
	{
		/// <summary>
		/// δ����
		/// </summary>
		NotStart = (Byte)'0',

		/// <summary>
		/// ����
		/// </summary>
		Started = (Byte)'1',

		/// <summary>
		/// ͣ��
		/// </summary>
		Pause = (Byte)'2',

		/// <summary>
		/// ����
		/// </summary>
		Expired = (Byte)'3'
	};

	/// <summary>
	/// TFtdcDirectionType��һ��������������
	/// </summary>
	public enum struct EnumDirectionType : Byte
	{
		/// <summary>
		/// ��
		/// </summary>
		Buy = (Byte)'0',

		/// <summary>
		/// ��
		/// </summary>
		Sell = (Byte)'1'
	};

	/// <summary>
	/// TFtdcPositionTypeType��һ���ֲ���������
	/// </summary>
	public enum struct EnumPositionTypeType : Byte
	{
		/// <summary>
		/// ���ֲ�
		/// </summary>
		Net = (Byte)'1',

		/// <summary>
		/// �ۺϳֲ�
		/// </summary>
		Gross = (Byte)'2'
	};

	/// <summary>
	/// TFtdcPosiDirectionType��һ���ֲֶ�շ�������
	/// </summary>
	public enum struct EnumPosiDirectionType : Byte
	{
		/// <summary>
		/// ��
		/// </summary>
		Net = (Byte)'1',

		/// <summary>
		/// ��ͷ
		/// </summary>
		Long = (Byte)'2',

		/// <summary>
		/// ��ͷ
		/// </summary>
		Short = (Byte)'3'
	};

	/// <summary>
	/// TFtdcSysSettlementStatusType��һ��ϵͳ����״̬����
	/// </summary>
	public enum struct EnumSysSettlementStatusType : Byte
	{
		/// <summary>
		/// ����Ծ
		/// </summary>
		NonActive = (Byte)'1',

		/// <summary>
		/// ����
		/// </summary>
		Startup = (Byte)'2',

		/// <summary>
		/// ����
		/// </summary>
		Operating = (Byte)'3',

		/// <summary>
		/// ����
		/// </summary>
		Settlement = (Byte)'4',

		/// <summary>
		/// �������
		/// </summary>
		SettlementFinished = (Byte)'5'
	};

	/// <summary>
	/// TFtdcRatioAttrType��һ��������������
	/// </summary>
	public enum struct EnumRatioAttrType : Byte
	{
		/// <summary>
		/// ���׷���
		/// </summary>
		Trade = (Byte)'0',

		/// <summary>
		/// �������
		/// </summary>
		Settlement = (Byte)'1'
	};

	/// <summary>
	/// TFtdcHedgeFlagType��һ��Ͷ���ױ���־����
	/// </summary>
	public enum struct EnumHedgeFlagType : Byte
	{
		/// <summary>
		/// Ͷ��
		/// </summary>
		Speculation = (Byte)'1',

		/// <summary>
		/// ����
		/// </summary>
		Arbitrage = (Byte)'2',

		/// <summary>
		/// �ױ�
		/// </summary>
		Hedge = (Byte)'3',

		/// <summary>
		/// ������
		/// </summary>
		Hedge = (Byte)'5'
	};

	/// <summary>
	/// TFtdcClientIDTypeType��һ�����ױ�����������
	/// </summary>
	public enum struct EnumClientIDTypeType : Byte
	{
		/// <summary>
		/// Ͷ��
		/// </summary>
		Speculation = (Byte)'1',

		/// <summary>
		/// ����
		/// </summary>
		Arbitrage = (Byte)'2',

		/// <summary>
		/// �ױ�
		/// </summary>
		Hedge = (Byte)'3'
	};


	/// <summary>
	/// TFtdcOrderPriceTypeType��һ�������۸���������
	/// </summary>
	public enum struct EnumOrderPriceTypeType : Byte
	{
		/// <summary>
		/// �����
		/// </summary>
		AnyPrice = (Byte)'1',

		/// <summary>
		/// �޼�
		/// </summary>
		LimitPrice = (Byte)'2',

		/// <summary>
		/// ���ż�
		/// </summary>
		BestPrice = (Byte)'3',

		/// <summary>
		/// ���¼�
		/// </summary>
		LastPrice = (Byte)'4',

		/// <summary>
		/// ���¼۸����ϸ�1��ticks
		/// </summary>
		LastPricePlusOneTicks = (Byte)'5',

		/// <summary>
		/// ���¼۸����ϸ�2��ticks
		/// </summary>
		LastPricePlusTwoTicks = (Byte)'6',

		/// <summary>
		/// ���¼۸����ϸ�3��ticks
		/// </summary>
		LastPricePlusThreeTicks = (Byte)'7',

		/// <summary>
		/// ��һ��
		/// </summary>
		AskPrice1 = (Byte)'8',

		/// <summary>
		/// ��һ�۸����ϸ�1��ticks
		/// </summary>
		AskPrice1PlusOneTicks = (Byte)'9',

		/// <summary>
		/// ��һ�۸����ϸ�2��ticks
		/// </summary>
		AskPrice1PlusTwoTicks = (Byte)'A',

		/// <summary>
		/// ��һ�۸����ϸ�3��ticks
		/// </summary>
		AskPrice1PlusThreeTicks = (Byte)'B',

		/// <summary>
		/// ��һ��
		/// </summary>
		BidPrice1 = (Byte)'C',

		/// <summary>
		/// ��һ�۸����ϸ�1��ticks
		/// </summary>
		BidPrice1PlusOneTicks = (Byte)'D',

		/// <summary>
		/// ��һ�۸����ϸ�2��ticks
		/// </summary>
		BidPrice1PlusTwoTicks = (Byte)'E',

		/// <summary>
		/// ��һ�۸����ϸ�3��ticks
		/// </summary>
		BidPrice1PlusThreeTicks = (Byte)'F'
	};

	/// <summary>
	/// TFtdcOffsetFlagType��һ����ƽ��־����
	/// </summary>
	public enum struct EnumOffsetFlagType : Byte
	{
		/// <summary>
		/// ����
		/// </summary>
		Open = (Byte)'0',

		/// <summary>
		/// ƽ��
		/// </summary>
		Close = (Byte)'1',

		/// <summary>
		/// ǿƽ
		/// </summary>
		ForceClose = (Byte)'2',

		/// <summary>
		/// ƽ��
		/// </summary>
		CloseToday = (Byte)'3',

		/// <summary>
		/// ƽ��
		/// </summary>
		CloseYesterday = (Byte)'4',

		/// <summary>
		/// ǿ��
		/// </summary>
		ForceOff = (Byte)'5',

		/// <summary>
		/// ����ǿƽ
		/// </summary>
		LocalForceClose = (Byte)'6'
	};

	/// <summary>
	/// TFtdcForceCloseReasonType��һ��ǿƽԭ������
	/// </summary>
	public enum struct EnumForceCloseReasonType : Byte
	{
		/// <summary>
		/// ��ǿƽ
		/// </summary>
		NotForceClose = (Byte)'0',

		/// <summary>
		/// �ʽ���
		/// </summary>
		LackDeposit = (Byte)'1',

		/// <summary>
		/// �ͻ�����
		/// </summary>
		ClientOverPositionLimit = (Byte)'2',

		/// <summary>
		/// ��Ա����
		/// </summary>
		MemberOverPositionLimit = (Byte)'3',

		/// <summary>
		/// �ֲַ�������
		/// </summary>
		NotMultiple = (Byte)'4',

		/// <summary>
		/// Υ��
		/// </summary>
		Violation = (Byte)'5',

		/// <summary>
		/// ����
		/// </summary>
		Other = (Byte)'6',

		/// <summary>
		/// ��Ȼ���ٽ�����
		/// </summary>
		PersonDeliv = (Byte)'7'
	};

	/// <summary>
	/// TFtdcOrderTypeType��һ��������������
	/// </summary>
	public enum struct EnumOrderTypeType : Byte
	{
		/// <summary>
		/// ����
		/// </summary>
		Normal = (Byte)'0',

		/// <summary>
		/// ��������
		/// </summary>
		DeriveFromQuote = (Byte)'1',

		/// <summary>
		/// �������
		/// </summary>
		DeriveFromCombination = (Byte)'2',

		/// <summary>
		/// ��ϱ���
		/// </summary>
		Combination = (Byte)'3',

		/// <summary>
		/// ������
		/// </summary>
		ConditionalOrder = (Byte)'4',

		/// <summary>
		/// ������
		/// </summary>
		Swap = (Byte)'5'
	};

	/// <summary>
	/// TFtdcTimeConditionType��һ����Ч����������
	/// </summary>
	public enum struct EnumTimeConditionType : Byte
	{
		/// <summary>
		/// ������ɣ�������
		/// </summary>
		IOC = (Byte)'1',

		/// <summary>
		/// ������Ч
		/// </summary>
		GFS = (Byte)'2',

		/// <summary>
		/// ������Ч
		/// </summary>
		GFD = (Byte)'3',

		/// <summary>
		/// ָ������ǰ��Ч
		/// </summary>
		GTD = (Byte)'4',

		/// <summary>
		/// ����ǰ��Ч
		/// </summary>
		GTC = (Byte)'5',

		/// <summary>
		/// ���Ͼ�����Ч
		/// </summary>
		GFA = (Byte)'6'
	};

	/// <summary>
	/// TFtdcVolumeConditionType��һ���ɽ�����������
	/// </summary>
	public enum struct EnumVolumeConditionType : Byte
	{
		/// <summary>
		/// �κ�����
		/// </summary>
		AV = (Byte)'1',

		/// <summary>
		/// ��С����
		/// </summary>
		MV = (Byte)'2',

		/// <summary>
		/// ȫ������
		/// </summary>
		CV = (Byte)'3'
	};

	/// <summary>
	/// TFtdcContingentConditionType��һ��������������
	/// </summary>
	public enum struct EnumContingentConditionType : Byte
	{
		/// <summary>
		/// ����
		/// </summary>
		Immediately = (Byte)'1',

		/// <summary>
		/// ֹ��
		/// </summary>
		Touch = (Byte)'2',

		/// <summary>
		/// ֹӮ
		/// </summary>
		TouchProfit = (Byte)'3',

		/// <summary>
		/// Ԥ��
		/// </summary>
		ParkedOrder = (Byte)'4',

		/// <summary>
		/// ���¼۴���������
		/// </summary>
		LastPriceGreaterThanStopPrice = (Byte)'5',

		/// <summary>
		/// ���¼۴��ڵ���������
		/// </summary>
		LastPriceGreaterEqualStopPrice = (Byte)'6',

		/// <summary>
		/// ���¼�С��������
		/// </summary>
		LastPriceLesserThanStopPrice = (Byte)'7',

		/// <summary>
		/// ���¼�С�ڵ���������
		/// </summary>
		LastPriceLesserEqualStopPrice = (Byte)'8',

		/// <summary>
		/// ��һ�۴���������
		/// </summary>
		AskPriceGreaterThanStopPrice = (Byte)'9',

		/// <summary>
		/// ��һ�۴��ڵ���������
		/// </summary>
		AskPriceGreaterEqualStopPrice = (Byte)'A',

		/// <summary>
		/// ��һ��С��������
		/// </summary>
		AskPriceLesserThanStopPrice = (Byte)'B',

		/// <summary>
		/// ��һ��С�ڵ���������
		/// </summary>
		AskPriceLesserEqualStopPrice = (Byte)'C',

		/// <summary>
		/// ��һ�۴���������
		/// </summary>
		BidPriceGreaterThanStopPrice = (Byte)'D',

		/// <summary>
		/// ��һ�۴��ڵ���������
		/// </summary>
		BidPriceGreaterEqualStopPrice = (Byte)'E',

		/// <summary>
		/// ��һ��С��������
		/// </summary>
		BidPriceLesserThanStopPrice = (Byte)'F',

		/// <summary>
		/// ��һ��С�ڵ���������
		/// </summary>
		BidPriceLesserEqualStopPrice = (Byte)'H'
	};

	/// <summary>
	/// TFtdcActionFlagType��һ��������־����
	/// </summary>
	public enum struct EnumActionFlagType : Byte
	{
		/// <summary>
		/// ɾ��
		/// </summary>
		Delete = (Byte)'0',

		/// <summary>
		/// �޸�
		/// </summary>
		Modify = (Byte)'3'
	};

	/// <summary>
	/// TFtdcTradingRightType��һ������Ȩ������
	/// </summary>
	public enum struct EnumTradingRightType : Byte
	{
		/// <summary>
		/// ���Խ���
		/// </summary>
		Allow = (Byte)'0',

		/// <summary>
		/// ֻ��ƽ��
		/// </summary>
		CloseOnly = (Byte)'1',

		/// <summary>
		/// ���ܽ���
		/// </summary>
		Forbidden = (Byte)'2'
	};

	/// <summary>
	/// TFtdcOrderSourceType��һ��������Դ����
	/// </summary>
	public enum struct EnumOrderSourceType : Byte
	{
		/// <summary>
		/// ���Բ�����
		/// </summary>
		Participant = (Byte)'0',

		/// <summary>
		/// ���Թ���Ա
		/// </summary>
		Administrator = (Byte)'1'
	};

	/// <summary>
	/// TFtdcTradeTypeType��һ���ɽ���������
	/// </summary>
	public enum struct EnumTradeTypeType : Byte
	{
		/// <summary>
		/// ��ͨ�ɽ�
		/// </summary>
		Common = (Byte)'0',

		/// <summary>
		/// ��Ȩִ��
		/// </summary>
		OptionsExecution = (Byte)'1',

		/// <summary>
		/// OTC�ɽ�
		/// </summary>
		OTC = (Byte)'2',

		/// <summary>
		/// ��ת�������ɽ�
		/// </summary>
		EFPDerived = (Byte)'3',

		/// <summary>
		/// ��������ɽ�
		/// </summary>
		CombinationDerived = (Byte)'4'
	};

	/// <summary>
	/// TFtdcPriceSourceType��һ���ɽ�����Դ����
	/// </summary>
	public enum struct EnumPriceSourceType : Byte
	{
		/// <summary>
		/// ǰ�ɽ���
		/// </summary>
		LastPrice = (Byte)'0',

		/// <summary>
		/// ��ί�м�
		/// </summary>
		Buy = (Byte)'1',

		/// <summary>
		/// ��ί�м�
		/// </summary>
		Sell = (Byte)'2'
	};

	/// <summary>
	/// TFtdcInstrumentStatusType��һ����Լ����״̬����
	/// </summary>
	public enum struct EnumInstrumentStatusType : Byte
	{
		/// <summary>
		/// ����ǰ
		/// </summary>
		BeforeTrading = (Byte)'0',

		/// <summary>
		/// �ǽ���
		/// </summary>
		NoTrading = (Byte)'1',

		/// <summary>
		/// ��������
		/// </summary>
		Continous = (Byte)'2',

		/// <summary>
		/// ���Ͼ��۱���
		/// </summary>
		AuctionOrdering = (Byte)'3',

		/// <summary>
		/// ���Ͼ��ۼ۸�ƽ��
		/// </summary>
		AuctionBalance = (Byte)'4',

		/// <summary>
		/// ���Ͼ��۴��
		/// </summary>
		AuctionMatch = (Byte)'5',

		/// <summary>
		/// ����
		/// </summary>
		Closed = (Byte)'6'
	};

	/// <summary>
	/// TFtdcInstStatusEnterReasonType��һ��Ʒ�ֽ��뽻��״̬ԭ������
	/// </summary>
	public enum struct EnumInstStatusEnterReasonType : Byte
	{
		/// <summary>
		/// �Զ��л�
		/// </summary>
		Automatic = (Byte)'1',

		/// <summary>
		/// �ֶ��л�
		/// </summary>
		Manual = (Byte)'2',

		/// <summary>
		/// �۶�
		/// </summary>
		Fuse = (Byte)'3'
	};

	/// <summary>
	/// TFtdcBatchStatusType��һ������״̬����
	/// </summary>
	public enum struct EnumBatchStatusType : Byte
	{
		/// <summary>
		/// δ�ϴ�
		/// </summary>
		NoUpload = (Byte)'1',

		/// <summary>
		/// ���ϴ�
		/// </summary>
		Uploaded = (Byte)'2',

		/// <summary>
		/// ���ʧ��
		/// </summary>
		Failed = (Byte)'3'
	};

	/// <summary>
	/// TFtdcReturnStyleType��һ����Ʒ�ַ�����ʽ����
	/// </summary>
	public enum struct EnumReturnStyleType : Byte
	{
		/// <summary>
		/// ������Ʒ��
		/// </summary>
		All = (Byte)'1',

		/// <summary>
		/// ��Ʒ��
		/// </summary>
		ByProduct = (Byte)'2'
	};

	/// <summary>
	/// TFtdcReturnPatternType��һ������ģʽ����
	/// </summary>
	public enum struct EnumReturnPatternType : Byte
	{
		/// <summary>
		/// ���ɽ�����
		/// </summary>
		ByVolume = (Byte)'1',

		/// <summary>
		/// ������������
		/// </summary>
		ByFeeOnHand = (Byte)'2'
	};

	/// <summary>
	/// TFtdcReturnLevelType��һ��������������
	/// </summary>
	public enum struct EnumReturnLevelType : Byte
	{
		/// <summary>
		/// ����1
		/// </summary>
		Level1 = (Byte)'1',

		/// <summary>
		/// ����2
		/// </summary>
		Level2 = (Byte)'2',

		/// <summary>
		/// ����3
		/// </summary>
		Level3 = (Byte)'3',

		/// <summary>
		/// ����4
		/// </summary>
		Level4 = (Byte)'4',

		/// <summary>
		/// ����5
		/// </summary>
		Level5 = (Byte)'5',

		/// <summary>
		/// ����6
		/// </summary>
		Level6 = (Byte)'6',

		/// <summary>
		/// ����7
		/// </summary>
		Level7 = (Byte)'7',

		/// <summary>
		/// ����8
		/// </summary>
		Level8 = (Byte)'8',

		/// <summary>
		/// ����9
		/// </summary>
		Level9 = (Byte)'9'
	};

	/// <summary>
	/// TFtdcReturnStandardType��һ��������׼����
	/// </summary>
	public enum struct EnumReturnStandardType : Byte
	{
		/// <summary>
		/// �ֽ׶η���
		/// </summary>
		ByPeriod = (Byte)'1',

		/// <summary>
		/// ��ĳһ��׼
		/// </summary>
		ByStandard = (Byte)'2'
	};

	/// <summary>
	/// TFtdcMortgageTypeType��һ����Ѻ��������
	/// </summary>
	public enum struct EnumMortgageTypeType : Byte
	{
		/// <summary>
		/// �ʳ�
		/// </summary>
		Out = (Byte)'0',

		/// <summary>
		/// ����
		/// </summary>
		In = (Byte)'1'
	};

	/// <summary>
	/// TFtdcInvestorSettlementParamIDType��һ��Ͷ���߽��������������
	/// </summary>
	public enum struct EnumInvestorSettlementParamIDType : Byte
	{
		/// <summary>
		/// ������֤��
		/// </summary>
		BaseMargin = (Byte)'1',

		/// <summary>
		/// ���Ȩ���׼
		/// </summary>
		LowestInterest = (Byte)'2',

		/// <summary>
		/// ��Ѻ����
		/// </summary>
		MortgageRatio = (Byte)'4',

		/// <summary>
		/// ��֤���㷨
		/// </summary>
		MarginWay = (Byte)'5',

		/// <summary>
		/// ���㵥����Ƿ������Ѻ
		/// </summary>
		BillDeposit = (Byte)'9'
	};

	/// <summary>
	/// TFtdcExchangeSettlementParamIDType��һ�����������������������
	/// </summary>
	public enum struct EnumExchangeSettlementParamIDType : Byte
	{
		/// <summary>
		/// ��Ѻ����
		/// </summary>
		MortgageRatio = (Byte)'1',

		/// <summary>
		/// �����ʽ�����
		/// </summary>
		OtherFundItem = (Byte)'2',

		/// <summary>
		/// �����ʽ��뽻���������
		/// </summary>
		OtherFundImport = (Byte)'3',

		/// <summary>
		/// ������������������ȡ��ʽ
		/// </summary>
		SHFEDelivFee = (Byte)'4',

		/// <summary>
		/// ������������������ȡ��ʽ
		/// </summary>
		DCEDelivFee = (Byte)'5',

		/// <summary>
		/// �н���������Ϳ��ý��
		/// </summary>
		CFFEXMinPrepa = (Byte)'6',

		/// <summary>
		/// ֣�������㷽ʽ
		/// </summary>
		CZCESettlementType = (Byte)'7'
	};

	/// <summary>
	/// TFtdcSystemParamIDType��һ��ϵͳ������������
	/// </summary>
	public enum struct EnumSystemParamIDType : Byte
	{
		/// <summary>
		/// Ͷ���ߴ�����С����
		/// </summary>
		InvestorIDMinLength = (Byte)'1',

		/// <summary>
		/// Ͷ�����ʺŴ�����С����
		/// </summary>
		AccountIDMinLength = (Byte)'2',

		/// <summary>
		/// Ͷ���߿���Ĭ�ϵ�¼Ȩ��
		/// </summary>
		UserRightLogon = (Byte)'3',

		/// <summary>
		/// Ͷ���߽��׽��㵥�ɽ����ܷ�ʽ
		/// </summary>
		SettlementBillTrade = (Byte)'4',

		/// <summary>
		/// ͳһ�������½��ױ��뷽ʽ
		/// </summary>
		TradingCode = (Byte)'5',

		/// <summary>
		/// �����Ƿ��жϴ���δ���˵ĳ����ͷ����ʽ�
		/// </summary>
		CheckFund = (Byte)'6',

		/// <summary>
		/// �Ƿ�����������ģ������Ȩ��
		/// </summary>
		CommModelRight = (Byte)'7',

		/// <summary>
		/// �Ƿ����ñ�֤����ģ������Ȩ��
		/// </summary>
		MarginModelRight = (Byte)'9',

		/// <summary>
		/// �Ƿ�淶�û����ܼ���
		/// </summary>
		IsStandardActive = (Byte)'8',

		/// <summary>
		/// �ϴ��Ľ����ļ���ʶ
		/// </summary>
		UploadSettlementFile = (Byte)'U',

		/// <summary>
		/// ���صı�֤�����ļ�
		/// </summary>
		DownloadCSRCFile = (Byte)'D',

		/// <summary>
		/// ���㵥�ļ���ʶ
		/// </summary>
		SettlementBillFile = (Byte)'S',

		/// <summary>
		/// ֤����ļ���ʶ
		/// </summary>
		CSRCOthersFile = (Byte)'C',

		/// <summary>
		/// Ͷ������Ƭ·��
		/// </summary>
		InvestorPhoto = (Byte)'P',

		/// <summary>
		/// �ϱ���֤������������
		/// </summary>
		CSRCData = (Byte)'R',

		/// <summary>
		/// ��������¼�뷽ʽ
		/// </summary>
		InvestorPwdModel = (Byte)'I',

		/// <summary>
		/// Ͷ�����н��������ļ�����·��
		/// </summary>
		CFFEXInvestorSettleFile = (Byte)'F',

		/// <summary>
		/// Ͷ���ߴ�����뷽ʽ
		/// </summary>
		InvestorIDType = (Byte)'a',

		/// <summary>
		/// ���߻����Ȩ��
		/// </summary>
		FreezeMaxReMain = (Byte)'r',

		/// <summary>
		/// ��������ز���ʵʱ�ϳ�����
		/// </summary>
		IsSync = (Byte)'A'
	};

	/// <summary>
	/// TFtdcTradeParamIDType��һ������ϵͳ������������
	/// </summary>
	public enum struct EnumTradeParamIDType : Byte
	{
		/// <summary>
		/// ϵͳ�����㷨
		/// </summary>
		EncryptionStandard = (Byte)'E',

		/// <summary>
		/// ϵͳ�����㷨
		/// </summary>
		RiskMode = (Byte)'R',

		/// <summary>
		/// ϵͳ�����㷨�Ƿ�ȫ�� 0-�� 1-��
		/// </summary>
		RiskModeGlobal = (Byte)'G'
	};

	/// <summary>
	/// TFtdcFileIDType��һ���ļ���ʶ����
	/// </summary>
	public enum struct EnumFileIDType : Byte
	{
		/// <summary>
		/// �ʽ�����
		/// </summary>
		SettlementFund = (Byte)'F',

		/// <summary>
		/// �ɽ�����
		/// </summary>
		Trade = (Byte)'T',

		/// <summary>
		/// Ͷ���ֲ߳�����
		/// </summary>
		InvestorPosition = (Byte)'P',

		/// <summary>
		/// Ͷ���߷����ʽ�����
		/// </summary>
		SubEntryFund = (Byte)'O',

		/// <summary>
		/// ֣������ϳֲ�����
		/// </summary>
		CZCECombinationPos = (Byte)'C',

		/// <summary>
		/// �ϱ���֤������������
		/// </summary>
		CSRCData = (Byte)'R',

		/// <summary>
		/// ֣����ƽ���˽�����
		/// </summary>
		CZCEClose = (Byte)'L',

		/// <summary>
		/// ֣������ƽ���˽�����
		/// </summary>
		CZCENoClose = (Byte)'N'

	};

	/// <summary>
	/// TFtdcFileTypeType��һ���ļ��ϴ���������
	/// </summary>
	public enum struct EnumFileTypeType : Byte
	{
		/// <summary>
		/// ����
		/// </summary>
		Settlement = (Byte)'0',

		/// <summary>
		/// �˶�
		/// </summary>
		Check = (Byte)'1'
	};

	/// <summary>
	/// TFtdcFileFormatType��һ���ļ���ʽ����
	/// </summary>
	public enum struct EnumFileFormatType : Byte
	{
		/// <summary>
		/// �ı��ļ�(.txt)
		/// </summary>
		Txt = (Byte)'0',

		/// <summary>
		/// ѹ���ļ�(.zip)
		/// </summary>
		Zip = (Byte)'1',

		/// <summary>
		/// DBF�ļ�(.dbf)
		/// </summary>
		DBF = (Byte)'2'
	};

	/// <summary>
	/// TFtdcFileUploadStatusType��һ���ļ�״̬����
	/// </summary>
	public enum struct EnumFileUploadStatusType : Byte
	{
		/// <summary>
		/// �ϴ��ɹ�
		/// </summary>
		SucceedUpload = (Byte)'1',

		/// <summary>
		/// �ϴ�ʧ��
		/// </summary>
		FailedUpload = (Byte)'2',

		/// <summary>
		/// ����ɹ�
		/// </summary>
		SucceedLoad = (Byte)'3',

		/// <summary>
		/// ���벿�ֳɹ�
		/// </summary>
		PartSucceedLoad = (Byte)'4',

		/// <summary>
		/// ����ʧ��
		/// </summary>
		FailedLoad = (Byte)'5'
	};

	/// <summary>
	/// TFtdcTransferDirectionType��һ���Ʋַ�������
	/// </summary>
	public enum struct EnumTransferDirectionType : Byte
	{
		/// <summary>
		/// �Ƴ�
		/// </summary>
		Out = (Byte)'0',

		/// <summary>
		/// ����
		/// </summary>
		In = (Byte)'1'
	};

	/// <summary>
	/// TFtdcBankFlagType��һ������ͳһ��ʶ��������
	/// </summary>
	public enum struct EnumBankFlagType : Byte
	{
		/// <summary>
		/// ��������
		/// </summary>
		ICBC = (Byte)'1',

		/// <summary>
		/// ũҵ����
		/// </summary>
		ABC = (Byte)'2',

		/// <summary>
		/// �й�����
		/// </summary>
		BC = (Byte)'3',

		/// <summary>
		/// ��������
		/// </summary>
		CBC = (Byte)'4',

		/// <summary>
		/// ��ͨ����
		/// </summary>
		BOC = (Byte)'5',

		/// <summary>
		/// ��������
		/// </summary>
		Other = (Byte)'Z'
	};

	/// <summary>
	/// TFtdcSpecialCreateRuleType��һ������Ĵ�����������
	/// </summary>
	public enum struct EnumSpecialCreateRuleType : Byte
	{
		/// <summary>
		/// û�����ⴴ������
		/// </summary>
		NoSpecialRule = (Byte)'0',

		/// <summary>
		/// ����������
		/// </summary>
		NoSpringFestival = (Byte)'1'
	};

	/// <summary>
	/// TFtdcBasisPriceTypeType��һ�����ƻ�׼����������
	/// </summary>
	public enum struct EnumBasisPriceTypeType : Byte
	{
		/// <summary>
		/// ��һ��Լ�����
		/// </summary>
		LastSettlement = (Byte)'1',

		/// <summary>
		/// ��һ��Լ���̼�
		/// </summary>
		LaseClose = (Byte)'2'
	};

	/// <summary>
	/// TFtdcProductLifePhaseType��һ����Ʒ��������״̬����
	/// </summary>
	public enum struct EnumProductLifePhaseType : Byte
	{
		/// <summary>
		/// ��Ծ
		/// </summary>
		Active = (Byte)'1',

		/// <summary>
		/// ����Ծ
		/// </summary>
		NonActive = (Byte)'2',

		/// <summary>
		/// ע��
		/// </summary>
		Canceled = (Byte)'3'
	};

	/// <summary>
	/// TFtdcDeliveryModeType��һ�����ʽ����
	/// </summary>
	public enum struct EnumDeliveryModeType : Byte
	{
		/// <summary>
		/// �ֽ𽻸�
		/// </summary>
		CashDeliv = (Byte)'1',

		/// <summary>
		/// ʵ�ｻ��
		/// </summary>
		CommodityDeliv = (Byte)'2'
	};

	/// <summary>
	/// TFtdcFundIOTypeType��һ���������������
	/// </summary>
	public enum struct EnumFundIOTypeType : Byte
	{
		/// <summary>
		/// �����
		/// </summary>
		FundIO = (Byte)'1',

		/// <summary>
		/// ����ת��
		/// </summary>
		Transfer = (Byte)'2'
	};

	/// <summary>
	/// TFtdcFundTypeType��һ���ʽ���������
	/// </summary>
	public enum struct EnumFundTypeType : Byte
	{
		/// <summary>
		/// ���д��
		/// </summary>
		Deposite = (Byte)'1',

		/// <summary>
		/// �����ʽ�
		/// </summary>
		ItemFund = (Byte)'2',

		/// <summary>
		/// ��˾����
		/// </summary>
		Company = (Byte)'3'
	};

	/// <summary>
	/// TFtdcFundDirectionType��һ�������������
	/// </summary>
	public enum struct EnumFundDirectionType : Byte
	{
		/// <summary>
		/// ���
		/// </summary>
		In = (Byte)'1',

		/// <summary>
		/// ����
		/// </summary>
		Out = (Byte)'2'
	};

	/// <summary>
	/// TFtdcFundStatusType��һ���ʽ�״̬����
	/// </summary>
	public enum struct EnumLoginModeType : Byte
	{
		/// <summary>
		/// ����
		/// </summary>
		Trade = (Byte)'0',

		/// <summary>
		/// ת��
		/// </summary>
		Transfer = (Byte)'1',
	};

	/// <summary>
	/// TFtdcFundStatusType��һ���ʽ�״̬����
	/// </summary>
	public enum struct EnumFundStatusType : Byte
	{
		/// <summary>
		/// ��¼��
		/// </summary>
		Record = (Byte)'1',

		/// <summary>
		/// �Ѹ���
		/// </summary>
		Check = (Byte)'2',

		/// <summary>
		/// �ѳ���
		/// </summary>
		Charge = (Byte)'3'
	};

	/// <summary>
	/// TFtdcPublishStatusType��һ������״̬����
	/// </summary>
	public enum struct EnumPublishStatusType : Byte
	{
		/// <summary>
		/// δ����
		/// </summary>
		None = (Byte)'1',

		/// <summary>
		/// ���ڷ���
		/// </summary>
		Publishing = (Byte)'2',

		/// <summary>
		/// �ѷ���
		/// </summary>
		Published = (Byte)'3'
	};

	/// <summary>
	/// TFtdcSystemStatusType��һ��ϵͳ״̬����
	/// </summary>
	public enum struct EnumSystemStatusType : Byte
	{
		/// <summary>
		/// ����Ծ
		/// </summary>
		NonActive = (Byte)'1',

		/// <summary>
		/// ����
		/// </summary>
		Startup = (Byte)'2',

		/// <summary>
		/// ���׿�ʼ��ʼ��
		/// </summary>
		Initialize = (Byte)'3',

		/// <summary>
		/// ������ɳ�ʼ��
		/// </summary>
		Initialized = (Byte)'4',

		/// <summary>
		/// ���п�ʼ
		/// </summary>
		Close = (Byte)'5',

		/// <summary>
		/// �������
		/// </summary>
		Closed = (Byte)'6',

		/// <summary>
		/// ����
		/// </summary>
		Settlement = (Byte)'7'
	};

	/// <summary>
	/// TFtdcSettlementStatusType��һ������״̬����
	/// </summary>
	public enum struct EnumSettlementStatusType : Byte
	{
		/// <summary>
		/// ��ʼ
		/// </summary>
		Initialize = (Byte)'0',

		/// <summary>
		/// ������
		/// </summary>
		Settlementing = (Byte)'1',

		/// <summary>
		/// �ѽ���
		/// </summary>
		Settlemented = (Byte)'2',

		/// <summary>
		/// �������
		/// </summary>
		Finished = (Byte)'3'
	};

	/// <summary>
	/// TFtdcInvestorTypeType��һ��Ͷ������������
	/// </summary>
	public enum struct EnumInvestorTypeType : Byte
	{
		/// <summary>
		/// ��Ȼ��
		/// </summary>
		Person = (Byte)'0',

		/// <summary>
		/// ����
		/// </summary>
		Company = (Byte)'1',

		/// <summary>
		/// Ͷ�ʻ���
		/// </summary>
		Fund = (Byte)'2'
	};

	/// <summary>
	/// TFtdcBrokerTypeType��һ�����͹�˾��������
	/// </summary>
	public enum struct EnumBrokerTypeType : Byte
	{
		/// <summary>
		/// ���׻�Ա
		/// </summary>
		Trade = (Byte)'0',

		/// <summary>
		/// ���׽����Ա
		/// </summary>
		TradeSettle = (Byte)'1'
	};

	/// <summary>
	/// TFtdcRiskLevelType��һ�����յȼ�����
	/// </summary>
	public enum struct EnumRiskLevelType : Byte
	{
		/// <summary>
		/// �ͷ��տͻ�
		/// </summary>
		Low = (Byte)'1',

		/// <summary>
		/// ��ͨ�ͻ�
		/// </summary>
		Normal = (Byte)'2',

		/// <summary>
		/// ��ע�ͻ�
		/// </summary>
		Focus = (Byte)'3',

		/// <summary>
		/// ���տͻ�
		/// </summary>
		Risk = (Byte)'4'
	};

	/// <summary>
	/// TFtdcFeeAcceptStyleType��һ����������ȡ��ʽ����
	/// </summary>
	public enum struct EnumFeeAcceptStyleType : Byte
	{
		/// <summary>
		/// ��������ȡ
		/// </summary>
		ByTrade = (Byte)'1',

		/// <summary>
		/// ��������ȡ
		/// </summary>
		ByDeliv = (Byte)'2',

		/// <summary>
		/// ����
		/// </summary>
		None = (Byte)'3',

		/// <summary>
		/// ��ָ����������ȡ
		/// </summary>
		FixFee = (Byte)'4'
	};

	/// <summary>
	/// TFtdcPasswordTypeType��һ��������������
	/// </summary>
	public enum struct EnumPasswordTypeType : Byte
	{
		/// <summary>
		/// ��������
		/// </summary>
		Trade = (Byte)'1',

		/// <summary>
		/// �ʽ�����
		/// </summary>
		Account = (Byte)'2'
	};

	/// <summary>
	/// TFtdcAlgorithmType��һ��ӯ���㷨����
	/// </summary>
	public enum struct EnumAlgorithmType : Byte
	{
		/// <summary>
		/// ��ӯ����������
		/// </summary>
		All = (Byte)'1',

		/// <summary>
		/// ��ӯ���ƣ�������
		/// </summary>
		OnlyLost = (Byte)'2',

		/// <summary>
		/// ��ӯ�ƣ���������
		/// </summary>
		OnlyGain = (Byte)'3',

		/// <summary>
		/// ��ӯ������������
		/// </summary>
		None = (Byte)'4'
	};

	/// <summary>
	/// TFtdcIncludeCloseProfitType��һ���Ƿ����ƽ��ӯ������
	/// </summary>
	public enum struct EnumIncludeCloseProfitType : Byte
	{
		/// <summary>
		/// ����ƽ��ӯ��
		/// </summary>
		Include = (Byte)'0',

		/// <summary>
		/// ������ƽ��ӯ��
		/// </summary>
		NotInclude = (Byte)'2'
	};

	/// <summary>
	/// TFtdcAllWithoutTradeType��һ���Ƿ��ܿ��������������
	/// </summary>
	public enum struct EnumAllWithoutTradeType : Byte
	{
		/// <summary>
		/// ���ܿ����������
		/// </summary>
		Enable = (Byte)'0',

		/// <summary>
		/// �ܿ����������
		/// </summary>
		Disable = (Byte)'2'
	};

	/// <summary>
	/// TFtdcFuturePwdFlagType��һ���ʽ�����˶Ա�־����
	/// </summary>
	public enum struct EnumFuturePwdFlagType : Byte
	{
		/// <summary>
		/// ���˶�
		/// </summary>
		UnCheck = (Byte)'0',

		/// <summary>
		/// �˶�
		/// </summary>
		Check = (Byte)'1'
	};

	/// <summary>
	/// TFtdcTransferTypeType��һ������ת����������
	/// </summary>
	public enum struct EnumTransferTypeType : Byte
	{
		/// <summary>
		/// ����ת�ڻ�
		/// </summary>
		BankToFuture = (Byte)'0',

		/// <summary>
		/// �ڻ�ת����
		/// </summary>
		FutureToBank = (Byte)'1'
	};

	/// <summary>
	/// TFtdcTransferValidFlagType��һ��ת����Ч��־����
	/// </summary>
	public enum struct EnumTransferValidFlagType : Byte
	{
		/// <summary>
		/// ��Ч��ʧ��
		/// </summary>
		Invalid = (Byte)'0',

		/// <summary>
		/// ��Ч
		/// </summary>
		Valid = (Byte)'1',

		/// <summary>
		/// ����
		/// </summary>
		Reverse = (Byte)'2'
	};

	/// <summary>
	/// TFtdcReasonType��һ����������
	/// </summary>
	public enum struct EnumReasonType : Byte
	{
		/// <summary>
		/// ��
		/// </summary>
		CD = (Byte)'0',

		/// <summary>
		/// �ʽ���;
		/// </summary>
		ZT = (Byte)'1',

		/// <summary>
		/// ����
		/// </summary>
		QT = (Byte)'2'
	};

	/// <summary>
	/// TFtdcSexType��һ���Ա�����
	/// </summary>
	public enum struct EnumSexType : Byte
	{
		/// <summary>
		/// δ֪
		/// </summary>
		None = (Byte)'0',

		/// <summary>
		/// ��
		/// </summary>
		Man = (Byte)'1',

		/// <summary>
		/// Ů
		/// </summary>
		Woman = (Byte)'2'
	};

	/// <summary>
	/// TFtdcUserTypeType��һ���û���������
	/// </summary>
	public enum struct EnumUserTypeType : Byte
	{
		/// <summary>
		/// Ͷ����
		/// </summary>
		Investor = (Byte)'0',

		/// <summary>
		/// ����Ա
		/// </summary>
		Operator = (Byte)'1',

		/// <summary>
		/// ����Ա
		/// </summary>
		SuperUser = (Byte)'2'
	};

	/// <summary>
	/// TFtdcRateTypeType��һ��������������
	/// </summary>
	public enum struct EnumRateTypeType : Byte
	{
		/// <summary>
		/// ��֤����
		/// </summary>
		MarginRate = (Byte)'2',

		/// <summary>
		/// ��������
		/// </summary>
		CommRate = (Byte)'1',

		/// <summary>
		/// ����
		/// </summary>
		AllRate = (Byte)'0'
	};

	/// <summary>
	/// TFtdcNoteTypeType��һ��֪ͨ��������
	/// </summary>
	public enum struct EnumNoteTypeType : Byte
	{
		/// <summary>
		/// ���׽��㵥
		/// </summary>
		TradeSettleBill = (Byte)'1',

		/// <summary>
		/// ���׽����±�
		/// </summary>
		TradeSettleMonth = (Byte)'2',

		/// <summary>
		/// ׷�ӱ�֤��֪ͨ��
		/// </summary>
		CallMarginNotes = (Byte)'3',

		/// <summary>
		/// ǿ��ƽ��֪ͨ��
		/// </summary>
		ForceCloseNotes = (Byte)'4',

		/// <summary>
		/// �ɽ�֪ͨ��
		/// </summary>
		TradeNotes = (Byte)'5',

		/// <summary>
		/// ����֪ͨ��
		/// </summary>
		DelivNotes = (Byte)'6'
	};

	/// <summary>
	/// TFtdcSettlementStyleType��һ�����㵥��ʽ����
	/// </summary>
	public enum struct EnumSettlementStyleType : Byte
	{
		/// <summary>
		/// ���ն���
		/// </summary>
		Day = (Byte)'1',

		/// <summary>
		/// ��ʶԳ�
		/// </summary>
		Volume = (Byte)'2'
	};

	/// <summary>
	/// TFtdcSettlementBillTypeType��һ�����㵥��������
	/// </summary>
	public enum struct EnumSettlementBillTypeType : Byte
	{
		/// <summary>
		/// �ձ�
		/// </summary>
		Day = (Byte)'0',

		/// <summary>
		/// �±�
		/// </summary>
		Month = (Byte)'1'
	};

	/// <summary>
	/// TFtdcUserRightTypeType��һ���ͻ�Ȩ����������
	/// </summary>
	public enum struct EnumUserRightTypeType : Byte
	{
		/// <summary>
		/// ��¼
		/// </summary>
		Logon = (Byte)'1',

		/// <summary>
		/// ����ת��
		/// </summary>
		Transfer = (Byte)'2',

		/// <summary>
		/// �ʼĽ��㵥
		/// </summary>
		EMail = (Byte)'3',

		/// <summary>
		/// ������㵥
		/// </summary>
		Fax = (Byte)'4',

		/// <summary>
		/// ������
		/// </summary>
		ConditionOrder = (Byte)'5'
	};

	/// <summary>
	/// TFtdcMarginPriceTypeType��һ����֤��۸���������
	/// </summary>
	public enum struct EnumMarginPriceTypeType : Byte
	{
		/// <summary>
		/// ������
		/// </summary>
		PreSettlementPrice = (Byte)'1',

		/// <summary>
		/// ���¼�
		/// </summary>
		SettlementPrice = (Byte)'2',

		/// <summary>
		/// �ɽ�����
		/// </summary>
		AveragePrice = (Byte)'3',

		/// <summary>
		/// ���ּ�
		/// </summary>
		OpenPrice = (Byte)'4'
	};

	/// <summary>
	/// TFtdcBillGenStatusType��һ�����㵥����״̬����
	/// </summary>
	public enum struct EnumBillGenStatusType : Byte
	{
		/// <summary>
		/// δ����
		/// </summary>
		None = (Byte)'0',

		/// <summary>
		/// ������
		/// </summary>
		NoGenerated = (Byte)'1',

		/// <summary>
		/// ������
		/// </summary>
		Generated = (Byte)'2'
	};

	/// <summary>
	/// TFtdcAlgoTypeType��һ���㷨��������
	/// </summary>
	public enum struct EnumAlgoTypeType : Byte
	{
		/// <summary>
		/// �ֲִ����㷨
		/// </summary>
		HandlePositionAlgo = (Byte)'1',

		/// <summary>
		/// Ѱ�ұ�֤�����㷨
		/// </summary>
		FindMarginRateAlgo = (Byte)'2'
	};

	/// <summary>
	/// TFtdcHandlePositionAlgoIDType��һ���ֲִ����㷨�������
	/// </summary>
	public enum struct EnumHandlePositionAlgoIDType : Byte
	{
		/// <summary>
		/// ����
		/// </summary>
		Base = (Byte)'1',

		/// <summary>
		/// ������Ʒ������
		/// </summary>
		DCE = (Byte)'2',

		/// <summary>
		/// ֣����Ʒ������
		/// </summary>
		CZCE = (Byte)'3'
	};

	/// <summary>
	/// TFtdcFindMarginRateAlgoIDType��һ��Ѱ�ұ�֤�����㷨�������
	/// </summary>
	public enum struct EnumFindMarginRateAlgoIDType : Byte
	{
		/// <summary>
		/// ����
		/// </summary>
		Base = (Byte)'1',

		/// <summary>
		/// ������Ʒ������
		/// </summary>
		DCE = (Byte)'2',

		/// <summary>
		/// ֣����Ʒ������
		/// </summary>
		CZCE = (Byte)'3'
	};

	/// <summary>
	/// TFtdcHandleTradingAccountAlgoIDType��һ���ʽ����㷨�������
	/// </summary>
	public enum struct EnumHandleTradingAccountAlgoIDType : Byte
	{
		/// <summary>
		/// ����
		/// </summary>
		Base = (Byte)'1',

		/// <summary>
		/// ������Ʒ������
		/// </summary>
		DCE = (Byte)'2',

		/// <summary>
		/// ֣����Ʒ������
		/// </summary>
		CZCE = (Byte)'3'
	};

	/// <summary>
	/// TFtdcPersonTypeType��һ����ϵ����������
	/// </summary>
	public enum struct EnumPersonTypeType : Byte
	{
		/// <summary>
		/// ָ���µ���
		/// </summary>
		Order = (Byte)'1',

		/// <summary>
		/// ������Ȩ��
		/// </summary>
		Open = (Byte)'2',

		/// <summary>
		/// �ʽ������
		/// </summary>
		Fund = (Byte)'3',

		/// <summary>
		/// ���㵥ȷ����
		/// </summary>
		Settlement = (Byte)'4'
	};

	/// <summary>
	/// TFtdcQueryInvestorRangeType��һ����ѯ��Χ����
	/// </summary>
	public enum struct EnumQueryInvestorRangeType : Byte
	{
		/// <summary>
		/// ����
		/// </summary>
		All = (Byte)'1',

		/// <summary>
		/// ��ѯ����
		/// </summary>
		Group = (Byte)'2',

		/// <summary>
		/// ��һͶ����
		/// </summary>
		Single = (Byte)'3'
	};

	/// <summary>
	/// TFtdcInvestorRiskStatusType��һ��Ͷ���߷���״̬����
	/// </summary>
	public enum struct EnumInvestorRiskStatusType : Byte
	{
		/// <summary>
		/// ����
		/// </summary>
		Normal = (Byte)'1',

		/// <summary>
		/// ����
		/// </summary>
		Warn = (Byte)'2',

		/// <summary>
		/// ׷��
		/// </summary>
		Call = (Byte)'3',

		/// <summary>
		/// ǿƽ
		/// </summary>
		Force = (Byte)'4',

		/// <summary>
		/// �쳣
		/// </summary>
		Exception = (Byte)'5'
	};

	/// <summary>
	/// TFtdcUserEventTypeType��һ���û��¼���������
	/// </summary>
	public enum struct EnumUserEventTypeType : Byte
	{
		/// <summary>
		/// ����
		/// </summary>
		All = (Byte)' ',

		/// <summary>
		/// ��¼
		/// </summary>
		Login = (Byte)'1',

		/// <summary>
		/// �ǳ�
		/// </summary>
		Logout = (Byte)'2',

		/// <summary>
		/// ���׳ɹ�
		/// </summary>
		Trading = (Byte)'3',

		/// <summary>
		/// ����ʧ��
		/// </summary>
		TradingError = (Byte)'4',

		/// <summary>
		/// �޸�����
		/// </summary>
		UpdatePassword = (Byte)'5',

		/// <summary>
		/// ����
		/// </summary>
		Other = (Byte)'9'
	};

	/// <summary>
	/// TFtdcCloseStyleType��һ��ƽ�ַ�ʽ����
	/// </summary>
	public enum struct EnumCloseStyleType : Byte
	{
		/// <summary>
		/// �ȿ���ƽ
		/// </summary>
		Close = (Byte)'0',

		/// <summary>
		/// ��ƽ����ƽ��
		/// </summary>
		CloseToday = (Byte)'1'
	};

	/// <summary>
	/// TFtdcStatModeType��һ��ͳ�Ʒ�ʽ����
	/// </summary>
	public enum struct EnumStatModeType : Byte
	{
		/// <summary>
		/// ----
		/// </summary>
		Non = (Byte)'0',

		/// <summary>
		/// ����Լͳ��
		/// </summary>
		Instrument = (Byte)'1',

		/// <summary>
		/// ����Ʒͳ��
		/// </summary>
		Product = (Byte)'2',

		/// <summary>
		/// ��Ͷ����ͳ��
		/// </summary>
		Investor = (Byte)'3'
	};

	/// <summary>
	/// TFtdcParkedOrderStatusType��һ��Ԥ��״̬����
	/// </summary>
	public enum struct EnumParkedOrderStatusType : Byte
	{
		/// <summary>
		/// δ����
		/// </summary>
		NotSend = (Byte)'1',

		/// <summary>
		/// �ѷ���
		/// </summary>
		Send = (Byte)'2',

		/// <summary>
		/// ��ɾ��
		/// </summary>
		Deleted = (Byte)'3'
	};

	/// <summary>
	/// TFtdcVirDealStatusType��һ������״̬����
	/// </summary>
	public enum struct EnumVirDealStatusType : Byte
	{
		/// <summary>
		/// ���ڴ���
		/// </summary>
		Dealing = (Byte)'1',

		/// <summary>
		/// ����ɹ�
		/// </summary>
		DeaclSucceed = (Byte)'2'
	};

	/// <summary>
	/// TFtdcOrgSystemIDType��һ��ԭ��ϵͳ��������
	/// </summary>
	public enum struct EnumOrgSystemIDType : Byte
	{
		/// <summary>
		/// �ۺϽ���ƽ̨
		/// </summary>
		Standard = (Byte)'0',

		/// <summary>
		/// ��ʢϵͳ
		/// </summary>
		ESunny = (Byte)'1',

		/// <summary>
		/// ���˴�V6ϵͳ
		/// </summary>
		KingStarV6 = (Byte)'2'
	};

	/// <summary>
	/// TFtdcVirTradeStatusType��һ������״̬����
	/// </summary>
	public enum struct EnumVirTradeStatusType : Byte
	{
		/// <summary>
		/// ����������
		/// </summary>
		NaturalDeal = (Byte)'0',

		/// <summary>
		/// �ɹ�����
		/// </summary>
		SucceedEnd = (Byte)'1',

		/// <summary>
		/// ʧ�ܽ���
		/// </summary>
		FailedEND = (Byte)'2',

		/// <summary>
		/// �쳣��
		/// </summary>
		Exception = (Byte)'3',

		/// <summary>
		/// ���˹��쳣����
		/// </summary>
		ManualDeal = (Byte)'4',

		/// <summary>
		/// ͨѶ�쳣 �����˹�����
		/// </summary>
		MesException = (Byte)'5',

		/// <summary>
		/// ϵͳ�������˹�����
		/// </summary>
		SysException = (Byte)'6'
	};

	/// <summary>
	/// TFtdcVirBankAccTypeType��һ�������ʻ���������
	/// </summary>
	public enum struct EnumVirBankAccTypeType : Byte
	{
		/// <summary>
		/// ����
		/// </summary>
		BankBook = (Byte)'1',

		/// <summary>
		/// ���
		/// </summary>
		BankCard = (Byte)'2',

		/// <summary>
		/// ���ÿ�
		/// </summary>
		CreditCard = (Byte)'3'
	};

	/// <summary>
	/// TFtdcVirementStatusType��һ�������ʻ���������
	/// </summary>
	public enum struct EnumVirementStatusType : Byte
	{
		/// <summary>
		/// ����
		/// </summary>
		Natural = (Byte)'0',

		/// <summary>
		/// ����
		/// </summary>
		Canceled = (Byte)'9'
	};

	/// <summary>
	/// TFtdcVirementAvailAbilityType��һ����Ч��־����
	/// </summary>
	public enum struct EnumVirementAvailAbilityType : Byte
	{
		/// <summary>
		/// δȷ��
		/// </summary>
		NoAvailAbility = (Byte)'0',

		/// <summary>
		/// ��Ч
		/// </summary>
		AvailAbility = (Byte)'1',

		/// <summary>
		/// ����
		/// </summary>
		Repeal = (Byte)'2'
	};

	/// <summary>
	/// TFtdcVirementTradeCodeType��һ�����״�������
	/// </summary>
	public enum struct EnumVirementTradeCodeType : Byte
	{
		/// <summary>
		/// ���з��������ʽ�ת�ڻ�
		/// </summary>
		BankBankToFuture_102001 = (Byte)'1',//'102001',

											/// <summary>
											/// ���з����ڻ��ʽ�ת����
											/// </summary>
											BankFutureToBank_102002 = (Byte)'2',//'102002',

																				/// <summary>
																				/// �ڻ����������ʽ�ת�ڻ�
																				/// </summary>
																				FutureBankToFuture_202001 = (Byte)'3',//'202001',

																													  /// <summary>
																													  /// �ڻ������ڻ��ʽ�ת����
																													  /// </summary>
																													  FutureFutureToBank_202002 = (Byte)'4'//'202002'
	};

	/// <summary>
	/// TFtdcCFMMCKeyKindType��һ����̬��Կ���(��֤����)����
	/// </summary>
	public enum struct EnumCFMMCKeyKindType : Byte
	{
		/// <summary>
		/// �����������
		/// </summary>
		REQUEST = (Byte)'R',

		/// <summary>
		/// CFMMC�Զ�����
		/// </summary>
		AUTO = (Byte)'A',

		/// <summary>
		/// CFMMC�ֶ�����
		/// </summary>
		MANUAL = (Byte)'M'
	};

	/// <summary>
	/// TFtdcCertificationTypeType��һ��֤����������
	/// </summary>
	public enum struct EnumCertificationTypeType : Byte
	{
		/// <summary>
		/// ���֤
		/// </summary>
		IDCard = (Byte)'0',

		/// <summary>
		/// ����
		/// </summary>
		Passport = (Byte)'1',

		/// <summary>
		/// ����֤
		/// </summary>
		OfficerIDCard = (Byte)'2',

		/// <summary>
		/// ʿ��֤
		/// </summary>
		SoldierIDCard = (Byte)'3',

		/// <summary>
		/// ����֤
		/// </summary>
		HomeComingCard = (Byte)'4',

		/// <summary>
		/// ���ڲ�
		/// </summary>
		HouseholdRegister = (Byte)'5',

		/// <summary>
		/// Ӫҵִ�պ�
		/// </summary>
		LicenseNo = (Byte)'6',

		/// <summary>
		/// ��֯��������֤
		/// </summary>
		InstitutionCodeCard = (Byte)'7',

		/// <summary>
		/// ��ʱӪҵִ�պ�
		/// </summary>
		TempLicenseNo = (Byte)'8',

		/// <summary>
		/// ������ҵ�Ǽ�֤��
		/// </summary>
		NoEnterpriseLicenseNo = (Byte)'9',

		/// <summary>
		/// ����֤��
		/// </summary>
		OtherCard = (Byte)'x',

		/// <summary>
		/// ���ܲ�������
		/// </summary>
		SuperDepAgree = (Byte)'a'
	};

	/// <summary>
	/// TFtdcFileBusinessCodeType��һ���ļ�ҵ��������
	/// </summary>
	public enum struct EnumFileBusinessCodeType : Byte
	{
		/// <summary>
		/// ����
		/// </summary>
		Others = (Byte)'0',

		/// <summary>
		/// ת�˽�����ϸ����
		/// </summary>
		TransferDetails = (Byte)'1',

		/// <summary>
		/// �ͻ��˻�״̬����
		/// </summary>
		CustAccStatus = (Byte)'2',

		/// <summary>
		/// �˻��ཻ����ϸ����
		/// </summary>
		AccountTradeDetails = (Byte)'3',

		/// <summary>
		/// �ڻ��˻���Ϣ�����ϸ����
		/// </summary>
		FutureAccountChangeInfoDetails = (Byte)'4',

		/// <summary>
		/// �ͻ��ʽ�̨�������ϸ����
		/// </summary>
		CustMoneyDetail = (Byte)'5',

		/// <summary>
		/// �ͻ�������Ϣ��ϸ����
		/// </summary>
		CustCancelAccountInfo = (Byte)'6',

		/// <summary>
		/// �ͻ��ʽ������˽��
		/// </summary>
		CustMoneyResult = (Byte)'7',

		/// <summary>
		/// ���������쳣����ļ�
		/// </summary>
		OthersExceptionResult = (Byte)'8',

		/// <summary>
		/// �ͻ���Ϣ������ϸ
		/// </summary>
		CustInterestNetMoneyDetails = (Byte)'9',

		/// <summary>
		/// �ͻ��ʽ�����ϸ
		/// </summary>
		CustMoneySendAndReceiveDetails = (Byte)'a',

		/// <summary>
		/// ���˴�������ʽ��ջ���
		/// </summary>
		CorporationMoneyTotal = (Byte)'b',

		/// <summary>
		/// ������ʽ��ջ���
		/// </summary>
		MainbodyMoneyTotal = (Byte)'c',

		/// <summary>
		/// �ܷ�ƽ��������
		/// </summary>
		MainPartMonitorData = (Byte)'d',

		/// <summary>
		/// ������б��������
		/// </summary>
		PreparationMoney = (Byte)'e',

		/// <summary>
		/// Э���������ʽ�������
		/// </summary>
		BankMoneyMonitorData = (Byte)'f'
	};

	/// <summary>
	/// TFtdcCashExchangeCodeType��һ���㳮��־����
	/// </summary>
	public enum struct EnumCashExchangeCodeType : Byte
	{
		/// <summary>
		/// ��
		/// </summary>
		Exchange = (Byte)'1',

		/// <summary>
		/// ��
		/// </summary>
		Cash = (Byte)'2'
	};

	/// <summary>
	/// TFtdcYesNoIndicatorType��һ���ǻ���ʶ����
	/// </summary>
	public enum struct EnumYesNoIndicatorType : Byte
	{
		/// <summary>
		/// ��
		/// </summary>
		Yes = (Byte)'0',

		/// <summary>
		/// ��
		/// </summary>
		No = (Byte)'1'
	};

	/// <summary>
	/// TFtdcBanlanceTypeType��һ�������������
	/// </summary>
	public enum struct EnumBanlanceTypeType : Byte
	{
		/// <summary>
		/// ��ǰ���
		/// </summary>
		CurrentMoney = (Byte)'0',

		/// <summary>
		/// �������
		/// </summary>
		UsableMoney = (Byte)'1',

		/// <summary>
		/// ��ȡ���
		/// </summary>
		FetchableMoney = (Byte)'2',

		/// <summary>
		/// �������
		/// </summary>
		FreezeMoney = (Byte)'3'
	};

	/// <summary>
	/// TFtdcGenderType��һ���Ա�����
	/// </summary>
	public enum struct EnumGenderType : Byte
	{
		/// <summary>
		/// δ֪״̬
		/// </summary>
		Unknown = (Byte)'0',

		/// <summary>
		/// ��
		/// </summary>
		Male = (Byte)'1',

		/// <summary>
		/// Ů
		/// </summary>
		Female = (Byte)'2'
	};

	/// <summary>
	/// TFtdcFeePayFlagType��һ������֧����־����
	/// </summary>
	public enum struct EnumFeePayFlagType : Byte
	{
		/// <summary>
		/// �����淽֧������
		/// </summary>
		BEN = (Byte)'0',

		/// <summary>
		/// �ɷ��ͷ�֧������
		/// </summary>
		OUR = (Byte)'1',

		/// <summary>
		/// �ɷ��ͷ�֧������ķ��ã����淽֧�����ܵķ���
		/// </summary>
		SHA = (Byte)'2'
	};

	/// <summary>
	/// TFtdcPassWordKeyTypeType��һ����Կ��������
	/// </summary>
	public enum struct EnumPassWordKeyTypeType : Byte
	{
		/// <summary>
		/// ������Կ
		/// </summary>
		ExchangeKey = (Byte)'0',

		/// <summary>
		/// ������Կ
		/// </summary>
		PassWordKey = (Byte)'1',

		/// <summary>
		/// MAC��Կ
		/// </summary>
		MACKey = (Byte)'2',

		/// <summary>
		/// ������Կ
		/// </summary>
		MessageKey = (Byte)'3'
	};

	/// <summary>
	/// TFtdcFBTPassWordTypeType��һ��������������
	/// </summary>
	public enum struct EnumFBTPassWordTypeType : Byte
	{
		/// <summary>
		/// ��ѯ
		/// </summary>
		Query = (Byte)'0',

		/// <summary>
		/// ȡ��
		/// </summary>
		Fetch = (Byte)'1',

		/// <summary>
		/// ת��
		/// </summary>
		Transfer = (Byte)'2',

		/// <summary>
		/// ����
		/// </summary>
		Trade = (Byte)'3'
	};

	/// <summary>
	/// TFtdcFBTEncryModeType��һ�����ܷ�ʽ����
	/// </summary>
	public enum struct EnumFBTEncryModeType : Byte
	{
		/// <summary>
		/// ������
		/// </summary>
		NoEncry = (Byte)'0',

		/// <summary>
		/// DES
		/// </summary>
		DES = (Byte)'1',

		/// <summary>
		/// 3DES
		/// </summary>
		DES3 = (Byte)'2'
	};

	/// <summary>
	/// TFtdcBankRepealFlagType��һ�����г�����־����
	/// </summary>
	public enum struct EnumBankRepealFlagType : Byte
	{
		/// <summary>
		/// ���������Զ�����
		/// </summary>
		BankNotNeedRepeal = (Byte)'0',

		/// <summary>
		/// ���д��Զ�����
		/// </summary>
		BankWaitingRepeal = (Byte)'1',

		/// <summary>
		/// �������Զ�����
		/// </summary>
		BankBeenRepealed = (Byte)'2'
	};

	/// <summary>
	/// TFtdcBrokerRepealFlagType��һ�����̳�����־����
	/// </summary>
	public enum struct EnumBrokerRepealFlagType : Byte
	{
		/// <summary>
		/// ���������Զ�����
		/// </summary>
		BrokerNotNeedRepeal = (Byte)'0',

		/// <summary>
		/// ���̴��Զ�����
		/// </summary>
		BrokerWaitingRepeal = (Byte)'1',

		/// <summary>
		/// �������Զ�����
		/// </summary>
		BrokerBeenRepealed = (Byte)'2'
	};

	/// <summary>
	/// TFtdcInstitutionTypeType��һ�������������
	/// </summary>
	public enum struct EnumInstitutionTypeType : Byte
	{
		/// <summary>
		/// ����
		/// </summary>
		Bank = (Byte)'0',

		/// <summary>
		/// ����
		/// </summary>
		Future = (Byte)'1',

		/// <summary>
		/// ȯ��
		/// </summary>
		Store = (Byte)'2'
	};

	/// <summary>
	/// TFtdcLastFragmentType��һ������Ƭ��־����
	/// </summary>
	public enum struct EnumLastFragmentType : Byte
	{
		/// <summary>
		/// ������Ƭ
		/// </summary>
		Yes = (Byte)'0',

		/// <summary>
		/// ��������Ƭ
		/// </summary>
		No = (Byte)'1'
	};

	/// <summary>
	/// TFtdcBankAccStatusType��һ�������˻�״̬����
	/// </summary>
	public enum struct EnumBankAccStatusType : Byte
	{
		/// <summary>
		/// ����
		/// </summary>
		Normal = (Byte)'0',

		/// <summary>
		/// ����
		/// </summary>
		Freeze = (Byte)'1',

		/// <summary>
		/// ��ʧ
		/// </summary>
		ReportLoss = (Byte)'2'
	};

	/// <summary>
	/// TFtdcMoneyAccountStatusType��һ���ʽ��˻�״̬����
	/// </summary>
	public enum struct EnumMoneyAccountStatusType : Byte
	{
		/// <summary>
		/// ����
		/// </summary>
		Normal = (Byte)'0',

		/// <summary>
		/// ����
		/// </summary>
		Cancel = (Byte)'1'
	};

	/// <summary>
	/// TFtdcManageStatusType��һ�����״̬����
	/// </summary>
	public enum struct EnumManageStatusType : Byte
	{
		/// <summary>
		/// ָ�����
		/// </summary>
		Point = (Byte)'0',

		/// <summary>
		/// Ԥָ��
		/// </summary>
		PrePoint = (Byte)'1',

		/// <summary>
		/// ����ָ��
		/// </summary>
		CancelPoint = (Byte)'2'
	};

	/// <summary>
	/// TFtdcSystemTypeType��һ��Ӧ��ϵͳ��������
	/// </summary>
	public enum struct EnumSystemTypeType : Byte
	{
		/// <summary>
		/// ����ת��
		/// </summary>
		FutureBankTransfer = (Byte)'0',

		/// <summary>
		/// ��֤ת��
		/// </summary>
		StockBankTransfer = (Byte)'1',

		/// <summary>
		/// ���������
		/// </summary>
		TheThirdPartStore = (Byte)'2'
	};

	/// <summary>
	/// TFtdcTxnEndFlagType��һ������ת�ʻ�ת�����־����
	/// </summary>
	public enum struct EnumTxnEndFlagType : Byte
	{
		/// <summary>
		/// ����������
		/// </summary>
		NormalProcessing = (Byte)'0',

		/// <summary>
		/// �ɹ�����
		/// </summary>
		Success = (Byte)'1',

		/// <summary>
		/// ʧ�ܽ���
		/// </summary>
		Failed = (Byte)'2',

		/// <summary>
		/// �쳣��
		/// </summary>
		Abnormal = (Byte)'3',

		/// <summary>
		/// ���˹��쳣����
		/// </summary>
		ManualProcessedForException = (Byte)'4',

		/// <summary>
		/// ͨѶ�쳣 �����˹�����
		/// </summary>
		CommuFailedNeedManualProcess = (Byte)'5',

		/// <summary>
		/// ϵͳ�������˹�����
		/// </summary>
		SysErrorNeedManualProcess = (Byte)'6'
	};

	/// <summary>
	/// TFtdcProcessStatusType��һ������ת�ʷ�����״̬����
	/// </summary>
	public enum struct EnumProcessStatusType : Byte
	{
		/// <summary>
		/// δ����
		/// </summary>
		NotProcess = (Byte)'0',

		/// <summary>
		/// ��ʼ����
		/// </summary>
		StartProcess = (Byte)'1',

		/// <summary>
		/// �������
		/// </summary>
		Finished = (Byte)'2'
	};

	/// <summary>
	/// TFtdcCustTypeType��һ���ͻ���������
	/// </summary>
	public enum struct EnumCustTypeType : Byte
	{
		/// <summary>
		/// ��Ȼ��
		/// </summary>
		Person = (Byte)'0',

		/// <summary>
		/// ������
		/// </summary>
		Institution = (Byte)'1'
	};

	/// <summary>
	/// TFtdcFBTTransferDirectionType��һ������ת�ʷ�������
	/// </summary>
	public enum struct EnumFBTTransferDirectionType : Byte
	{
		/// <summary>
		/// �������ת�ڻ�
		/// </summary>
		FromBankToFuture = (Byte)'1',

		/// <summary>
		/// �����ڻ�ת����
		/// </summary>
		FromFutureToBank = (Byte)'2'
	};

	/// <summary>
	/// TFtdcOpenOrDestroyType��һ���������������
	/// </summary>
	public enum struct EnumOpenOrDestroyType : Byte
	{
		/// <summary>
		/// ����
		/// </summary>
		Open = (Byte)'1',

		/// <summary>
		/// ����
		/// </summary>
		Destroy = (Byte)'0'
	};

	/// <summary>
	/// TFtdcAvailabilityFlagType��һ����Ч��־����
	/// </summary>
	public enum struct EnumAvailabilityFlagType : Byte
	{
		/// <summary>
		/// δȷ��
		/// </summary>
		Invalid = (Byte)'0',

		/// <summary>
		/// ��Ч
		/// </summary>
		Valid = (Byte)'1',

		/// <summary>
		/// ����
		/// </summary>
		Repeal = (Byte)'2'
	};

	/// <summary>
	/// TFtdcOrganTypeType��һ��������������
	/// </summary>
	public enum struct EnumOrganTypeType : Byte
	{
		/// <summary>
		/// ���д���
		/// </summary>
		Bank = (Byte)'1',

		/// <summary>
		/// ����ǰ��
		/// </summary>
		Future = (Byte)'2',

		/// <summary>
		/// ����ת��ƽ̨����
		/// </summary>
		PlateForm = (Byte)'9'
	};

	/// <summary>
	/// TFtdcOrganLevelType��һ��������������
	/// </summary>
	public enum struct EnumOrganLevelType : Byte
	{
		/// <summary>
		/// �������л������ܲ�
		/// </summary>
		HeadQuarters = (Byte)'1',

		/// <summary>
		/// ���з����Ļ��ڻ���˾Ӫҵ��
		/// </summary>
		Branch = (Byte)'2'
	};

	/// <summary>
	/// TFtdcProtocalIDType��һ��Э����������
	/// </summary>
	public enum struct EnumProtocalIDType : Byte
	{
		/// <summary>
		/// ����Э��
		/// </summary>
		FutureProtocal = (Byte)'0',

		/// <summary>
		/// ����Э��
		/// </summary>
		ICBCProtocal = (Byte)'1',

		/// <summary>
		/// ũ��Э��
		/// </summary>
		ABCProtocal = (Byte)'2',

		/// <summary>
		/// �й�����Э��
		/// </summary>
		CBCProtocal = (Byte)'3',

		/// <summary>
		/// ����Э��
		/// </summary>
		CCBProtocal = (Byte)'4',

		/// <summary>
		/// ����Э��
		/// </summary>
		BOCOMProtocal = (Byte)'5',

		/// <summary>
		/// ����ת��ƽ̨Э��
		/// </summary>
		FBTPlateFormProtocal = (Byte)'X'
	};

	/// <summary>
	/// TFtdcConnectModeType��һ���׽������ӷ�ʽ����
	/// </summary>
	public enum struct EnumConnectModeType : Byte
	{
		/// <summary>
		/// ������
		/// </summary>
		ShortConnect = (Byte)'0',

		/// <summary>
		/// ������
		/// </summary>
		LongConnect = (Byte)'1'
	};

	/// <summary>
	/// TFtdcSyncModeType��һ���׽���ͨ�ŷ�ʽ����
	/// </summary>
	public enum struct EnumSyncModeType : Byte
	{
		/// <summary>
		/// �첽
		/// </summary>
		ASync = (Byte)'0',

		/// <summary>
		/// ͬ��
		/// </summary>
		Sync = (Byte)'1'
	};

	/// <summary>
	/// TFtdcBankAccTypeType��һ�������ʺ���������
	/// </summary>
	public enum struct EnumBankAccTypeType : Byte
	{
		/// <summary>
		/// ���д���
		/// </summary>
		BankBook = (Byte)'1',

		/// <summary>
		/// ���
		/// </summary>
		SavingCard = (Byte)'2',

		/// <summary>
		/// ���ÿ�
		/// </summary>
		CreditCard = (Byte)'3'
	};

	/// <summary>
	/// TFtdcFutureAccTypeType��һ���ڻ���˾�ʺ���������
	/// </summary>
	public enum struct EnumFutureAccTypeType : Byte
	{
		/// <summary>
		/// ���д���
		/// </summary>
		BankBook = (Byte)'1',

		/// <summary>
		/// ���
		/// </summary>
		SavingCard = (Byte)'2',

		/// <summary>
		/// ���ÿ�
		/// </summary>
		CreditCard = (Byte)'3'
	};

	/// <summary>
	/// TFtdcOrganStatusType��һ���������״̬����
	/// </summary>
	public enum struct EnumOrganStatusType : Byte
	{
		/// <summary>
		/// ����
		/// </summary>
		Ready = (Byte)'0',

		/// <summary>
		/// ǩ��
		/// </summary>
		CheckIn = (Byte)'1',

		/// <summary>
		/// ǩ��
		/// </summary>
		CheckOut = (Byte)'2',

		/// <summary>
		/// �����ļ�����
		/// </summary>
		CheckFileArrived = (Byte)'3',

		/// <summary>
		/// ����
		/// </summary>
		CheckDetail = (Byte)'4',

		/// <summary>
		/// ��������
		/// </summary>
		DayEndClean = (Byte)'5',

		/// <summary>
		/// ע��
		/// </summary>
		Invalid = (Byte)'9'
	};

	/// <summary>
	/// TFtdcCCBFeeModeType��һ�������շ�ģʽ����
	/// </summary>
	public enum struct EnumCCBFeeModeType : Byte
	{
		/// <summary>
		/// ��������
		/// </summary>
		ByAmount = (Byte)'1',

		/// <summary>
		/// ���¿���
		/// </summary>
		ByMonth = (Byte)'2'
	};

	/// <summary>
	/// TFtdcCommApiTypeType��һ��ͨѶAPI��������
	/// </summary>
	public enum struct EnumCommApiTypeType : Byte
	{
		/// <summary>
		/// �ͻ���
		/// </summary>
		Client = (Byte)'1',

		/// <summary>
		/// �����
		/// </summary>
		Server = (Byte)'2',

		/// <summary>
		/// ����ϵͳ��UserApi
		/// </summary>
		UserApi = (Byte)'3'
	};

	/// <summary>
	/// TFtdcLinkStatusType��һ������״̬����
	/// </summary>
	public enum struct EnumLinkStatusType : Byte
	{
		/// <summary>
		/// �Ѿ�����
		/// </summary>
		Connected = (Byte)'1',

		/// <summary>
		/// û������
		/// </summary>
		Disconnected = (Byte)'2'
	};

	/// <summary>
	/// TFtdcPwdFlagType��һ������˶Ա�־����
	/// </summary>
	public enum struct EnumPwdFlagType : Byte
	{
		/// <summary>
		/// ���˶�
		/// </summary>
		NoCheck = (Byte)'0',

		/// <summary>
		/// ���ĺ˶�
		/// </summary>
		BlankCheck = (Byte)'1',

		/// <summary>
		/// ���ĺ˶�
		/// </summary>
		EncryptCheck = (Byte)'2'
	};

	/// <summary>
	/// TFtdcSecuAccTypeType��һ���ڻ��ʺ���������
	/// </summary>
	public enum struct EnumSecuAccTypeType : Byte
	{
		/// <summary>
		/// �ʽ��ʺ�
		/// </summary>
		AccountID = (Byte)'1',

		/// <summary>
		/// �ʽ𿨺�
		/// </summary>
		CardID = (Byte)'2',

		/// <summary>
		/// �Ϻ��ɶ��ʺ�
		/// </summary>
		SHStockholderID = (Byte)'3',

		/// <summary>
		/// ���ڹɶ��ʺ�
		/// </summary>
		SZStockholderID = (Byte)'4'
	};

	/// <summary>
	/// TFtdcTransferStatusType��һ��ת�˽���״̬����
	/// </summary>
	public enum struct EnumTransferStatusType : Byte
	{
		/// <summary>
		/// ����
		/// </summary>
		Normal = (Byte)'0',

		/// <summary>
		/// ������
		/// </summary>
		Repealed = (Byte)'1'
	};

	/// <summary>
	/// TFtdcSponsorTypeType��һ����������
	/// </summary>
	public enum struct EnumSponsorTypeType : Byte
	{
		/// <summary>
		/// ����
		/// </summary>
		Broker = (Byte)'0',

		/// <summary>
		/// ����
		/// </summary>
		Bank = (Byte)'1'
	};

	/// <summary>
	/// TFtdcReqRspTypeType��һ��������Ӧ�������
	/// </summary>
	public enum struct EnumReqRspTypeType : Byte
	{
		/// <summary>
		/// ����
		/// </summary>
		Request = (Byte)'0',

		/// <summary>
		/// ��Ӧ
		/// </summary>
		Response = (Byte)'1'
	};

	/// <summary>
	/// TFtdcFBTUserEventTypeType��һ������ת���û��¼���������
	/// </summary>
	public enum struct EnumFBTUserEventTypeType : Byte
	{
		/// <summary>
		/// ǩ��
		/// </summary>
		SignIn = (Byte)'0',

		/// <summary>
		/// ����ת�ڻ�
		/// </summary>
		FromBankToFuture = (Byte)'1',

		/// <summary>
		/// �ڻ�ת����
		/// </summary>
		FromFutureToBank = (Byte)'2',

		/// <summary>
		/// ����
		/// </summary>
		OpenAccount = (Byte)'3',

		/// <summary>
		/// ����
		/// </summary>
		CancelAccount = (Byte)'4',

		/// <summary>
		/// ��������˻�
		/// </summary>
		ChangeAccount = (Byte)'5',

		/// <summary>
		/// ��������ת�ڻ�
		/// </summary>
		RepealFromBankToFuture = (Byte)'6',

		/// <summary>
		/// �����ڻ�ת����
		/// </summary>
		RepealFromFutureToBank = (Byte)'7',

		/// <summary>
		/// ��ѯ�����˻�
		/// </summary>
		QueryBankAccount = (Byte)'8',

		/// <summary>
		/// ��ѯ�ڻ��˻�
		/// </summary>
		QueryFutureAccount = (Byte)'9',

		/// <summary>
		/// ǩ��
		/// </summary>
		SignOut = (Byte)'A',

		/// <summary>
		/// ��Կͬ��
		/// </summary>
		SyncKey = (Byte)'B',

		/// <summary>
		/// ����
		/// </summary>
		Other = (Byte)'Z'
	};

	/// <summary>
	/// TFtdcDBOperationType��һ����¼������������
	/// </summary>
	public enum struct EnumDBOperationType : Byte
	{
		/// <summary>
		/// ����
		/// </summary>
		Insert = (Byte)'0',

		/// <summary>
		/// ����
		/// </summary>
		Update = (Byte)'1',

		/// <summary>
		/// ɾ��
		/// </summary>
		Delet = (Byte)'2'
	};


	/// <summary>
	/// TFtdcSyncFlagType��һ��ͬ���������
	/// </summary>
	public enum struct EnumSyncFlagType : Byte
	{
		/// <summary>
		/// ��ͬ��
		/// </summary>
		Yes = (Byte)'0',

		/// <summary>
		/// δͬ��
		/// </summary>
		No = (Byte)'1'
	};


	/// <summary>
	/// TFtdcSyncTypeType��һ��ͬ����������
	/// </summary>
	public enum struct EnumSyncTypeType : Byte
	{
		/// <summary>
		/// һ��ͬ��
		/// </summary>
		OneOffSync = (Byte)'0',

		/// <summary>
		/// ��ʱͬ��
		/// </summary>
		TimerSync = (Byte)'1',

		/// <summary>
		/// ��ʱ��ȫͬ��
		/// </summary>
		TimerFullSync = (Byte)'2'
	};


	/// <summary>
	/// TFtdcNotifyClassType��һ������֪ͨ��������
	/// </summary>
	public enum struct EnumNotifyClassType : Byte
	{
		/// <summary>
		/// ����
		/// </summary>
		NOERROR = (Byte)'0',

		/// <summary>
		/// ��ʾ
		/// </summary>
		Warn = (Byte)'1',

		/// <summary>
		/// ׷��
		/// </summary>
		Call = (Byte)'2',

		/// <summary>
		/// ǿƽ
		/// </summary>
		Force = (Byte)'3',

		/// <summary>
		/// ����
		/// </summary>
		CHUANCANG = (Byte)'4',

		/// <summary>
		/// �쳣
		/// </summary>
		Exception = (Byte)'5'
	};

	/// <summary>
	/// TFtdcForceCloseTypeType��һ��ǿƽ����������
	/// </summary>
	public enum struct EnumForceCloseTypeType : Byte
	{
		/// <summary>
		/// �ֹ�ǿƽ
		/// </summary>
		Manual = (Byte)'0',

		/// <summary>
		/// ��һͶ���߸���ǿƽ
		/// </summary>
		Single = (Byte)'1',

		/// <summary>
		/// ����Ͷ���߸���ǿƽ
		/// </summary>
		Group = (Byte)'2'
	};

	/// <summary>
	/// TFtdcRiskNotifyMethodType��һ������֪ͨ;������
	/// </summary>
	public enum struct EnumRiskNotifyMethodType : Byte
	{
		/// <summary>
		/// ϵͳ֪ͨ
		/// </summary>
		System = (Byte)'0',

		/// <summary>
		/// ����֪ͨ
		/// </summary>
		SMS = (Byte)'1',

		/// <summary>
		/// �ʼ�֪ͨ
		/// </summary>
		EMail = (Byte)'2',

		/// <summary>
		/// �˹�֪ͨ
		/// </summary>
		Manual = (Byte)'3'
	};

	/// <summary>
	/// TFtdcRiskNotifyStatusType��һ������֪ͨ״̬����
	/// </summary>
	public enum struct EnumRiskNotifyStatusType : Byte
	{
		/// <summary>
		/// δ����
		/// </summary>
		NotGen = (Byte)'0',

		/// <summary>
		/// ������δ����
		/// </summary>
		Generated = (Byte)'1',

		/// <summary>
		/// ����ʧ��
		/// </summary>
		SendError = (Byte)'2',

		/// <summary>
		/// �ѷ���δ����
		/// </summary>
		SendOk = (Byte)'3',

		/// <summary>
		/// �ѽ���δȷ��
		/// </summary>
		Received = (Byte)'4',

		/// <summary>
		/// ��ȷ��
		/// </summary>
		Confirmed = (Byte)'5'
	};

	/// <summary>
	/// TFtdcRiskUserEventType��һ������û������¼�����
	/// </summary>
	public enum struct EnumRiskUserEventType : Byte
	{
		/// <summary>
		/// ��������
		/// </summary>
		ExportData = (Byte)'0'
	};

	/// <summary>
	/// TFtdcConditionalOrderSortTypeType��һ��������������������
	/// </summary>
	public enum struct EnumConditionalOrderSortTypeType : Byte
	{
		/// <summary>
		/// ʹ�����¼�����
		/// </summary>
		LastPriceAsc = (Byte)'0',

		/// <summary>
		/// ʹ�����¼۽���
		/// </summary>
		LastPriceDesc = (Byte)'1',

		/// <summary>
		/// ʹ����������
		/// </summary>
		AskPriceAsc = (Byte)'2',

		/// <summary>
		/// ʹ�����۽���
		/// </summary>
		AskPriceDesc = (Byte)'3',

		/// <summary>
		/// ʹ���������
		/// </summary>
		BidPriceAsc = (Byte)'4',

		/// <summary>
		/// ʹ����۽���
		/// </summary>
		BidPriceDesc = (Byte)'5'
	};

	/// <summary>
	/// TFtdcSendTypeType��һ������״̬����
	/// </summary>
	public enum struct EnumSendTypeType : Byte
	{
		/// <summary>
		/// δ����
		/// </summary>
		NoSend = (Byte)'0',

		/// <summary>
		/// �ѷ���
		/// </summary>
		Sended = (Byte)'1',

		/// <summary>
		/// ������
		/// </summary>
		Generated = (Byte)'2',

		/// <summary>
		/// ����ʧ��
		/// </summary>
		SendFail = (Byte)'3',

		/// <summary>
		/// ���ճɹ�
		/// </summary>
		Success = (Byte)'4',

		/// <summary>
		/// ����ʧ��
		/// </summary>
		Fail = (Byte)'5',

		/// <summary>
		/// ȡ������
		/// </summary>
		Cancel = (Byte)'6'
	};

	/// <summary>
	/// TFtdcClientIDStatusType��һ�����ױ���״̬����
	/// </summary>
	public enum struct EnumClientIDStatusType : Byte
	{
		/// <summary>
		/// δ����
		/// </summary>
		NoApply = (Byte)'1',

		/// <summary>
		/// ���ύ����
		/// </summary>
		Submited = (Byte)'2',

		/// <summary>
		/// �ѷ�������
		/// </summary>
		Sended = (Byte)'3',

		/// <summary>
		/// ���
		/// </summary>
		Success = (Byte)'4',

		/// <summary>
		/// �ܾ�
		/// </summary>
		Refuse = (Byte)'5',

		/// <summary>
		/// �ѳ�������
		/// </summary>
		Cancel = (Byte)'6'
	};

	/// <summary>
	/// TFtdcQuestionTypeType��һ��������Ϣ��������
	/// </summary>
	public enum struct EnumQuestionTypeType : Byte
	{
		/// <summary>
		/// ��ѡ
		/// </summary>
		Radio = (Byte)'1',

		/// <summary>
		/// ��ѡ
		/// </summary>
		Option = (Byte)'2',

		/// <summary>
		/// ���
		/// </summary>
		Blank = (Byte)'3'
	};

	/// <summary>
	/// TFtdcProcessTypeType��һ�����̹�����������
	/// </summary>
	public enum struct EnumProcessTypeType : Byte
	{
		/// <summary>
		/// ���뽻�ױ���
		/// </summary>
		ApplyTradingCode = (Byte)'1',

		/// <summary>
		/// �������ױ���
		/// </summary>
		CancelTradingCode = (Byte)'2',

		/// <summary>
		/// �޸������Ϣ
		/// </summary>
		ModifyIDCard = (Byte)'3',

		/// <summary>
		/// �޸�һ����Ϣ
		/// </summary>
		ModifyNoIDCard = (Byte)'4',

		/// <summary>
		/// ��������������
		/// </summary>
		ExchOpenBak = (Byte)'5',

		/// <summary>
		/// ��������������
		/// </summary>
		ExchCancelBak = (Byte)'6'
	};

	/// <summary>
	/// TFtdcBusinessTypeType��һ��ҵ����������
	/// </summary>
	public enum struct EnumBusinessTypeType : Byte
	{
		/// <summary>
		/// ����
		/// </summary>
		Request = (Byte)'1',

		/// <summary>
		/// Ӧ��
		/// </summary>
		Response = (Byte)'2',

		/// <summary>
		/// ֪ͨ
		/// </summary>
		Notice = (Byte)'3'
	};

	/// <summary>
	/// TFtdcCfmmcReturnCodeType��һ��������ķ���������
	/// </summary>
	public enum struct EnumCfmmcReturnCodeType : Byte
	{
		/// <summary>
		/// �ɹ�
		/// </summary>
		Success = (Byte)'0',

		/// <summary>
		/// �ÿͻ��Ѿ��������ڴ�����
		/// </summary>
		Working = (Byte)'1',

		/// <summary>
		/// ����пͻ����ϼ��ʧ��
		/// </summary>
		InfoFail = (Byte)'2',

		/// <summary>
		/// �����ʵ���Ƽ��ʧ��
		/// </summary>
		IDCardFail = (Byte)'3',

		/// <summary>
		/// ��������
		/// </summary>
		OtherFail = (Byte)'4'
	};

	/// <summary>
	/// TFtdcClientTypeType��һ���ͻ���������
	/// </summary>
	public enum struct EnumClientTypeType : Byte
	{
		/// <summary>
		/// ����
		/// </summary>
		All = (Byte)'0',

		/// <summary>
		/// ����
		/// </summary>
		Person = (Byte)'1',

		/// <summary>
		/// ��λ
		/// </summary>
		Company = (Byte)'2'
	};

	/// <summary>
	/// TFtdcExchangeIDTypeType��һ���������������
	/// </summary>
	public enum struct EnumExchangeIDTypeType : Byte
	{
		/// <summary>
		/// �Ϻ��ڻ�������
		/// </summary>
		SHFE = (Byte)'S',

		/// <summary>
		/// ֣����Ʒ������
		/// </summary>
		CZCE = (Byte)'Z',

		/// <summary>
		/// ������Ʒ������
		/// </summary>
		DCE = (Byte)'D',

		/// <summary>
		/// �й������ڻ�������
		/// </summary>
		CFFEX = (Byte)'J'
	};

	/// <summary>
	/// TFtdcExClientIDTypeType��һ�����ױ�����������
	/// </summary>
	public enum struct EnumExClientIDTypeType : Byte
	{
		/// <summary>
		/// �ױ�
		/// </summary>
		Hedge = (Byte)'1',

		/// <summary>
		/// ����
		/// </summary>
		Arbitrage = (Byte)'2',

		/// <summary>
		/// Ͷ��
		/// </summary>
		Speculation = (Byte)'3'
	};

	/// <summary>
	/// TFtdcUpdateFlagType��һ������״̬����
	/// </summary>
	public enum struct EnumUpdateFlagType : Byte
	{
		/// <summary>
		/// δ����
		/// </summary>
		NoUpdate = (Byte)'0',

		/// <summary>
		/// ����ȫ����Ϣ�ɹ�
		/// </summary>
		Success = (Byte)'1',

		/// <summary>
		/// ����ȫ����Ϣʧ��
		/// </summary>
		Fail = (Byte)'2',

		/// <summary>
		/// ���½��ױ���ɹ�
		/// </summary>
		TCSuccess = (Byte)'3',

		/// <summary>
		/// ���½��ױ���ʧ��
		/// </summary>
		TCFail = (Byte)'4',

		/// <summary>
		/// �Ѷ���
		/// </summary>
		Cancel = (Byte)'5'
	};

	/// <summary>
	/// TFtdcApplyOperateIDType��һ�����붯������
	/// </summary>
	public enum struct EnumApplyOperateIDType : Byte
	{
		/// <summary>
		/// ����
		/// </summary>
		OpenInvestor = (Byte)'1',

		/// <summary>
		/// �޸������Ϣ
		/// </summary>
		ModifyIDCard = (Byte)'2',

		/// <summary>
		/// �޸�һ����Ϣ
		/// </summary>
		ModifyNoIDCard = (Byte)'3',

		/// <summary>
		/// ���뽻�ױ���
		/// </summary>
		ApplyTradingCode = (Byte)'4',

		/// <summary>
		/// �������ױ���
		/// </summary>
		CancelTradingCode = (Byte)'5',

		/// <summary>
		/// ����
		/// </summary>
		CancelInvestor = (Byte)'6'
	};

	/// <summary>
	/// TFtdcApplyStatusIDType��һ������״̬����
	/// </summary>
	public enum struct EnumApplyStatusIDType : Byte
	{
		/// <summary>
		/// δ��ȫ
		/// </summary>
		NoComplete = (Byte)'1',

		/// <summary>
		/// ���ύ
		/// </summary>
		Submited = (Byte)'2',

		/// <summary>
		/// �����
		/// </summary>
		Checked = (Byte)'3',

		/// <summary>
		/// �Ѿܾ�
		/// </summary>
		Refused = (Byte)'4',

		/// <summary>
		/// ��ɾ��
		/// </summary>
		Deleted = (Byte)'5'
	};

	/// <summary>
	/// TFtdcSendMethodType��һ�����ͷ�ʽ����
	/// </summary>
	public enum struct EnumSendMethodType : Byte
	{
		/// <summary>
		/// ���ӷ���
		/// </summary>
		ByAPI = (Byte)'1',

		/// <summary>
		/// �ļ�����
		/// </summary>
		ByFile = (Byte)'2'
	};

	/// <summary>
	/// TFtdcEventModeType��һ��������������
	/// </summary>
	public enum struct EnumEventModeType : Byte
	{
		/// <summary>
		/// ����
		/// </summary>
		ADD = (Byte)'1',

		/// <summary>
		/// �޸�
		/// </summary>
		UPDATE = (Byte)'2',

		/// <summary>
		/// ɾ��
		/// </summary>
		DELETE = (Byte)'3',

		/// <summary>
		/// ����
		/// </summary>
		CHECK = (Byte)'4'
	};

	/// <summary>
	/// TFtdcUOAAutoSendType��һ��ͳһ���������Զ���������
	/// </summary>
	public enum struct EnumUOAAutoSendType : Byte
	{
		/// <summary>
		/// �Զ����Ͳ�����
		/// </summary>
		ASR = (Byte)'1',

		/// <summary>
		/// �Զ����ͣ����Զ�����
		/// </summary>
		ASNR = (Byte)'2',

		/// <summary>
		/// ���Զ����ͣ��Զ�����
		/// </summary>
		NSAR = (Byte)'3',

		/// <summary>
		/// ���Զ����ͣ�Ҳ���Զ�����
		/// </summary>
		NSR = (Byte)'4'
	};

	/// <summary>
	/// TFtdcFlowIDType��һ������ID����
	/// </summary>
	public enum struct EnumFlowIDType : Byte
	{
		/// <summary>
		/// Ͷ���߶�ӦͶ����������
		/// </summary>
		InvestorGroupFlow = (Byte)'1'
	};

	/// <summary>
	/// TFtdcCheckLevelType��һ�����˼�������
	/// </summary>
	public enum struct EnumCheckLevelType : Byte
	{
		/// <summary>
		/// �㼶����
		/// </summary>
		Zero = (Byte)'0',

		/// <summary>
		/// һ������
		/// </summary>
		One = (Byte)'1',

		/// <summary>
		/// ��������
		/// </summary>
		Two = (Byte)'2'
	};

	/// <summary>
	/// TFtdcCheckStatusType��һ�����˼�������
	/// </summary>
	public enum struct EnumCheckStatusType : Byte
	{
		/// <summary>
		/// δ����
		/// </summary>
		Init = (Byte)'0',

		/// <summary>
		/// ������
		/// </summary>
		Checking = (Byte)'1',

		/// <summary>
		/// �Ѹ���
		/// </summary>
		Checked = (Byte)'2',

		/// <summary>
		/// �ܾ�
		/// </summary>
		Refuse = (Byte)'3',

		/// <summary>
		/// ����
		/// </summary>
		Cancel = (Byte)'4'
	};

	/// <summary>
	/// TFtdcUsedStatusType��һ����Ч״̬����
	/// </summary>
	public enum struct EnumUsedStatusType : Byte
	{
		/// <summary>
		/// δ��Ч
		/// </summary>
		Unused = (Byte)'0',

		/// <summary>
		/// ����Ч
		/// </summary>
		Used = (Byte)'1',

		/// <summary>
		/// ��Чʧ��
		/// </summary>
		Fail = (Byte)'2'
	};

	/// <summary>
	/// TFtdcBankAcountOriginType��һ���˻���Դ����
	/// </summary>
	public enum struct EnumBankAcountOriginType : Byte
	{
		/// <summary>
		/// �ֹ�¼��
		/// </summary>
		ByAccProperty = (Byte)'0',

		/// <summary>
		/// ����ת��
		/// </summary>
		ByFBTransfer = (Byte)'1'
	};

	/// <summary>
	/// TFtdcMonthBillTradeSumType��һ�����㵥�±��ɽ����ܷ�ʽ����
	/// </summary>
	public enum struct EnumMonthBillTradeSumType : Byte
	{
		/// <summary>
		/// ͬ��ͬ��Լ
		/// </summary>
		ByInstrument = (Byte)'0',

		/// <summary>
		/// ͬ��ͬ��Լͬ�۸�
		/// </summary>
		ByDayInsPrc = (Byte)'1',

		/// <summary>
		/// ͬ��Լ
		/// </summary>
		ByDayIns = (Byte)'2'
	};

	/// <summary>
	/// TFtdcFBTTradeCodeEnumType��һ�����ڽ��״���ö������
	/// </summary>
	public enum struct EnumFBTTradeCodeEnumType : Byte
	{
		/// <summary>
		/// ���з�������ת�ڻ�
		/// </summary>
		BankLaunchBankToBroker_102001 = (Byte)'1',//'102001',

												  /// <summary>
												  /// �ڻ���������ת�ڻ�
												  /// </summary>
												  BrokerLaunchBankToBroker_202001 = (Byte)'2',//'202001',

																							  /// <summary>
																							  /// ���з����ڻ�ת����
																							  /// </summary>
																							  BankLaunchBrokerToBank_102002 = (Byte)'3',//'102002',

																																		/// <summary>
																																		/// �ڻ������ڻ�ת����
																																		/// </summary>
																																		BrokerLaunchBrokerToBank_202002 = (Byte)'4'//'202002'
	};

	/// <summary>
	/// TFtdcOTPTypeType��һ����̬������������
	/// </summary>
	public enum struct EnumOTPTypeType : Byte
	{
		/// <summary>
		/// �޶�̬����
		/// </summary>
		NONE = (Byte)'0',

		/// <summary>
		/// ʱ������
		/// </summary>
		TOTP = (Byte)'1'
	};

	/// <summary>
	/// TFtdcOTPStatusType��һ����̬����״̬����
	/// </summary>
	public enum struct EnumOTPStatusType : Byte
	{
		/// <summary>
		/// δʹ��
		/// </summary>
		Unused = (Byte)'0',

		/// <summary>
		/// ��ʹ��
		/// </summary>
		Used = (Byte)'1',

		/// <summary>
		/// ע��
		/// </summary>
		Disuse = (Byte)'2'
	};

	/// <summary>
	/// TFtdcBrokerUserTypeType��һ�����ù�˾�û���������
	/// </summary>
	public enum struct EnumBrokerUserTypeType : Byte
	{
		/// <summary>
		/// Ͷ����
		/// </summary>
		Investor = (Byte)'1'
	};

	/// <summary>
	/// TFtdcFutureTypeType��һ���ڻ���������
	/// </summary>
	public enum struct EnumFutureTypeType : Byte
	{
		/// <summary>
		/// ��Ʒ�ڻ�
		/// </summary>
		Commodity = (Byte)'1',

		/// <summary>
		/// �����ڻ�
		/// </summary>
		Financial = (Byte)'2'
	};

	/// <summary>
	/// TFtdcFundEventTypeType��һ���ʽ���������������
	/// </summary>
	public enum struct EnumFundEventTypeType : Byte
	{
		/// <summary>
		/// ת���޶�
		/// </summary>
		Restriction = (Byte)'0',

		/// <summary>
		/// ����ת���޶�
		/// </summary>
		TodayRestriction = (Byte)'1',

		/// <summary>
		/// ������ˮ
		/// </summary>
		Transfer = (Byte)'2',

		/// <summary>
		/// �ʽ𶳽�
		/// </summary>
		Credit = (Byte)'3',

		/// <summary>
		/// Ͷ���߿����ʽ����
		/// </summary>
		InvestorWithdrawAlm = (Byte)'4',

		/// <summary>
		/// ���������ʻ�ת���޶�
		/// </summary>
		BankRestriction = (Byte)'5'
	};

	/// <summary>
	/// TFtdcAccountSourceTypeType��һ���ʽ��˻���Դ����
	/// </summary>
	public enum struct EnumAccountSourceTypeType : Byte
	{
		/// <summary>
		/// ����ͬ��
		/// </summary>
		FBTransfer = (Byte)'0',

		/// <summary>
		/// �ֹ�¼��
		/// </summary>
		ManualEntry = (Byte)'1'
	};

	/// <summary>
	/// TFtdcCodeSourceTypeType��һ�����ױ�����Դ����
	/// </summary>
	public enum struct EnumCodeSourceTypeType : Byte
	{
		/// <summary>
		/// ͳһ����
		/// </summary>
		UnifyAccount = (Byte)'0',

		/// <summary>
		/// �ֹ�¼��
		/// </summary>
		ManualEntry = (Byte)'1'
	};

	/// <summary>
	/// TFtdcUserRangeType��һ������Ա��Χ����
	/// </summary>
	public enum struct EnumUserRangeType : Byte
	{
		/// <summary>
		/// ����
		/// </summary>
		All = (Byte)'0',

		/// <summary>
		/// ��һ����Ա
		/// </summary>
		Single = (Byte)'1'
	};

	/// <summary>
	/// TFtdcByGroupType��һ������ͳ�Ʊ��ͻ�ͳ�Ʒ�ʽ����
	/// </summary>
	public enum struct EnumByGroupType : Byte
	{
		/// <summary>
		/// ��Ͷ����ͳ��
		/// </summary>
		Investor = (Byte)'2',

		/// <summary>
		/// ����ͳ��
		/// </summary>
		Group = (Byte)'1'
	};

	/// <summary>
	/// TFtdcTradeSumStatModeType��һ������ͳ�Ʊ���Χͳ�Ʒ�ʽ����
	/// </summary>
	public enum struct EnumTradeSumStatModeType : Byte
	{
		/// <summary>
		/// ����Լͳ��
		/// </summary>
		Instrument = (Byte)'1',

		/// <summary>
		/// ����Ʒͳ��
		/// </summary>
		Product = (Byte)'2',

		/// <summary>
		/// ��������ͳ��
		/// </summary>
		Exchange = (Byte)'3'
	};

	/// <summary>
	/// 
	/// </summary>
	public enum struct EnumBoolType : int
	{
		/// <summary>
		/// 
		/// </summary>
		No = 0,
		/// <summary>
		/// 
		/// </summary>
		Yes = 1
	};

	/// <summary>
	/// TFtdcExprSetModeType��һ�����ڱ��ʽ������������
	/// </summary>
	public enum struct EnumExprSetModeType : Byte
	{
		/// <summary>
		/// ������й�������
		/// </summary>
		Relative = (Byte)'1',

		/// <summary>
		/// ��������
		/// </summary>
		Typical = (Byte)'2'
	};

	/// <summary>
	/// TFtdcRateInvestorRangeType��һ��Ͷ���߷�Χ����
	/// </summary>
	public enum struct EnumRateInvestorRangeType : Byte
	{
		/// <summary>
		/// ��˾��׼
		/// </summary>
		All = (Byte)'1',

		/// <summary>
		/// ģ��
		/// </summary>
		Model = (Byte)'2',

		/// <summary>
		/// ��һͶ����
		/// </summary>
		Single = (Byte)'3'
	};


	/// <summary>
	/// TFtdcSyncDataStatusType��һ��������ϵͳ����ͬ��״̬����
	/// </summary>
	public enum struct EnumSyncDataStatusType : Byte
	{
		/// <summary>
		/// δͬ��
		/// </summary>
		Initialize = (Byte)'0',

		/// <summary>
		/// ͬ����
		/// </summary>
		Settlementin = (Byte)'1',

		/// <summary>
		/// ��ͬ��
		/// </summary>
		Settlemented = (Byte)'2'
	};


	/// <summary>
	/// TFtdcTradeSourceType��һ���ɽ���Դ����
	/// </summary>
	public enum struct EnumTradeSourceType : Byte
	{
		/// <summary>
		/// ���Խ�������ͨ�ر�
		/// </summary>
		NORMAL = (Byte)'0',

		/// <summary>
		/// ���Բ�ѯ
		/// </summary>
		QUERY = (Byte)'1'
	};


	/// <summary>
	/// TFtdcFlexStatModeType��һ����Ʒ��Լͳ�Ʒ�ʽ����
	/// </summary>
	public enum struct EnumFlexStatModeType : Byte
	{
		/// <summary>
		/// ��Ʒͳ��
		/// </summary>
		Product = (Byte)'1',

		/// <summary>
		/// ������ͳ��
		/// </summary>
		Exchange = (Byte)'2',

		/// <summary>
		/// ͳ������
		/// </summary>
		All = (Byte)'3'
	};

	/// <summary>
	/// TFtdcByInvestorRangeType��һ��Ͷ���߷�Χͳ�Ʒ�ʽ����
	/// </summary>
	public enum struct EnumByInvestorRangeType : Byte
	{

		/// <summary>
		/// ����ͳ��
		/// </summary>
		Property = (Byte)'1',

		/// <summary>
		/// ͳ������
		/// </summary>
		All = (Byte)'2'
	};

	/// <summary>
	/// TFtdcPropertyInvestorRangeType��һ��Ͷ���߷�Χ����
	/// </summary>
	public enum struct EnumPropertyInvestorRangeType : Byte
	{
		/// <summary>
		/// ����
		/// </summary>
		All = (Byte)'1',

		/// <summary>
		/// Ͷ��������
		/// </summary>
		Property = (Byte)'2',

		/// <summary>
		/// ��һͶ����
		/// </summary>
		Single = (Byte)'3'
	};

	/// <summary>
	/// TFtdcFileStatusType��һ���ļ�״̬����
	/// </summary>
	public enum struct EnumFileStatusType : Byte
	{
		/// <summary>
		/// δ����
		/// </summary>
		NoCreate = (Byte)'0',

		/// <summary>
		/// ������
		/// </summary>
		Created = (Byte)'1',

		/// <summary>
		/// ����ʧ��
		/// </summary>
		Failed = (Byte)'2'
	};

	/// <summary>
	/// TFtdcFileGenStyleType��һ���ļ����ɷ�ʽ����
	/// </summary>
	public enum struct EnumFileGenStyleType : Byte
	{
		/// <summary>
		/// �·�
		/// </summary>
		FileTransmit = (Byte)'0',

		/// <summary>
		/// ����
		/// </summary>
		FileGen = (Byte)'1',
	};

	/// <summary>
	/// TFtdcSysOperModeType��һ��ϵͳ��־������������
	/// </summary>
	public enum struct EnumSysOperModeType : Byte
	{
		/// <summary>
		/// ����
		/// </summary>
		Add = (Byte)'1',

		/// <summary>
		/// �޸�
		/// </summary>
		Update = (Byte)'2',

		/// <summary>
		/// ɾ��
		/// </summary>
		Delete = (Byte)'3',

		/// <summary>
		/// ����
		/// </summary>
		Copy = (Byte)'4',

		/// <summary>
		/// ����
		/// </summary>
		AcTive = (Byte)'5',

		/// <summary>
		/// ע��
		/// </summary>
		CanCel = (Byte)'6',

		/// <summary>
		/// ����
		/// </summary>
		ReSet = (Byte)'7'
	};

	/// <summary>
	/// TFtdcSysOperTypeType��һ��ϵͳ��־������������
	/// </summary>
	public enum struct EnumSysOperTypeType : Byte
	{
		/// <summary>
		/// �޸Ĳ���Ա����
		/// </summary>
		UpdatePassword = (Byte)'0',

		/// <summary>
		/// ����Ա��֯�ܹ���ϵ
		/// </summary>
		UserDepartment = (Byte)'1',

		/// <summary>
		/// ��ɫ����
		/// </summary>
		RoleManager = (Byte)'2',

		/// <summary>
		/// ��ɫ��������
		/// </summary>
		RoleFunction = (Byte)'3',

		/// <summary>
		/// ������������
		/// </summary>
		BaseParam = (Byte)'4',

		/// <summary>
		/// ���ò���Ա
		/// </summary>
		SetUserID = (Byte)'5',

		/// <summary>
		/// �û���ɫ����
		/// </summary>
		SetUserRole = (Byte)'6',

		/// <summary>
		/// �û�IP����
		/// </summary>
		UserIpRestriction = (Byte)'7',

		/// <summary>
		/// ��֯�ܹ�����
		/// </summary>
		DepartmentManager = (Byte)'8',

		/// <summary>
		/// ��֯�ܹ����ѯ���ิ��
		/// </summary>
		DepartmentCopy = (Byte)'9',

		/// <summary>
		/// ���ױ������
		/// </summary>
		Tradingcode = (Byte)'A',

		/// <summary>
		/// Ͷ����״̬ά��
		/// </summary>
		InvestorStatus = (Byte)'B',

		/// <summary>
		/// Ͷ����Ȩ�޹���
		/// </summary>
		InvestorAuthority = (Byte)'C',

		/// <summary>
		/// ��������
		/// </summary>
		PropertySet = (Byte)'D',

		/// <summary>
		/// ����Ͷ��������
		/// </summary>
		ReSetInvestorPasswd = (Byte)'E',

		/// <summary>
		/// Ͷ���߸�����Ϣά��
		/// </summary>
		InvestorPersonalityInfo = (Byte)'F'
	};

	/// <summary>
	/// TFtdcCSRCDataQueyTypeType��һ���ϱ����ݲ�ѯ��������
	/// </summary>
	public enum struct EnumCSRCDataQueyTypeType : Byte
	{
		/// <summary>
		/// ��ѯ��ǰ�����ձ��͵�����
		/// </summary>
		Current = (Byte)'0',

		/// <summary>
		/// ��ѯ��ʷ���͵Ĵ����͹�˾������
		/// </summary>
		History = (Byte)'1',
	};

	/// <summary>
	/// TFtdcFreezeStatusType��һ������״̬����
	/// </summary>
	public enum struct EnumFreezeStatusType : Byte
	{
		/// <summary>
		/// ��Ծ
		/// </summary>
		Normal = (Byte)'1',

		/// <summary>
		/// ����
		/// </summary>
		Freeze = (Byte)'0',
	};

	/// <summary>
	/// TFtdcStandardStatusType��һ���淶״̬����
	/// </summary>
	public enum struct EnumStandardStatusType : Byte
	{
		/// <summary>
		/// �ѹ淶
		/// </summary>
		Standard = (Byte)'0',

		/// <summary>
		/// δ�淶
		/// </summary>
		NonStandard = (Byte)'1',
	};

	/// <summary>
	/// TFtdcRightParamTypeType��һ��������������
	/// </summary>
	public enum struct EnumRightParamTypeType : Byte
	{
		/// <summary>
		/// ���߻�
		/// </summary>
		Freeze = (Byte)'1',

		/// <summary>
		/// �������߻�
		/// </summary>
		FreezeActive = (Byte)'2',
	};

	/// <summary>
	/// TFtdcDataStatusType��һ����ϴǮ��˱�����״̬����
	/// </summary>
	public enum struct EnumDataStatusType : Byte
	{
		/// <summary>
		/// ����
		/// </summary>
		Normal = (Byte)'0',

		/// <summary>
		/// ��ɾ��
		/// </summary>
		Deleted = (Byte)'1',
	};


	/// <summary>
	/// TFtdcAMLCheckStatusType��һ�����״̬����
	/// </summary>
	public enum struct EnumAMLCheckStatusType : Byte
	{
		/// <summary>
		/// δ����
		/// </summary>
		Init = (Byte)'0',

		/// <summary>
		/// ������
		/// </summary>
		Checking = (Byte)'1',

		/// <summary>
		/// �Ѹ���
		/// </summary>
		Checked = (Byte)'2',

		/// <summary>
		/// �ܾ��ϱ�
		/// </summary>
		RefuseReport = (Byte)'3',
	};


	/// <summary>
	/// TFtdcAmlDateTypeType��һ��������������
	/// </summary>
	public enum struct EnumAmlDateTypeType : Byte
	{
		/// <summary>
		/// �������
		/// </summary>
		DrawDay = (Byte)'0',

		/// <summary>
		/// ��������
		/// </summary>
		TouchDay = (Byte)'1',
	};
	/// <summary>
	/// TFtdcAmlCheckLevelType��һ����˼�������
	/// </summary>
	public enum struct EnumAmlCheckLevelType : Byte
	{
		/// <summary>
		/// �㼶���
		/// </summary>
		CheckLevel0 = (Byte)'0',

		/// <summary>
		/// һ�����
		/// </summary>
		CheckLevel1 = (Byte)'1',

		/// <summary>
		/// �������
		/// </summary>
		CheckLevel2 = (Byte)'2',

		/// <summary>
		/// �������
		/// </summary>
		CheckLevel3 = (Byte)'3',
	};


	/// <summary>
	/// TFtdcExportFileTypeType��һ�������ļ���������
	/// </summary>
	public enum struct EnumExportFileTypeType : Byte
	{
		/// <summary>
		/// CSV
		/// </summary>
		CSV = (Byte)'0',

		/// <summary>
		/// Excel
		/// </summary>
		EXCEL = (Byte)'1',

		/// <summary>
		/// DBF
		/// </summary>
		DBF = (Byte)'2',
	};

	/// <summary>
	/// TFtdcSettleManagerTypeType��һ������������������
	/// </summary>
	public enum struct EnumSettleManagerTypeType : Byte
	{
		/// <summary>
		/// ����ǰ׼��
		/// </summary>
		Before = (Byte)'1',

		/// <summary>
		/// ����
		/// </summary>
		Settlement = (Byte)'2',

		/// <summary>
		/// �����˶�
		/// </summary>
		After = (Byte)'3',

		/// <summary>
		/// �������
		/// </summary>
		Settlemented = (Byte)'4',
	};


	/// <summary>
	/// TFtdcSettleManagerLevelType��һ���������õȼ�����
	/// </summary>
	public enum struct EnumSettleManagerLevelType : Byte
	{
		/// <summary>
		/// ��Ҫ
		/// </summary>
		Must = (Byte)'1',

		/// <summary>
		/// ����
		/// </summary>
		Alarm = (Byte)'2',

		/// <summary>
		/// ��ʾ
		/// </summary>
		Prompt = (Byte)'3',

		/// <summary>
		/// �����
		/// </summary>
		Ignore = (Byte)'4',
	};

	/// <summary>
	/// TFtdcSettleManagerGroupType��һ��ģ���������
	/// </summary>
	public enum struct EnumSettleManagerGroupType : Byte
	{
		/// <summary>
		/// �������˶�
		/// </summary>
		Exhcange = (Byte)'1',

		/// <summary>
		/// �ڲ��˶�
		/// </summary>
		ASP = (Byte)'2',

		/// <summary>
		/// �ϱ����ݺ˶�
		/// </summary>
		CSRC = (Byte)'3',
	};

	/// <summary>
	/// TFtdcLimitUseTypeType��һ����ֵ���ʹ����������
	/// </summary>
	public enum struct EnumLimitUseTypeType : Byte
	{
		/// <summary>
		/// ���ظ�ʹ��
		/// </summary>
		Repeatable = (Byte)'1',

		/// <summary>
		/// �����ظ�ʹ��
		/// </summary>
		Unrepeatable = (Byte)'2',
	};


	/// <summary>
	/// TFtdcDataResourceType��һ��������Դ����
	/// </summary>
	public enum struct EnumDataResourceType : Byte
	{
		/// <summary>
		/// ��ϵͳ
		/// </summary>
		Settle = (Byte)'1',

		/// <summary>
		/// ������
		/// </summary>
		Exchange = (Byte)'2',

		/// <summary>
		/// ��������
		/// </summary>
		CSRC = (Byte)'3',
	};

	/// <summary>
	/// TFtdcMarginTypeType��һ����֤����������
	/// </summary>
	public enum struct EnumMarginTypeType : Byte
	{
		/// <summary>
		/// ��������֤����
		/// </summary>
		ExchMarginRate = (Byte)'0',

		/// <summary>
		/// Ͷ���߱�֤����
		/// </summary>
		InstrMarginRate = (Byte)'1',

		/// <summary>
		/// Ͷ���߽��ױ�֤����
		/// </summary>
		InstrMarginRateTrade = (Byte)'2',
	};


	/// <summary>
	/// TFtdcActiveTypeType��һ����Ч��������
	/// </summary>
	public enum struct EnumActiveTypeType : Byte
	{
		/// <summary>
		/// ��������Ч
		/// </summary>
		Intraday = (Byte)'1',

		/// <summary>
		/// ������Ч
		/// </summary>
		Long = (Byte)'2',
	};

	/// <summary>
	/// TFtdcMarginRateTypeType��һ����ͻ��֤������������
	/// </summary>
	public enum struct EnumMarginRateTypeType : Byte
	{
		/// <summary>
		/// ��������֤����
		/// </summary>
		Exchange = (Byte)'1',

		/// <summary>
		/// Ͷ���߱�֤����
		/// </summary>
		Investor = (Byte)'2',

		/// <summary>
		/// Ͷ���߽��ױ�֤����
		/// </summary>
		InvestorTrade = (Byte)'3',
	};

	/// <summary>
	/// TFtdcBackUpStatusType��һ����������״̬����
	/// </summary>
	public enum struct EnumBackUpStatusType : Byte
	{
		/// <summary>
		/// δ���ɱ�������
		/// </summary>
		UnBak = (Byte)'0',

		/// <summary>
		/// ��������������
		/// </summary>
		BakUp = (Byte)'1',

		/// <summary>
		/// �����ɱ�������
		/// </summary>
		BakUped = (Byte)'2',

		/// <summary>
		/// ��������ʧ��
		/// </summary>
		BakFail = (Byte)'3',
	};

	/// <summary>
	/// TFtdcInitSettlementType��һ�������ʼ��״̬����
	/// </summary>
	public enum struct EnumInitSettlementType : Byte
	{
		/// <summary>
		/// �����ʼ��δ��ʼ
		/// </summary>
		UnInitialize = (Byte)'0',

		/// <summary>
		/// �����ʼ����
		/// </summary>
		Initialize = (Byte)'1',

		/// <summary>
		/// �����ʼ�����
		/// </summary>
		Initialized = (Byte)'2',
	};

	/// <summary>
	/// TFtdcReportStatusType��һ��������������״̬����
	/// </summary>
	public enum struct EnumReportStatusType : Byte
	{
		/// <summary>
		/// δ���ɱ�������
		/// </summary>
		NoCreate = (Byte)'0',

		/// <summary>
		/// ��������������
		/// </summary>
		Create = (Byte)'1',

		/// <summary>
		/// �����ɱ�������
		/// </summary>
		Created = (Byte)'2',

		/// <summary>
		/// ���ɱ�������ʧ��
		/// </summary>
		CreateFail = (Byte)'3',
	};

	/// <summary>
	/// TFtdcSaveStatusType��һ�����ݹ鵵״̬����
	/// </summary>
	public enum struct EnumSaveStatusType : Byte
	{
		/// <summary>
		/// �鵵δ���
		/// </summary>
		UnSaveData = (Byte)'0',

		/// <summary>
		/// �鵵���
		/// </summary>
		SaveDatad = (Byte)'1',
	};


	/// <summary>
	/// TFtdcSettArchiveStatusType��һ������ȷ�����ݹ鵵״̬����
	/// </summary>
	public enum struct EnumSettArchiveStatusType : Byte
	{
		/// <summary>
		/// δ�鵵����
		/// </summary>
		UnArchived = (Byte)'0',

		/// <summary>
		/// ���ݹ鵵��
		/// </summary>
		Archiving = (Byte)'1',

		/// <summary>
		/// �ѹ鵵����
		/// </summary>
		Archived = (Byte)'2',

		/// <summary>
		/// �鵵����ʧ��
		/// </summary>
		ArchiveFail = (Byte)'3',
	};

	/// <summary>
	/// TFtdcCTPTypeType��һ��CTP����ϵͳ��������
	/// </summary>
	public enum struct EnumCTPTypeType : Byte
	{
		/// <summary>
		/// δ֪����
		/// </summary>
		Unkown = (Byte)'0',

		/// <summary>
		/// ������
		/// </summary>
		MainCenter = (Byte)'1',

		/// <summary>
		/// ������
		/// </summary>
		BackUp = (Byte)'2',
	};

	/// <summary>
	/// TFtdcCloseDealTypeType��һ��ƽ�ִ�����������
	/// </summary>
	public enum struct EnumCloseDealTypeType : Byte
	{
		/// <summary>
		/// ����
		/// </summary>
		Normal = (Byte)'0',
		/// <summary>
		/// Ͷ��ƽ������
		/// </summary>
		SpecFirst = (Byte)'1'
	};

	/// <summary>
	///TThostFtdcMortgageFundUseRangeType��һ��������Ѻ�ʽ���÷�Χ����
	/// </summary>
	public enum struct EnumMortgageFundUseRangeTypeType : Byte
	{
		/// <summary>
		///����ʹ��
		/// </summary>
		None = (Byte)'0',
		/// <summary>
		///���ڱ�֤��
		/// </summary>
		Margin = (Byte)'1',
		/// <summary>
		///���������ѡ�ӯ������֤��
		/// </summary>
		All = (Byte)'2'
	};



	/// <summary>
	/// TFtdcStartModeType��һ������ģʽ����
	/// </summary>
	public enum struct EnumStartModeType : Byte
	{
		/// <summary>
		/// ����
		/// </summary>
		Normal = (Byte)'1',

		/// <summary>
		/// Ӧ��
		/// </summary>
		Emerge = (Byte)'2',

		/// <summary>
		/// �ָ�
		/// </summary>
		Restore = (Byte)'3',
	};


	/// --------------------------------------------------------------------------------------------------------------------


	/// <summary>
	/// ��Ϣ�ַ�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcDisseminationField
	{
		/// <summary>
		/// ����ϵ�к�
		/// </summary>
		short SequenceSeries;
		/// <summary>
		/// ���к�
		/// </summary>
		int SequenceNo;
	};

	/// <summary>
	/// �û���¼����
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcReqUserLoginField
	{
		/// <summary>
		/// ������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradingDay;
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// �û�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ Password;
		/// <summary>
		/// �û��˲�Ʒ��Ϣ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ UserProductInfo;
		/// <summary>
		/// �ӿڶ˲�Ʒ��Ϣ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ InterfaceProductInfo;
		/// <summary>
		/// Э����Ϣ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ProtocolInfo;
		/// <summary>
		/// Mac��ַ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ MacAddress;
		/// <summary>
		/// ��̬����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ OneTimePassword;
		/// <summary>
		/// �ն�IP��ַ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ ClientIPAddress;

		/// <summary>
		///��¼��ע
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 36)]
		String^ LoginRemark;
	};


	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcFensUserInfoField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// �û�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// ��¼ģʽ
		/// </summary>
		EnumLoginModeType	LoginMode;
	};

	/// <summary>
	/// �û���¼Ӧ��
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcRspUserLoginField
	{
		/// <summary>
		/// ������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradingDay;
		/// <summary>
		/// ��¼�ɹ�ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ LoginTime;
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// �û�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// ����ϵͳ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ SystemName;
		/// <summary>
		/// ǰ�ñ��
		/// </summary>
		int FrontID;
		/// <summary>
		/// �Ự���
		/// </summary>
		int SessionID;
		/// <summary>
		/// ��󱨵�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ MaxOrderRef;
		/// <summary>
		/// ������ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ SHFETime;
		/// <summary>
		/// ������ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ DCETime;
		/// <summary>
		/// ֣����ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ CZCETime;
		/// <summary>
		/// �н���ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ FFEXTime;

		/// <summary>
		///��Դ����ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	INETime;
	};

	/// <summary>
	/// �û��ǳ�����
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcUserLogoutField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// �û�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
	};

	/// <summary>
	/// ǿ�ƽ���Ա�˳�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcForceUserLogoutField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// �û�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
	};

	/// <summary>
	/// �ͻ�����֤����
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcReqAuthenticateField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// �û�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		///�û��˲�Ʒ��Ϣ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	UserProductInfo;
		/// <summary>
		///��֤��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
		String^	AuthCode;
	};

	/// <summary>
	/// �ͻ�����֤��Ӧ
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcRspAuthenticateField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// �û�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		///�û��˲�Ʒ��Ϣ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	UserProductInfo;
	};

	/// <summary>
	///�ͻ�����֤��Ϣ
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	ref struct ThostFtdcAuthenticationInfoField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// �û�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// �û��˲�Ʒ��Ϣ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	UserProductInfo;
		/// <summary>
		/// ��֤��Ϣ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 129)]
		String^	AuthInfo;
		/// <summary>
		/// �Ƿ�Ϊ��֤���
		/// </summary>
		int	IsResult;
	};

	/// <summary>
	/// ����ת�ʱ���ͷ
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcTransferHeaderField
	{
		/// <summary>
		/// �汾�ţ�������1.0
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ Version;
		/// <summary>
		/// ���״��룬����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 7)]
		String^ TradeCode;
		/// <summary>
		/// �������ڣ������ʽ��yyyymmdd
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradeDate;
		/// <summary>
		/// ����ʱ�䣬�����ʽ��hhmmss
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradeTime;
		/// <summary>
		/// ������ˮ�ţ�N/A
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradeSerial;
		/// <summary>
		/// �ڻ���˾���룬����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ FutureID;
		/// <summary>
		/// ���д��룬���ݲ�ѯ���еõ�������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ BankID;
		/// <summary>
		/// ���з����Ĵ��룬���ݲ�ѯ���еõ�������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
		String^ BankBrchID;
		/// <summary>
		/// ����Ա��N/A
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
		String^ OperNo;
		/// <summary>
		/// �����豸���ͣ�N/A
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 3)]
		String^ DeviceID;
		/// <summary>
		/// ��¼����N/A
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 7)]
		String^ RecordNum;
		/// <summary>
		/// �Ự��ţ�N/A
		/// </summary>
		int SessionID;
		/// <summary>
		/// �����ţ�N/A
		/// </summary>
		int RequestID;
	};

	/// <summary>
	/// �����ʽ�ת�ڻ�����TradeCode=202001
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcTransferBankToFutureReqField
	{
		/// <summary>
		/// �ڻ��ʽ��˻�
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ FutureAccount;
		/// <summary>
		/// �����־
		/// </summary>
		EnumFuturePwdFlagType FuturePwdFlag;
		/// <summary>
		/// ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
		String^ FutureAccPwd;
		/// <summary>
		/// ת�˽��
		/// </summary>
		double TradeAmt;
		/// <summary>
		/// �ͻ�������
		/// </summary>
		double CustFee;
		/// <summary>
		/// ���֣�RMB-����� USD-��Բ HKD-��Ԫ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ CurrencyCode;
	};

	/// <summary>
	/// �����ʽ�ת�ڻ�������Ӧ
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcTransferBankToFutureRspField
	{
		/// <summary>
		/// ��Ӧ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
		String^ RetCode;
		/// <summary>
		/// ��Ӧ��Ϣ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 129)]
		String^ RetInfo;
		/// <summary>
		/// �ʽ��˻�
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ FutureAccount;
		/// <summary>
		/// ת�ʽ��
		/// </summary>
		double TradeAmt;
		/// <summary>
		/// Ӧ�տͻ�������
		/// </summary>
		double CustFee;
		/// <summary>
		/// ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ CurrencyCode;
	};

	/// <summary>
	/// �ڻ��ʽ�ת��������TradeCode=202002
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcTransferFutureToBankReqField
	{
		/// <summary>
		/// �ڻ��ʽ��˻�
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ FutureAccount;
		/// <summary>
		/// �����־
		/// </summary>
		EnumFuturePwdFlagType FuturePwdFlag;
		/// <summary>
		/// ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
		String^ FutureAccPwd;
		/// <summary>
		/// ת�˽��
		/// </summary>
		double TradeAmt;
		/// <summary>
		/// �ͻ�������
		/// </summary>
		double CustFee;
		/// <summary>
		/// ���֣�RMB-����� USD-��Բ HKD-��Ԫ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ CurrencyCode;
	};

	/// <summary>
	/// �ڻ��ʽ�ת����������Ӧ
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcTransferFutureToBankRspField
	{
		/// <summary>
		/// ��Ӧ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
		String^ RetCode;
		/// <summary>
		/// ��Ӧ��Ϣ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 129)]
		String^ RetInfo;
		/// <summary>
		/// �ʽ��˻�
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ FutureAccount;
		/// <summary>
		/// ת�ʽ��
		/// </summary>
		double TradeAmt;
		/// <summary>
		/// Ӧ�տͻ�������
		/// </summary>
		double CustFee;
		/// <summary>
		/// ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ CurrencyCode;
	};

	/// <summary>
	/// ��ѯ�����ʽ�����TradeCode=204002
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcTransferQryBankReqField
	{
		/// <summary>
		/// �ڻ��ʽ��˻�
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ FutureAccount;
		/// <summary>
		/// �����־
		/// </summary>
		EnumFuturePwdFlagType FuturePwdFlag;
		/// <summary>
		/// ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
		String^ FutureAccPwd;
		/// <summary>
		/// ���֣�RMB-����� USD-��Բ HKD-��Ԫ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ CurrencyCode;
	};

	/// <summary>
	/// ��ѯ�����ʽ�������Ӧ
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcTransferQryBankRspField
	{
		/// <summary>
		/// ��Ӧ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
		String^ RetCode;
		/// <summary>
		/// ��Ӧ��Ϣ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 129)]
		String^ RetInfo;
		/// <summary>
		/// �ʽ��˻�
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ FutureAccount;
		/// <summary>
		/// �������
		/// </summary>
		double TradeAmt;
		/// <summary>
		/// ���п������
		/// </summary>
		double UseAmt;
		/// <summary>
		/// ���п�ȡ���
		/// </summary>
		double FetchAmt;
		/// <summary>
		/// ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ CurrencyCode;
	};

	/// <summary>
	/// ��ѯ���н�����ϸ����TradeCode=204999
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcTransferQryDetailReqField
	{
		/// <summary>
		/// �ڻ��ʽ��˻�
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ FutureAccount;
	};

	/// <summary>
	/// ��ѯ���н�����ϸ������Ӧ
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcTransferQryDetailRspField
	{
		/// <summary>
		/// ��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradeDate;
		/// <summary>
		/// ����ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradeTime;
		/// <summary>
		/// ���״���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 7)]
		String^ TradeCode;
		/// <summary>
		/// �ڻ���ˮ��
		/// </summary>
		int FutureSerial;
		/// <summary>
		/// �ڻ���˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ FutureID;
		/// <summary>
		/// �ʽ��ʺ�
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 22)]
		String^ FutureAccount;
		/// <summary>
		/// ������ˮ��
		/// </summary>
		int BankSerial;
		/// <summary>
		/// ���д���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ BankID;
		/// <summary>
		/// ���з����Ĵ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
		String^ BankBrchID;
		/// <summary>
		/// �����˺�
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ BankAccount;
		/// <summary>
		/// ֤������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ CertCode;
		/// <summary>
		/// ���Ҵ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ CurrencyCode;
		/// <summary>
		/// �������
		/// </summary>
		double TxAmount;
		/// <summary>
		/// ��Ч��־
		/// </summary>
		EnumTransferValidFlagType Flag;
	};

	/// <summary>
	/// ��Ӧ��Ϣ
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcRspInfoField
	{
		/// <summary>
		/// �������
		/// </summary>
		int ErrorID;
		/// <summary>
		/// ������Ϣ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^ ErrorMsg;
	};

	/// <summary>
	/// ������
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcExchangeField
	{
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ ExchangeName;
		/// <summary>
		/// ����������
		/// </summary>
		EnumExchangePropertyType ExchangeProperty;
	};

	/// <summary>
	/// ��Ʒ
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcProductField
	{
		/// <summary>
		/// ��Ʒ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ ProductID;
		/// <summary>
		/// ��Ʒ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ ProductName;
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// ��Ʒ����
		/// </summary>
		EnumProductClassTypeType ProductClass;
		/// <summary>
		/// ��Լ��������
		/// </summary>
		int VolumeMultiple;
		/// <summary>
		/// ��С�䶯��λ
		/// </summary>
		double PriceTick;
		/// <summary>
		/// �м۵�����µ���
		/// </summary>
		int MaxMarketOrderVolume;
		/// <summary>
		/// �м۵���С�µ���
		/// </summary>
		int MinMarketOrderVolume;
		/// <summary>
		/// �޼۵�����µ���
		/// </summary>
		int MaxLimitOrderVolume;
		/// <summary>
		/// �޼۵���С�µ���
		/// </summary>
		int MinLimitOrderVolume;
		/// <summary>
		/// �ֲ�����
		/// </summary>
		EnumPositionTypeType PositionType;
		/// <summary>
		/// �ֲ���������
		/// </summary>
		EnumPositionDateTypeType PositionDateType;
		/// <summary>
		///ƽ�ִ�������
		/// </summary>
		EnumCloseDealTypeType CloseDealType;
		/// <summary>
		///���ױ�������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^	TradeCurrencyID;
		/// <summary>
		///��Ѻ�ʽ���÷�Χ
		/// </summary>
		EnumMortgageFundUseRangeTypeType MortgageFundUseRange;
		/// <summary>
		///��������Ʒ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ ExchangeProductID;
		/// <summary>
		///��Լ������Ʒ����
		/// </summary>
		double UnderlyingMultiple;
	};

	/// <summary>
	/// ��Լ
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcInstrumentField
	{
		/// <summary>
		/// ��Լ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// ��Լ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ InstrumentName;
		/// <summary>
		/// ��Լ�ڽ������Ĵ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ ExchangeInstID;
		/// <summary>
		/// ��Ʒ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ ProductID;
		/// <summary>
		/// ��Ʒ����
		/// </summary>
		EnumProductClassTypeType ProductClass;
		/// <summary>
		/// �������
		/// </summary>
		int DeliveryYear;
		/// <summary>
		/// ������
		/// </summary>
		int DeliveryMonth;
		/// <summary>
		/// �м۵�����µ���
		/// </summary>
		int MaxMarketOrderVolume;
		/// <summary>
		/// �м۵���С�µ���
		/// </summary>
		int MinMarketOrderVolume;
		/// <summary>
		/// �޼۵�����µ���
		/// </summary>
		int MaxLimitOrderVolume;
		/// <summary>
		/// �޼۵���С�µ���
		/// </summary>
		int MinLimitOrderVolume;
		/// <summary>
		/// ��Լ��������
		/// </summary>
		int VolumeMultiple;
		/// <summary>
		/// ��С�䶯��λ
		/// </summary>
		double PriceTick;
		/// <summary>
		/// ������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ CreateDate;
		/// <summary>
		/// ������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ OpenDate;
		/// <summary>
		/// ������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExpireDate;
		/// <summary>
		/// ��ʼ������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ StartDelivDate;
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ EndDelivDate;
		/// <summary>
		/// ��Լ��������״̬
		/// </summary>
		EnumInstLifePhaseType InstLifePhase;
		/// <summary>
		/// ��ǰ�Ƿ���
		/// </summary>
		int IsTrading;
		/// <summary>
		/// �ֲ�����
		/// </summary>
		EnumPositionTypeType PositionType;
		/// <summary>
		/// �ֲ���������
		/// </summary>
		EnumPositionDateTypeType PositionDateType;
		/// <summary>
		/// ��ͷ��֤����
		/// </summary>
		double LongMarginRatio;
		/// <summary>
		/// ��ͷ��֤����
		/// </summary>
		double ShortMarginRatio;
		/// <summary>
		///�Ƿ�ʹ�ô��߱�֤���㷨
		TThostFtdcMaxMarginSideAlgorithmType	MaxMarginSideAlgorithm;
		/// <summary>
		///������Ʒ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^	UnderlyingInstrID;
		/// <summary>
		///ִ�м�
		/// </summary>
		double	StrikePrice;
		/// <summary>
		///��Ȩ����
		/// </summary>
		EnumOptionsTypeType	OptionsType;
		/// <summary>
		///��Լ������Ʒ����
		/// </summary>
		double	UnderlyingMultiple;
		/// <summary>
		///�������
		/// </summary>
		EnumCombinationTypeType	CombinationType;
	};

	/// <summary>
	/// ���͹�˾
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcBrokerField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// ���͹�˾���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ BrokerAbbr;
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^ BrokerName;
		/// <summary>
		/// �Ƿ��Ծ
		/// </summary>
		int IsActive;
	};

	/// <summary>
	/// ����������Ա
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcTraderField
	{
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// ����������Ա����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ TraderID;
		/// <summary>
		/// ��Ա����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ParticipantID;
		/// <summary>
		/// ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ Password;
		/// <summary>
		/// ��װ����
		/// </summary>
		int InstallCount;
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
	};

	/// <summary>
	/// Ͷ����
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcInvestorField
	{
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ���߷������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorGroupID;
		/// <summary>
		/// Ͷ��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^ InvestorName;
		/// <summary>
		/// ֤������
		/// </summary>
		EnumIdCardTypeType IdentifiedCardType;
		/// <summary>
		/// ֤������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 51)]
		String^ IdentifiedCardNo;
		/// <summary>
		/// �Ƿ��Ծ
		/// </summary>
		int IsActive;
		/// <summary>
		/// ��ϵ�绰
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ Telephone;
		/// <summary>
		/// ͨѶ��ַ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 101)]
		String^ Address;
		/// <summary>
		/// ��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ OpenDate;
		/// <summary>
		/// �ֻ�
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ Mobile;
		/// <summary>
		///��������ģ�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^	CommModelID;
		/// <summary>
		///��֤����ģ�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^	MarginModelID;
	};

	/// <summary>
	/// ���ױ���
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcTradingCodeField
	{
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// �ͻ�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ClientID;
		/// <summary>
		/// �Ƿ��Ծ
		/// </summary>
		int IsActive;
		/// <summary>
		/// ���ױ�������
		/// </summary>
		EnumClientIDTypeType ClientIDType;
	};

	/// <summary>
	/// ��Ա����;��͹�˾������ձ�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcPartBrokerField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// ��Ա����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ParticipantID;
		/// <summary>
		/// �Ƿ��Ծ
		/// </summary>
		int IsActive;
	};

	/// <summary>
	/// �����û�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcSuperUserField
	{
		/// <summary>
		/// �û�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// �û�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^ UserName;
		/// <summary>
		/// ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ Password;
		/// <summary>
		/// �Ƿ��Ծ
		/// </summary>
		int IsActive;
	};

	/// <summary>
	/// �����û�����Ȩ��
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcSuperUserFunctionField
	{
		/// <summary>
		/// �û�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// ���ܴ���
		/// </summary>
		EnumFunctionCodeType FunctionCode;
	};

	/// <summary>
	/// Ͷ������
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcInvestorGroupField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ���߷������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorGroupID;
		/// <summary>
		/// Ͷ���߷�������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ InvestorGroupName;
	};

	/// <summary>
	/// �ʽ��˻�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcTradingAccountField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ�����ʺ�
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ AccountID;
		/// <summary>
		/// �ϴ���Ѻ���
		/// </summary>
		double PreMortgage;
		/// <summary>
		/// �ϴ����ö��
		/// </summary>
		double PreCredit;
		/// <summary>
		/// �ϴδ���
		/// </summary>
		double PreDeposit;
		/// <summary>
		/// �ϴν���׼����
		/// </summary>
		double PreBalance;
		/// <summary>
		/// �ϴ�ռ�õı�֤��
		/// </summary>
		double PreMargin;
		/// <summary>
		/// ��Ϣ����
		/// </summary>
		double InterestBase;
		/// <summary>
		/// ��Ϣ����
		/// </summary>
		double Interest;
		/// <summary>
		/// �����
		/// </summary>
		double Deposit;
		/// <summary>
		/// ������
		/// </summary>
		double Withdraw;
		/// <summary>
		/// ����ı�֤��
		/// </summary>
		double FrozenMargin;
		/// <summary>
		/// ������ʽ�
		/// </summary>
		double FrozenCash;
		/// <summary>
		/// �����������
		/// </summary>
		double FrozenCommission;
		/// <summary>
		/// ��ǰ��֤���ܶ�
		/// </summary>
		double CurrMargin;
		/// <summary>
		/// �ʽ���
		/// </summary>
		double CashIn;
		/// <summary>
		/// ������
		/// </summary>
		double Commission;
		/// <summary>
		/// ƽ��ӯ��
		/// </summary>
		double CloseProfit;
		/// <summary>
		/// �ֲ�ӯ��
		/// </summary>
		double PositionProfit;
		/// <summary>
		/// �ڻ�����׼����
		/// </summary>
		double Balance;
		/// <summary>
		/// �����ʽ�
		/// </summary>
		double Available;
		/// <summary>
		/// ��ȡ�ʽ�
		/// </summary>
		double WithdrawQuota;
		/// <summary>
		/// ����׼����
		/// </summary>
		double Reserve;
		/// <summary>
		/// ������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradingDay;
		/// <summary>
		/// ������
		/// </summary>
		int SettlementID;
		/// <summary>
		/// ���ö��
		/// </summary>
		double Credit;
		/// <summary>
		/// ��Ѻ���
		/// </summary>
		double Mortgage;
		/// <summary>
		/// ��������֤��
		/// </summary>
		double ExchangeMargin;
		/// <summary>
		/// Ͷ���߽��֤��
		/// </summary>
		double DeliveryMargin;
		/// <summary>
		/// ���������֤��
		/// </summary>
		double ExchangeDeliveryMargin;
		/// <summary>
		///�����ڻ�����׼����
		/// </summary>
		double	ReserveBalance;
		/// <summary>
		///���ִ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^	CurrencyID;
		/// <summary>
		///�ϴλ���������
		/// </summary>
		double	PreFundMortgageIn;
		/// <summary>
		///�ϴλ����ʳ����
		/// </summary>
		double	PreFundMortgageOut;
		/// <summary>
		///����������
		/// </summary>
		double	FundMortgageIn;
		/// <summary>
		///�����ʳ����
		/// </summary>
		double	FundMortgageOut;
		/// <summary>
		///������Ѻ���
		/// </summary>
		double	FundMortgageAvailable;
		/// <summary>
		///����Ѻ���ҽ��
		/// </summary>
		double	MortgageableFund;
		/// <summary>
		///�����Ʒռ�ñ�֤��
		/// </summary>
		double	SpecProductMargin;
		/// <summary>
		///�����Ʒ���ᱣ֤��
		/// </summary>
		double	SpecProductFrozenMargin;
		/// <summary>
		///�����Ʒ������
		/// </summary>
		double	SpecProductCommission;
		/// <summary>
		///�����Ʒ����������
		/// </summary>
		double	SpecProductFrozenCommission;
		/// <summary>
		///�����Ʒ�ֲ�ӯ��
		/// </summary>
		double	SpecProductPositionProfit;
		/// <summary>
		///�����Ʒƽ��ӯ��
		/// </summary>
		double	SpecProductCloseProfit;
		/// <summary>
		///���ݳֲ�ӯ���㷨����������Ʒ�ֲ�ӯ��
		/// </summary>
		double	SpecProductPositionProfitByAlg;
		/// <summary>
		///�����Ʒ��������֤��
		/// </summary>
		double	SpecProductExchangeMargin;
	};

	/// <summary>
	/// Ͷ���ֲ߳�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcInvestorPositionField
	{
		/// <summary>
		/// ��Լ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// �ֲֶ�շ���
		/// </summary>
		EnumPosiDirectionType PosiDirection;
		/// <summary>
		/// Ͷ���ױ���־
		/// </summary>
		EnumHedgeFlagType HedgeFlag;
		/// <summary>
		/// �ֲ�����
		/// </summary>
		EnumPositionDateType PositionDate;
		/// <summary>
		/// ���ճֲ�
		/// </summary>
		int YdPosition;
		/// <summary>
		/// ���ճֲ�
		/// </summary>
		int Position;
		/// <summary>
		/// ��ͷ����
		/// </summary>
		int LongFrozen;
		/// <summary>
		/// ��ͷ����
		/// </summary>
		int ShortFrozen;
		/// <summary>
		/// ���ֶ�����
		/// </summary>
		double LongFrozenAmount;
		/// <summary>
		/// ���ֶ�����
		/// </summary>
		double ShortFrozenAmount;
		/// <summary>
		/// ������
		/// </summary>
		int OpenVolume;
		/// <summary>
		/// ƽ����
		/// </summary>
		int CloseVolume;
		/// <summary>
		/// ���ֽ��
		/// </summary>
		double OpenAmount;
		/// <summary>
		/// ƽ�ֽ��
		/// </summary>
		double CloseAmount;
		/// <summary>
		/// �ֲֳɱ�
		/// </summary>
		double PositionCost;
		/// <summary>
		/// �ϴ�ռ�õı�֤��
		/// </summary>
		double PreMargin;
		/// <summary>
		/// ռ�õı�֤��
		/// </summary>
		double UseMargin;
		/// <summary>
		/// ����ı�֤��
		/// </summary>
		double FrozenMargin;
		/// <summary>
		/// ������ʽ�
		/// </summary>
		double FrozenCash;
		/// <summary>
		/// �����������
		/// </summary>
		double FrozenCommission;
		/// <summary>
		/// �ʽ���
		/// </summary>
		double CashIn;
		/// <summary>
		/// ������
		/// </summary>
		double Commission;
		/// <summary>
		/// ƽ��ӯ��
		/// </summary>
		double CloseProfit;
		/// <summary>
		/// �ֲ�ӯ��
		/// </summary>
		double PositionProfit;
		/// <summary>
		/// �ϴν����
		/// </summary>
		double PreSettlementPrice;
		/// <summary>
		/// ���ν����
		/// </summary>
		double SettlementPrice;
		/// <summary>
		/// ������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradingDay;
		/// <summary>
		/// ������
		/// </summary>
		int SettlementID;
		/// <summary>
		/// ���ֳɱ�
		/// </summary>
		double OpenCost;
		/// <summary>
		/// ��������֤��
		/// </summary>
		double ExchangeMargin;
		/// <summary>
		/// ��ϳɽ��γɵĳֲ�
		/// </summary>
		int CombPosition;
		/// <summary>
		/// ��϶�ͷ����
		/// </summary>
		int CombLongFrozen;
		/// <summary>
		/// ��Ͽ�ͷ����
		/// </summary>
		int CombShortFrozen;
		/// <summary>
		/// ���ն���ƽ��ӯ��
		/// </summary>
		double CloseProfitByDate;
		/// <summary>
		/// ��ʶԳ�ƽ��ӯ��
		/// </summary>
		double CloseProfitByTrade;
		/// <summary>
		/// ���ճֲ�
		/// </summary>
		int TodayPosition;
		/// <summary>
		/// ��֤����
		/// </summary>
		double MarginRateByMoney;
		/// <summary>
		/// ��֤����(������)
		/// </summary>
		double MarginRateByVolume;
		/// <summary>
		///ִ�ж���
		/// </summary>
		int	StrikeFrozen;
		/// <summary>
		///ִ�ж�����
		/// </summary>
		double	StrikeFrozenAmount;
		/// <summary>
		///����ִ�ж���
		/// </summary>
		int	AbandonFrozen;
	};

	/// <summary>
	/// ��Լ��֤����
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcInstrumentMarginRateField
	{
		/// <summary>
		/// ��Լ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// Ͷ���߷�Χ
		/// </summary>
		EnumInvestorRangeType InvestorRange;
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// Ͷ���ױ���־
		/// </summary>
		EnumHedgeFlagType HedgeFlag;
		/// <summary>
		/// ��ͷ��֤����
		/// </summary>
		double LongMarginRatioByMoney;
		/// <summary>
		/// ��ͷ��֤���
		/// </summary>
		double LongMarginRatioByVolume;
		/// <summary>
		/// ��ͷ��֤����
		/// </summary>
		double ShortMarginRatioByMoney;
		/// <summary>
		/// ��ͷ��֤���
		/// </summary>
		double ShortMarginRatioByVolume;
		/// <summary>
		/// �Ƿ���Խ�������ȡ
		/// </summary>
		EnumBoolType IsRelative;
	};

	/// <summary>
	/// ��Լ��������
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcInstrumentCommissionRateField
	{
		/// <summary>
		/// ��Լ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// Ͷ���߷�Χ
		/// </summary>
		EnumInvestorRangeType InvestorRange;
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// ������������
		/// </summary>
		double OpenRatioByMoney;
		/// <summary>
		/// ����������
		/// </summary>
		double OpenRatioByVolume;
		/// <summary>
		/// ƽ����������
		/// </summary>
		double CloseRatioByMoney;
		/// <summary>
		/// ƽ��������
		/// </summary>
		double CloseRatioByVolume;
		/// <summary>
		/// ƽ����������
		/// </summary>
		double CloseTodayRatioByMoney;
		/// <summary>
		/// ƽ��������
		/// </summary>
		double CloseTodayRatioByVolume;
	};

	/// <summary>
	/// �������
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcDepthMarketDataField
	{
		/// <summary>
		/// ������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradingDay;
		/// <summary>
		/// ��Լ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// ��Լ�ڽ������Ĵ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ ExchangeInstID;
		/// <summary>
		/// ���¼�
		/// </summary>
		double LastPrice;
		/// <summary>
		/// �ϴν����
		/// </summary>
		double PreSettlementPrice;
		/// <summary>
		/// ������
		/// </summary>
		double PreClosePrice;
		/// <summary>
		/// ��ֲ���
		/// </summary>
		double PreOpenInterest;
		/// <summary>
		/// ����
		/// </summary>
		double OpenPrice;
		/// <summary>
		/// ��߼�
		/// </summary>
		double HighestPrice;
		/// <summary>
		/// ��ͼ�
		/// </summary>
		double LowestPrice;
		/// <summary>
		/// ����
		/// </summary>
		int Volume;
		/// <summary>
		/// �ɽ����
		/// </summary>
		double Turnover;
		/// <summary>
		/// �ֲ���
		/// </summary>
		double OpenInterest;
		/// <summary>
		/// ������
		/// </summary>
		double ClosePrice;
		/// <summary>
		/// ���ν����
		/// </summary>
		double SettlementPrice;
		/// <summary>
		/// ��ͣ���
		/// </summary>
		double UpperLimitPrice;
		/// <summary>
		/// ��ͣ���
		/// </summary>
		double LowerLimitPrice;
		/// <summary>
		/// ����ʵ��
		/// </summary>
		double PreDelta;
		/// <summary>
		/// ����ʵ��
		/// </summary>
		double CurrDelta;
		/// <summary>
		/// ����޸�ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ UpdateTime;
		/// <summary>
		/// ����޸ĺ���
		/// </summary>
		int UpdateMillisec;
		/// <summary>
		/// �����һ
		/// </summary>
		double BidPrice1;
		/// <summary>
		/// ������һ
		/// </summary>
		int BidVolume1;
		/// <summary>
		/// ������һ
		/// </summary>
		double AskPrice1;
		/// <summary>
		/// ������һ
		/// </summary>
		int AskVolume1;
		/// <summary>
		/// ����۶�
		/// </summary>
		double BidPrice2;
		/// <summary>
		/// ��������
		/// </summary>
		int BidVolume2;
		/// <summary>
		/// �����۶�
		/// </summary>
		double AskPrice2;
		/// <summary>
		/// ��������
		/// </summary>
		int AskVolume2;
		/// <summary>
		/// �������
		/// </summary>
		double BidPrice3;
		/// <summary>
		/// ��������
		/// </summary>
		int BidVolume3;
		/// <summary>
		/// ��������
		/// </summary>
		double AskPrice3;
		/// <summary>
		/// ��������
		/// </summary>
		int AskVolume3;
		/// <summary>
		/// �������
		/// </summary>
		double BidPrice4;
		/// <summary>
		/// ��������
		/// </summary>
		int BidVolume4;
		/// <summary>
		/// ��������
		/// </summary>
		double AskPrice4;
		/// <summary>
		/// ��������
		/// </summary>
		int AskVolume4;
		/// <summary>
		/// �������
		/// </summary>
		double BidPrice5;
		/// <summary>
		/// ��������
		/// </summary>
		int BidVolume5;
		/// <summary>
		/// ��������
		/// </summary>
		double AskPrice5;
		/// <summary>
		/// ��������
		/// </summary>
		int AskVolume5;
		/// <summary>
		/// ���վ���
		/// </summary>
		double AveragePrice;
		/// <summary>
		/// ҵ������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ActionDay;
	};

	/// <summary>
	/// Ͷ���ߺ�Լ����Ȩ��
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcInstrumentTradingRightField
	{
		/// <summary>
		/// ��Լ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// Ͷ���߷�Χ
		/// </summary>
		EnumInvestorRangeType InvestorRange;
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// ����Ȩ��
		/// </summary>
		EnumTradingRightType TradingRight;
	};

	/// <summary>
	/// ���͹�˾�û�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcBrokerUserField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// �û�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// �û�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^ UserName;
		/// <summary>
		/// �û�����
		/// </summary>
		EnumUserTypeType UserType;
		/// <summary>
		/// �Ƿ��Ծ
		/// </summary>
		int IsActive;
		/// <summary>
		/// �Ƿ�ʹ������
		/// </summary>
		int IsUsingOTP;
	};

	/// <summary>
	/// ���͹�˾�û�����
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcBrokerUserPasswordField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// �û�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ Password;
	};

	/// <summary>
	/// ���͹�˾�û�����Ȩ��
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcBrokerUserFunctionField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// �û�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// ���͹�˾���ܴ���
		/// </summary>
		EnumBrokerFunctionCodeType BrokerFunctionCode;
	};

	/// <summary>
	/// ����������Ա���̻�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcTraderOfferField
	{
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// ����������Ա����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ TraderID;
		/// <summary>
		/// ��Ա����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ParticipantID;
		/// <summary>
		/// ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ Password;
		/// <summary>
		/// ��װ���
		/// </summary>
		int InstallID;
		/// <summary>
		/// ���ر������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ OrderLocalID;
		/// <summary>
		/// ����������Ա����״̬
		/// </summary>
		EnumTraderConnectStatusType TraderConnectStatus;
		/// <summary>
		/// �����������������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ConnectRequestDate;
		/// <summary>
		/// �������������ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ConnectRequestTime;
		/// <summary>
		/// �ϴα�������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ LastReportDate;
		/// <summary>
		/// �ϴα���ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ LastReportTime;
		/// <summary>
		/// �����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ConnectDate;
		/// <summary>
		/// �������ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ConnectTime;
		/// <summary>
		/// ��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ StartDate;
		/// <summary>
		/// ����ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ StartTime;
		/// <summary>
		/// ������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradingDay;
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
	};

	/// <summary>
	/// Ͷ���߽�����
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcSettlementInfoField
	{
		/// <summary>
		/// ������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradingDay;
		/// <summary>
		/// ������
		/// </summary>
		int SettlementID;
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// ���
		/// </summary>
		int SequenceNo;
		/// <summary>
		/// ��Ϣ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 501)]
		String^ Content;
	};

	/// <summary>
	/// ��Լ��֤���ʵ���
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcInstrumentMarginRateAdjustField
	{
		/// <summary>
		/// ��Լ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// Ͷ���߷�Χ
		/// </summary>
		EnumInvestorRangeType InvestorRange;
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// Ͷ���ױ���־
		/// </summary>
		EnumHedgeFlagType HedgeFlag;
		/// <summary>
		/// ��ͷ��֤����
		/// </summary>
		double LongMarginRatioByMoney;
		/// <summary>
		/// ��ͷ��֤���
		/// </summary>
		double LongMarginRatioByVolume;
		/// <summary>
		/// ��ͷ��֤����
		/// </summary>
		double ShortMarginRatioByMoney;
		/// <summary>
		/// ��ͷ��֤���
		/// </summary>
		double ShortMarginRatioByVolume;
		/// <summary>
		/// �Ƿ���Խ�������ȡ
		/// </summary>
		int IsRelative;
	};

	/// <summary>
	/// ��������֤����
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcExchangeMarginRateField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// ��Լ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// Ͷ���ױ���־
		/// </summary>
		EnumHedgeFlagType HedgeFlag;
		/// <summary>
		/// ��ͷ��֤����
		/// </summary>
		double LongMarginRatioByMoney;
		/// <summary>
		/// ��ͷ��֤���
		/// </summary>
		double LongMarginRatioByVolume;
		/// <summary>
		/// ��ͷ��֤����
		/// </summary>
		double ShortMarginRatioByMoney;
		/// <summary>
		/// ��ͷ��֤���
		/// </summary>
		double ShortMarginRatioByVolume;
	};

	/// <summary>
	/// ��������֤���ʵ���
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcExchangeMarginRateAdjustField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// ��Լ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// Ͷ���ױ���־
		/// </summary>
		EnumHedgeFlagType HedgeFlag;
		/// <summary>
		/// ���潻����Ͷ���߶�ͷ��֤����
		/// </summary>
		double LongMarginRatioByMoney;
		/// <summary>
		/// ���潻����Ͷ���߶�ͷ��֤���
		/// </summary>
		double LongMarginRatioByVolume;
		/// <summary>
		/// ���潻����Ͷ���߿�ͷ��֤����
		/// </summary>
		double ShortMarginRatioByMoney;
		/// <summary>
		/// ���潻����Ͷ���߿�ͷ��֤���
		/// </summary>
		double ShortMarginRatioByVolume;
		/// <summary>
		/// ��������ͷ��֤����
		/// </summary>
		double ExchLongMarginRatioByMoney;
		/// <summary>
		/// ��������ͷ��֤���
		/// </summary>
		double ExchLongMarginRatioByVolume;
		/// <summary>
		/// ��������ͷ��֤����
		/// </summary>
		double ExchShortMarginRatioByMoney;
		/// <summary>
		/// ��������ͷ��֤���
		/// </summary>
		double ExchShortMarginRatioByVolume;
		/// <summary>
		/// �����潻����Ͷ���߶�ͷ��֤����
		/// </summary>
		double NoLongMarginRatioByMoney;
		/// <summary>
		/// �����潻����Ͷ���߶�ͷ��֤���
		/// </summary>
		double NoLongMarginRatioByVolume;
		/// <summary>
		/// �����潻����Ͷ���߿�ͷ��֤����
		/// </summary>
		double NoShortMarginRatioByMoney;
		/// <summary>
		/// �����潻����Ͷ���߿�ͷ��֤���
		/// </summary>
		double NoShortMarginRatioByVolume;
	};
	/// <summary>
	///����
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct CThostFtdcExchangeRateField
	{
		/// <summary>
		///���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		/// <summary>
		///Դ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^	FromCurrencyID;
		/// <summary>
		///Դ���ֵ�λ����
		/// </summary>
		double	FromCurrencyUnit;
		/// <summary>
		///Ŀ�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^	ToCurrencyID;
		/// <summary>
		///����
		/// </summary>
		double	ExchangeRate;
	};
	/// <summary>
	/// ��������
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcSettlementRefField
	{
		/// <summary>
		/// ������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradingDay;
		/// <summary>
		/// ������
		/// </summary>
		int SettlementID;
	};

	/// <summary>
	/// ��ǰʱ��
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcCurrentTimeField
	{
		/// <summary>
		/// ��ǰ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ CurrDate;
		/// <summary>
		/// ��ǰʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ CurrTime;
		/// <summary>
		/// ��ǰʱ�䣨���룩
		/// </summary>
		int CurrMillisec;
	};

	/// <summary>
	/// ͨѶ�׶�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcCommPhaseField
	{
		/// <summary>
		/// ������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradingDay;
		/// <summary>
		/// ͨѶʱ�α��
		/// </summary>
		short CommPhaseNo;
	};

	/// <summary>
	/// ��¼��Ϣ
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcLoginInfoField
	{
		/// <summary>
		/// ǰ�ñ��
		/// </summary>
		int FrontID;
		/// <summary>
		/// �Ự���
		/// </summary>
		int SessionID;
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// �û�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// ��¼����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ LoginDate;
		/// <summary>
		/// ��¼ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ LoginTime;
		/// <summary>
		/// IP��ַ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ IPAddress;
		/// <summary>
		/// �û��˲�Ʒ��Ϣ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ UserProductInfo;
		/// <summary>
		/// �ӿڶ˲�Ʒ��Ϣ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ InterfaceProductInfo;
		/// <summary>
		/// Э����Ϣ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ProtocolInfo;
		/// <summary>
		/// ϵͳ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ SystemName;
		/// <summary>
		/// ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ Password;
		/// <summary>
		/// ��󱨵�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ MaxOrderRef;
		/// <summary>
		/// ������ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ SHFETime;
		/// <summary>
		/// ������ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ DCETime;
		/// <summary>
		/// ֣����ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ CZCETime;
		/// <summary>
		/// �н���ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ FFEXTime;
		/// <summary>
		/// Mac��ַ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ MacAddress;
		/// <summary>
		/// ��̬����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ OneTimePassword;
		/// <summary>
		///��Դ����ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	INETime;
		/// <summary>
		///��ѯʱ�Ƿ���Ҫ����
		/// </summary>
		int	IsQryControl;
		/// <summary>
		///��¼��ע
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 36)]
		String^	LoginRemark;
	};

	/// <summary>
	/// ��¼��Ϣ
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcLogoutAllField
	{
		/// <summary>
		/// ǰ�ñ��
		/// </summary>
		int FrontID;
		/// <summary>
		/// �Ự���
		/// </summary>
		int SessionID;
		/// <summary>
		/// ϵͳ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ SystemName;
	};

	/// <summary>
	/// ǰ��״̬
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcFrontStatusField
	{
		/// <summary>
		/// ǰ�ñ��
		/// </summary>
		int FrontID;
		/// <summary>
		/// �ϴα�������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ LastReportDate;
		/// <summary>
		/// �ϴα���ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ LastReportTime;
		/// <summary>
		/// �Ƿ��Ծ
		/// </summary>
		int IsActive;
	};

	/// <summary>
	/// �û�������
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcUserPasswordUpdateField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// �û�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// ԭ���Ŀ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ OldPassword;
		/// <summary>
		/// �µĿ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ NewPassword;
	};

	/// <summary>
	/// ���뱨��
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcInputOrderField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// ��Լ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// ��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ OrderRef;
		/// <summary>
		/// �û�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// �����۸�����
		/// </summary>
		EnumOrderPriceTypeType OrderPriceType;
		/// <summary>
		/// ��������
		/// </summary>
		EnumDirectionType Direction;
		/// <summary>
		/// ��Ͽ�ƽ��־
		/// </summary>
		EnumOffsetFlagType CombOffsetFlag;
		/// <summary>
		/// ��Ͽ�ƽ��־
		/// </summary>
		EnumOffsetFlagType CombOffsetFlag_1;
		/// <summary>
		/// ��Ͽ�ƽ��־
		/// </summary>
		EnumOffsetFlagType CombOffsetFlag_2;
		/// <summary>
		/// ��Ͽ�ƽ��־
		/// </summary>
		EnumOffsetFlagType CombOffsetFlag_3;
		/// <summary>
		/// ��Ͽ�ƽ��־
		/// </summary>
		EnumOffsetFlagType CombOffsetFlag_4;
		/// <summary>
		/// ���Ͷ���ױ���־
		/// </summary>
		EnumHedgeFlagType CombHedgeFlag;
		/// <summary>
		/// ���Ͷ���ױ���־
		/// </summary>
		EnumHedgeFlagType CombHedgeFlag_1;
		/// <summary>
		/// ���Ͷ���ױ���־
		/// </summary>
		EnumHedgeFlagType CombHedgeFlag_2;
		/// <summary>
		/// ���Ͷ���ױ���־
		/// </summary>
		EnumHedgeFlagType CombHedgeFlag_3;
		/// <summary>
		/// ���Ͷ���ױ���־
		/// </summary>
		EnumHedgeFlagType CombHedgeFlag_4;
		/// <summary>
		/// �۸�
		/// </summary>
		double LimitPrice;
		/// <summary>
		/// ����
		/// </summary>
		int VolumeTotalOriginal;
		/// <summary>
		/// ��Ч������
		/// </summary>
		EnumTimeConditionType TimeCondition;
		/// <summary>
		/// GTD����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ GTDDate;
		/// <summary>
		/// �ɽ�������
		/// </summary>
		EnumVolumeConditionType VolumeCondition;
		/// <summary>
		/// ��С�ɽ���
		/// </summary>
		int MinVolume;
		/// <summary>
		/// ��������
		/// </summary>
		EnumContingentConditionType ContingentCondition;
		/// <summary>
		/// ֹ���
		/// </summary>
		double StopPrice;
		/// <summary>
		/// ǿƽԭ��
		/// </summary>
		EnumForceCloseReasonType ForceCloseReason;
		/// <summary>
		/// �Զ������־
		/// </summary>
		int IsAutoSuspend;
		/// <summary>
		/// ҵ��Ԫ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ BusinessUnit;
		/// <summary>
		/// ������
		/// </summary>
		int RequestID;
		/// <summary>
		/// �û�ǿ����־
		/// </summary>
		int UserForceClose;
		/// <summary>
		/// ��������־
		/// </summary>
		int	IsSwapOrder;
		/// <summary>
		///����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	ExchangeID;
		/// <summary>
		///Ͷ�ʵ�Ԫ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
		String^	InvestUnitID;
		/// <summary>
		///�ʽ��˺�
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^	AccountID;
		/// <summary>
		///���ִ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^	CurrencyID;
		/// <summary>
		///���ױ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	ClientID;
		/// <summary>
		///IP��ַ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	IPAddress;
		/// <summary>
		///Mac��ַ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^	MacAddress;
	};

	/// <summary>
	/// ����
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcOrderField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// ��Լ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// ��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ OrderRef;
		/// <summary>
		/// �û�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// �����۸�����
		/// </summary>
		EnumOrderPriceTypeType OrderPriceType;
		/// <summary>
		/// ��������
		/// </summary>
		EnumDirectionType Direction;
		/// <summary>
		/// ��Ͽ�ƽ��־
		/// </summary>
		EnumOffsetFlagType CombOffsetFlag;
		/// <summary>
		/// ��Ͽ�ƽ��־
		/// </summary>
		EnumOffsetFlagType CombOffsetFlag_1;
		/// <summary>
		/// ��Ͽ�ƽ��־
		/// </summary>
		EnumOffsetFlagType CombOffsetFlag_2;
		/// <summary>
		/// ��Ͽ�ƽ��־
		/// </summary>
		EnumOffsetFlagType CombOffsetFlag_3;
		/// <summary>
		/// ��Ͽ�ƽ��־
		/// </summary>
		EnumOffsetFlagType CombOffsetFlag_4;
		/// <summary>
		/// ���Ͷ���ױ���־
		/// </summary>
		EnumHedgeFlagType CombHedgeFlag;
		/// <summary>
		/// ���Ͷ���ױ���־
		/// </summary>
		EnumHedgeFlagType CombHedgeFlag_1;
		/// <summary>
		/// ���Ͷ���ױ���־
		/// </summary>
		EnumHedgeFlagType CombHedgeFlag_2;
		/// <summary>
		/// ���Ͷ���ױ���־
		/// </summary>
		EnumHedgeFlagType CombHedgeFlag_3;
		/// <summary>
		/// ���Ͷ���ױ���־
		/// </summary>
		EnumHedgeFlagType CombHedgeFlag_4;
		/// <summary>
		/// �۸�
		/// </summary>
		double LimitPrice;
		/// <summary>
		/// ����
		/// </summary>
		int VolumeTotalOriginal;
		/// <summary>
		/// ��Ч������
		/// </summary>
		EnumTimeConditionType TimeCondition;
		/// <summary>
		/// GTD����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ GTDDate;
		/// <summary>
		/// �ɽ�������
		/// </summary>
		EnumVolumeConditionType VolumeCondition;
		/// <summary>
		/// ��С�ɽ���
		/// </summary>
		int MinVolume;
		/// <summary>
		/// ��������
		/// </summary>
		EnumContingentConditionType ContingentCondition;
		/// <summary>
		/// ֹ���
		/// </summary>
		double StopPrice;
		/// <summary>
		/// ǿƽԭ��
		/// </summary>
		EnumForceCloseReasonType ForceCloseReason;
		/// <summary>
		/// �Զ������־
		/// </summary>
		int IsAutoSuspend;
		/// <summary>
		/// ҵ��Ԫ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ BusinessUnit;
		/// <summary>
		/// ������
		/// </summary>
		int RequestID;
		/// <summary>
		/// ���ر������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ OrderLocalID;
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// ��Ա����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ParticipantID;
		/// <summary>
		/// �ͻ�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ClientID;
		/// <summary>
		/// ��Լ�ڽ������Ĵ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ ExchangeInstID;
		/// <summary>
		/// ����������Ա����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ TraderID;
		/// <summary>
		/// ��װ���
		/// </summary>
		int InstallID;
		/// <summary>
		/// �����ύ״̬
		/// </summary>
		EnumOrderSubmitStatusType OrderSubmitStatus;
		/// <summary>
		/// ������ʾ���
		/// </summary>
		int NotifySequence;
		/// <summary>
		/// ������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradingDay;
		/// <summary>
		/// ������
		/// </summary>
		int SettlementID;
		/// <summary>
		/// �������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ OrderSysID;
		/// <summary>
		/// ������Դ
		/// </summary>
		EnumOrderSourceType OrderSource;
		/// <summary>
		/// ����״̬
		/// </summary>
		EnumOrderStatusType OrderStatus;
		/// <summary>
		/// ��������
		/// </summary>
		EnumOrderTypeType OrderType;
		/// <summary>
		/// ��ɽ�����
		/// </summary>
		int VolumeTraded;
		/// <summary>
		/// ʣ������
		/// </summary>
		int VolumeTotal;
		/// <summary>
		/// ��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ InsertDate;
		/// <summary>
		/// ί��ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ InsertTime;
		/// <summary>
		/// ����ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ActiveTime;
		/// <summary>
		/// ����ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ SuspendTime;
		/// <summary>
		/// ����޸�ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ UpdateTime;
		/// <summary>
		/// ����ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ CancelTime;
		/// <summary>
		/// ����޸Ľ���������Ա����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ ActiveTraderID;
		/// <summary>
		/// �����Ա���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ClearingPartID;
		/// <summary>
		/// ���
		/// </summary>
		int SequenceNo;
		/// <summary>
		/// ǰ�ñ��
		/// </summary>
		int FrontID;
		/// <summary>
		/// �Ự���
		/// </summary>
		int SessionID;
		/// <summary>
		/// �û��˲�Ʒ��Ϣ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ UserProductInfo;
		/// <summary>
		/// ״̬��Ϣ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^ StatusMsg;
		/// <summary>
		/// �û�ǿ����־
		/// </summary>
		int UserForceClose;
		/// <summary>
		/// �����û�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ ActiveUserID;
		/// <summary>
		/// ���͹�˾�������
		/// </summary>
		int BrokerOrderSeq;
		/// <summary>
		/// ��ر���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ RelativeOrderSysID;
		/// <summary>
		///֣�����ɽ�����
		/// </summary>
		int	ZCETotalTradedVolume;
		/// <summary>
		///��������־
		/// </summary>
		int	IsSwapOrder;
		/// <summary>
		///Ӫҵ�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	BranchID;
		/// <summary>
		///Ͷ�ʵ�Ԫ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
		String^	InvestUnitID;
		/// <summary>
		///�ʽ��˺�
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^	AccountID;
		/// <summary>
		///���ִ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^	CurrencyID;
		/// <summary>
		///IP��ַ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	IPAddress;
		/// <summary>
		///Mac��ַ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^	MacAddress;
	};

	/// <summary>
	/// ����������
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcExchangeOrderField
	{
		/// <summary>
		/// �����۸�����
		/// </summary>
		EnumOrderPriceTypeType OrderPriceType;
		/// <summary>
		/// ��������
		/// </summary>
		EnumDirectionType Direction;
		/// <summary>
		/// ��Ͽ�ƽ��־
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
		String^ CombOffsetFlag;
		/// <summary>
		/// ���Ͷ���ױ���־
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
		String^ CombHedgeFlag;
		/// <summary>
		/// �۸�
		/// </summary>
		double LimitPrice;
		/// <summary>
		/// ����
		/// </summary>
		int VolumeTotalOriginal;
		/// <summary>
		/// ��Ч������
		/// </summary>
		EnumTimeConditionType TimeCondition;
		/// <summary>
		/// GTD����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ GTDDate;
		/// <summary>
		/// �ɽ�������
		/// </summary>
		EnumVolumeConditionType VolumeCondition;
		/// <summary>
		/// ��С�ɽ���
		/// </summary>
		int MinVolume;
		/// <summary>
		/// ��������
		/// </summary>
		EnumContingentConditionType ContingentCondition;
		/// <summary>
		/// ֹ���
		/// </summary>
		double StopPrice;
		/// <summary>
		/// ǿƽԭ��
		/// </summary>
		EnumForceCloseReasonType ForceCloseReason;
		/// <summary>
		/// �Զ������־
		/// </summary>
		int IsAutoSuspend;
		/// <summary>
		/// ҵ��Ԫ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ BusinessUnit;
		/// <summary>
		/// ������
		/// </summary>
		int RequestID;
		/// <summary>
		/// ���ر������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ OrderLocalID;
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// ��Ա����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ParticipantID;
		/// <summary>
		/// �ͻ�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ClientID;
		/// <summary>
		/// ��Լ�ڽ������Ĵ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ ExchangeInstID;
		/// <summary>
		/// ����������Ա����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ TraderID;
		/// <summary>
		/// ��װ���
		/// </summary>
		int InstallID;
		/// <summary>
		/// �����ύ״̬
		/// </summary>
		EnumOrderSubmitStatusType OrderSubmitStatus;
		/// <summary>
		/// ������ʾ���
		/// </summary>
		int NotifySequence;
		/// <summary>
		/// ������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradingDay;
		/// <summary>
		/// ������
		/// </summary>
		int SettlementID;
		/// <summary>
		/// �������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ OrderSysID;
		/// <summary>
		/// ������Դ
		/// </summary>
		EnumOrderSourceType OrderSource;
		/// <summary>
		/// ����״̬
		/// </summary>
		EnumOrderStatusType OrderStatus;
		/// <summary>
		/// ��������
		/// </summary>
		EnumOrderTypeType OrderType;
		/// <summary>
		/// ��ɽ�����
		/// </summary>
		int VolumeTraded;
		/// <summary>
		/// ʣ������
		/// </summary>
		int VolumeTotal;
		/// <summary>
		/// ��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ InsertDate;
		/// <summary>
		/// ί��ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ InsertTime;
		/// <summary>
		/// ����ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ActiveTime;
		/// <summary>
		/// ����ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ SuspendTime;
		/// <summary>
		/// ����޸�ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ UpdateTime;
		/// <summary>
		/// ����ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ CancelTime;
		/// <summary>
		/// ����޸Ľ���������Ա����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ ActiveTraderID;
		/// <summary>
		/// �����Ա���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ClearingPartID;
		/// <summary>
		/// ���
		/// </summary>
		int SequenceNo;
		/// <summary>
		///Ӫҵ�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	BranchID;
		/// <summary>
		///IP��ַ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	IPAddress;
		/// <summary>
		///Mac��ַ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^	MacAddress;
	};

	/// <summary>
	/// ��������������ʧ��
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcExchangeOrderInsertErrorField
	{
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// ��Ա����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ParticipantID;
		/// <summary>
		/// ����������Ա����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ TraderID;
		/// <summary>
		/// ��װ���
		/// </summary>
		int InstallID;
		/// <summary>
		/// ���ر������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ OrderLocalID;
		/// <summary>
		/// �������
		/// </summary>
		int ErrorID;
		/// <summary>
		/// ������Ϣ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^ ErrorMsg;
	};

	/// <summary>
	/// ���뱨������
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcInputOrderActionField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// ������������
		/// </summary>
		int OrderActionRef;
		/// <summary>
		/// ��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ OrderRef;
		/// <summary>
		/// ������
		/// </summary>
		int RequestID;
		/// <summary>
		/// ǰ�ñ��
		/// </summary>
		int FrontID;
		/// <summary>
		/// �Ự���
		/// </summary>
		int SessionID;
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// �������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ OrderSysID;
		/// <summary>
		/// ������־
		/// </summary>
		EnumActionFlagType ActionFlag;
		/// <summary>
		/// �۸�
		/// </summary>
		double LimitPrice;
		/// <summary>
		/// �����仯
		/// </summary>
		int VolumeChange;
		/// <summary>
		/// �û�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// ��Լ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		///Ͷ�ʵ�Ԫ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
		String^	InvestUnitID;
		/// <summary>
		///IP��ַ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	IPAddress;
		/// <summary>
		///Mac��ַ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^	MacAddress;
	};

	/// <summary>
	/// ��������
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcOrderActionField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// ������������
		/// </summary>
		int OrderActionRef;
		/// <summary>
		/// ��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ OrderRef;
		/// <summary>
		/// ������
		/// </summary>
		int RequestID;
		/// <summary>
		/// ǰ�ñ��
		/// </summary>
		int FrontID;
		/// <summary>
		/// �Ự���
		/// </summary>
		int SessionID;
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// �������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ OrderSysID;
		/// <summary>
		/// ������־
		/// </summary>
		EnumActionFlagType ActionFlag;
		/// <summary>
		/// �۸�
		/// </summary>
		double LimitPrice;
		/// <summary>
		/// �����仯
		/// </summary>
		int VolumeChange;
		/// <summary>
		/// ��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ActionDate;
		/// <summary>
		/// ����ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ActionTime;
		/// <summary>
		/// ����������Ա����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ TraderID;
		/// <summary>
		/// ��װ���
		/// </summary>
		int InstallID;
		/// <summary>
		/// ���ر������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ OrderLocalID;
		/// <summary>
		/// �������ر��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ ActionLocalID;
		/// <summary>
		/// ��Ա����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ParticipantID;
		/// <summary>
		/// �ͻ�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ClientID;
		/// <summary>
		/// ҵ��Ԫ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ BusinessUnit;
		/// <summary>
		/// ��������״̬
		/// </summary>
		EnumOrderActionStatusType OrderActionStatus;
		/// <summary>
		/// �û�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// ״̬��Ϣ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^ StatusMsg;
		/// <summary>
		/// ��Լ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		///Ӫҵ�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	BranchID;
		/// <summary>
		///Ͷ�ʵ�Ԫ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
		String^	InvestUnitID;
		/// <summary>
		///IP��ַ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	IPAddress;
		/// <summary>
		///Mac��ַ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^	MacAddress;
	};

	/// <summary>
	/// ��������������
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcExchangeOrderActionField
	{
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// �������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ OrderSysID;
		/// <summary>
		/// ������־
		/// </summary>
		EnumActionFlagType ActionFlag;
		/// <summary>
		/// �۸�
		/// </summary>
		double LimitPrice;
		/// <summary>
		/// �����仯
		/// </summary>
		int VolumeChange;
		/// <summary>
		/// ��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ActionDate;
		/// <summary>
		/// ����ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ActionTime;
		/// <summary>
		/// ����������Ա����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ TraderID;
		/// <summary>
		/// ��װ���
		/// </summary>
		int InstallID;
		/// <summary>
		/// ���ر������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ OrderLocalID;
		/// <summary>
		/// �������ر��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ ActionLocalID;
		/// <summary>
		/// ��Ա����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ParticipantID;
		/// <summary>
		/// �ͻ�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ClientID;
		/// <summary>
		/// ҵ��Ԫ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ BusinessUnit;
		/// <summary>
		/// ��������״̬
		/// </summary>
		EnumOrderActionStatusType OrderActionStatus;
		/// <summary>
		/// �û�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		///Ӫҵ�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	BranchID;
		/// <summary>
		///IP��ַ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	IPAddress;
		/// <summary>
		///Mac��ַ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^	MacAddress;
	};

	/// <summary>
	/// ��������������ʧ��
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcExchangeOrderActionErrorField
	{
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// �������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ OrderSysID;
		/// <summary>
		/// ����������Ա����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ TraderID;
		/// <summary>
		/// ��װ���
		/// </summary>
		int InstallID;
		/// <summary>
		/// ���ر������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ OrderLocalID;
		/// <summary>
		/// �������ر��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ ActionLocalID;
		/// <summary>
		/// �������
		/// </summary>
		int ErrorID;
		/// <summary>
		/// ������Ϣ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^ ErrorMsg;
	};

	/// <summary>
	/// �������ɽ�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcExchangeTradeField
	{
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// �ɽ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ TradeID;
		/// <summary>
		/// ��������
		/// </summary>
		EnumDirectionType Direction;
		/// <summary>
		/// �������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ OrderSysID;
		/// <summary>
		/// ��Ա����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ParticipantID;
		/// <summary>
		/// �ͻ�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ClientID;
		/// <summary>
		/// ���׽�ɫ
		/// </summary>
		EnumTradingRoleType TradingRole;
		/// <summary>
		/// ��Լ�ڽ������Ĵ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ ExchangeInstID;
		/// <summary>
		/// ��ƽ��־
		/// </summary>
		EnumOffsetFlagType OffsetFlag;
		/// <summary>
		/// Ͷ���ױ���־
		/// </summary>
		EnumHedgeFlagType HedgeFlag;
		/// <summary>
		/// �۸�
		/// </summary>
		double Price;
		/// <summary>
		/// ����
		/// </summary>
		int Volume;
		/// <summary>
		/// �ɽ�ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradeDate;
		/// <summary>
		/// �ɽ�ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradeTime;
		/// <summary>
		/// �ɽ�����
		/// </summary>
		EnumTradeTypeType TradeType;
		/// <summary>
		/// �ɽ�����Դ
		/// </summary>
		EnumPriceSourceType PriceSource;
		/// <summary>
		/// ����������Ա����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ TraderID;
		/// <summary>
		/// ���ر������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ OrderLocalID;
		/// <summary>
		/// �����Ա���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ClearingPartID;
		/// <summary>
		/// ҵ��Ԫ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ BusinessUnit;
		/// <summary>
		/// ���
		/// </summary>
		int SequenceNo;
	};

	/// <summary>
	/// �ɽ�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcTradeField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// ��Լ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// ��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ OrderRef;
		/// <summary>
		/// �û�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// �ɽ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ TradeID;
		/// <summary>
		/// ��������
		/// </summary>
		EnumDirectionType Direction;
		/// <summary>
		/// �������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ OrderSysID;
		/// <summary>
		/// ��Ա����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ParticipantID;
		/// <summary>
		/// �ͻ�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ClientID;
		/// <summary>
		/// ���׽�ɫ
		/// </summary>
		EnumTradingRoleType TradingRole;
		/// <summary>
		/// ��Լ�ڽ������Ĵ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ ExchangeInstID;
		/// <summary>
		/// ��ƽ��־
		/// </summary>
		EnumOffsetFlagType OffsetFlag;
		/// <summary>
		/// Ͷ���ױ���־
		/// </summary>
		EnumHedgeFlagType HedgeFlag;
		/// <summary>
		/// �۸�
		/// </summary>
		double Price;
		/// <summary>
		/// ����
		/// </summary>
		int Volume;
		/// <summary>
		/// �ɽ�ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradeDate;
		/// <summary>
		/// �ɽ�ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradeTime;
		/// <summary>
		/// �ɽ�����
		/// </summary>
		EnumTradeTypeType TradeType;
		/// <summary>
		/// �ɽ�����Դ
		/// </summary>
		EnumPriceSourceType PriceSource;
		/// <summary>
		/// ����������Ա����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ TraderID;
		/// <summary>
		/// ���ر������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ OrderLocalID;
		/// <summary>
		/// �����Ա���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ClearingPartID;
		/// <summary>
		/// ҵ��Ԫ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ BusinessUnit;
		/// <summary>
		/// ���
		/// </summary>
		int SequenceNo;
		/// <summary>
		/// ������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradingDay;
		/// <summary>
		/// ������
		/// </summary>
		int SettlementID;
		/// <summary>
		/// ���͹�˾�������
		/// </summary>
		int BrokerOrderSeq;
	};

	/// <summary>
	/// �û��Ự
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcUserSessionField
	{
		/// <summary>
		/// ǰ�ñ��
		/// </summary>
		int FrontID;
		/// <summary>
		/// �Ự���
		/// </summary>
		int SessionID;
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// �û�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// ��¼����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ LoginDate;
		/// <summary>
		/// ��¼ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ LoginTime;
		/// <summary>
		/// IP��ַ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ IPAddress;
		/// <summary>
		/// �û��˲�Ʒ��Ϣ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ UserProductInfo;
		/// <summary>
		/// �ӿڶ˲�Ʒ��Ϣ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ InterfaceProductInfo;
		/// <summary>
		/// Э����Ϣ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ProtocolInfo;
		/// <summary>
		/// Mac��ַ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ MacAddress;
		/// <summary>
		///��¼��ע
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 36)]
		String^	LoginRemark;
	};

	/// <summary>
	/// ��ѯ��󱨵�����
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcQueryMaxOrderVolumeField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// ��Լ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// ��������
		/// </summary>
		EnumDirectionType Direction;
		/// <summary>
		/// ��ƽ��־
		/// </summary>
		EnumOffsetFlagType OffsetFlag;
		/// <summary>
		/// Ͷ���ױ���־
		/// </summary>
		EnumHedgeFlagType HedgeFlag;
		/// <summary>
		/// �������������
		/// </summary>
		int MaxVolume;
	};

	/// <summary>
	/// Ͷ���߽�����ȷ����Ϣ
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcSettlementInfoConfirmField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// ȷ������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ConfirmDate;
		/// <summary>
		/// ȷ��ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ConfirmTime;
	};

	/// <summary>
	/// �����ͬ��
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcSyncDepositField
	{
		/// <summary>
		/// �������ˮ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^ DepositSeqNo;
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// �����
		/// </summary>
		double Deposit;
		/// <summary>
		/// �Ƿ�ǿ�ƽ���
		/// </summary>
		int IsForce;
		/// <summary>
		///���ִ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^	CurrencyID;
	};
	///<summary>
	///������Ѻͬ��
	///</summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct CThostFtdcSyncFundMortgageField
	{
		///<summary>
		///������Ѻ��ˮ��
		///</summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^	MortgageSeqNo;
		///<summary>
		///���͹�˾����
		///</summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///<summary>
		///Ͷ���ߴ���
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^	InvestorID;
		///<summary>
		///Դ����
		///</summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^	FromCurrencyID;
		///<summary>
		///��Ѻ���
		///</summary>
		double	MortgageAmount;
		///<summary>
		///Ŀ�����
		///</summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^	ToCurrencyID;
	};

	/// <summary>
	/// ���͹�˾ͬ��
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcBrokerSyncField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
	};

	/// <summary>
	/// ����ͬ���е�Ͷ����
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcSyncingInvestorField
	{
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ���߷������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorGroupID;
		/// <summary>
		/// Ͷ��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^ InvestorName;
		/// <summary>
		/// ֤������
		/// </summary>
		EnumIdCardTypeType IdentifiedCardType;
		/// <summary>
		/// ֤������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 51)]
		String^ IdentifiedCardNo;
		/// <summary>
		/// �Ƿ��Ծ
		/// </summary>
		int IsActive;
		/// <summary>
		/// ��ϵ�绰
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ Telephone;
		/// <summary>
		/// ͨѶ��ַ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 101)]
		String^ Address;
		/// <summary>
		/// ��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ OpenDate;
		/// <summary>
		/// �ֻ�
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ Mobile;
		/// <summary>
		///��������ģ�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^	CommModelID;
		/// <summary>
		///��֤����ģ�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^	MarginModelID;
	};

	/// <summary>
	/// ����ͬ���еĽ��״���
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcSyncingTradingCodeField
	{
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// �ͻ�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ClientID;
		/// <summary>
		/// �Ƿ��Ծ
		/// </summary>
		int IsActive;
		/// <summary>
		/// ���ױ�������
		/// </summary>
		EnumClientIDTypeType ClientIDType;
	};

	/// <summary>
	/// ����ͬ���е�Ͷ���߷���
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcSyncingInvestorGroupField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ���߷������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorGroupID;
		/// <summary>
		/// Ͷ���߷�������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ InvestorGroupName;
	};

	/// <summary>
	/// ����ͬ���еĽ����˺�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcSyncingTradingAccountField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ�����ʺ�
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ AccountID;
		/// <summary>
		/// �ϴ���Ѻ���
		/// </summary>
		double PreMortgage;
		/// <summary>
		/// �ϴ����ö��
		/// </summary>
		double PreCredit;
		/// <summary>
		/// �ϴδ���
		/// </summary>
		double PreDeposit;
		/// <summary>
		/// �ϴν���׼����
		/// </summary>
		double PreBalance;
		/// <summary>
		/// �ϴ�ռ�õı�֤��
		/// </summary>
		double PreMargin;
		/// <summary>
		/// ��Ϣ����
		/// </summary>
		double InterestBase;
		/// <summary>
		/// ��Ϣ����
		/// </summary>
		double Interest;
		/// <summary>
		/// �����
		/// </summary>
		double Deposit;
		/// <summary>
		/// ������
		/// </summary>
		double Withdraw;
		/// <summary>
		/// ����ı�֤��
		/// </summary>
		double FrozenMargin;
		/// <summary>
		/// ������ʽ�
		/// </summary>
		double FrozenCash;
		/// <summary>
		/// �����������
		/// </summary>
		double FrozenCommission;
		/// <summary>
		/// ��ǰ��֤���ܶ�
		/// </summary>
		double CurrMargin;
		/// <summary>
		/// �ʽ���
		/// </summary>
		double CashIn;
		/// <summary>
		/// ������
		/// </summary>
		double Commission;
		/// <summary>
		/// ƽ��ӯ��
		/// </summary>
		double CloseProfit;
		/// <summary>
		/// �ֲ�ӯ��
		/// </summary>
		double PositionProfit;
		/// <summary>
		/// �ڻ�����׼����
		/// </summary>
		double Balance;
		/// <summary>
		/// �����ʽ�
		/// </summary>
		double Available;
		/// <summary>
		/// ��ȡ�ʽ�
		/// </summary>
		double WithdrawQuota;
		/// <summary>
		/// ����׼����
		/// </summary>
		double Reserve;
		/// <summary>
		/// ������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradingDay;
		/// <summary>
		/// ������
		/// </summary>
		int SettlementID;
		/// <summary>
		/// ���ö��
		/// </summary>
		double Credit;
		/// <summary>
		/// ��Ѻ���
		/// </summary>
		double Mortgage;
		/// <summary>
		/// ��������֤��
		/// </summary>
		double ExchangeMargin;
		/// <summary>
		/// Ͷ���߽��֤��
		/// </summary>
		double DeliveryMargin;
		/// <summary>
		/// ���������֤��
		/// </summary>
		double ExchangeDeliveryMargin;
		/// <summary>
		///�����ڻ�����׼����
		/// </summary>
		double	ReserveBalance;
		/// <summary>
		///���ִ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^	CurrencyID;
		/// <summary>
		///�ϴλ���������
		/// </summary>
		double	PreFundMortgageIn;
		/// <summary>
		///�ϴλ����ʳ����
		/// </summary>
		double	PreFundMortgageOut;
		/// <summary>
		///����������
		/// </summary>
		double	FundMortgageIn;
		/// <summary>
		///�����ʳ����
		/// </summary>
		double	FundMortgageOut;
		/// <summary>
		///������Ѻ���
		/// </summary>
		double	FundMortgageAvailable;
		/// <summary>
		///����Ѻ���ҽ��
		/// </summary>
		double	MortgageableFund;
		/// <summary>
		///�����Ʒռ�ñ�֤��
		/// </summary>
		double	SpecProductMargin;
		/// <summary>
		///�����Ʒ���ᱣ֤��		
		/// </summary>
		double	SpecProductFrozenMargin;
		/// <summary>
		///�����Ʒ������
		/// </summary>
		double	SpecProductCommission;
		/// <summary>
		///�����Ʒ����������
		/// </summary>
		double	SpecProductFrozenCommission;
		/// <summary>
		///�����Ʒ�ֲ�ӯ��
		/// </summary>
		double	SpecProductPositionProfit;
		/// <summary>
		///�����Ʒƽ��ӯ��
		/// </summary>
		double	SpecProductCloseProfit;
		/// <summary>
		///���ݳֲ�ӯ���㷨����������Ʒ�ֲ�ӯ��
		/// </summary>
		double	SpecProductPositionProfitByAlg;
		/// <summary>
		///�����Ʒ��������֤��
		/// </summary>
		double	SpecProductExchangeMargin;
	};

	/// <summary>
	/// ����ͬ���е�Ͷ���ֲ߳�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcSyncingInvestorPositionField
	{
		/// <summary>
		/// ��Լ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// �ֲֶ�շ���
		/// </summary>
		EnumPosiDirectionType PosiDirection;
		/// <summary>
		/// Ͷ���ױ���־
		/// </summary>
		EnumHedgeFlagType HedgeFlag;
		/// <summary>
		/// �ֲ�����
		/// </summary>
		EnumPositionDateType PositionDate;
		/// <summary>
		/// ���ճֲ�
		/// </summary>
		int YdPosition;
		/// <summary>
		/// ���ճֲ�
		/// </summary>
		int Position;
		/// <summary>
		/// ��ͷ����
		/// </summary>
		int LongFrozen;
		/// <summary>
		/// ��ͷ����
		/// </summary>
		int ShortFrozen;
		/// <summary>
		/// ���ֶ�����
		/// </summary>
		double LongFrozenAmount;
		/// <summary>
		/// ���ֶ�����
		/// </summary>
		double ShortFrozenAmount;
		/// <summary>
		/// ������
		/// </summary>
		int OpenVolume;
		/// <summary>
		/// ƽ����
		/// </summary>
		int CloseVolume;
		/// <summary>
		/// ���ֽ��
		/// </summary>
		double OpenAmount;
		/// <summary>
		/// ƽ�ֽ��
		/// </summary>
		double CloseAmount;
		/// <summary>
		/// �ֲֳɱ�
		/// </summary>
		double PositionCost;
		/// <summary>
		/// �ϴ�ռ�õı�֤��
		/// </summary>
		double PreMargin;
		/// <summary>
		/// ռ�õı�֤��
		/// </summary>
		double UseMargin;
		/// <summary>
		/// ����ı�֤��
		/// </summary>
		double FrozenMargin;
		/// <summary>
		/// ������ʽ�
		/// </summary>
		double FrozenCash;
		/// <summary>
		/// �����������
		/// </summary>
		double FrozenCommission;
		/// <summary>
		/// �ʽ���
		/// </summary>
		double CashIn;
		/// <summary>
		/// ������
		/// </summary>
		double Commission;
		/// <summary>
		/// ƽ��ӯ��
		/// </summary>
		double CloseProfit;
		/// <summary>
		/// �ֲ�ӯ��
		/// </summary>
		double PositionProfit;
		/// <summary>
		/// �ϴν����
		/// </summary>
		double PreSettlementPrice;
		/// <summary>
		/// ���ν����
		/// </summary>
		double SettlementPrice;
		/// <summary>
		/// ������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradingDay;
		/// <summary>
		/// ������
		/// </summary>
		int SettlementID;
		/// <summary>
		/// ���ֳɱ�
		/// </summary>
		double OpenCost;
		/// <summary>
		/// ��������֤��
		/// </summary>
		double ExchangeMargin;
		/// <summary>
		/// ��ϳɽ��γɵĳֲ�
		/// </summary>
		int CombPosition;
		/// <summary>
		/// ��϶�ͷ����
		/// </summary>
		int CombLongFrozen;
		/// <summary>
		/// ��Ͽ�ͷ����
		/// </summary>
		int CombShortFrozen;
		/// <summary>
		/// ���ն���ƽ��ӯ��
		/// </summary>
		double CloseProfitByDate;
		/// <summary>
		/// ��ʶԳ�ƽ��ӯ��
		/// </summary>
		double CloseProfitByTrade;
		/// <summary>
		/// ���ճֲ�
		/// </summary>
		int TodayPosition;
		/// <summary>
		/// ��֤����
		/// </summary>
		double MarginRateByMoney;
		/// <summary>
		/// ��֤����(������)
		/// </summary>
		double MarginRateByVolume;
		/// <summary>
		///ִ�ж���
		/// </summary>
		int	StrikeFrozen;
		/// <summary>
		///ִ�ж�����
		/// </summary>
		double	StrikeFrozenAmount;
		/// <summary>
		///����ִ�ж���
		/// </summary>
		int	AbandonFrozen;
	};

	/// <summary>
	/// ����ͬ���еĺ�Լ��֤����
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcSyncingInstrumentMarginRateField
	{
		/// <summary>
		/// ��Լ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// Ͷ���߷�Χ
		/// </summary>
		EnumInvestorRangeType InvestorRange;
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// Ͷ���ױ���־
		/// </summary>
		EnumHedgeFlagType HedgeFlag;
		/// <summary>
		/// ��ͷ��֤����
		/// </summary>
		double LongMarginRatioByMoney;
		/// <summary>
		/// ��ͷ��֤���
		/// </summary>
		double LongMarginRatioByVolume;
		/// <summary>
		/// ��ͷ��֤����
		/// </summary>
		double ShortMarginRatioByMoney;
		/// <summary>
		/// ��ͷ��֤���
		/// </summary>
		double ShortMarginRatioByVolume;
		/// <summary>
		/// �Ƿ���Խ�������ȡ
		/// </summary>
		int IsRelative;
	};

	/// <summary>
	/// ����ͬ���еĺ�Լ��������
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcSyncingInstrumentCommissionRateField
	{
		/// <summary>
		/// ��Լ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// Ͷ���߷�Χ
		/// </summary>
		EnumInvestorRangeType InvestorRange;
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// ������������
		/// </summary>
		double OpenRatioByMoney;
		/// <summary>
		/// ����������
		/// </summary>
		double OpenRatioByVolume;
		/// <summary>
		/// ƽ����������
		/// </summary>
		double CloseRatioByMoney;
		/// <summary>
		/// ƽ��������
		/// </summary>
		double CloseRatioByVolume;
		/// <summary>
		/// ƽ����������
		/// </summary>
		double CloseTodayRatioByMoney;
		/// <summary>
		/// ƽ��������
		/// </summary>
		double CloseTodayRatioByVolume;
	};

	/// <summary>
	/// ����ͬ���еĺ�Լ����Ȩ��
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcSyncingInstrumentTradingRightField
	{
		/// <summary>
		/// ��Լ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// Ͷ���߷�Χ
		/// </summary>
		EnumInvestorRangeType InvestorRange;
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// ����Ȩ��
		/// </summary>
		EnumTradingRightType TradingRight;
	};

	/// <summary>
	/// ��ѯ����
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcQryOrderField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// ��Լ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// �������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ OrderSysID;
		/// <summary>
		/// ��ʼʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ InsertTimeStart;
		/// <summary>
		/// ����ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ InsertTimeEnd;
	};
	///��ǰ��Ȩ��Լ��С��֤��
	struct CThostFtdcOptionInstrMiniMarginField
	{
		///��Լ����
		TThostFtdcInstrumentIDType	InstrumentID;
		///Ͷ���߷�Χ
		TThostFtdcInvestorRangeType	InvestorRange;
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///��λ���֣���Ȩ��Լ��С��֤��
		TThostFtdcMoneyType	MinMargin;
		///ȡֵ��ʽ
		TThostFtdcValueMethodType	ValueMethod;
		///�Ƿ���潻������ȡ
		TThostFtdcBoolType	IsRelative;
	};

	///��ǰ��Ȩ��Լ��֤�����ϵ��
	struct CThostFtdcOptionInstrMarginAdjustField
	{
		///��Լ����
		TThostFtdcInstrumentIDType	InstrumentID;
		///Ͷ���߷�Χ
		TThostFtdcInvestorRangeType	InvestorRange;
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///Ͷ����ͷ��֤�����ϵ��
		TThostFtdcRatioType	SShortMarginRatioByMoney;
		///Ͷ����ͷ��֤�����ϵ��
		TThostFtdcMoneyType	SShortMarginRatioByVolume;
		///��ֵ��ͷ��֤�����ϵ��
		TThostFtdcRatioType	HShortMarginRatioByMoney;
		///��ֵ��ͷ��֤�����ϵ��
		TThostFtdcMoneyType	HShortMarginRatioByVolume;
		///������ͷ��֤�����ϵ��
		TThostFtdcRatioType	AShortMarginRatioByMoney;
		///������ͷ��֤�����ϵ��
		TThostFtdcMoneyType	AShortMarginRatioByVolume;
		///�Ƿ���潻������ȡ
		TThostFtdcBoolType	IsRelative;
		///�����̿�ͷ��֤�����ϵ��
		TThostFtdcRatioType	MShortMarginRatioByMoney;
		///�����̿�ͷ��֤�����ϵ��
		TThostFtdcMoneyType	MShortMarginRatioByVolume;
	};

	///��ǰ��Ȩ��Լ�����ѵ���ϸ����
	struct CThostFtdcOptionInstrCommRateField
	{
		///��Լ����
		TThostFtdcInstrumentIDType	InstrumentID;
		///Ͷ���߷�Χ
		TThostFtdcInvestorRangeType	InvestorRange;
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///������������
		TThostFtdcRatioType	OpenRatioByMoney;
		///����������
		TThostFtdcRatioType	OpenRatioByVolume;
		///ƽ����������
		TThostFtdcRatioType	CloseRatioByMoney;
		///ƽ��������
		TThostFtdcRatioType	CloseRatioByVolume;
		///ƽ����������
		TThostFtdcRatioType	CloseTodayRatioByMoney;
		///ƽ��������
		TThostFtdcRatioType	CloseTodayRatioByVolume;
		///ִ����������
		TThostFtdcRatioType	StrikeRatioByMoney;
		///ִ��������
		TThostFtdcRatioType	StrikeRatioByVolume;
	};

	///��Ȩ���׳ɱ�
	struct CThostFtdcOptionInstrTradeCostField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///��Լ����
		TThostFtdcInstrumentIDType	InstrumentID;
		///Ͷ���ױ���־
		TThostFtdcHedgeFlagType	HedgeFlag;
		///��Ȩ��Լ��֤�𲻱䲿��
		TThostFtdcMoneyType	FixedMargin;
		///��Ȩ��Լ��С��֤��
		TThostFtdcMoneyType	MiniMargin;
		///��Ȩ��ԼȨ����
		TThostFtdcMoneyType	Royalty;
		///��������Ȩ��Լ��֤�𲻱䲿��
		TThostFtdcMoneyType	ExchFixedMargin;
		///��������Ȩ��Լ��С��֤��
		TThostFtdcMoneyType	ExchMiniMargin;
	};

	///��Ȩ���׳ɱ���ѯ
	struct CThostFtdcQryOptionInstrTradeCostField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///��Լ����
		TThostFtdcInstrumentIDType	InstrumentID;
		///Ͷ���ױ���־
		TThostFtdcHedgeFlagType	HedgeFlag;
		///��Ȩ��Լ����
		TThostFtdcPriceType	InputPrice;
		///��ļ۸�,��0����������
		TThostFtdcPriceType	UnderlyingPrice;
	};

	///��Ȩ�������ʲ�ѯ
	struct CThostFtdcQryOptionInstrCommRateField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///��Լ����
		TThostFtdcInstrumentIDType	InstrumentID;
	};

	///��ָ�ֻ�ָ��
	struct CThostFtdcIndexPriceField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///��Լ����
		TThostFtdcInstrumentIDType	InstrumentID;
		///ָ���ֻ����̼�
		TThostFtdcPriceType	ClosePrice;
	};

	///�����ִ������
	struct CThostFtdcInputExecOrderField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///��Լ����
		TThostFtdcInstrumentIDType	InstrumentID;
		///ִ����������
		TThostFtdcOrderRefType	ExecOrderRef;
		///�û�����
		TThostFtdcUserIDType	UserID;
		///����
		TThostFtdcVolumeType	Volume;
		///������
		TThostFtdcRequestIDType	RequestID;
		///ҵ��Ԫ
		TThostFtdcBusinessUnitType	BusinessUnit;
		///��ƽ��־
		TThostFtdcOffsetFlagType	OffsetFlag;
		///Ͷ���ױ���־
		TThostFtdcHedgeFlagType	HedgeFlag;
		///ִ������
		TThostFtdcActionTypeType	ActionType;
		///����ͷ������ĳֲַ���
		TThostFtdcPosiDirectionType	PosiDirection;
		///��Ȩ��Ȩ���Ƿ����ڻ�ͷ��ı��
		TThostFtdcExecOrderPositionFlagType	ReservePositionFlag;
		///��Ȩ��Ȩ�����ɵ�ͷ���Ƿ��Զ�ƽ��
		TThostFtdcExecOrderCloseFlagType	CloseFlag;
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
		///Ͷ�ʵ�Ԫ����
		TThostFtdcInvestUnitIDType	InvestUnitID;
		///�ʽ��˺�
		TThostFtdcAccountIDType	AccountID;
		///���ִ���
		TThostFtdcCurrencyIDType	CurrencyID;
		///���ױ���
		TThostFtdcClientIDType	ClientID;
		///IP��ַ
		TThostFtdcIPAddressType	IPAddress;
		///Mac��ַ
		TThostFtdcMacAddressType	MacAddress;
	};

	///����ִ���������
	struct CThostFtdcInputExecOrderActionField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///ִ�������������
		TThostFtdcOrderActionRefType	ExecOrderActionRef;
		///ִ����������
		TThostFtdcOrderRefType	ExecOrderRef;
		///������
		TThostFtdcRequestIDType	RequestID;
		///ǰ�ñ��
		TThostFtdcFrontIDType	FrontID;
		///�Ự���
		TThostFtdcSessionIDType	SessionID;
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
		///ִ������������
		TThostFtdcExecOrderSysIDType	ExecOrderSysID;
		///������־
		TThostFtdcActionFlagType	ActionFlag;
		///�û�����
		TThostFtdcUserIDType	UserID;
		///��Լ����
		TThostFtdcInstrumentIDType	InstrumentID;
		///Ͷ�ʵ�Ԫ����
		TThostFtdcInvestUnitIDType	InvestUnitID;
		///IP��ַ
		TThostFtdcIPAddressType	IPAddress;
		///Mac��ַ
		TThostFtdcMacAddressType	MacAddress;
	};

	///ִ������
	struct CThostFtdcExecOrderField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///��Լ����
		TThostFtdcInstrumentIDType	InstrumentID;
		///ִ����������
		TThostFtdcOrderRefType	ExecOrderRef;
		///�û�����
		TThostFtdcUserIDType	UserID;
		///����
		TThostFtdcVolumeType	Volume;
		///������
		TThostFtdcRequestIDType	RequestID;
		///ҵ��Ԫ
		TThostFtdcBusinessUnitType	BusinessUnit;
		///��ƽ��־
		TThostFtdcOffsetFlagType	OffsetFlag;
		///Ͷ���ױ���־
		TThostFtdcHedgeFlagType	HedgeFlag;
		///ִ������
		TThostFtdcActionTypeType	ActionType;
		///����ͷ������ĳֲַ���
		TThostFtdcPosiDirectionType	PosiDirection;
		///��Ȩ��Ȩ���Ƿ����ڻ�ͷ��ı��
		TThostFtdcExecOrderPositionFlagType	ReservePositionFlag;
		///��Ȩ��Ȩ�����ɵ�ͷ���Ƿ��Զ�ƽ��
		TThostFtdcExecOrderCloseFlagType	CloseFlag;
		///����ִ��������
		TThostFtdcOrderLocalIDType	ExecOrderLocalID;
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
		///��Ա����
		TThostFtdcParticipantIDType	ParticipantID;
		///�ͻ�����
		TThostFtdcClientIDType	ClientID;
		///��Լ�ڽ������Ĵ���
		TThostFtdcExchangeInstIDType	ExchangeInstID;
		///����������Ա����
		TThostFtdcTraderIDType	TraderID;
		///��װ���
		TThostFtdcInstallIDType	InstallID;
		///ִ�������ύ״̬
		TThostFtdcOrderSubmitStatusType	OrderSubmitStatus;
		///������ʾ���
		TThostFtdcSequenceNoType	NotifySequence;
		///������
		TThostFtdcDateType	TradingDay;
		///������
		TThostFtdcSettlementIDType	SettlementID;
		///ִ��������
		TThostFtdcExecOrderSysIDType	ExecOrderSysID;
		///��������
		TThostFtdcDateType	InsertDate;
		///����ʱ��
		TThostFtdcTimeType	InsertTime;
		///����ʱ��
		TThostFtdcTimeType	CancelTime;
		///ִ�н��
		TThostFtdcExecResultType	ExecResult;
		///�����Ա���
		TThostFtdcParticipantIDType	ClearingPartID;
		///���
		TThostFtdcSequenceNoType	SequenceNo;
		///ǰ�ñ��
		TThostFtdcFrontIDType	FrontID;
		///�Ự���
		TThostFtdcSessionIDType	SessionID;
		///�û��˲�Ʒ��Ϣ
		TThostFtdcProductInfoType	UserProductInfo;
		///״̬��Ϣ
		TThostFtdcErrorMsgType	StatusMsg;
		///�����û�����
		TThostFtdcUserIDType	ActiveUserID;
		///���͹�˾�������
		TThostFtdcSequenceNoType	BrokerExecOrderSeq;
		///Ӫҵ�����
		TThostFtdcBranchIDType	BranchID;
		///Ͷ�ʵ�Ԫ����
		TThostFtdcInvestUnitIDType	InvestUnitID;
		///�ʽ��˺�
		TThostFtdcAccountIDType	AccountID;
		///���ִ���
		TThostFtdcCurrencyIDType	CurrencyID;
		///IP��ַ
		TThostFtdcIPAddressType	IPAddress;
		///Mac��ַ
		TThostFtdcMacAddressType	MacAddress;
	};

	///ִ���������
	struct CThostFtdcExecOrderActionField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///ִ�������������
		TThostFtdcOrderActionRefType	ExecOrderActionRef;
		///ִ����������
		TThostFtdcOrderRefType	ExecOrderRef;
		///������
		TThostFtdcRequestIDType	RequestID;
		///ǰ�ñ��
		TThostFtdcFrontIDType	FrontID;
		///�Ự���
		TThostFtdcSessionIDType	SessionID;
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
		///ִ������������
		TThostFtdcExecOrderSysIDType	ExecOrderSysID;
		///������־
		TThostFtdcActionFlagType	ActionFlag;
		///��������
		TThostFtdcDateType	ActionDate;
		///����ʱ��
		TThostFtdcTimeType	ActionTime;
		///����������Ա����
		TThostFtdcTraderIDType	TraderID;
		///��װ���
		TThostFtdcInstallIDType	InstallID;
		///����ִ��������
		TThostFtdcOrderLocalIDType	ExecOrderLocalID;
		///�������ر��
		TThostFtdcOrderLocalIDType	ActionLocalID;
		///��Ա����
		TThostFtdcParticipantIDType	ParticipantID;
		///�ͻ�����
		TThostFtdcClientIDType	ClientID;
		///ҵ��Ԫ
		TThostFtdcBusinessUnitType	BusinessUnit;
		///��������״̬
		TThostFtdcOrderActionStatusType	OrderActionStatus;
		///�û�����
		TThostFtdcUserIDType	UserID;
		///ִ������
		TThostFtdcActionTypeType	ActionType;
		///״̬��Ϣ
		TThostFtdcErrorMsgType	StatusMsg;
		///��Լ����
		TThostFtdcInstrumentIDType	InstrumentID;
		///Ӫҵ�����
		TThostFtdcBranchIDType	BranchID;
		///Ͷ�ʵ�Ԫ����
		TThostFtdcInvestUnitIDType	InvestUnitID;
		///IP��ַ
		TThostFtdcIPAddressType	IPAddress;
		///Mac��ַ
		TThostFtdcMacAddressType	MacAddress;
	};

	///ִ�������ѯ
	struct CThostFtdcQryExecOrderField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///��Լ����
		TThostFtdcInstrumentIDType	InstrumentID;
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
		///ִ��������
		TThostFtdcExecOrderSysIDType	ExecOrderSysID;
		///��ʼʱ��
		TThostFtdcTimeType	InsertTimeStart;
		///����ʱ��
		TThostFtdcTimeType	InsertTimeEnd;
	};

	///������ִ��������Ϣ
	struct CThostFtdcExchangeExecOrderField
	{
		///����
		TThostFtdcVolumeType	Volume;
		///������
		TThostFtdcRequestIDType	RequestID;
		///ҵ��Ԫ
		TThostFtdcBusinessUnitType	BusinessUnit;
		///��ƽ��־
		TThostFtdcOffsetFlagType	OffsetFlag;
		///Ͷ���ױ���־
		TThostFtdcHedgeFlagType	HedgeFlag;
		///ִ������
		TThostFtdcActionTypeType	ActionType;
		///����ͷ������ĳֲַ���
		TThostFtdcPosiDirectionType	PosiDirection;
		///��Ȩ��Ȩ���Ƿ����ڻ�ͷ��ı��
		TThostFtdcExecOrderPositionFlagType	ReservePositionFlag;
		///��Ȩ��Ȩ�����ɵ�ͷ���Ƿ��Զ�ƽ��
		TThostFtdcExecOrderCloseFlagType	CloseFlag;
		///����ִ��������
		TThostFtdcOrderLocalIDType	ExecOrderLocalID;
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
		///��Ա����
		TThostFtdcParticipantIDType	ParticipantID;
		///�ͻ�����
		TThostFtdcClientIDType	ClientID;
		///��Լ�ڽ������Ĵ���
		TThostFtdcExchangeInstIDType	ExchangeInstID;
		///����������Ա����
		TThostFtdcTraderIDType	TraderID;
		///��װ���
		TThostFtdcInstallIDType	InstallID;
		///ִ�������ύ״̬
		TThostFtdcOrderSubmitStatusType	OrderSubmitStatus;
		///������ʾ���
		TThostFtdcSequenceNoType	NotifySequence;
		///������
		TThostFtdcDateType	TradingDay;
		///������
		TThostFtdcSettlementIDType	SettlementID;
		///ִ��������
		TThostFtdcExecOrderSysIDType	ExecOrderSysID;
		///��������
		TThostFtdcDateType	InsertDate;
		///����ʱ��
		TThostFtdcTimeType	InsertTime;
		///����ʱ��
		TThostFtdcTimeType	CancelTime;
		///ִ�н��
		TThostFtdcExecResultType	ExecResult;
		///�����Ա���
		TThostFtdcParticipantIDType	ClearingPartID;
		///���
		TThostFtdcSequenceNoType	SequenceNo;
		///Ӫҵ�����
		TThostFtdcBranchIDType	BranchID;
		///IP��ַ
		TThostFtdcIPAddressType	IPAddress;
		///Mac��ַ
		TThostFtdcMacAddressType	MacAddress;
	};

	///������ִ�������ѯ
	struct CThostFtdcQryExchangeExecOrderField
	{
		///��Ա����
		TThostFtdcParticipantIDType	ParticipantID;
		///�ͻ�����
		TThostFtdcClientIDType	ClientID;
		///��Լ�ڽ������Ĵ���
		TThostFtdcExchangeInstIDType	ExchangeInstID;
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
		///����������Ա����
		TThostFtdcTraderIDType	TraderID;
	};

	///ִ�����������ѯ
	struct CThostFtdcQryExecOrderActionField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
	};

	///������ִ���������
	struct CThostFtdcExchangeExecOrderActionField
	{
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
		///ִ������������
		TThostFtdcExecOrderSysIDType	ExecOrderSysID;
		///������־
		TThostFtdcActionFlagType	ActionFlag;
		///��������
		TThostFtdcDateType	ActionDate;
		///����ʱ��
		TThostFtdcTimeType	ActionTime;
		///����������Ա����
		TThostFtdcTraderIDType	TraderID;
		///��װ���
		TThostFtdcInstallIDType	InstallID;
		///����ִ��������
		TThostFtdcOrderLocalIDType	ExecOrderLocalID;
		///�������ر��
		TThostFtdcOrderLocalIDType	ActionLocalID;
		///��Ա����
		TThostFtdcParticipantIDType	ParticipantID;
		///�ͻ�����
		TThostFtdcClientIDType	ClientID;
		///ҵ��Ԫ
		TThostFtdcBusinessUnitType	BusinessUnit;
		///��������״̬
		TThostFtdcOrderActionStatusType	OrderActionStatus;
		///�û�����
		TThostFtdcUserIDType	UserID;
		///ִ������
		TThostFtdcActionTypeType	ActionType;
		///Ӫҵ�����
		TThostFtdcBranchIDType	BranchID;
		///IP��ַ
		TThostFtdcIPAddressType	IPAddress;
		///Mac��ַ
		TThostFtdcMacAddressType	MacAddress;
	};

	///������ִ�����������ѯ
	struct CThostFtdcQryExchangeExecOrderActionField
	{
		///��Ա����
		TThostFtdcParticipantIDType	ParticipantID;
		///�ͻ�����
		TThostFtdcClientIDType	ClientID;
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
		///����������Ա����
		TThostFtdcTraderIDType	TraderID;
	};

	///����ִ������
	struct CThostFtdcErrExecOrderField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///��Լ����
		TThostFtdcInstrumentIDType	InstrumentID;
		///ִ����������
		TThostFtdcOrderRefType	ExecOrderRef;
		///�û�����
		TThostFtdcUserIDType	UserID;
		///����
		TThostFtdcVolumeType	Volume;
		///������
		TThostFtdcRequestIDType	RequestID;
		///ҵ��Ԫ
		TThostFtdcBusinessUnitType	BusinessUnit;
		///��ƽ��־
		TThostFtdcOffsetFlagType	OffsetFlag;
		///Ͷ���ױ���־
		TThostFtdcHedgeFlagType	HedgeFlag;
		///ִ������
		TThostFtdcActionTypeType	ActionType;
		///����ͷ������ĳֲַ���
		TThostFtdcPosiDirectionType	PosiDirection;
		///��Ȩ��Ȩ���Ƿ����ڻ�ͷ��ı��
		TThostFtdcExecOrderPositionFlagType	ReservePositionFlag;
		///��Ȩ��Ȩ�����ɵ�ͷ���Ƿ��Զ�ƽ��
		TThostFtdcExecOrderCloseFlagType	CloseFlag;
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
		///Ͷ�ʵ�Ԫ����
		TThostFtdcInvestUnitIDType	InvestUnitID;
		///�ʽ��˺�
		TThostFtdcAccountIDType	AccountID;
		///���ִ���
		TThostFtdcCurrencyIDType	CurrencyID;
		///���ױ���
		TThostFtdcClientIDType	ClientID;
		///IP��ַ
		TThostFtdcIPAddressType	IPAddress;
		///Mac��ַ
		TThostFtdcMacAddressType	MacAddress;
		///�������
		TThostFtdcErrorIDType	ErrorID;
		///������Ϣ
		TThostFtdcErrorMsgType	ErrorMsg;
	};

	///��ѯ����ִ������
	struct CThostFtdcQryErrExecOrderField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
	};

	///����ִ���������
	struct CThostFtdcErrExecOrderActionField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///ִ�������������
		TThostFtdcOrderActionRefType	ExecOrderActionRef;
		///ִ����������
		TThostFtdcOrderRefType	ExecOrderRef;
		///������
		TThostFtdcRequestIDType	RequestID;
		///ǰ�ñ��
		TThostFtdcFrontIDType	FrontID;
		///�Ự���
		TThostFtdcSessionIDType	SessionID;
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
		///ִ������������
		TThostFtdcExecOrderSysIDType	ExecOrderSysID;
		///������־
		TThostFtdcActionFlagType	ActionFlag;
		///�û�����
		TThostFtdcUserIDType	UserID;
		///��Լ����
		TThostFtdcInstrumentIDType	InstrumentID;
		///Ͷ�ʵ�Ԫ����
		TThostFtdcInvestUnitIDType	InvestUnitID;
		///IP��ַ
		TThostFtdcIPAddressType	IPAddress;
		///Mac��ַ
		TThostFtdcMacAddressType	MacAddress;
		///�������
		TThostFtdcErrorIDType	ErrorID;
		///������Ϣ
		TThostFtdcErrorMsgType	ErrorMsg;
	};

	///��ѯ����ִ���������
	struct CThostFtdcQryErrExecOrderActionField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
	};

	///Ͷ������Ȩ��Լ����Ȩ��
	struct CThostFtdcOptionInstrTradingRightField
	{
		///��Լ����
		TThostFtdcInstrumentIDType	InstrumentID;
		///Ͷ���߷�Χ
		TThostFtdcInvestorRangeType	InvestorRange;
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///��������
		TThostFtdcDirectionType	Direction;
		///����Ȩ��
		TThostFtdcTradingRightType	TradingRight;
	};

	///��ѯ��Ȩ��Լ����Ȩ��
	struct CThostFtdcQryOptionInstrTradingRightField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///��Լ����
		TThostFtdcInstrumentIDType	InstrumentID;
		///��������
		TThostFtdcDirectionType	Direction;
	};

	///�����ѯ��
	struct CThostFtdcInputForQuoteField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///��Լ����
		TThostFtdcInstrumentIDType	InstrumentID;
		///ѯ������
		TThostFtdcOrderRefType	ForQuoteRef;
		///�û�����
		TThostFtdcUserIDType	UserID;
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
		///Ͷ�ʵ�Ԫ����
		TThostFtdcInvestUnitIDType	InvestUnitID;
		///IP��ַ
		TThostFtdcIPAddressType	IPAddress;
		///Mac��ַ
		TThostFtdcMacAddressType	MacAddress;
	};

	///ѯ��
	struct CThostFtdcForQuoteField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///��Լ����
		TThostFtdcInstrumentIDType	InstrumentID;
		///ѯ������
		TThostFtdcOrderRefType	ForQuoteRef;
		///�û�����
		TThostFtdcUserIDType	UserID;
		///����ѯ�۱��
		TThostFtdcOrderLocalIDType	ForQuoteLocalID;
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
		///��Ա����
		TThostFtdcParticipantIDType	ParticipantID;
		///�ͻ�����
		TThostFtdcClientIDType	ClientID;
		///��Լ�ڽ������Ĵ���
		TThostFtdcExchangeInstIDType	ExchangeInstID;
		///����������Ա����
		TThostFtdcTraderIDType	TraderID;
		///��װ���
		TThostFtdcInstallIDType	InstallID;
		///��������
		TThostFtdcDateType	InsertDate;
		///����ʱ��
		TThostFtdcTimeType	InsertTime;
		///ѯ��״̬
		TThostFtdcForQuoteStatusType	ForQuoteStatus;
		///ǰ�ñ��
		TThostFtdcFrontIDType	FrontID;
		///�Ự���
		TThostFtdcSessionIDType	SessionID;
		///״̬��Ϣ
		TThostFtdcErrorMsgType	StatusMsg;
		///�����û�����
		TThostFtdcUserIDType	ActiveUserID;
		///���͹�˾ѯ�۱��
		TThostFtdcSequenceNoType	BrokerForQutoSeq;
		///Ͷ�ʵ�Ԫ����
		TThostFtdcInvestUnitIDType	InvestUnitID;
		///IP��ַ
		TThostFtdcIPAddressType	IPAddress;
		///Mac��ַ
		TThostFtdcMacAddressType	MacAddress;
	};

	///ѯ�۲�ѯ
	struct CThostFtdcQryForQuoteField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///��Լ����
		TThostFtdcInstrumentIDType	InstrumentID;
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
		///��ʼʱ��
		TThostFtdcTimeType	InsertTimeStart;
		///����ʱ��
		TThostFtdcTimeType	InsertTimeEnd;
	};

	///������ѯ����Ϣ
	struct CThostFtdcExchangeForQuoteField
	{
		///����ѯ�۱��
		TThostFtdcOrderLocalIDType	ForQuoteLocalID;
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
		///��Ա����
		TThostFtdcParticipantIDType	ParticipantID;
		///�ͻ�����
		TThostFtdcClientIDType	ClientID;
		///��Լ�ڽ������Ĵ���
		TThostFtdcExchangeInstIDType	ExchangeInstID;
		///����������Ա����
		TThostFtdcTraderIDType	TraderID;
		///��װ���
		TThostFtdcInstallIDType	InstallID;
		///��������
		TThostFtdcDateType	InsertDate;
		///����ʱ��
		TThostFtdcTimeType	InsertTime;
		///ѯ��״̬
		TThostFtdcForQuoteStatusType	ForQuoteStatus;
		///IP��ַ
		TThostFtdcIPAddressType	IPAddress;
		///Mac��ַ
		TThostFtdcMacAddressType	MacAddress;
	};

	///������ѯ�۲�ѯ
	struct CThostFtdcQryExchangeForQuoteField
	{
		///��Ա����
		TThostFtdcParticipantIDType	ParticipantID;
		///�ͻ�����
		TThostFtdcClientIDType	ClientID;
		///��Լ�ڽ������Ĵ���
		TThostFtdcExchangeInstIDType	ExchangeInstID;
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
		///����������Ա����
		TThostFtdcTraderIDType	TraderID;
	};

	///����ı���
	struct CThostFtdcInputQuoteField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///��Լ����
		TThostFtdcInstrumentIDType	InstrumentID;
		///��������
		TThostFtdcOrderRefType	QuoteRef;
		///�û�����
		TThostFtdcUserIDType	UserID;
		///���۸�
		TThostFtdcPriceType	AskPrice;
		///��۸�
		TThostFtdcPriceType	BidPrice;
		///������
		TThostFtdcVolumeType	AskVolume;
		///������
		TThostFtdcVolumeType	BidVolume;
		///������
		TThostFtdcRequestIDType	RequestID;
		///ҵ��Ԫ
		TThostFtdcBusinessUnitType	BusinessUnit;
		///����ƽ��־
		TThostFtdcOffsetFlagType	AskOffsetFlag;
		///��ƽ��־
		TThostFtdcOffsetFlagType	BidOffsetFlag;
		///��Ͷ���ױ���־
		TThostFtdcHedgeFlagType	AskHedgeFlag;
		///��Ͷ���ױ���־
		TThostFtdcHedgeFlagType	BidHedgeFlag;
		///��������������
		TThostFtdcOrderRefType	AskOrderRef;
		///�����򱨵�����
		TThostFtdcOrderRefType	BidOrderRef;
		///Ӧ�۱��
		TThostFtdcOrderSysIDType	ForQuoteSysID;
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
		///Ͷ�ʵ�Ԫ����
		TThostFtdcInvestUnitIDType	InvestUnitID;
		///���ױ���
		TThostFtdcClientIDType	ClientID;
		///IP��ַ
		TThostFtdcIPAddressType	IPAddress;
		///Mac��ַ
		TThostFtdcMacAddressType	MacAddress;
	};

	///���뱨�۲���
	struct CThostFtdcInputQuoteActionField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///���۲�������
		TThostFtdcOrderActionRefType	QuoteActionRef;
		///��������
		TThostFtdcOrderRefType	QuoteRef;
		///������
		TThostFtdcRequestIDType	RequestID;
		///ǰ�ñ��
		TThostFtdcFrontIDType	FrontID;
		///�Ự���
		TThostFtdcSessionIDType	SessionID;
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
		///���۲������
		TThostFtdcOrderSysIDType	QuoteSysID;
		///������־
		TThostFtdcActionFlagType	ActionFlag;
		///�û�����
		TThostFtdcUserIDType	UserID;
		///��Լ����
		TThostFtdcInstrumentIDType	InstrumentID;
		///Ͷ�ʵ�Ԫ����
		TThostFtdcInvestUnitIDType	InvestUnitID;
		///���ױ���
		TThostFtdcClientIDType	ClientID;
		///IP��ַ
		TThostFtdcIPAddressType	IPAddress;
		///Mac��ַ
		TThostFtdcMacAddressType	MacAddress;
	};

	///����
	struct CThostFtdcQuoteField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///��Լ����
		TThostFtdcInstrumentIDType	InstrumentID;
		///��������
		TThostFtdcOrderRefType	QuoteRef;
		///�û�����
		TThostFtdcUserIDType	UserID;
		///���۸�
		TThostFtdcPriceType	AskPrice;
		///��۸�
		TThostFtdcPriceType	BidPrice;
		///������
		TThostFtdcVolumeType	AskVolume;
		///������
		TThostFtdcVolumeType	BidVolume;
		///������
		TThostFtdcRequestIDType	RequestID;
		///ҵ��Ԫ
		TThostFtdcBusinessUnitType	BusinessUnit;
		///����ƽ��־
		TThostFtdcOffsetFlagType	AskOffsetFlag;
		///��ƽ��־
		TThostFtdcOffsetFlagType	BidOffsetFlag;
		///��Ͷ���ױ���־
		TThostFtdcHedgeFlagType	AskHedgeFlag;
		///��Ͷ���ױ���־
		TThostFtdcHedgeFlagType	BidHedgeFlag;
		///���ر��۱��
		TThostFtdcOrderLocalIDType	QuoteLocalID;
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
		///��Ա����
		TThostFtdcParticipantIDType	ParticipantID;
		///�ͻ�����
		TThostFtdcClientIDType	ClientID;
		///��Լ�ڽ������Ĵ���
		TThostFtdcExchangeInstIDType	ExchangeInstID;
		///����������Ա����
		TThostFtdcTraderIDType	TraderID;
		///��װ���
		TThostFtdcInstallIDType	InstallID;
		///������ʾ���
		TThostFtdcSequenceNoType	NotifySequence;
		///�����ύ״̬
		TThostFtdcOrderSubmitStatusType	OrderSubmitStatus;
		///������
		TThostFtdcDateType	TradingDay;
		///������
		TThostFtdcSettlementIDType	SettlementID;
		///���۱��
		TThostFtdcOrderSysIDType	QuoteSysID;
		///��������
		TThostFtdcDateType	InsertDate;
		///����ʱ��
		TThostFtdcTimeType	InsertTime;
		///����ʱ��
		TThostFtdcTimeType	CancelTime;
		///����״̬
		TThostFtdcOrderStatusType	QuoteStatus;
		///�����Ա���
		TThostFtdcParticipantIDType	ClearingPartID;
		///���
		TThostFtdcSequenceNoType	SequenceNo;
		///�����������
		TThostFtdcOrderSysIDType	AskOrderSysID;
		///�򷽱������
		TThostFtdcOrderSysIDType	BidOrderSysID;
		///ǰ�ñ��
		TThostFtdcFrontIDType	FrontID;
		///�Ự���
		TThostFtdcSessionIDType	SessionID;
		///�û��˲�Ʒ��Ϣ
		TThostFtdcProductInfoType	UserProductInfo;
		///״̬��Ϣ
		TThostFtdcErrorMsgType	StatusMsg;
		///�����û�����
		TThostFtdcUserIDType	ActiveUserID;
		///���͹�˾���۱��
		TThostFtdcSequenceNoType	BrokerQuoteSeq;
		///��������������
		TThostFtdcOrderRefType	AskOrderRef;
		///�����򱨵�����
		TThostFtdcOrderRefType	BidOrderRef;
		///Ӧ�۱��
		TThostFtdcOrderSysIDType	ForQuoteSysID;
		///Ӫҵ�����
		TThostFtdcBranchIDType	BranchID;
		///Ͷ�ʵ�Ԫ����
		TThostFtdcInvestUnitIDType	InvestUnitID;
		///�ʽ��˺�
		TThostFtdcAccountIDType	AccountID;
		///���ִ���
		TThostFtdcCurrencyIDType	CurrencyID;
		///IP��ַ
		TThostFtdcIPAddressType	IPAddress;
		///Mac��ַ
		TThostFtdcMacAddressType	MacAddress;
	};

	///���۲���
	struct CThostFtdcQuoteActionField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///���۲�������
		TThostFtdcOrderActionRefType	QuoteActionRef;
		///��������
		TThostFtdcOrderRefType	QuoteRef;
		///������
		TThostFtdcRequestIDType	RequestID;
		///ǰ�ñ��
		TThostFtdcFrontIDType	FrontID;
		///�Ự���
		TThostFtdcSessionIDType	SessionID;
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
		///���۲������
		TThostFtdcOrderSysIDType	QuoteSysID;
		///������־
		TThostFtdcActionFlagType	ActionFlag;
		///��������
		TThostFtdcDateType	ActionDate;
		///����ʱ��
		TThostFtdcTimeType	ActionTime;
		///����������Ա����
		TThostFtdcTraderIDType	TraderID;
		///��װ���
		TThostFtdcInstallIDType	InstallID;
		///���ر��۱��
		TThostFtdcOrderLocalIDType	QuoteLocalID;
		///�������ر��
		TThostFtdcOrderLocalIDType	ActionLocalID;
		///��Ա����
		TThostFtdcParticipantIDType	ParticipantID;
		///�ͻ�����
		TThostFtdcClientIDType	ClientID;
		///ҵ��Ԫ
		TThostFtdcBusinessUnitType	BusinessUnit;
		///��������״̬
		TThostFtdcOrderActionStatusType	OrderActionStatus;
		///�û�����
		TThostFtdcUserIDType	UserID;
		///״̬��Ϣ
		TThostFtdcErrorMsgType	StatusMsg;
		///��Լ����
		TThostFtdcInstrumentIDType	InstrumentID;
		///Ӫҵ�����
		TThostFtdcBranchIDType	BranchID;
		///Ͷ�ʵ�Ԫ����
		TThostFtdcInvestUnitIDType	InvestUnitID;
		///IP��ַ
		TThostFtdcIPAddressType	IPAddress;
		///Mac��ַ
		TThostFtdcMacAddressType	MacAddress;
	};

	///���۲�ѯ
	struct CThostFtdcQryQuoteField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///��Լ����
		TThostFtdcInstrumentIDType	InstrumentID;
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
		///���۱��
		TThostFtdcOrderSysIDType	QuoteSysID;
		///��ʼʱ��
		TThostFtdcTimeType	InsertTimeStart;
		///����ʱ��
		TThostFtdcTimeType	InsertTimeEnd;
	};

	///������������Ϣ
	struct CThostFtdcExchangeQuoteField
	{
		///���۸�
		TThostFtdcPriceType	AskPrice;
		///��۸�
		TThostFtdcPriceType	BidPrice;
		///������
		TThostFtdcVolumeType	AskVolume;
		///������
		TThostFtdcVolumeType	BidVolume;
		///������
		TThostFtdcRequestIDType	RequestID;
		///ҵ��Ԫ
		TThostFtdcBusinessUnitType	BusinessUnit;
		///����ƽ��־
		TThostFtdcOffsetFlagType	AskOffsetFlag;
		///��ƽ��־
		TThostFtdcOffsetFlagType	BidOffsetFlag;
		///��Ͷ���ױ���־
		TThostFtdcHedgeFlagType	AskHedgeFlag;
		///��Ͷ���ױ���־
		TThostFtdcHedgeFlagType	BidHedgeFlag;
		///���ر��۱��
		TThostFtdcOrderLocalIDType	QuoteLocalID;
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
		///��Ա����
		TThostFtdcParticipantIDType	ParticipantID;
		///�ͻ�����
		TThostFtdcClientIDType	ClientID;
		///��Լ�ڽ������Ĵ���
		TThostFtdcExchangeInstIDType	ExchangeInstID;
		///����������Ա����
		TThostFtdcTraderIDType	TraderID;
		///��װ���
		TThostFtdcInstallIDType	InstallID;
		///������ʾ���
		TThostFtdcSequenceNoType	NotifySequence;
		///�����ύ״̬
		TThostFtdcOrderSubmitStatusType	OrderSubmitStatus;
		///������
		TThostFtdcDateType	TradingDay;
		///������
		TThostFtdcSettlementIDType	SettlementID;
		///���۱��
		TThostFtdcOrderSysIDType	QuoteSysID;
		///��������
		TThostFtdcDateType	InsertDate;
		///����ʱ��
		TThostFtdcTimeType	InsertTime;
		///����ʱ��
		TThostFtdcTimeType	CancelTime;
		///����״̬
		TThostFtdcOrderStatusType	QuoteStatus;
		///�����Ա���
		TThostFtdcParticipantIDType	ClearingPartID;
		///���
		TThostFtdcSequenceNoType	SequenceNo;
		///�����������
		TThostFtdcOrderSysIDType	AskOrderSysID;
		///�򷽱������
		TThostFtdcOrderSysIDType	BidOrderSysID;
		///Ӧ�۱��
		TThostFtdcOrderSysIDType	ForQuoteSysID;
		///Ӫҵ�����
		TThostFtdcBranchIDType	BranchID;
		///IP��ַ
		TThostFtdcIPAddressType	IPAddress;
		///Mac��ַ
		TThostFtdcMacAddressType	MacAddress;
	};

	///���������۲�ѯ
	struct CThostFtdcQryExchangeQuoteField
	{
		///��Ա����
		TThostFtdcParticipantIDType	ParticipantID;
		///�ͻ�����
		TThostFtdcClientIDType	ClientID;
		///��Լ�ڽ������Ĵ���
		TThostFtdcExchangeInstIDType	ExchangeInstID;
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
		///����������Ա����
		TThostFtdcTraderIDType	TraderID;
	};

	///���۲�����ѯ
	struct CThostFtdcQryQuoteActionField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
	};

	///���������۲���
	struct CThostFtdcExchangeQuoteActionField
	{
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
		///���۲������
		TThostFtdcOrderSysIDType	QuoteSysID;
		///������־
		TThostFtdcActionFlagType	ActionFlag;
		///��������
		TThostFtdcDateType	ActionDate;
		///����ʱ��
		TThostFtdcTimeType	ActionTime;
		///����������Ա����
		TThostFtdcTraderIDType	TraderID;
		///��װ���
		TThostFtdcInstallIDType	InstallID;
		///���ر��۱��
		TThostFtdcOrderLocalIDType	QuoteLocalID;
		///�������ر��
		TThostFtdcOrderLocalIDType	ActionLocalID;
		///��Ա����
		TThostFtdcParticipantIDType	ParticipantID;
		///�ͻ�����
		TThostFtdcClientIDType	ClientID;
		///ҵ��Ԫ
		TThostFtdcBusinessUnitType	BusinessUnit;
		///��������״̬
		TThostFtdcOrderActionStatusType	OrderActionStatus;
		///�û�����
		TThostFtdcUserIDType	UserID;
		///IP��ַ
		TThostFtdcIPAddressType	IPAddress;
		///Mac��ַ
		TThostFtdcMacAddressType	MacAddress;
	};

	///���������۲�����ѯ
	struct CThostFtdcQryExchangeQuoteActionField
	{
		///��Ա����
		TThostFtdcParticipantIDType	ParticipantID;
		///�ͻ�����
		TThostFtdcClientIDType	ClientID;
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
		///����������Ա����
		TThostFtdcTraderIDType	TraderID;
	};

	///��Ȩ��Լdeltaֵ
	struct CThostFtdcOptionInstrDeltaField
	{
		///��Լ����
		TThostFtdcInstrumentIDType	InstrumentID;
		///Ͷ���߷�Χ
		TThostFtdcInvestorRangeType	InvestorRange;
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///Deltaֵ
		TThostFtdcRatioType	Delta;
	};

	///���������̵�ѯ������
	struct CThostFtdcForQuoteRspField
	{
		///������
		TThostFtdcDateType	TradingDay;
		///��Լ����
		TThostFtdcInstrumentIDType	InstrumentID;
		///ѯ�۱��
		TThostFtdcOrderSysIDType	ForQuoteSysID;
		///ѯ��ʱ��
		TThostFtdcTimeType	ForQuoteTime;
		///ҵ������
		TThostFtdcDateType	ActionDay;
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
	};

	///��ǰ��Ȩ��Լִ��ƫ��ֵ����ϸ����
	struct CThostFtdcStrikeOffsetField
	{
		///��Լ����
		TThostFtdcInstrumentIDType	InstrumentID;
		///Ͷ���߷�Χ
		TThostFtdcInvestorRangeType	InvestorRange;
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///ִ��ƫ��ֵ
		TThostFtdcMoneyType	Offset;
		///ִ��ƫ������
		TThostFtdcStrikeOffsetTypeType	OffsetType;
	};

	///��Ȩִ��ƫ��ֵ��ѯ
	struct CThostFtdcQryStrikeOffsetField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///��Լ����
		TThostFtdcInstrumentIDType	InstrumentID;
	};

	///����������������
	struct CThostFtdcInputBatchOrderActionField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///������������
		TThostFtdcOrderActionRefType	OrderActionRef;
		///������
		TThostFtdcRequestIDType	RequestID;
		///ǰ�ñ��
		TThostFtdcFrontIDType	FrontID;
		///�Ự���
		TThostFtdcSessionIDType	SessionID;
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
		///�û�����
		TThostFtdcUserIDType	UserID;
		///Ͷ�ʵ�Ԫ����
		TThostFtdcInvestUnitIDType	InvestUnitID;
		///IP��ַ
		TThostFtdcIPAddressType	IPAddress;
		///Mac��ַ
		TThostFtdcMacAddressType	MacAddress;
	};

	///������������
	struct CThostFtdcBatchOrderActionField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///������������
		TThostFtdcOrderActionRefType	OrderActionRef;
		///������
		TThostFtdcRequestIDType	RequestID;
		///ǰ�ñ��
		TThostFtdcFrontIDType	FrontID;
		///�Ự���
		TThostFtdcSessionIDType	SessionID;
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
		///��������
		TThostFtdcDateType	ActionDate;
		///����ʱ��
		TThostFtdcTimeType	ActionTime;
		///����������Ա����
		TThostFtdcTraderIDType	TraderID;
		///��װ���
		TThostFtdcInstallIDType	InstallID;
		///�������ر��
		TThostFtdcOrderLocalIDType	ActionLocalID;
		///��Ա����
		TThostFtdcParticipantIDType	ParticipantID;
		///�ͻ�����
		TThostFtdcClientIDType	ClientID;
		///ҵ��Ԫ
		TThostFtdcBusinessUnitType	BusinessUnit;
		///��������״̬
		TThostFtdcOrderActionStatusType	OrderActionStatus;
		///�û�����
		TThostFtdcUserIDType	UserID;
		///״̬��Ϣ
		TThostFtdcErrorMsgType	StatusMsg;
		///Ͷ�ʵ�Ԫ����
		TThostFtdcInvestUnitIDType	InvestUnitID;
		///IP��ַ
		TThostFtdcIPAddressType	IPAddress;
		///Mac��ַ
		TThostFtdcMacAddressType	MacAddress;
	};

	///������������������
	struct CThostFtdcExchangeBatchOrderActionField
	{
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
		///��������
		TThostFtdcDateType	ActionDate;
		///����ʱ��
		TThostFtdcTimeType	ActionTime;
		///����������Ա����
		TThostFtdcTraderIDType	TraderID;
		///��װ���
		TThostFtdcInstallIDType	InstallID;
		///�������ر��
		TThostFtdcOrderLocalIDType	ActionLocalID;
		///��Ա����
		TThostFtdcParticipantIDType	ParticipantID;
		///�ͻ�����
		TThostFtdcClientIDType	ClientID;
		///ҵ��Ԫ
		TThostFtdcBusinessUnitType	BusinessUnit;
		///��������״̬
		TThostFtdcOrderActionStatusType	OrderActionStatus;
		///�û�����
		TThostFtdcUserIDType	UserID;
		///IP��ַ
		TThostFtdcIPAddressType	IPAddress;
		///Mac��ַ
		TThostFtdcMacAddressType	MacAddress;
	};

	///��ѯ������������
	struct CThostFtdcQryBatchOrderActionField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
	};

	///��Ϻ�Լ��ȫϵ��
	struct CThostFtdcCombInstrumentGuardField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///��Լ����
		TThostFtdcInstrumentIDType	InstrumentID;
		///
		TThostFtdcRatioType	GuarantRatio;
	};

	///��Ϻ�Լ��ȫϵ����ѯ
	struct CThostFtdcQryCombInstrumentGuardField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///��Լ����
		TThostFtdcInstrumentIDType	InstrumentID;
	};

	///������������
	struct CThostFtdcInputCombActionField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///��Լ����
		TThostFtdcInstrumentIDType	InstrumentID;
		///�������
		TThostFtdcOrderRefType	CombActionRef;
		///�û�����
		TThostFtdcUserIDType	UserID;
		///��������
		TThostFtdcDirectionType	Direction;
		///����
		TThostFtdcVolumeType	Volume;
		///���ָ���
		TThostFtdcCombDirectionType	CombDirection;
		///Ͷ���ױ���־
		TThostFtdcHedgeFlagType	HedgeFlag;
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
		///IP��ַ
		TThostFtdcIPAddressType	IPAddress;
		///Mac��ַ
		TThostFtdcMacAddressType	MacAddress;
	};

	///�������
	struct CThostFtdcCombActionField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///��Լ����
		TThostFtdcInstrumentIDType	InstrumentID;
		///�������
		TThostFtdcOrderRefType	CombActionRef;
		///�û�����
		TThostFtdcUserIDType	UserID;
		///��������
		TThostFtdcDirectionType	Direction;
		///����
		TThostFtdcVolumeType	Volume;
		///���ָ���
		TThostFtdcCombDirectionType	CombDirection;
		///Ͷ���ױ���־
		TThostFtdcHedgeFlagType	HedgeFlag;
		///����������ϱ��
		TThostFtdcOrderLocalIDType	ActionLocalID;
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
		///��Ա����
		TThostFtdcParticipantIDType	ParticipantID;
		///�ͻ�����
		TThostFtdcClientIDType	ClientID;
		///��Լ�ڽ������Ĵ���
		TThostFtdcExchangeInstIDType	ExchangeInstID;
		///����������Ա����
		TThostFtdcTraderIDType	TraderID;
		///��װ���
		TThostFtdcInstallIDType	InstallID;
		///���״̬
		TThostFtdcOrderActionStatusType	ActionStatus;
		///������ʾ���
		TThostFtdcSequenceNoType	NotifySequence;
		///������
		TThostFtdcDateType	TradingDay;
		///������
		TThostFtdcSettlementIDType	SettlementID;
		///���
		TThostFtdcSequenceNoType	SequenceNo;
		///ǰ�ñ��
		TThostFtdcFrontIDType	FrontID;
		///�Ự���
		TThostFtdcSessionIDType	SessionID;
		///�û��˲�Ʒ��Ϣ
		TThostFtdcProductInfoType	UserProductInfo;
		///״̬��Ϣ
		TThostFtdcErrorMsgType	StatusMsg;
		///IP��ַ
		TThostFtdcIPAddressType	IPAddress;
		///Mac��ַ
		TThostFtdcMacAddressType	MacAddress;
	};

	///������ϲ�ѯ
	struct CThostFtdcQryCombActionField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///��Լ����
		TThostFtdcInstrumentIDType	InstrumentID;
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
	};

	///���������������Ϣ
	struct CThostFtdcExchangeCombActionField
	{
		///��������
		TThostFtdcDirectionType	Direction;
		///����
		TThostFtdcVolumeType	Volume;
		///���ָ���
		TThostFtdcCombDirectionType	CombDirection;
		///Ͷ���ױ���־
		TThostFtdcHedgeFlagType	HedgeFlag;
		///����������ϱ��
		TThostFtdcOrderLocalIDType	ActionLocalID;
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
		///��Ա����
		TThostFtdcParticipantIDType	ParticipantID;
		///�ͻ�����
		TThostFtdcClientIDType	ClientID;
		///��Լ�ڽ������Ĵ���
		TThostFtdcExchangeInstIDType	ExchangeInstID;
		///����������Ա����
		TThostFtdcTraderIDType	TraderID;
		///��װ���
		TThostFtdcInstallIDType	InstallID;
		///���״̬
		TThostFtdcOrderActionStatusType	ActionStatus;
		///������ʾ���
		TThostFtdcSequenceNoType	NotifySequence;
		///������
		TThostFtdcDateType	TradingDay;
		///������
		TThostFtdcSettlementIDType	SettlementID;
		///���
		TThostFtdcSequenceNoType	SequenceNo;
		///IP��ַ
		TThostFtdcIPAddressType	IPAddress;
		///Mac��ַ
		TThostFtdcMacAddressType	MacAddress;
	};

	///������������ϲ�ѯ
	struct CThostFtdcQryExchangeCombActionField
	{
		///��Ա����
		TThostFtdcParticipantIDType	ParticipantID;
		///�ͻ�����
		TThostFtdcClientIDType	ClientID;
		///��Լ�ڽ������Ĵ���
		TThostFtdcExchangeInstIDType	ExchangeInstID;
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
		///����������Ա����
		TThostFtdcTraderIDType	TraderID;
	};

	///��Ʒ���ۻ���
	struct CThostFtdcProductExchRateField
	{
		///��Ʒ����
		TThostFtdcInstrumentIDType	ProductID;
		///���۱�������
		TThostFtdcCurrencyIDType	QuoteCurrencyID;
		///����
		TThostFtdcExchangeRateType	ExchangeRate;
	};

	///��Ʒ���ۻ��ʲ�ѯ
	struct CThostFtdcQryProductExchRateField
	{
		///��Ʒ����
		TThostFtdcInstrumentIDType	ProductID;
	};

	///��ѯѯ�ۼ۲����
	struct CThostFtdcQryForQuoteParamField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///��Լ����
		TThostFtdcInstrumentIDType	InstrumentID;
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
	};

	///ѯ�ۼ۲����
	struct CThostFtdcForQuoteParamField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///��Լ����
		TThostFtdcInstrumentIDType	InstrumentID;
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
		///���¼�
		TThostFtdcPriceType	LastPrice;
		///�۲�
		TThostFtdcPriceType	PriceInterval;
	};

	///��ǰ��������Ȩ��Լ�����ѵ���ϸ����
	struct CThostFtdcMMOptionInstrCommRateField
	{
		///��Լ����
		TThostFtdcInstrumentIDType	InstrumentID;
		///Ͷ���߷�Χ
		TThostFtdcInvestorRangeType	InvestorRange;
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///������������
		TThostFtdcRatioType	OpenRatioByMoney;
		///����������
		TThostFtdcRatioType	OpenRatioByVolume;
		///ƽ����������
		TThostFtdcRatioType	CloseRatioByMoney;
		///ƽ��������
		TThostFtdcRatioType	CloseRatioByVolume;
		///ƽ����������
		TThostFtdcRatioType	CloseTodayRatioByMoney;
		///ƽ��������
		TThostFtdcRatioType	CloseTodayRatioByVolume;
		///ִ����������
		TThostFtdcRatioType	StrikeRatioByMoney;
		///ִ��������
		TThostFtdcRatioType	StrikeRatioByVolume;
	};

	///��������Ȩ�������ʲ�ѯ
	struct CThostFtdcQryMMOptionInstrCommRateField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///��Լ����
		TThostFtdcInstrumentIDType	InstrumentID;
	};

	///�����̺�Լ��������
	struct CThostFtdcMMInstrumentCommissionRateField
	{
		///��Լ����
		TThostFtdcInstrumentIDType	InstrumentID;
		///Ͷ���߷�Χ
		TThostFtdcInvestorRangeType	InvestorRange;
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///������������
		TThostFtdcRatioType	OpenRatioByMoney;
		///����������
		TThostFtdcRatioType	OpenRatioByVolume;
		///ƽ����������
		TThostFtdcRatioType	CloseRatioByMoney;
		///ƽ��������
		TThostFtdcRatioType	CloseRatioByVolume;
		///ƽ����������
		TThostFtdcRatioType	CloseTodayRatioByMoney;
		///ƽ��������
		TThostFtdcRatioType	CloseTodayRatioByVolume;
	};

	///��ѯ�����̺�Լ��������
	struct CThostFtdcQryMMInstrumentCommissionRateField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///��Լ����
		TThostFtdcInstrumentIDType	InstrumentID;
	};

	///��ǰ���������ѵ���ϸ����
	struct CThostFtdcInstrumentOrderCommRateField
	{
		///��Լ����
		TThostFtdcInstrumentIDType	InstrumentID;
		///Ͷ���߷�Χ
		TThostFtdcInvestorRangeType	InvestorRange;
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///Ͷ���ױ���־
		TThostFtdcHedgeFlagType	HedgeFlag;
		///����������
		TThostFtdcRatioType	OrderCommByVolume;
		///����������
		TThostFtdcRatioType	OrderActionCommByVolume;
	};

	///�����������ʲ�ѯ
	struct CThostFtdcQryInstrumentOrderCommRateField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///��Լ����
		TThostFtdcInstrumentIDType	InstrumentID;
	};

	///�г�����
	struct CThostFtdcMarketDataField
	{
		///������
		TThostFtdcDateType	TradingDay;
		///��Լ����
		TThostFtdcInstrumentIDType	InstrumentID;
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
		///��Լ�ڽ������Ĵ���
		TThostFtdcExchangeInstIDType	ExchangeInstID;
		///���¼�
		TThostFtdcPriceType	LastPrice;
		///�ϴν����
		TThostFtdcPriceType	PreSettlementPrice;
		///������
		TThostFtdcPriceType	PreClosePrice;
		///��ֲ���
		TThostFtdcLargeVolumeType	PreOpenInterest;
		///����
		TThostFtdcPriceType	OpenPrice;
		///��߼�
		TThostFtdcPriceType	HighestPrice;
		///��ͼ�
		TThostFtdcPriceType	LowestPrice;
		///����
		TThostFtdcVolumeType	Volume;
		///�ɽ����
		TThostFtdcMoneyType	Turnover;
		///�ֲ���
		TThostFtdcLargeVolumeType	OpenInterest;
		///������
		TThostFtdcPriceType	ClosePrice;
		///���ν����
		TThostFtdcPriceType	SettlementPrice;
		///��ͣ���
		TThostFtdcPriceType	UpperLimitPrice;
		///��ͣ���
		TThostFtdcPriceType	LowerLimitPrice;
		///����ʵ��
		TThostFtdcRatioType	PreDelta;
		///����ʵ��
		TThostFtdcRatioType	CurrDelta;
		///����޸�ʱ��
		TThostFtdcTimeType	UpdateTime;
		///����޸ĺ���
		TThostFtdcMillisecType	UpdateMillisec;
		///ҵ������
		TThostFtdcDateType	ActionDay;
	};

	///�����������
	struct CThostFtdcMarketDataBaseField
	{
		///������
		TThostFtdcDateType	TradingDay;
		///�ϴν����
		TThostFtdcPriceType	PreSettlementPrice;
		///������
		TThostFtdcPriceType	PreClosePrice;
		///��ֲ���
		TThostFtdcLargeVolumeType	PreOpenInterest;
		///����ʵ��
		TThostFtdcRatioType	PreDelta;
	};

	///���龲̬����
	struct CThostFtdcMarketDataStaticField
	{
		///����
		TThostFtdcPriceType	OpenPrice;
		///��߼�
		TThostFtdcPriceType	HighestPrice;
		///��ͼ�
		TThostFtdcPriceType	LowestPrice;
		///������
		TThostFtdcPriceType	ClosePrice;
		///��ͣ���
		TThostFtdcPriceType	UpperLimitPrice;
		///��ͣ���
		TThostFtdcPriceType	LowerLimitPrice;
		///���ν����
		TThostFtdcPriceType	SettlementPrice;
		///����ʵ��
		TThostFtdcRatioType	CurrDelta;
	};

	///�������³ɽ�����
	struct CThostFtdcMarketDataLastMatchField
	{
		///���¼�
		TThostFtdcPriceType	LastPrice;
		///����
		TThostFtdcVolumeType	Volume;
		///�ɽ����
		TThostFtdcMoneyType	Turnover;
		///�ֲ���
		TThostFtdcLargeVolumeType	OpenInterest;
	};

	///�������ż�����
	struct CThostFtdcMarketDataBestPriceField
	{
		///�����һ
		TThostFtdcPriceType	BidPrice1;
		///������һ
		TThostFtdcVolumeType	BidVolume1;
		///������һ
		TThostFtdcPriceType	AskPrice1;
		///������һ
		TThostFtdcVolumeType	AskVolume1;
	};

	///�����������������
	struct CThostFtdcMarketDataBid23Field
	{
		///����۶�
		TThostFtdcPriceType	BidPrice2;
		///��������
		TThostFtdcVolumeType	BidVolume2;
		///�������
		TThostFtdcPriceType	BidPrice3;
		///��������
		TThostFtdcVolumeType	BidVolume3;
	};

	///������������������
	struct CThostFtdcMarketDataAsk23Field
	{
		///�����۶�
		TThostFtdcPriceType	AskPrice2;
		///��������
		TThostFtdcVolumeType	AskVolume2;
		///��������
		TThostFtdcPriceType	AskPrice3;
		///��������
		TThostFtdcVolumeType	AskVolume3;
	};

	///���������ġ�������
	struct CThostFtdcMarketDataBid45Field
	{
		///�������
		TThostFtdcPriceType	BidPrice4;
		///��������
		TThostFtdcVolumeType	BidVolume4;
		///�������
		TThostFtdcPriceType	BidPrice5;
		///��������
		TThostFtdcVolumeType	BidVolume5;
	};

	///���������ġ�������
	struct CThostFtdcMarketDataAsk45Field
	{
		///��������
		TThostFtdcPriceType	AskPrice4;
		///��������
		TThostFtdcVolumeType	AskVolume4;
		///��������
		TThostFtdcPriceType	AskPrice5;
		///��������
		TThostFtdcVolumeType	AskVolume5;
	};

	///�������ʱ������
	struct CThostFtdcMarketDataUpdateTimeField
	{
		///��Լ����
		TThostFtdcInstrumentIDType	InstrumentID;
		///����޸�ʱ��
		TThostFtdcTimeType	UpdateTime;
		///����޸ĺ���
		TThostFtdcMillisecType	UpdateMillisec;
		///ҵ������
		TThostFtdcDateType	ActionDay;
	};

	///���齻������������
	struct CThostFtdcMarketDataExchangeField
	{
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
	};

	///ָ���ĺ�Լ
	struct CThostFtdcSpecificInstrumentField
	{
		///��Լ����
		TThostFtdcInstrumentIDType	InstrumentID;
	};

	///��Լ״̬
	struct CThostFtdcInstrumentStatusField
	{
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
		///��Լ�ڽ������Ĵ���
		TThostFtdcExchangeInstIDType	ExchangeInstID;
		///���������
		TThostFtdcSettlementGroupIDType	SettlementGroupID;
		///��Լ����
		TThostFtdcInstrumentIDType	InstrumentID;
		///��Լ����״̬
		TThostFtdcInstrumentStatusType	InstrumentStatus;
		///���׽׶α��
		TThostFtdcTradingSegmentSNType	TradingSegmentSN;
		///���뱾״̬ʱ��
		TThostFtdcTimeType	EnterTime;
		///���뱾״̬ԭ��
		TThostFtdcInstStatusEnterReasonType	EnterReason;
	};

	///��ѯ��Լ״̬
	struct CThostFtdcQryInstrumentStatusField
	{
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
		///��Լ�ڽ������Ĵ���
		TThostFtdcExchangeInstIDType	ExchangeInstID;
	};

	///Ͷ�����˻�
	struct CThostFtdcInvestorAccountField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///Ͷ�����ʺ�
		TThostFtdcAccountIDType	AccountID;
		///���ִ���
		TThostFtdcCurrencyIDType	CurrencyID;
	};

	///����ӯ���㷨
	struct CThostFtdcPositionProfitAlgorithmField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ�����ʺ�
		TThostFtdcAccountIDType	AccountID;
		///ӯ���㷨
		TThostFtdcAlgorithmType	Algorithm;
		///��ע
		TThostFtdcMemoType	Memo;
		///���ִ���
		TThostFtdcCurrencyIDType	CurrencyID;
	};

	///��Ա�ʽ��ۿ�
	struct CThostFtdcDiscountField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���߷�Χ
		TThostFtdcInvestorRangeType	InvestorRange;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///�ʽ��ۿ۱���
		TThostFtdcRatioType	Discount;
	};

	///��ѯת������
	struct CThostFtdcQryTransferBankField
	{
		///���д���
		TThostFtdcBankIDType	BankID;
		///���з����Ĵ���
		TThostFtdcBankBrchIDType	BankBrchID;
	};

	///ת������
	struct CThostFtdcTransferBankField
	{
		///���д���
		TThostFtdcBankIDType	BankID;
		///���з����Ĵ���
		TThostFtdcBankBrchIDType	BankBrchID;
		///��������
		TThostFtdcBankNameType	BankName;
		///�Ƿ��Ծ
		TThostFtdcBoolType	IsActive;
	};

	///��ѯͶ���ֲ߳���ϸ
	struct CThostFtdcQryInvestorPositionDetailField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///��Լ����
		TThostFtdcInstrumentIDType	InstrumentID;
	};

	///Ͷ���ֲ߳���ϸ
	struct CThostFtdcInvestorPositionDetailField
	{
		///��Լ����
		TThostFtdcInstrumentIDType	InstrumentID;
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///Ͷ���ױ���־
		TThostFtdcHedgeFlagType	HedgeFlag;
		///����
		TThostFtdcDirectionType	Direction;
		///��������
		TThostFtdcDateType	OpenDate;
		///�ɽ����
		TThostFtdcTradeIDType	TradeID;
		///����
		TThostFtdcVolumeType	Volume;
		///���ּ�
		TThostFtdcPriceType	OpenPrice;
		///������
		TThostFtdcDateType	TradingDay;
		///������
		TThostFtdcSettlementIDType	SettlementID;
		///�ɽ�����
		TThostFtdcTradeTypeType	TradeType;
		///��Ϻ�Լ����
		TThostFtdcInstrumentIDType	CombInstrumentID;
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
		///���ն���ƽ��ӯ��
		TThostFtdcMoneyType	CloseProfitByDate;
		///��ʶԳ�ƽ��ӯ��
		TThostFtdcMoneyType	CloseProfitByTrade;
		///���ն��гֲ�ӯ��
		TThostFtdcMoneyType	PositionProfitByDate;
		///��ʶԳ�ֲ�ӯ��
		TThostFtdcMoneyType	PositionProfitByTrade;
		///Ͷ���߱�֤��
		TThostFtdcMoneyType	Margin;
		///��������֤��
		TThostFtdcMoneyType	ExchMargin;
		///��֤����
		TThostFtdcRatioType	MarginRateByMoney;
		///��֤����(������)
		TThostFtdcRatioType	MarginRateByVolume;
		///������
		TThostFtdcPriceType	LastSettlementPrice;
		///�����
		TThostFtdcPriceType	SettlementPrice;
		///ƽ����
		TThostFtdcVolumeType	CloseVolume;
		///ƽ�ֽ��
		TThostFtdcMoneyType	CloseAmount;
	};

	///�ʽ��˻�������
	struct CThostFtdcTradingAccountPasswordField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ�����ʺ�
		TThostFtdcAccountIDType	AccountID;
		///����
		TThostFtdcPasswordType	Password;
		///���ִ���
		TThostFtdcCurrencyIDType	CurrencyID;
	};

	///���������鱨�̻�
	struct CThostFtdcMDTraderOfferField
	{
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
		///����������Ա����
		TThostFtdcTraderIDType	TraderID;
		///��Ա����
		TThostFtdcParticipantIDType	ParticipantID;
		///����
		TThostFtdcPasswordType	Password;
		///��װ���
		TThostFtdcInstallIDType	InstallID;
		///���ر������
		TThostFtdcOrderLocalIDType	OrderLocalID;
		///����������Ա����״̬
		TThostFtdcTraderConnectStatusType	TraderConnectStatus;
		///�����������������
		TThostFtdcDateType	ConnectRequestDate;
		///�������������ʱ��
		TThostFtdcTimeType	ConnectRequestTime;
		///�ϴα�������
		TThostFtdcDateType	LastReportDate;
		///�ϴα���ʱ��
		TThostFtdcTimeType	LastReportTime;
		///�����������
		TThostFtdcDateType	ConnectDate;
		///�������ʱ��
		TThostFtdcTimeType	ConnectTime;
		///��������
		TThostFtdcDateType	StartDate;
		///����ʱ��
		TThostFtdcTimeType	StartTime;
		///������
		TThostFtdcDateType	TradingDay;
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///��ϯλ���ɽ����
		TThostFtdcTradeIDType	MaxTradeID;
		///��ϯλ��󱨵�����
		TThostFtdcReturnCodeType	MaxOrderMessageReference;
	};

	///��ѯ���鱨�̻�
	struct CThostFtdcQryMDTraderOfferField
	{
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
		///��Ա����
		TThostFtdcParticipantIDType	ParticipantID;
		///����������Ա����
		TThostFtdcTraderIDType	TraderID;
	};

	///��ѯ�ͻ�֪ͨ
	struct CThostFtdcQryNoticeField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
	};

	///�ͻ�֪ͨ
	struct CThostFtdcNoticeField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///��Ϣ����
		TThostFtdcContentType	Content;
		///���͹�˾֪ͨ�������к�
		TThostFtdcSequenceLabelType	SequenceLabel;
	};

	///�û�Ȩ��
	struct CThostFtdcUserRightField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///�û�����
		TThostFtdcUserIDType	UserID;
		///�ͻ�Ȩ������
		TThostFtdcUserRightTypeType	UserRightType;
		///�Ƿ��ֹ
		TThostFtdcBoolType	IsForbidden;
	};

	///��ѯ������Ϣȷ����
	struct CThostFtdcQrySettlementInfoConfirmField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
	};

	///װ�ؽ�����Ϣ
	struct CThostFtdcLoadSettlementInfoField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
	};

	///���͹�˾�����ʽ��㷨��
	struct CThostFtdcBrokerWithdrawAlgorithmField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///�����ʽ��㷨
		TThostFtdcAlgorithmType	WithdrawAlgorithm;
		///�ʽ�ʹ����
		TThostFtdcRatioType	UsingRatio;
		///�����Ƿ����ƽ��ӯ��
		TThostFtdcIncludeCloseProfitType	IncludeCloseProfit;
		///�����޲����޳ɽ��ͻ��Ƿ��ܿ����������
		TThostFtdcAllWithoutTradeType	AllWithoutTrade;
		///�����Ƿ����ƽ��ӯ��
		TThostFtdcIncludeCloseProfitType	AvailIncludeCloseProfit;
		///�Ƿ������û��¼�
		TThostFtdcBoolType	IsBrokerUserEvent;
		///���ִ���
		TThostFtdcCurrencyIDType	CurrencyID;
		///������Ѻ����
		TThostFtdcRatioType	FundMortgageRatio;
		///Ȩ���㷨
		TThostFtdcBalanceAlgorithmType	BalanceAlgorithm;
	};

	///�ʽ��˻���������
	struct CThostFtdcTradingAccountPasswordUpdateV1Field
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///ԭ���Ŀ���
		TThostFtdcPasswordType	OldPassword;
		///�µĿ���
		TThostFtdcPasswordType	NewPassword;
	};

	///�ʽ��˻���������
	struct CThostFtdcTradingAccountPasswordUpdateField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ�����ʺ�
		TThostFtdcAccountIDType	AccountID;
		///ԭ���Ŀ���
		TThostFtdcPasswordType	OldPassword;
		///�µĿ���
		TThostFtdcPasswordType	NewPassword;
		///���ִ���
		TThostFtdcCurrencyIDType	CurrencyID;
	};

	///��ѯ��Ϻ�Լ����
	struct CThostFtdcQryCombinationLegField
	{
		///��Ϻ�Լ����
		TThostFtdcInstrumentIDType	CombInstrumentID;
		///���ȱ��
		TThostFtdcLegIDType	LegID;
		///���Ⱥ�Լ����
		TThostFtdcInstrumentIDType	LegInstrumentID;
	};

	///��ѯ��Ϻ�Լ����
	struct CThostFtdcQrySyncStatusField
	{
		///������
		TThostFtdcDateType	TradingDay;
	};

	///��Ͻ��׺�Լ�ĵ���
	struct CThostFtdcCombinationLegField
	{
		///��Ϻ�Լ����
		TThostFtdcInstrumentIDType	CombInstrumentID;
		///���ȱ��
		TThostFtdcLegIDType	LegID;
		///���Ⱥ�Լ����
		TThostFtdcInstrumentIDType	LegInstrumentID;
		///��������
		TThostFtdcDirectionType	Direction;
		///���ȳ���
		TThostFtdcLegMultipleType	LegMultiple;
		///��������
		TThostFtdcImplyLevelType	ImplyLevel;
	};

	///����ͬ��״̬
	struct CThostFtdcSyncStatusField
	{
		///������
		TThostFtdcDateType	TradingDay;
		///����ͬ��״̬
		TThostFtdcDataSyncStatusType	DataSyncStatus;
	};

	///��ѯ��ϵ��
	struct CThostFtdcQryLinkManField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
	};

	///��ϵ��
	struct CThostFtdcLinkManField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///��ϵ������
		TThostFtdcPersonTypeType	PersonType;
		///֤������
		TThostFtdcIdCardTypeType	IdentifiedCardType;
		///֤������
		TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
		///����
		TThostFtdcPartyNameType	PersonName;
		///��ϵ�绰
		TThostFtdcTelephoneType	Telephone;
		///ͨѶ��ַ
		TThostFtdcAddressType	Address;
		///��������
		TThostFtdcZipCodeType	ZipCode;
		///���ȼ�
		TThostFtdcPriorityType	Priority;
		///������������
		TThostFtdcUOAZipCodeType	UOAZipCode;
		///ȫ��
		TThostFtdcInvestorFullNameType	PersonFullName;
	};

	///��ѯ���͹�˾�û��¼�
	struct CThostFtdcQryBrokerUserEventField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///�û�����
		TThostFtdcUserIDType	UserID;
		///�û��¼�����
		TThostFtdcUserEventTypeType	UserEventType;
	};

	///��ѯ���͹�˾�û��¼�
	struct CThostFtdcBrokerUserEventField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///�û�����
		TThostFtdcUserIDType	UserID;
		///�û��¼�����
		TThostFtdcUserEventTypeType	UserEventType;
		///�û��¼����
		TThostFtdcSequenceNoType	EventSequenceNo;
		///�¼���������
		TThostFtdcDateType	EventDate;
		///�¼�����ʱ��
		TThostFtdcTimeType	EventTime;
		///�û��¼���Ϣ
		TThostFtdcUserEventInfoType	UserEventInfo;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///��Լ����
		TThostFtdcInstrumentIDType	InstrumentID;
	};

	///��ѯǩԼ��������
	struct CThostFtdcQryContractBankField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///���д���
		TThostFtdcBankIDType	BankID;
		///���з����Ĵ���
		TThostFtdcBankBrchIDType	BankBrchID;
	};

	///��ѯǩԼ������Ӧ
	struct CThostFtdcContractBankField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///���д���
		TThostFtdcBankIDType	BankID;
		///���з����Ĵ���
		TThostFtdcBankBrchIDType	BankBrchID;
		///��������
		TThostFtdcBankNameType	BankName;
	};

	///Ͷ������ϳֲ���ϸ
	struct CThostFtdcInvestorPositionCombineDetailField
	{
		///������
		TThostFtdcDateType	TradingDay;
		///��������
		TThostFtdcDateType	OpenDate;
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
		///������
		TThostFtdcSettlementIDType	SettlementID;
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///��ϱ��
		TThostFtdcTradeIDType	ComTradeID;
		///��ϱ��
		TThostFtdcTradeIDType	TradeID;
		///��Լ����
		TThostFtdcInstrumentIDType	InstrumentID;
		///Ͷ���ױ���־
		TThostFtdcHedgeFlagType	HedgeFlag;
		///����
		TThostFtdcDirectionType	Direction;
		///�ֲ���
		TThostFtdcVolumeType	TotalAmt;
		///Ͷ���߱�֤��
		TThostFtdcMoneyType	Margin;
		///��������֤��
		TThostFtdcMoneyType	ExchMargin;
		///��֤����
		TThostFtdcRatioType	MarginRateByMoney;
		///��֤����(������)
		TThostFtdcRatioType	MarginRateByVolume;
		///���ȱ��
		TThostFtdcLegIDType	LegID;
		///���ȳ���
		TThostFtdcLegMultipleType	LegMultiple;
		///��ϳֲֺ�Լ����
		TThostFtdcInstrumentIDType	CombInstrumentID;
		///�ɽ����
		TThostFtdcTradeGroupIDType	TradeGroupID;
	};

	///Ԥ��
	struct CThostFtdcParkedOrderField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///��Լ����
		TThostFtdcInstrumentIDType	InstrumentID;
		///��������
		TThostFtdcOrderRefType	OrderRef;
		///�û�����
		TThostFtdcUserIDType	UserID;
		///�����۸�����
		TThostFtdcOrderPriceTypeType	OrderPriceType;
		///��������
		TThostFtdcDirectionType	Direction;
		///��Ͽ�ƽ��־
		TThostFtdcCombOffsetFlagType	CombOffsetFlag;
		///���Ͷ���ױ���־
		TThostFtdcCombHedgeFlagType	CombHedgeFlag;
		///�۸�
		TThostFtdcPriceType	LimitPrice;
		///����
		TThostFtdcVolumeType	VolumeTotalOriginal;
		///��Ч������
		TThostFtdcTimeConditionType	TimeCondition;
		///GTD����
		TThostFtdcDateType	GTDDate;
		///�ɽ�������
		TThostFtdcVolumeConditionType	VolumeCondition;
		///��С�ɽ���
		TThostFtdcVolumeType	MinVolume;
		///��������
		TThostFtdcContingentConditionType	ContingentCondition;
		///ֹ���
		TThostFtdcPriceType	StopPrice;
		///ǿƽԭ��
		TThostFtdcForceCloseReasonType	ForceCloseReason;
		///�Զ������־
		TThostFtdcBoolType	IsAutoSuspend;
		///ҵ��Ԫ
		TThostFtdcBusinessUnitType	BusinessUnit;
		///������
		TThostFtdcRequestIDType	RequestID;
		///�û�ǿ����־
		TThostFtdcBoolType	UserForceClose;
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
		///Ԥ�񱨵����
		TThostFtdcParkedOrderIDType	ParkedOrderID;
		///�û�����
		TThostFtdcUserTypeType	UserType;
		///Ԥ��״̬
		TThostFtdcParkedOrderStatusType	Status;
		///�������
		TThostFtdcErrorIDType	ErrorID;
		///������Ϣ
		TThostFtdcErrorMsgType	ErrorMsg;
		///��������־
		TThostFtdcBoolType	IsSwapOrder;
		///�ʽ��˺�
		TThostFtdcAccountIDType	AccountID;
		///���ִ���
		TThostFtdcCurrencyIDType	CurrencyID;
		///���ױ���
		TThostFtdcClientIDType	ClientID;
		///Ͷ�ʵ�Ԫ����
		TThostFtdcInvestUnitIDType	InvestUnitID;
		///IP��ַ
		TThostFtdcIPAddressType	IPAddress;
		///Mac��ַ
		TThostFtdcMacAddressType	MacAddress;
	};

	///����Ԥ�񵥲���
	struct CThostFtdcParkedOrderActionField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///������������
		TThostFtdcOrderActionRefType	OrderActionRef;
		///��������
		TThostFtdcOrderRefType	OrderRef;
		///������
		TThostFtdcRequestIDType	RequestID;
		///ǰ�ñ��
		TThostFtdcFrontIDType	FrontID;
		///�Ự���
		TThostFtdcSessionIDType	SessionID;
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
		///�������
		TThostFtdcOrderSysIDType	OrderSysID;
		///������־
		TThostFtdcActionFlagType	ActionFlag;
		///�۸�
		TThostFtdcPriceType	LimitPrice;
		///�����仯
		TThostFtdcVolumeType	VolumeChange;
		///�û�����
		TThostFtdcUserIDType	UserID;
		///��Լ����
		TThostFtdcInstrumentIDType	InstrumentID;
		///Ԥ�񳷵������
		TThostFtdcParkedOrderActionIDType	ParkedOrderActionID;
		///�û�����
		TThostFtdcUserTypeType	UserType;
		///Ԥ�񳷵�״̬
		TThostFtdcParkedOrderStatusType	Status;
		///�������
		TThostFtdcErrorIDType	ErrorID;
		///������Ϣ
		TThostFtdcErrorMsgType	ErrorMsg;
		///Ͷ�ʵ�Ԫ����
		TThostFtdcInvestUnitIDType	InvestUnitID;
		///IP��ַ
		TThostFtdcIPAddressType	IPAddress;
		///Mac��ַ
		TThostFtdcMacAddressType	MacAddress;
	};

	///��ѯԤ��
	struct CThostFtdcQryParkedOrderField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///��Լ����
		TThostFtdcInstrumentIDType	InstrumentID;
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
	};

	///��ѯԤ�񳷵�
	struct CThostFtdcQryParkedOrderActionField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///��Լ����
		TThostFtdcInstrumentIDType	InstrumentID;
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
	};

	///ɾ��Ԥ��
	struct CThostFtdcRemoveParkedOrderField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///Ԥ�񱨵����
		TThostFtdcParkedOrderIDType	ParkedOrderID;
	};

	///ɾ��Ԥ�񳷵�
	struct CThostFtdcRemoveParkedOrderActionField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///Ԥ�񳷵����
		TThostFtdcParkedOrderActionIDType	ParkedOrderActionID;
	};

	///���͹�˾�����ʽ��㷨��
	struct CThostFtdcInvestorWithdrawAlgorithmField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���߷�Χ
		TThostFtdcInvestorRangeType	InvestorRange;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///�����ʽ����
		TThostFtdcRatioType	UsingRatio;
		///���ִ���
		TThostFtdcCurrencyIDType	CurrencyID;
		///������Ѻ����
		TThostFtdcRatioType	FundMortgageRatio;
	};

	///��ѯ��ϳֲ���ϸ
	struct CThostFtdcQryInvestorPositionCombineDetailField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///��ϳֲֺ�Լ����
		TThostFtdcInstrumentIDType	CombInstrumentID;
	};

	///�ɽ�����
	struct CThostFtdcMarketDataAveragePriceField
	{
		///���վ���
		TThostFtdcPriceType	AveragePrice;
	};

	///У��Ͷ��������
	struct CThostFtdcVerifyInvestorPasswordField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///����
		TThostFtdcPasswordType	Password;
	};

	///�û�IP
	struct CThostFtdcUserIPField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///�û�����
		TThostFtdcUserIDType	UserID;
		///IP��ַ
		TThostFtdcIPAddressType	IPAddress;
		///IP��ַ����
		TThostFtdcIPAddressType	IPMask;
		///Mac��ַ
		TThostFtdcMacAddressType	MacAddress;
	};

	///�û��¼�֪ͨ��Ϣ
	struct CThostFtdcTradingNoticeInfoField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///����ʱ��
		TThostFtdcTimeType	SendTime;
		///��Ϣ����
		TThostFtdcContentType	FieldContent;
		///����ϵ�к�
		TThostFtdcSequenceSeriesType	SequenceSeries;
		///���к�
		TThostFtdcSequenceNoType	SequenceNo;
	};

	///�û��¼�֪ͨ
	struct CThostFtdcTradingNoticeField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���߷�Χ
		TThostFtdcInvestorRangeType	InvestorRange;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///����ϵ�к�
		TThostFtdcSequenceSeriesType	SequenceSeries;
		///�û�����
		TThostFtdcUserIDType	UserID;
		///����ʱ��
		TThostFtdcTimeType	SendTime;
		///���к�
		TThostFtdcSequenceNoType	SequenceNo;
		///��Ϣ����
		TThostFtdcContentType	FieldContent;
	};

	///��ѯ�����¼�֪ͨ
	struct CThostFtdcQryTradingNoticeField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
	};

	///��ѯ���󱨵�
	struct CThostFtdcQryErrOrderField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
	};

	///���󱨵�
	struct CThostFtdcErrOrderField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///��Լ����
		TThostFtdcInstrumentIDType	InstrumentID;
		///��������
		TThostFtdcOrderRefType	OrderRef;
		///�û�����
		TThostFtdcUserIDType	UserID;
		///�����۸�����
		TThostFtdcOrderPriceTypeType	OrderPriceType;
		///��������
		TThostFtdcDirectionType	Direction;
		///��Ͽ�ƽ��־
		TThostFtdcCombOffsetFlagType	CombOffsetFlag;
		///���Ͷ���ױ���־
		TThostFtdcCombHedgeFlagType	CombHedgeFlag;
		///�۸�
		TThostFtdcPriceType	LimitPrice;
		///����
		TThostFtdcVolumeType	VolumeTotalOriginal;
		///��Ч������
		TThostFtdcTimeConditionType	TimeCondition;
		///GTD����
		TThostFtdcDateType	GTDDate;
		///�ɽ�������
		TThostFtdcVolumeConditionType	VolumeCondition;
		///��С�ɽ���
		TThostFtdcVolumeType	MinVolume;
		///��������
		TThostFtdcContingentConditionType	ContingentCondition;
		///ֹ���
		TThostFtdcPriceType	StopPrice;
		///ǿƽԭ��
		TThostFtdcForceCloseReasonType	ForceCloseReason;
		///�Զ������־
		TThostFtdcBoolType	IsAutoSuspend;
		///ҵ��Ԫ
		TThostFtdcBusinessUnitType	BusinessUnit;
		///������
		TThostFtdcRequestIDType	RequestID;
		///�û�ǿ����־
		TThostFtdcBoolType	UserForceClose;
		///�������
		TThostFtdcErrorIDType	ErrorID;
		///������Ϣ
		TThostFtdcErrorMsgType	ErrorMsg;
		///��������־
		TThostFtdcBoolType	IsSwapOrder;
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
		///Ͷ�ʵ�Ԫ����
		TThostFtdcInvestUnitIDType	InvestUnitID;
		///�ʽ��˺�
		TThostFtdcAccountIDType	AccountID;
		///���ִ���
		TThostFtdcCurrencyIDType	CurrencyID;
		///���ױ���
		TThostFtdcClientIDType	ClientID;
		///IP��ַ
		TThostFtdcIPAddressType	IPAddress;
		///Mac��ַ
		TThostFtdcMacAddressType	MacAddress;
	};

	///��ѯ���󱨵�����
	struct CThostFtdcErrorConditionalOrderField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///��Լ����
		TThostFtdcInstrumentIDType	InstrumentID;
		///��������
		TThostFtdcOrderRefType	OrderRef;
		///�û�����
		TThostFtdcUserIDType	UserID;
		///�����۸�����
		TThostFtdcOrderPriceTypeType	OrderPriceType;
		///��������
		TThostFtdcDirectionType	Direction;
		///��Ͽ�ƽ��־
		TThostFtdcCombOffsetFlagType	CombOffsetFlag;
		///���Ͷ���ױ���־
		TThostFtdcCombHedgeFlagType	CombHedgeFlag;
		///�۸�
		TThostFtdcPriceType	LimitPrice;
		///����
		TThostFtdcVolumeType	VolumeTotalOriginal;
		///��Ч������
		TThostFtdcTimeConditionType	TimeCondition;
		///GTD����
		TThostFtdcDateType	GTDDate;
		///�ɽ�������
		TThostFtdcVolumeConditionType	VolumeCondition;
		///��С�ɽ���
		TThostFtdcVolumeType	MinVolume;
		///��������
		TThostFtdcContingentConditionType	ContingentCondition;
		///ֹ���
		TThostFtdcPriceType	StopPrice;
		///ǿƽԭ��
		TThostFtdcForceCloseReasonType	ForceCloseReason;
		///�Զ������־
		TThostFtdcBoolType	IsAutoSuspend;
		///ҵ��Ԫ
		TThostFtdcBusinessUnitType	BusinessUnit;
		///������
		TThostFtdcRequestIDType	RequestID;
		///���ر������
		TThostFtdcOrderLocalIDType	OrderLocalID;
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
		///��Ա����
		TThostFtdcParticipantIDType	ParticipantID;
		///�ͻ�����
		TThostFtdcClientIDType	ClientID;
		///��Լ�ڽ������Ĵ���
		TThostFtdcExchangeInstIDType	ExchangeInstID;
		///����������Ա����
		TThostFtdcTraderIDType	TraderID;
		///��װ���
		TThostFtdcInstallIDType	InstallID;
		///�����ύ״̬
		TThostFtdcOrderSubmitStatusType	OrderSubmitStatus;
		///������ʾ���
		TThostFtdcSequenceNoType	NotifySequence;
		///������
		TThostFtdcDateType	TradingDay;
		///������
		TThostFtdcSettlementIDType	SettlementID;
		///�������
		TThostFtdcOrderSysIDType	OrderSysID;
		///������Դ
		TThostFtdcOrderSourceType	OrderSource;
		///����״̬
		TThostFtdcOrderStatusType	OrderStatus;
		///��������
		TThostFtdcOrderTypeType	OrderType;
		///��ɽ�����
		TThostFtdcVolumeType	VolumeTraded;
		///ʣ������
		TThostFtdcVolumeType	VolumeTotal;
		///��������
		TThostFtdcDateType	InsertDate;
		///ί��ʱ��
		TThostFtdcTimeType	InsertTime;
		///����ʱ��
		TThostFtdcTimeType	ActiveTime;
		///����ʱ��
		TThostFtdcTimeType	SuspendTime;
		///����޸�ʱ��
		TThostFtdcTimeType	UpdateTime;
		///����ʱ��
		TThostFtdcTimeType	CancelTime;
		///����޸Ľ���������Ա����
		TThostFtdcTraderIDType	ActiveTraderID;
		///�����Ա���
		TThostFtdcParticipantIDType	ClearingPartID;
		///���
		TThostFtdcSequenceNoType	SequenceNo;
		///ǰ�ñ��
		TThostFtdcFrontIDType	FrontID;
		///�Ự���
		TThostFtdcSessionIDType	SessionID;
		///�û��˲�Ʒ��Ϣ
		TThostFtdcProductInfoType	UserProductInfo;
		///״̬��Ϣ
		TThostFtdcErrorMsgType	StatusMsg;
		///�û�ǿ����־
		TThostFtdcBoolType	UserForceClose;
		///�����û�����
		TThostFtdcUserIDType	ActiveUserID;
		///���͹�˾�������
		TThostFtdcSequenceNoType	BrokerOrderSeq;
		///��ر���
		TThostFtdcOrderSysIDType	RelativeOrderSysID;
		///֣�����ɽ�����
		TThostFtdcVolumeType	ZCETotalTradedVolume;
		///�������
		TThostFtdcErrorIDType	ErrorID;
		///������Ϣ
		TThostFtdcErrorMsgType	ErrorMsg;
		///��������־
		TThostFtdcBoolType	IsSwapOrder;
		///Ӫҵ�����
		TThostFtdcBranchIDType	BranchID;
		///Ͷ�ʵ�Ԫ����
		TThostFtdcInvestUnitIDType	InvestUnitID;
		///�ʽ��˺�
		TThostFtdcAccountIDType	AccountID;
		///���ִ���
		TThostFtdcCurrencyIDType	CurrencyID;
		///IP��ַ
		TThostFtdcIPAddressType	IPAddress;
		///Mac��ַ
		TThostFtdcMacAddressType	MacAddress;
	};

	///��ѯ���󱨵�����
	struct CThostFtdcQryErrOrderActionField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
	};

	///���󱨵�����
	struct CThostFtdcErrOrderActionField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///������������
		TThostFtdcOrderActionRefType	OrderActionRef;
		///��������
		TThostFtdcOrderRefType	OrderRef;
		///������
		TThostFtdcRequestIDType	RequestID;
		///ǰ�ñ��
		TThostFtdcFrontIDType	FrontID;
		///�Ự���
		TThostFtdcSessionIDType	SessionID;
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
		///�������
		TThostFtdcOrderSysIDType	OrderSysID;
		///������־
		TThostFtdcActionFlagType	ActionFlag;
		///�۸�
		TThostFtdcPriceType	LimitPrice;
		///�����仯
		TThostFtdcVolumeType	VolumeChange;
		///��������
		TThostFtdcDateType	ActionDate;
		///����ʱ��
		TThostFtdcTimeType	ActionTime;
		///����������Ա����
		TThostFtdcTraderIDType	TraderID;
		///��װ���
		TThostFtdcInstallIDType	InstallID;
		///���ر������
		TThostFtdcOrderLocalIDType	OrderLocalID;
		///�������ر��
		TThostFtdcOrderLocalIDType	ActionLocalID;
		///��Ա����
		TThostFtdcParticipantIDType	ParticipantID;
		///�ͻ�����
		TThostFtdcClientIDType	ClientID;
		///ҵ��Ԫ
		TThostFtdcBusinessUnitType	BusinessUnit;
		///��������״̬
		TThostFtdcOrderActionStatusType	OrderActionStatus;
		///�û�����
		TThostFtdcUserIDType	UserID;
		///״̬��Ϣ
		TThostFtdcErrorMsgType	StatusMsg;
		///��Լ����
		TThostFtdcInstrumentIDType	InstrumentID;
		///Ӫҵ�����
		TThostFtdcBranchIDType	BranchID;
		///Ͷ�ʵ�Ԫ����
		TThostFtdcInvestUnitIDType	InvestUnitID;
		///IP��ַ
		TThostFtdcIPAddressType	IPAddress;
		///Mac��ַ
		TThostFtdcMacAddressType	MacAddress;
		///�������
		TThostFtdcErrorIDType	ErrorID;
		///������Ϣ
		TThostFtdcErrorMsgType	ErrorMsg;
	};

	///��ѯ������״̬
	struct CThostFtdcQryExchangeSequenceField
	{
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
	};

	///������״̬
	struct CThostFtdcExchangeSequenceField
	{
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
		///���
		TThostFtdcSequenceNoType	SequenceNo;
		///��Լ����״̬
		TThostFtdcInstrumentStatusType	MarketStatus;
	};

	///���ݼ۸��ѯ��󱨵�����
	struct CThostFtdcQueryMaxOrderVolumeWithPriceField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///��Լ����
		TThostFtdcInstrumentIDType	InstrumentID;
		///��������
		TThostFtdcDirectionType	Direction;
		///��ƽ��־
		TThostFtdcOffsetFlagType	OffsetFlag;
		///Ͷ���ױ���־
		TThostFtdcHedgeFlagType	HedgeFlag;
		///�������������
		TThostFtdcVolumeType	MaxVolume;
		///�����۸�
		TThostFtdcPriceType	Price;
	};

	///��ѯ���͹�˾���ײ���
	struct CThostFtdcQryBrokerTradingParamsField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///���ִ���
		TThostFtdcCurrencyIDType	CurrencyID;
	};

	///���͹�˾���ײ���
	struct CThostFtdcBrokerTradingParamsField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///��֤��۸�����
		TThostFtdcMarginPriceTypeType	MarginPriceType;
		///ӯ���㷨
		TThostFtdcAlgorithmType	Algorithm;
		///�����Ƿ����ƽ��ӯ��
		TThostFtdcIncludeCloseProfitType	AvailIncludeCloseProfit;
		///���ִ���
		TThostFtdcCurrencyIDType	CurrencyID;
		///��ȨȨ����۸�����
		TThostFtdcOptionRoyaltyPriceTypeType	OptionRoyaltyPriceType;
	};

	///��ѯ���͹�˾�����㷨
	struct CThostFtdcQryBrokerTradingAlgosField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
		///��Լ����
		TThostFtdcInstrumentIDType	InstrumentID;
	};

	///���͹�˾�����㷨
	struct CThostFtdcBrokerTradingAlgosField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
		///��Լ����
		TThostFtdcInstrumentIDType	InstrumentID;
		///�ֲִ����㷨���
		TThostFtdcHandlePositionAlgoIDType	HandlePositionAlgoID;
		///Ѱ�ұ�֤�����㷨���
		TThostFtdcFindMarginRateAlgoIDType	FindMarginRateAlgoID;
		///�ʽ����㷨���
		TThostFtdcHandleTradingAccountAlgoIDType	HandleTradingAccountAlgoID;
	};

	///��ѯ���͹�˾�ʽ�
	struct CThostFtdcQueryBrokerDepositField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
	};

	///���͹�˾�ʽ�
	struct CThostFtdcBrokerDepositField
	{
		///��������
		TThostFtdcTradeDateType	TradingDay;
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///��Ա����
		TThostFtdcParticipantIDType	ParticipantID;
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
		///�ϴν���׼����
		TThostFtdcMoneyType	PreBalance;
		///��ǰ��֤���ܶ�
		TThostFtdcMoneyType	CurrMargin;
		///ƽ��ӯ��
		TThostFtdcMoneyType	CloseProfit;
		///�ڻ�����׼����
		TThostFtdcMoneyType	Balance;
		///�����
		TThostFtdcMoneyType	Deposit;
		///������
		TThostFtdcMoneyType	Withdraw;
		///�����ʽ�
		TThostFtdcMoneyType	Available;
		///����׼����
		TThostFtdcMoneyType	Reserve;
		///����ı�֤��
		TThostFtdcMoneyType	FrozenMargin;
	};

	///��ѯ��֤����ϵͳ���͹�˾��Կ
	struct CThostFtdcQryCFMMCBrokerKeyField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
	};

	///��֤����ϵͳ���͹�˾��Կ
	struct CThostFtdcCFMMCBrokerKeyField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///���͹�˾ͳһ����
		TThostFtdcParticipantIDType	ParticipantID;
		///��Կ��������
		TThostFtdcDateType	CreateDate;
		///��Կ����ʱ��
		TThostFtdcTimeType	CreateTime;
		///��Կ���
		TThostFtdcSequenceNoType	KeyID;
		///��̬��Կ
		TThostFtdcCFMMCKeyType	CurrentKey;
		///��̬��Կ����
		TThostFtdcCFMMCKeyKindType	KeyKind;
	};

	///��֤����ϵͳ���͹�˾�ʽ��˻���Կ
	struct CThostFtdcCFMMCTradingAccountKeyField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///���͹�˾ͳһ����
		TThostFtdcParticipantIDType	ParticipantID;
		///Ͷ�����ʺ�
		TThostFtdcAccountIDType	AccountID;
		///��Կ���
		TThostFtdcSequenceNoType	KeyID;
		///��̬��Կ
		TThostFtdcCFMMCKeyType	CurrentKey;
	};

	///�����ѯ��֤����ϵͳ���͹�˾�ʽ��˻���Կ
	struct CThostFtdcQryCFMMCTradingAccountKeyField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
	};

	///�û���̬���Ʋ���
	struct CThostFtdcBrokerUserOTPParamField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///�û�����
		TThostFtdcUserIDType	UserID;
		///��̬�����ṩ��
		TThostFtdcOTPVendorsIDType	OTPVendorsID;
		///��̬�������к�
		TThostFtdcSerialNumberType	SerialNumber;
		///������Կ
		TThostFtdcAuthKeyType	AuthKey;
		///Ư��ֵ
		TThostFtdcLastDriftType	LastDrift;
		///�ɹ�ֵ
		TThostFtdcLastSuccessType	LastSuccess;
		///��̬��������
		TThostFtdcOTPTypeType	OTPType;
	};

	///�ֹ�ͬ���û���̬����
	struct CThostFtdcManualSyncBrokerUserOTPField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///�û�����
		TThostFtdcUserIDType	UserID;
		///��̬��������
		TThostFtdcOTPTypeType	OTPType;
		///��һ����̬����
		TThostFtdcPasswordType	FirstOTP;
		///�ڶ�����̬����
		TThostFtdcPasswordType	SecondOTP;
	};

	///Ͷ������������ģ��
	struct CThostFtdcCommRateModelField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///��������ģ�����
		TThostFtdcInvestorIDType	CommModelID;
		///ģ������
		TThostFtdcCommModelNameType	CommModelName;
	};

	///�����ѯͶ������������ģ��
	struct CThostFtdcQryCommRateModelField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///��������ģ�����
		TThostFtdcInvestorIDType	CommModelID;
	};

	///Ͷ���߱�֤����ģ��
	struct CThostFtdcMarginModelField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///��֤����ģ�����
		TThostFtdcInvestorIDType	MarginModelID;
		///ģ������
		TThostFtdcCommModelNameType	MarginModelName;
	};

	///�����ѯͶ���߱�֤����ģ��
	struct CThostFtdcQryMarginModelField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///��֤����ģ�����
		TThostFtdcInvestorIDType	MarginModelID;
	};

	///�ֵ��۵���Ϣ
	struct CThostFtdcEWarrantOffsetField
	{
		///��������
		TThostFtdcTradeDateType	TradingDay;
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
		///��Լ����
		TThostFtdcInstrumentIDType	InstrumentID;
		///��������
		TThostFtdcDirectionType	Direction;
		///Ͷ���ױ���־
		TThostFtdcHedgeFlagType	HedgeFlag;
		///����
		TThostFtdcVolumeType	Volume;
	};

	///��ѯ�ֵ��۵���Ϣ
	struct CThostFtdcQryEWarrantOffsetField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
		///��Լ����
		TThostFtdcInstrumentIDType	InstrumentID;
	};

	///��ѯͶ����Ʒ��/��Ʒ�ֱ�֤��
	struct CThostFtdcQryInvestorProductGroupMarginField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///Ʒ��/��Ʒ�ֱ�ʾ
		TThostFtdcInstrumentIDType	ProductGroupID;
		///Ͷ���ױ���־
		TThostFtdcHedgeFlagType	HedgeFlag;
	};

	///Ͷ����Ʒ��/��Ʒ�ֱ�֤��
	struct CThostFtdcInvestorProductGroupMarginField
	{
		///Ʒ��/��Ʒ�ֱ�ʾ
		TThostFtdcInstrumentIDType	ProductGroupID;
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///������
		TThostFtdcDateType	TradingDay;
		///������
		TThostFtdcSettlementIDType	SettlementID;
		///����ı�֤��
		TThostFtdcMoneyType	FrozenMargin;
		///��ͷ����ı�֤��
		TThostFtdcMoneyType	LongFrozenMargin;
		///��ͷ����ı�֤��
		TThostFtdcMoneyType	ShortFrozenMargin;
		///ռ�õı�֤��
		TThostFtdcMoneyType	UseMargin;
		///��ͷ��֤��
		TThostFtdcMoneyType	LongUseMargin;
		///��ͷ��֤��
		TThostFtdcMoneyType	ShortUseMargin;
		///��������֤��
		TThostFtdcMoneyType	ExchMargin;
		///��������ͷ��֤��
		TThostFtdcMoneyType	LongExchMargin;
		///��������ͷ��֤��
		TThostFtdcMoneyType	ShortExchMargin;
		///ƽ��ӯ��
		TThostFtdcMoneyType	CloseProfit;
		///�����������
		TThostFtdcMoneyType	FrozenCommission;
		///������
		TThostFtdcMoneyType	Commission;
		///������ʽ�
		TThostFtdcMoneyType	FrozenCash;
		///�ʽ���
		TThostFtdcMoneyType	CashIn;
		///�ֲ�ӯ��
		TThostFtdcMoneyType	PositionProfit;
		///�۵��ܽ��
		TThostFtdcMoneyType	OffsetAmount;
		///��ͷ�۵��ܽ��
		TThostFtdcMoneyType	LongOffsetAmount;
		///��ͷ�۵��ܽ��
		TThostFtdcMoneyType	ShortOffsetAmount;
		///�������۵��ܽ��
		TThostFtdcMoneyType	ExchOffsetAmount;
		///��������ͷ�۵��ܽ��
		TThostFtdcMoneyType	LongExchOffsetAmount;
		///��������ͷ�۵��ܽ��
		TThostFtdcMoneyType	ShortExchOffsetAmount;
		///Ͷ���ױ���־
		TThostFtdcHedgeFlagType	HedgeFlag;
	};

	///��ѯ��������û�����
	struct CThostFtdcQueryCFMMCTradingAccountTokenField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
	};

	///��������û�����
	struct CThostFtdcCFMMCTradingAccountTokenField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///���͹�˾ͳһ����
		TThostFtdcParticipantIDType	ParticipantID;
		///Ͷ�����ʺ�
		TThostFtdcAccountIDType	AccountID;
		///��Կ���
		TThostFtdcSequenceNoType	KeyID;
		///��̬����
		TThostFtdcCFMMCTokenType	Token;
	};

	///��ѯ��Ʒ��
	struct CThostFtdcQryProductGroupField
	{
		///��Ʒ����
		TThostFtdcInstrumentIDType	ProductID;
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
	};

	///Ͷ����Ʒ��/��Ʒ�ֱ�֤���Ʒ��
	struct CThostFtdcProductGroupField
	{
		///��Ʒ����
		TThostFtdcInstrumentIDType	ProductID;
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
		///��Ʒ�����
		TThostFtdcInstrumentIDType	ProductGroupID;
	};

	///����������
	struct CThostFtdcBulletinField
	{
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
		///������
		TThostFtdcDateType	TradingDay;
		///������
		TThostFtdcBulletinIDType	BulletinID;
		///���к�
		TThostFtdcSequenceNoType	SequenceNo;
		///��������
		TThostFtdcNewsTypeType	NewsType;
		///�����̶�
		TThostFtdcNewsUrgencyType	NewsUrgency;
		///����ʱ��
		TThostFtdcTimeType	SendTime;
		///��ϢժҪ
		TThostFtdcAbstractType	Abstract;
		///��Ϣ��Դ
		TThostFtdcComeFromType	ComeFrom;
		///��Ϣ����
		TThostFtdcContentType	Content;
		///WEB��ַ
		TThostFtdcURLLinkType	URLLink;
		///�г�����
		TThostFtdcMarketIDType	MarketID;
	};

	///��ѯ����������
	struct CThostFtdcQryBulletinField
	{
		///����������
		TThostFtdcExchangeIDType	ExchangeID;
		///������
		TThostFtdcBulletinIDType	BulletinID;
		///���к�
		TThostFtdcSequenceNoType	SequenceNo;
		///��������
		TThostFtdcNewsTypeType	NewsType;
		///�����̶�
		TThostFtdcNewsUrgencyType	NewsUrgency;
	};

	///ת�ʿ�������
	struct CThostFtdcReqOpenAccountField
	{
		///ҵ������
		TThostFtdcTradeCodeType	TradeCode;
		///���д���
		TThostFtdcBankIDType	BankID;
		///���з�֧��������
		TThostFtdcBankBrchIDType	BankBranchID;
		///���̴���
		TThostFtdcBrokerIDType	BrokerID;
		///���̷�֧��������
		TThostFtdcFutureBranchIDType	BrokerBranchID;
		///��������
		TThostFtdcTradeDateType	TradeDate;
		///����ʱ��
		TThostFtdcTradeTimeType	TradeTime;
		///������ˮ��
		TThostFtdcBankSerialType	BankSerial;
		///����ϵͳ���� 
		TThostFtdcTradeDateType	TradingDay;
		///����ƽ̨��Ϣ��ˮ��
		TThostFtdcSerialType	PlateSerial;
		///����Ƭ��־
		TThostFtdcLastFragmentType	LastFragment;
		///�Ự��
		TThostFtdcSessionIDType	SessionID;
		///�ͻ�����
		TThostFtdcIndividualNameType	CustomerName;
		///֤������
		TThostFtdcIdCardTypeType	IdCardType;
		///֤������
		TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
		///�Ա�
		TThostFtdcGenderType	Gender;
		///���Ҵ���
		TThostFtdcCountryCodeType	CountryCode;
		///�ͻ�����
		TThostFtdcCustTypeType	CustType;
		///��ַ
		TThostFtdcAddressType	Address;
		///�ʱ�
		TThostFtdcZipCodeType	ZipCode;
		///�绰����
		TThostFtdcTelephoneType	Telephone;
		///�ֻ�
		TThostFtdcMobilePhoneType	MobilePhone;
		///����
		TThostFtdcFaxType	Fax;
		///�����ʼ�
		TThostFtdcEMailType	EMail;
		///�ʽ��˻�״̬
		TThostFtdcMoneyAccountStatusType	MoneyAccountStatus;
		///�����ʺ�
		TThostFtdcBankAccountType	BankAccount;
		///��������
		TThostFtdcPasswordType	BankPassWord;
		///Ͷ�����ʺ�
		TThostFtdcAccountIDType	AccountID;
		///�ڻ�����
		TThostFtdcPasswordType	Password;
		///��װ���
		TThostFtdcInstallIDType	InstallID;
		///��֤�ͻ�֤�������־
		TThostFtdcYesNoIndicatorType	VerifyCertNoFlag;
		///���ִ���
		TThostFtdcCurrencyIDType	CurrencyID;
		///�㳮��־
		TThostFtdcCashExchangeCodeType	CashExchangeCode;
		///ժҪ
		TThostFtdcDigestType	Digest;
		///�����ʺ�����
		TThostFtdcBankAccTypeType	BankAccType;
		///������־
		TThostFtdcDeviceIDType	DeviceID;
		///�ڻ���λ�ʺ�����
		TThostFtdcBankAccTypeType	BankSecuAccType;
		///�ڻ���˾���б���
		TThostFtdcBankCodingForFutureType	BrokerIDByBank;
		///�ڻ���λ�ʺ�
		TThostFtdcBankAccountType	BankSecuAcc;
		///���������־
		TThostFtdcPwdFlagType	BankPwdFlag;
		///�ڻ��ʽ�����˶Ա�־
		TThostFtdcPwdFlagType	SecuPwdFlag;
		///���׹�Ա
		TThostFtdcOperNoType	OperNo;
		///����ID
		TThostFtdcTIDType	TID;
		///�û���ʶ
		TThostFtdcUserIDType	UserID;
		///���ͻ�����
		TThostFtdcLongIndividualNameType	LongCustomerName;
	};

	///ת����������
	struct CThostFtdcReqCancelAccountField
	{
		///ҵ������
		TThostFtdcTradeCodeType	TradeCode;
		///���д���
		TThostFtdcBankIDType	BankID;
		///���з�֧��������
		TThostFtdcBankBrchIDType	BankBranchID;
		///���̴���
		TThostFtdcBrokerIDType	BrokerID;
		///���̷�֧��������
		TThostFtdcFutureBranchIDType	BrokerBranchID;
		///��������
		TThostFtdcTradeDateType	TradeDate;
		///����ʱ��
		TThostFtdcTradeTimeType	TradeTime;
		///������ˮ��
		TThostFtdcBankSerialType	BankSerial;
		///����ϵͳ���� 
		TThostFtdcTradeDateType	TradingDay;
		///����ƽ̨��Ϣ��ˮ��
		TThostFtdcSerialType	PlateSerial;
		///����Ƭ��־
		TThostFtdcLastFragmentType	LastFragment;
		///�Ự��
		TThostFtdcSessionIDType	SessionID;
		///�ͻ�����
		TThostFtdcIndividualNameType	CustomerName;
		///֤������
		TThostFtdcIdCardTypeType	IdCardType;
		///֤������
		TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
		///�Ա�
		TThostFtdcGenderType	Gender;
		///���Ҵ���
		TThostFtdcCountryCodeType	CountryCode;
		///�ͻ�����
		TThostFtdcCustTypeType	CustType;
		///��ַ
		TThostFtdcAddressType	Address;
		///�ʱ�
		TThostFtdcZipCodeType	ZipCode;
		///�绰����
		TThostFtdcTelephoneType	Telephone;
		///�ֻ�
		TThostFtdcMobilePhoneType	MobilePhone;
		///����
		TThostFtdcFaxType	Fax;
		///�����ʼ�
		TThostFtdcEMailType	EMail;
		///�ʽ��˻�״̬
		TThostFtdcMoneyAccountStatusType	MoneyAccountStatus;
		///�����ʺ�
		TThostFtdcBankAccountType	BankAccount;
		///��������
		TThostFtdcPasswordType	BankPassWord;
		///Ͷ�����ʺ�
		TThostFtdcAccountIDType	AccountID;
		///�ڻ�����
		TThostFtdcPasswordType	Password;
		///��װ���
		TThostFtdcInstallIDType	InstallID;
		///��֤�ͻ�֤�������־
		TThostFtdcYesNoIndicatorType	VerifyCertNoFlag;
		///���ִ���
		TThostFtdcCurrencyIDType	CurrencyID;
		///�㳮��־
		TThostFtdcCashExchangeCodeType	CashExchangeCode;
		///ժҪ
		TThostFtdcDigestType	Digest;
		///�����ʺ�����
		TThostFtdcBankAccTypeType	BankAccType;
		///������־
		TThostFtdcDeviceIDType	DeviceID;
		///�ڻ���λ�ʺ�����
		TThostFtdcBankAccTypeType	BankSecuAccType;
		///�ڻ���˾���б���
		TThostFtdcBankCodingForFutureType	BrokerIDByBank;
		///�ڻ���λ�ʺ�
		TThostFtdcBankAccountType	BankSecuAcc;
		///���������־
		TThostFtdcPwdFlagType	BankPwdFlag;
		///�ڻ��ʽ�����˶Ա�־
		TThostFtdcPwdFlagType	SecuPwdFlag;
		///���׹�Ա
		TThostFtdcOperNoType	OperNo;
		///����ID
		TThostFtdcTIDType	TID;
		///�û���ʶ
		TThostFtdcUserIDType	UserID;
		///���ͻ�����
		TThostFtdcLongIndividualNameType	LongCustomerName;
	};

	///��������˻�����
	struct CThostFtdcReqChangeAccountField
	{
		///ҵ������
		TThostFtdcTradeCodeType	TradeCode;
		///���д���
		TThostFtdcBankIDType	BankID;
		///���з�֧��������
		TThostFtdcBankBrchIDType	BankBranchID;
		///���̴���
		TThostFtdcBrokerIDType	BrokerID;
		///���̷�֧��������
		TThostFtdcFutureBranchIDType	BrokerBranchID;
		///��������
		TThostFtdcTradeDateType	TradeDate;
		///����ʱ��
		TThostFtdcTradeTimeType	TradeTime;
		///������ˮ��
		TThostFtdcBankSerialType	BankSerial;
		///����ϵͳ���� 
		TThostFtdcTradeDateType	TradingDay;
		///����ƽ̨��Ϣ��ˮ��
		TThostFtdcSerialType	PlateSerial;
		///����Ƭ��־
		TThostFtdcLastFragmentType	LastFragment;
		///�Ự��
		TThostFtdcSessionIDType	SessionID;
		///�ͻ�����
		TThostFtdcIndividualNameType	CustomerName;
		///֤������
		TThostFtdcIdCardTypeType	IdCardType;
		///֤������
		TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
		///�Ա�
		TThostFtdcGenderType	Gender;
		///���Ҵ���
		TThostFtdcCountryCodeType	CountryCode;
		///�ͻ�����
		TThostFtdcCustTypeType	CustType;
		///��ַ
		TThostFtdcAddressType	Address;
		///�ʱ�
		TThostFtdcZipCodeType	ZipCode;
		///�绰����
		TThostFtdcTelephoneType	Telephone;
		///�ֻ�
		TThostFtdcMobilePhoneType	MobilePhone;
		///����
		TThostFtdcFaxType	Fax;
		///�����ʼ�
		TThostFtdcEMailType	EMail;
		///�ʽ��˻�״̬
		TThostFtdcMoneyAccountStatusType	MoneyAccountStatus;
		///�����ʺ�
		TThostFtdcBankAccountType	BankAccount;
		///��������
		TThostFtdcPasswordType	BankPassWord;
		///�������ʺ�
		TThostFtdcBankAccountType	NewBankAccount;
		///����������
		TThostFtdcPasswordType	NewBankPassWord;
		///Ͷ�����ʺ�
		TThostFtdcAccountIDType	AccountID;
		///�ڻ�����
		TThostFtdcPasswordType	Password;
		///�����ʺ�����
		TThostFtdcBankAccTypeType	BankAccType;
		///��װ���
		TThostFtdcInstallIDType	InstallID;
		///��֤�ͻ�֤�������־
		TThostFtdcYesNoIndicatorType	VerifyCertNoFlag;
		///���ִ���
		TThostFtdcCurrencyIDType	CurrencyID;
		///�ڻ���˾���б���
		TThostFtdcBankCodingForFutureType	BrokerIDByBank;
		///���������־
		TThostFtdcPwdFlagType	BankPwdFlag;
		///�ڻ��ʽ�����˶Ա�־
		TThostFtdcPwdFlagType	SecuPwdFlag;
		///����ID
		TThostFtdcTIDType	TID;
		///ժҪ
		TThostFtdcDigestType	Digest;
		///���ͻ�����
		TThostFtdcLongIndividualNameType	LongCustomerName;
	};

	///ת������
	struct CThostFtdcReqTransferField
	{
		///ҵ������
		TThostFtdcTradeCodeType	TradeCode;
		///���д���
		TThostFtdcBankIDType	BankID;
		///���з�֧��������
		TThostFtdcBankBrchIDType	BankBranchID;
		///���̴���
		TThostFtdcBrokerIDType	BrokerID;
		///���̷�֧��������
		TThostFtdcFutureBranchIDType	BrokerBranchID;
		///��������
		TThostFtdcTradeDateType	TradeDate;
		///����ʱ��
		TThostFtdcTradeTimeType	TradeTime;
		///������ˮ��
		TThostFtdcBankSerialType	BankSerial;
		///����ϵͳ���� 
		TThostFtdcTradeDateType	TradingDay;
		///����ƽ̨��Ϣ��ˮ��
		TThostFtdcSerialType	PlateSerial;
		///����Ƭ��־
		TThostFtdcLastFragmentType	LastFragment;
		///�Ự��
		TThostFtdcSessionIDType	SessionID;
		///�ͻ�����
		TThostFtdcIndividualNameType	CustomerName;
		///֤������
		TThostFtdcIdCardTypeType	IdCardType;
		///֤������
		TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
		///�ͻ�����
		TThostFtdcCustTypeType	CustType;
		///�����ʺ�
		TThostFtdcBankAccountType	BankAccount;
		///��������
		TThostFtdcPasswordType	BankPassWord;
		///Ͷ�����ʺ�
		TThostFtdcAccountIDType	AccountID;
		///�ڻ�����
		TThostFtdcPasswordType	Password;
		///��װ���
		TThostFtdcInstallIDType	InstallID;
		///�ڻ���˾��ˮ��
		TThostFtdcFutureSerialType	FutureSerial;
		///�û���ʶ
		TThostFtdcUserIDType	UserID;
		///��֤�ͻ�֤�������־
		TThostFtdcYesNoIndicatorType	VerifyCertNoFlag;
		///���ִ���
		TThostFtdcCurrencyIDType	CurrencyID;
		///ת�ʽ��
		TThostFtdcTradeAmountType	TradeAmount;
		///�ڻ���ȡ���
		TThostFtdcTradeAmountType	FutureFetchAmount;
		///����֧����־
		TThostFtdcFeePayFlagType	FeePayFlag;
		///Ӧ�տͻ�����
		TThostFtdcCustFeeType	CustFee;
		///Ӧ���ڻ���˾����
		TThostFtdcFutureFeeType	BrokerFee;
		///���ͷ������շ�����Ϣ
		TThostFtdcAddInfoType	Message;
		///ժҪ
		TThostFtdcDigestType	Digest;
		///�����ʺ�����
		TThostFtdcBankAccTypeType	BankAccType;
		///������־
		TThostFtdcDeviceIDType	DeviceID;
		///�ڻ���λ�ʺ�����
		TThostFtdcBankAccTypeType	BankSecuAccType;
		///�ڻ���˾���б���
		TThostFtdcBankCodingForFutureType	BrokerIDByBank;
		///�ڻ���λ�ʺ�
		TThostFtdcBankAccountType	BankSecuAcc;
		///���������־
		TThostFtdcPwdFlagType	BankPwdFlag;
		///�ڻ��ʽ�����˶Ա�־
		TThostFtdcPwdFlagType	SecuPwdFlag;
		///���׹�Ա
		TThostFtdcOperNoType	OperNo;
		///������
		TThostFtdcRequestIDType	RequestID;
		///����ID
		TThostFtdcTIDType	TID;
		///ת�˽���״̬
		TThostFtdcTransferStatusType	TransferStatus;
		///���ͻ�����
		TThostFtdcLongIndividualNameType	LongCustomerName;
	};

	///���з��������ʽ�ת�ڻ���Ӧ
	struct CThostFtdcRspTransferField
	{
		///ҵ������
		TThostFtdcTradeCodeType	TradeCode;
		///���д���
		TThostFtdcBankIDType	BankID;
		///���з�֧��������
		TThostFtdcBankBrchIDType	BankBranchID;
		///���̴���
		TThostFtdcBrokerIDType	BrokerID;
		///���̷�֧��������
		TThostFtdcFutureBranchIDType	BrokerBranchID;
		///��������
		TThostFtdcTradeDateType	TradeDate;
		///����ʱ��
		TThostFtdcTradeTimeType	TradeTime;
		///������ˮ��
		TThostFtdcBankSerialType	BankSerial;
		///����ϵͳ���� 
		TThostFtdcTradeDateType	TradingDay;
		///����ƽ̨��Ϣ��ˮ��
		TThostFtdcSerialType	PlateSerial;
		///����Ƭ��־
		TThostFtdcLastFragmentType	LastFragment;
		///�Ự��
		TThostFtdcSessionIDType	SessionID;
		///�ͻ�����
		TThostFtdcIndividualNameType	CustomerName;
		///֤������
		TThostFtdcIdCardTypeType	IdCardType;
		///֤������
		TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
		///�ͻ�����
		TThostFtdcCustTypeType	CustType;
		///�����ʺ�
		TThostFtdcBankAccountType	BankAccount;
		///��������
		TThostFtdcPasswordType	BankPassWord;
		///Ͷ�����ʺ�
		TThostFtdcAccountIDType	AccountID;
		///�ڻ�����
		TThostFtdcPasswordType	Password;
		///��װ���
		TThostFtdcInstallIDType	InstallID;
		///�ڻ���˾��ˮ��
		TThostFtdcFutureSerialType	FutureSerial;
		///�û���ʶ
		TThostFtdcUserIDType	UserID;
		///��֤�ͻ�֤�������־
		TThostFtdcYesNoIndicatorType	VerifyCertNoFlag;
		///���ִ���
		TThostFtdcCurrencyIDType	CurrencyID;
		///ת�ʽ��
		TThostFtdcTradeAmountType	TradeAmount;
		///�ڻ���ȡ���
		TThostFtdcTradeAmountType	FutureFetchAmount;
		///����֧����־
		TThostFtdcFeePayFlagType	FeePayFlag;
		///Ӧ�տͻ�����
		TThostFtdcCustFeeType	CustFee;
		///Ӧ���ڻ���˾����
		TThostFtdcFutureFeeType	BrokerFee;
		///���ͷ������շ�����Ϣ
		TThostFtdcAddInfoType	Message;
		///ժҪ
		TThostFtdcDigestType	Digest;
		///�����ʺ�����
		TThostFtdcBankAccTypeType	BankAccType;
		///������־
		TThostFtdcDeviceIDType	DeviceID;
		///�ڻ���λ�ʺ�����
		TThostFtdcBankAccTypeType	BankSecuAccType;
		///�ڻ���˾���б���
		TThostFtdcBankCodingForFutureType	BrokerIDByBank;
		///�ڻ���λ�ʺ�
		TThostFtdcBankAccountType	BankSecuAcc;
		///���������־
		TThostFtdcPwdFlagType	BankPwdFlag;
		///�ڻ��ʽ�����˶Ա�־
		TThostFtdcPwdFlagType	SecuPwdFlag;
		///���׹�Ա
		TThostFtdcOperNoType	OperNo;
		///������
		TThostFtdcRequestIDType	RequestID;
		///����ID
		TThostFtdcTIDType	TID;
		///ת�˽���״̬
		TThostFtdcTransferStatusType	TransferStatus;
		///�������
		TThostFtdcErrorIDType	ErrorID;
		///������Ϣ
		TThostFtdcErrorMsgType	ErrorMsg;
		///���ͻ�����
		TThostFtdcLongIndividualNameType	LongCustomerName;
	};

	///��������
	struct CThostFtdcReqRepealField
	{
		///����ʱ����
		TThostFtdcRepealTimeIntervalType	RepealTimeInterval;
		///�Ѿ���������
		TThostFtdcRepealedTimesType	RepealedTimes;
		///���г�����־
		TThostFtdcBankRepealFlagType	BankRepealFlag;
		///���̳�����־
		TThostFtdcBrokerRepealFlagType	BrokerRepealFlag;
		///������ƽ̨��ˮ��
		TThostFtdcPlateSerialType	PlateRepealSerial;
		///������������ˮ��
		TThostFtdcBankSerialType	BankRepealSerial;
		///�������ڻ���ˮ��
		TThostFtdcFutureSerialType	FutureRepealSerial;
		///ҵ������
		TThostFtdcTradeCodeType	TradeCode;
		///���д���
		TThostFtdcBankIDType	BankID;
		///���з�֧��������
		TThostFtdcBankBrchIDType	BankBranchID;
		///���̴���
		TThostFtdcBrokerIDType	BrokerID;
		///���̷�֧��������
		TThostFtdcFutureBranchIDType	BrokerBranchID;
		///��������
		TThostFtdcTradeDateType	TradeDate;
		///����ʱ��
		TThostFtdcTradeTimeType	TradeTime;
		///������ˮ��
		TThostFtdcBankSerialType	BankSerial;
		///����ϵͳ���� 
		TThostFtdcTradeDateType	TradingDay;
		///����ƽ̨��Ϣ��ˮ��
		TThostFtdcSerialType	PlateSerial;
		///����Ƭ��־
		TThostFtdcLastFragmentType	LastFragment;
		///�Ự��
		TThostFtdcSessionIDType	SessionID;
		///�ͻ�����
		TThostFtdcIndividualNameType	CustomerName;
		///֤������
		TThostFtdcIdCardTypeType	IdCardType;
		///֤������
		TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
		///�ͻ�����
		TThostFtdcCustTypeType	CustType;
		///�����ʺ�
		TThostFtdcBankAccountType	BankAccount;
		///��������
		TThostFtdcPasswordType	BankPassWord;
		///Ͷ�����ʺ�
		TThostFtdcAccountIDType	AccountID;
		///�ڻ�����
		TThostFtdcPasswordType	Password;
		///��װ���
		TThostFtdcInstallIDType	InstallID;
		///�ڻ���˾��ˮ��
		TThostFtdcFutureSerialType	FutureSerial;
		///�û���ʶ
		TThostFtdcUserIDType	UserID;
		///��֤�ͻ�֤�������־
		TThostFtdcYesNoIndicatorType	VerifyCertNoFlag;
		///���ִ���
		TThostFtdcCurrencyIDType	CurrencyID;
		///ת�ʽ��
		TThostFtdcTradeAmountType	TradeAmount;
		///�ڻ���ȡ���
		TThostFtdcTradeAmountType	FutureFetchAmount;
		///����֧����־
		TThostFtdcFeePayFlagType	FeePayFlag;
		///Ӧ�տͻ�����
		TThostFtdcCustFeeType	CustFee;
		///Ӧ���ڻ���˾����
		TThostFtdcFutureFeeType	BrokerFee;
		///���ͷ������շ�����Ϣ
		TThostFtdcAddInfoType	Message;
		///ժҪ
		TThostFtdcDigestType	Digest;
		///�����ʺ�����
		TThostFtdcBankAccTypeType	BankAccType;
		///������־
		TThostFtdcDeviceIDType	DeviceID;
		///�ڻ���λ�ʺ�����
		TThostFtdcBankAccTypeType	BankSecuAccType;
		///�ڻ���˾���б���
		TThostFtdcBankCodingForFutureType	BrokerIDByBank;
		///�ڻ���λ�ʺ�
		TThostFtdcBankAccountType	BankSecuAcc;
		///���������־
		TThostFtdcPwdFlagType	BankPwdFlag;
		///�ڻ��ʽ�����˶Ա�־
		TThostFtdcPwdFlagType	SecuPwdFlag;
		///���׹�Ա
		TThostFtdcOperNoType	OperNo;
		///������
		TThostFtdcRequestIDType	RequestID;
		///����ID
		TThostFtdcTIDType	TID;
		///ת�˽���״̬
		TThostFtdcTransferStatusType	TransferStatus;
		///���ͻ�����
		TThostFtdcLongIndividualNameType	LongCustomerName;
	};

	///������Ӧ
	struct CThostFtdcRspRepealField
	{
		///����ʱ����
		TThostFtdcRepealTimeIntervalType	RepealTimeInterval;
		///�Ѿ���������
		TThostFtdcRepealedTimesType	RepealedTimes;
		///���г�����־
		TThostFtdcBankRepealFlagType	BankRepealFlag;
		///���̳�����־
		TThostFtdcBrokerRepealFlagType	BrokerRepealFlag;
		///������ƽ̨��ˮ��
		TThostFtdcPlateSerialType	PlateRepealSerial;
		///������������ˮ��
		TThostFtdcBankSerialType	BankRepealSerial;
		///�������ڻ���ˮ��
		TThostFtdcFutureSerialType	FutureRepealSerial;
		///ҵ������
		TThostFtdcTradeCodeType	TradeCode;
		///���д���
		TThostFtdcBankIDType	BankID;
		///���з�֧��������
		TThostFtdcBankBrchIDType	BankBranchID;
		///���̴���
		TThostFtdcBrokerIDType	BrokerID;
		///���̷�֧��������
		TThostFtdcFutureBranchIDType	BrokerBranchID;
		///��������
		TThostFtdcTradeDateType	TradeDate;
		///����ʱ��
		TThostFtdcTradeTimeType	TradeTime;
		///������ˮ��
		TThostFtdcBankSerialType	BankSerial;
		///����ϵͳ���� 
		TThostFtdcTradeDateType	TradingDay;
		///����ƽ̨��Ϣ��ˮ��
		TThostFtdcSerialType	PlateSerial;
		///����Ƭ��־
		TThostFtdcLastFragmentType	LastFragment;
		///�Ự��
		TThostFtdcSessionIDType	SessionID;
		///�ͻ�����
		TThostFtdcIndividualNameType	CustomerName;
		///֤������
		TThostFtdcIdCardTypeType	IdCardType;
		///֤������
		TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
		///�ͻ�����
		TThostFtdcCustTypeType	CustType;
		///�����ʺ�
		TThostFtdcBankAccountType	BankAccount;
		///��������
		TThostFtdcPasswordType	BankPassWord;
		///Ͷ�����ʺ�
		TThostFtdcAccountIDType	AccountID;
		///�ڻ�����
		TThostFtdcPasswordType	Password;
		///��װ���
		TThostFtdcInstallIDType	InstallID;
		///�ڻ���˾��ˮ��
		TThostFtdcFutureSerialType	FutureSerial;
		///�û���ʶ
		TThostFtdcUserIDType	UserID;
		///��֤�ͻ�֤�������־
		TThostFtdcYesNoIndicatorType	VerifyCertNoFlag;
		///���ִ���
		TThostFtdcCurrencyIDType	CurrencyID;
		///ת�ʽ��
		TThostFtdcTradeAmountType	TradeAmount;
		///�ڻ���ȡ���
		TThostFtdcTradeAmountType	FutureFetchAmount;
		///����֧����־
		TThostFtdcFeePayFlagType	FeePayFlag;
		///Ӧ�տͻ�����
		TThostFtdcCustFeeType	CustFee;
		///Ӧ���ڻ���˾����
		TThostFtdcFutureFeeType	BrokerFee;
		///���ͷ������շ�����Ϣ
		TThostFtdcAddInfoType	Message;
		///ժҪ
		TThostFtdcDigestType	Digest;
		///�����ʺ�����
		TThostFtdcBankAccTypeType	BankAccType;
		///������־
		TThostFtdcDeviceIDType	DeviceID;
		///�ڻ���λ�ʺ�����
		TThostFtdcBankAccTypeType	BankSecuAccType;
		///�ڻ���˾���б���
		TThostFtdcBankCodingForFutureType	BrokerIDByBank;
		///�ڻ���λ�ʺ�
		TThostFtdcBankAccountType	BankSecuAcc;
		///���������־
		TThostFtdcPwdFlagType	BankPwdFlag;
		///�ڻ��ʽ�����˶Ա�־
		TThostFtdcPwdFlagType	SecuPwdFlag;
		///���׹�Ա
		TThostFtdcOperNoType	OperNo;
		///������
		TThostFtdcRequestIDType	RequestID;
		///����ID
		TThostFtdcTIDType	TID;
		///ת�˽���״̬
		TThostFtdcTransferStatusType	TransferStatus;
		///�������
		TThostFtdcErrorIDType	ErrorID;
		///������Ϣ
		TThostFtdcErrorMsgType	ErrorMsg;
		///���ͻ�����
		TThostFtdcLongIndividualNameType	LongCustomerName;
	};

	///��ѯ�˻���Ϣ����
	struct CThostFtdcReqQueryAccountField
	{
		///ҵ������
		TThostFtdcTradeCodeType	TradeCode;
		///���д���
		TThostFtdcBankIDType	BankID;
		///���з�֧��������
		TThostFtdcBankBrchIDType	BankBranchID;
		///���̴���
		TThostFtdcBrokerIDType	BrokerID;
		///���̷�֧��������
		TThostFtdcFutureBranchIDType	BrokerBranchID;
		///��������
		TThostFtdcTradeDateType	TradeDate;
		///����ʱ��
		TThostFtdcTradeTimeType	TradeTime;
		///������ˮ��
		TThostFtdcBankSerialType	BankSerial;
		///����ϵͳ���� 
		TThostFtdcTradeDateType	TradingDay;
		///����ƽ̨��Ϣ��ˮ��
		TThostFtdcSerialType	PlateSerial;
		///����Ƭ��־
		TThostFtdcLastFragmentType	LastFragment;
		///�Ự��
		TThostFtdcSessionIDType	SessionID;
		///�ͻ�����
		TThostFtdcIndividualNameType	CustomerName;
		///֤������
		TThostFtdcIdCardTypeType	IdCardType;
		///֤������
		TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
		///�ͻ�����
		TThostFtdcCustTypeType	CustType;
		///�����ʺ�
		TThostFtdcBankAccountType	BankAccount;
		///��������
		TThostFtdcPasswordType	BankPassWord;
		///Ͷ�����ʺ�
		TThostFtdcAccountIDType	AccountID;
		///�ڻ�����
		TThostFtdcPasswordType	Password;
		///�ڻ���˾��ˮ��
		TThostFtdcFutureSerialType	FutureSerial;
		///��װ���
		TThostFtdcInstallIDType	InstallID;
		///�û���ʶ
		TThostFtdcUserIDType	UserID;
		///��֤�ͻ�֤�������־
		TThostFtdcYesNoIndicatorType	VerifyCertNoFlag;
		///���ִ���
		TThostFtdcCurrencyIDType	CurrencyID;
		///ժҪ
		TThostFtdcDigestType	Digest;
		///�����ʺ�����
		TThostFtdcBankAccTypeType	BankAccType;
		///������־
		TThostFtdcDeviceIDType	DeviceID;
		///�ڻ���λ�ʺ�����
		TThostFtdcBankAccTypeType	BankSecuAccType;
		///�ڻ���˾���б���
		TThostFtdcBankCodingForFutureType	BrokerIDByBank;
		///�ڻ���λ�ʺ�
		TThostFtdcBankAccountType	BankSecuAcc;
		///���������־
		TThostFtdcPwdFlagType	BankPwdFlag;
		///�ڻ��ʽ�����˶Ա�־
		TThostFtdcPwdFlagType	SecuPwdFlag;
		///���׹�Ա
		TThostFtdcOperNoType	OperNo;
		///������
		TThostFtdcRequestIDType	RequestID;
		///����ID
		TThostFtdcTIDType	TID;
		///���ͻ�����
		TThostFtdcLongIndividualNameType	LongCustomerName;
	};

	///��ѯ�˻���Ϣ��Ӧ
	struct CThostFtdcRspQueryAccountField
	{
		///ҵ������
		TThostFtdcTradeCodeType	TradeCode;
		///���д���
		TThostFtdcBankIDType	BankID;
		///���з�֧��������
		TThostFtdcBankBrchIDType	BankBranchID;
		///���̴���
		TThostFtdcBrokerIDType	BrokerID;
		///���̷�֧��������
		TThostFtdcFutureBranchIDType	BrokerBranchID;
		///��������
		TThostFtdcTradeDateType	TradeDate;
		///����ʱ��
		TThostFtdcTradeTimeType	TradeTime;
		///������ˮ��
		TThostFtdcBankSerialType	BankSerial;
		///����ϵͳ���� 
		TThostFtdcTradeDateType	TradingDay;
		///����ƽ̨��Ϣ��ˮ��
		TThostFtdcSerialType	PlateSerial;
		///����Ƭ��־
		TThostFtdcLastFragmentType	LastFragment;
		///�Ự��
		TThostFtdcSessionIDType	SessionID;
		///�ͻ�����
		TThostFtdcIndividualNameType	CustomerName;
		///֤������
		TThostFtdcIdCardTypeType	IdCardType;
		///֤������
		TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
		///�ͻ�����
		TThostFtdcCustTypeType	CustType;
		///�����ʺ�
		TThostFtdcBankAccountType	BankAccount;
		///��������
		TThostFtdcPasswordType	BankPassWord;
		///Ͷ�����ʺ�
		TThostFtdcAccountIDType	AccountID;
		///�ڻ�����
		TThostFtdcPasswordType	Password;
		///�ڻ���˾��ˮ��
		TThostFtdcFutureSerialType	FutureSerial;
		///��װ���
		TThostFtdcInstallIDType	InstallID;
		///�û���ʶ
		TThostFtdcUserIDType	UserID;
		///��֤�ͻ�֤�������־
		TThostFtdcYesNoIndicatorType	VerifyCertNoFlag;
		///���ִ���
		TThostFtdcCurrencyIDType	CurrencyID;
		///ժҪ
		TThostFtdcDigestType	Digest;
		///�����ʺ�����
		TThostFtdcBankAccTypeType	BankAccType;
		///������־
		TThostFtdcDeviceIDType	DeviceID;
		///�ڻ���λ�ʺ�����
		TThostFtdcBankAccTypeType	BankSecuAccType;
		///�ڻ���˾���б���
		TThostFtdcBankCodingForFutureType	BrokerIDByBank;
		///�ڻ���λ�ʺ�
		TThostFtdcBankAccountType	BankSecuAcc;
		///���������־
		TThostFtdcPwdFlagType	BankPwdFlag;
		///�ڻ��ʽ�����˶Ա�־
		TThostFtdcPwdFlagType	SecuPwdFlag;
		///���׹�Ա
		TThostFtdcOperNoType	OperNo;
		///������
		TThostFtdcRequestIDType	RequestID;
		///����ID
		TThostFtdcTIDType	TID;
		///���п��ý��
		TThostFtdcTradeAmountType	BankUseAmount;
		///���п�ȡ���
		TThostFtdcTradeAmountType	BankFetchAmount;
		///���ͻ�����
		TThostFtdcLongIndividualNameType	LongCustomerName;
	};

	///����ǩ��ǩ��
	struct CThostFtdcFutureSignIOField
	{
		///ҵ������
		TThostFtdcTradeCodeType	TradeCode;
		///���д���
		TThostFtdcBankIDType	BankID;
		///���з�֧��������
		TThostFtdcBankBrchIDType	BankBranchID;
		///���̴���
		TThostFtdcBrokerIDType	BrokerID;
		///���̷�֧��������
		TThostFtdcFutureBranchIDType	BrokerBranchID;
		///��������
		TThostFtdcTradeDateType	TradeDate;
		///����ʱ��
		TThostFtdcTradeTimeType	TradeTime;
		///������ˮ��
		TThostFtdcBankSerialType	BankSerial;
		///����ϵͳ���� 
		TThostFtdcTradeDateType	TradingDay;
		///����ƽ̨��Ϣ��ˮ��
		TThostFtdcSerialType	PlateSerial;
		///����Ƭ��־
		TThostFtdcLastFragmentType	LastFragment;
		///�Ự��
		TThostFtdcSessionIDType	SessionID;
		///��װ���
		TThostFtdcInstallIDType	InstallID;
		///�û���ʶ
		TThostFtdcUserIDType	UserID;
		///ժҪ
		TThostFtdcDigestType	Digest;
		///���ִ���
		TThostFtdcCurrencyIDType	CurrencyID;
		///������־
		TThostFtdcDeviceIDType	DeviceID;
		///�ڻ���˾���б���
		TThostFtdcBankCodingForFutureType	BrokerIDByBank;
		///���׹�Ա
		TThostFtdcOperNoType	OperNo;
		///������
		TThostFtdcRequestIDType	RequestID;
		///����ID
		TThostFtdcTIDType	TID;
	};

	///����ǩ����Ӧ
	struct CThostFtdcRspFutureSignInField
	{
		///ҵ������
		TThostFtdcTradeCodeType	TradeCode;
		///���д���
		TThostFtdcBankIDType	BankID;
		///���з�֧��������
		TThostFtdcBankBrchIDType	BankBranchID;
		///���̴���
		TThostFtdcBrokerIDType	BrokerID;
		///���̷�֧��������
		TThostFtdcFutureBranchIDType	BrokerBranchID;
		///��������
		TThostFtdcTradeDateType	TradeDate;
		///����ʱ��
		TThostFtdcTradeTimeType	TradeTime;
		///������ˮ��
		TThostFtdcBankSerialType	BankSerial;
		///����ϵͳ���� 
		TThostFtdcTradeDateType	TradingDay;
		///����ƽ̨��Ϣ��ˮ��
		TThostFtdcSerialType	PlateSerial;
		///����Ƭ��־
		TThostFtdcLastFragmentType	LastFragment;
		///�Ự��
		TThostFtdcSessionIDType	SessionID;
		///��װ���
		TThostFtdcInstallIDType	InstallID;
		///�û���ʶ
		TThostFtdcUserIDType	UserID;
		///ժҪ
		TThostFtdcDigestType	Digest;
		///���ִ���
		TThostFtdcCurrencyIDType	CurrencyID;
		///������־
		TThostFtdcDeviceIDType	DeviceID;
		///�ڻ���˾���б���
		TThostFtdcBankCodingForFutureType	BrokerIDByBank;
		///���׹�Ա
		TThostFtdcOperNoType	OperNo;
		///������
		TThostFtdcRequestIDType	RequestID;
		///����ID
		TThostFtdcTIDType	TID;
		///�������
		TThostFtdcErrorIDType	ErrorID;
		///������Ϣ
		TThostFtdcErrorMsgType	ErrorMsg;
		///PIN��Կ
		TThostFtdcPasswordKeyType	PinKey;
		///MAC��Կ
		TThostFtdcPasswordKeyType	MacKey;
	};

	///����ǩ������
	struct CThostFtdcReqFutureSignOutField
	{
		///ҵ������
		TThostFtdcTradeCodeType	TradeCode;
		///���д���
		TThostFtdcBankIDType	BankID;
		///���з�֧��������
		TThostFtdcBankBrchIDType	BankBranchID;
		///���̴���
		TThostFtdcBrokerIDType	BrokerID;
		///���̷�֧��������
		TThostFtdcFutureBranchIDType	BrokerBranchID;
		///��������
		TThostFtdcTradeDateType	TradeDate;
		///����ʱ��
		TThostFtdcTradeTimeType	TradeTime;
		///������ˮ��
		TThostFtdcBankSerialType	BankSerial;
		///����ϵͳ���� 
		TThostFtdcTradeDateType	TradingDay;
		///����ƽ̨��Ϣ��ˮ��
		TThostFtdcSerialType	PlateSerial;
		///����Ƭ��־
		TThostFtdcLastFragmentType	LastFragment;
		///�Ự��
		TThostFtdcSessionIDType	SessionID;
		///��װ���
		TThostFtdcInstallIDType	InstallID;
		///�û���ʶ
		TThostFtdcUserIDType	UserID;
		///ժҪ
		TThostFtdcDigestType	Digest;
		///���ִ���
		TThostFtdcCurrencyIDType	CurrencyID;
		///������־
		TThostFtdcDeviceIDType	DeviceID;
		///�ڻ���˾���б���
		TThostFtdcBankCodingForFutureType	BrokerIDByBank;
		///���׹�Ա
		TThostFtdcOperNoType	OperNo;
		///������
		TThostFtdcRequestIDType	RequestID;
		///����ID
		TThostFtdcTIDType	TID;
	};

	///����ǩ����Ӧ
	struct CThostFtdcRspFutureSignOutField
	{
		///ҵ������
		TThostFtdcTradeCodeType	TradeCode;
		///���д���
		TThostFtdcBankIDType	BankID;
		///���з�֧��������
		TThostFtdcBankBrchIDType	BankBranchID;
		///���̴���
		TThostFtdcBrokerIDType	BrokerID;
		///���̷�֧��������
		TThostFtdcFutureBranchIDType	BrokerBranchID;
		///��������
		TThostFtdcTradeDateType	TradeDate;
		///����ʱ��
		TThostFtdcTradeTimeType	TradeTime;
		///������ˮ��
		TThostFtdcBankSerialType	BankSerial;
		///����ϵͳ���� 
		TThostFtdcTradeDateType	TradingDay;
		///����ƽ̨��Ϣ��ˮ��
		TThostFtdcSerialType	PlateSerial;
		///����Ƭ��־
		TThostFtdcLastFragmentType	LastFragment;
		///�Ự��
		TThostFtdcSessionIDType	SessionID;
		///��װ���
		TThostFtdcInstallIDType	InstallID;
		///�û���ʶ
		TThostFtdcUserIDType	UserID;
		///ժҪ
		TThostFtdcDigestType	Digest;
		///���ִ���
		TThostFtdcCurrencyIDType	CurrencyID;
		///������־
		TThostFtdcDeviceIDType	DeviceID;
		///�ڻ���˾���б���
		TThostFtdcBankCodingForFutureType	BrokerIDByBank;
		///���׹�Ա
		TThostFtdcOperNoType	OperNo;
		///������
		TThostFtdcRequestIDType	RequestID;
		///����ID
		TThostFtdcTIDType	TID;
		///�������
		TThostFtdcErrorIDType	ErrorID;
		///������Ϣ
		TThostFtdcErrorMsgType	ErrorMsg;
	};

	///��ѯָ����ˮ�ŵĽ��׽������
	struct CThostFtdcReqQueryTradeResultBySerialField
	{
		///ҵ������
		TThostFtdcTradeCodeType	TradeCode;
		///���д���
		TThostFtdcBankIDType	BankID;
		///���з�֧��������
		TThostFtdcBankBrchIDType	BankBranchID;
		///���̴���
		TThostFtdcBrokerIDType	BrokerID;
		///���̷�֧��������
		TThostFtdcFutureBranchIDType	BrokerBranchID;
		///��������
		TThostFtdcTradeDateType	TradeDate;
		///����ʱ��
		TThostFtdcTradeTimeType	TradeTime;
		///������ˮ��
		TThostFtdcBankSerialType	BankSerial;
		///����ϵͳ���� 
		TThostFtdcTradeDateType	TradingDay;
		///����ƽ̨��Ϣ��ˮ��
		TThostFtdcSerialType	PlateSerial;
		///����Ƭ��־
		TThostFtdcLastFragmentType	LastFragment;
		///�Ự��
		TThostFtdcSessionIDType	SessionID;
		///��ˮ��
		TThostFtdcSerialType	Reference;
		///����ˮ�ŷ����ߵĻ�������
		TThostFtdcInstitutionTypeType	RefrenceIssureType;
		///����ˮ�ŷ����߻�������
		TThostFtdcOrganCodeType	RefrenceIssure;
		///�ͻ�����
		TThostFtdcIndividualNameType	CustomerName;
		///֤������
		TThostFtdcIdCardTypeType	IdCardType;
		///֤������
		TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
		///�ͻ�����
		TThostFtdcCustTypeType	CustType;
		///�����ʺ�
		TThostFtdcBankAccountType	BankAccount;
		///��������
		TThostFtdcPasswordType	BankPassWord;
		///Ͷ�����ʺ�
		TThostFtdcAccountIDType	AccountID;
		///�ڻ�����
		TThostFtdcPasswordType	Password;
		///���ִ���
		TThostFtdcCurrencyIDType	CurrencyID;
		///ת�ʽ��
		TThostFtdcTradeAmountType	TradeAmount;
		///ժҪ
		TThostFtdcDigestType	Digest;
		///���ͻ�����
		TThostFtdcLongIndividualNameType	LongCustomerName;
	};

	///��ѯָ����ˮ�ŵĽ��׽����Ӧ
	struct CThostFtdcRspQueryTradeResultBySerialField
	{
		///ҵ������
		TThostFtdcTradeCodeType	TradeCode;
		///���д���
		TThostFtdcBankIDType	BankID;
		///���з�֧��������
		TThostFtdcBankBrchIDType	BankBranchID;
		///���̴���
		TThostFtdcBrokerIDType	BrokerID;
		///���̷�֧��������
		TThostFtdcFutureBranchIDType	BrokerBranchID;
		///��������
		TThostFtdcTradeDateType	TradeDate;
		///����ʱ��
		TThostFtdcTradeTimeType	TradeTime;
		///������ˮ��
		TThostFtdcBankSerialType	BankSerial;
		///����ϵͳ���� 
		TThostFtdcTradeDateType	TradingDay;
		///����ƽ̨��Ϣ��ˮ��
		TThostFtdcSerialType	PlateSerial;
		///����Ƭ��־
		TThostFtdcLastFragmentType	LastFragment;
		///�Ự��
		TThostFtdcSessionIDType	SessionID;
		///�������
		TThostFtdcErrorIDType	ErrorID;
		///������Ϣ
		TThostFtdcErrorMsgType	ErrorMsg;
		///��ˮ��
		TThostFtdcSerialType	Reference;
		///����ˮ�ŷ����ߵĻ�������
		TThostFtdcInstitutionTypeType	RefrenceIssureType;
		///����ˮ�ŷ����߻�������
		TThostFtdcOrganCodeType	RefrenceIssure;
		///ԭʼ���ش���
		TThostFtdcReturnCodeType	OriginReturnCode;
		///ԭʼ����������
		TThostFtdcDescrInfoForReturnCodeType	OriginDescrInfoForReturnCode;
		///�����ʺ�
		TThostFtdcBankAccountType	BankAccount;
		///��������
		TThostFtdcPasswordType	BankPassWord;
		///Ͷ�����ʺ�
		TThostFtdcAccountIDType	AccountID;
		///�ڻ�����
		TThostFtdcPasswordType	Password;
		///���ִ���
		TThostFtdcCurrencyIDType	CurrencyID;
		///ת�ʽ��
		TThostFtdcTradeAmountType	TradeAmount;
		///ժҪ
		TThostFtdcDigestType	Digest;
	};

	///�����ļ���������
	struct CThostFtdcReqDayEndFileReadyField
	{
		///ҵ������
		TThostFtdcTradeCodeType	TradeCode;
		///���д���
		TThostFtdcBankIDType	BankID;
		///���з�֧��������
		TThostFtdcBankBrchIDType	BankBranchID;
		///���̴���
		TThostFtdcBrokerIDType	BrokerID;
		///���̷�֧��������
		TThostFtdcFutureBranchIDType	BrokerBranchID;
		///��������
		TThostFtdcTradeDateType	TradeDate;
		///����ʱ��
		TThostFtdcTradeTimeType	TradeTime;
		///������ˮ��
		TThostFtdcBankSerialType	BankSerial;
		///����ϵͳ���� 
		TThostFtdcTradeDateType	TradingDay;
		///����ƽ̨��Ϣ��ˮ��
		TThostFtdcSerialType	PlateSerial;
		///����Ƭ��־
		TThostFtdcLastFragmentType	LastFragment;
		///�Ự��
		TThostFtdcSessionIDType	SessionID;
		///�ļ�ҵ����
		TThostFtdcFileBusinessCodeType	FileBusinessCode;
		///ժҪ
		TThostFtdcDigestType	Digest;
	};

	///���ؽ��
	struct CThostFtdcReturnResultField
	{
		///���ش���
		TThostFtdcReturnCodeType	ReturnCode;
		///����������
		TThostFtdcDescrInfoForReturnCodeType	DescrInfoForReturnCode;
	};

	///��֤�ڻ��ʽ�����
	struct CThostFtdcVerifyFuturePasswordField
	{
		///ҵ������
		TThostFtdcTradeCodeType	TradeCode;
		///���д���
		TThostFtdcBankIDType	BankID;
		///���з�֧��������
		TThostFtdcBankBrchIDType	BankBranchID;
		///���̴���
		TThostFtdcBrokerIDType	BrokerID;
		///���̷�֧��������
		TThostFtdcFutureBranchIDType	BrokerBranchID;
		///��������
		TThostFtdcTradeDateType	TradeDate;
		///����ʱ��
		TThostFtdcTradeTimeType	TradeTime;
		///������ˮ��
		TThostFtdcBankSerialType	BankSerial;
		///����ϵͳ���� 
		TThostFtdcTradeDateType	TradingDay;
		///����ƽ̨��Ϣ��ˮ��
		TThostFtdcSerialType	PlateSerial;
		///����Ƭ��־
		TThostFtdcLastFragmentType	LastFragment;
		///�Ự��
		TThostFtdcSessionIDType	SessionID;
		///Ͷ�����ʺ�
		TThostFtdcAccountIDType	AccountID;
		///�ڻ�����
		TThostFtdcPasswordType	Password;
		///�����ʺ�
		TThostFtdcBankAccountType	BankAccount;
		///��������
		TThostFtdcPasswordType	BankPassWord;
		///��װ���
		TThostFtdcInstallIDType	InstallID;
		///����ID
		TThostFtdcTIDType	TID;
		///���ִ���
		TThostFtdcCurrencyIDType	CurrencyID;
	};

	///��֤�ͻ���Ϣ
	struct CThostFtdcVerifyCustInfoField
	{
		///�ͻ�����
		TThostFtdcIndividualNameType	CustomerName;
		///֤������
		TThostFtdcIdCardTypeType	IdCardType;
		///֤������
		TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
		///�ͻ�����
		TThostFtdcCustTypeType	CustType;
		///���ͻ�����
		TThostFtdcLongIndividualNameType	LongCustomerName;
	};

	///��֤�ڻ��ʽ�����Ϳͻ���Ϣ
	struct CThostFtdcVerifyFuturePasswordAndCustInfoField
	{
		///�ͻ�����
		TThostFtdcIndividualNameType	CustomerName;
		///֤������
		TThostFtdcIdCardTypeType	IdCardType;
		///֤������
		TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
		///�ͻ�����
		TThostFtdcCustTypeType	CustType;
		///Ͷ�����ʺ�
		TThostFtdcAccountIDType	AccountID;
		///�ڻ�����
		TThostFtdcPasswordType	Password;
		///���ִ���
		TThostFtdcCurrencyIDType	CurrencyID;
		///���ͻ�����
		TThostFtdcLongIndividualNameType	LongCustomerName;
	};

	///��֤�ڻ��ʽ�����Ϳͻ���Ϣ
	struct CThostFtdcDepositResultInformField
	{
		///�������ˮ�ţ�����ˮ��Ϊ���ڱ��̷��ص���ˮ��
		TThostFtdcDepositSeqNoType	DepositSeqNo;
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///�����
		TThostFtdcMoneyType	Deposit;
		///������
		TThostFtdcRequestIDType	RequestID;
		///���ش���
		TThostFtdcReturnCodeType	ReturnCode;
		///����������
		TThostFtdcDescrInfoForReturnCodeType	DescrInfoForReturnCode;
	};

	///���׺��������ڱ��̷�����Կͬ������
	struct CThostFtdcReqSyncKeyField
	{
		///ҵ������
		TThostFtdcTradeCodeType	TradeCode;
		///���д���
		TThostFtdcBankIDType	BankID;
		///���з�֧��������
		TThostFtdcBankBrchIDType	BankBranchID;
		///���̴���
		TThostFtdcBrokerIDType	BrokerID;
		///���̷�֧��������
		TThostFtdcFutureBranchIDType	BrokerBranchID;
		///��������
		TThostFtdcTradeDateType	TradeDate;
		///����ʱ��
		TThostFtdcTradeTimeType	TradeTime;
		///������ˮ��
		TThostFtdcBankSerialType	BankSerial;
		///����ϵͳ���� 
		TThostFtdcTradeDateType	TradingDay;
		///����ƽ̨��Ϣ��ˮ��
		TThostFtdcSerialType	PlateSerial;
		///����Ƭ��־
		TThostFtdcLastFragmentType	LastFragment;
		///�Ự��
		TThostFtdcSessionIDType	SessionID;
		///��װ���
		TThostFtdcInstallIDType	InstallID;
		///�û���ʶ
		TThostFtdcUserIDType	UserID;
		///���׺��ĸ����ڱ��̵���Ϣ
		TThostFtdcAddInfoType	Message;
		///������־
		TThostFtdcDeviceIDType	DeviceID;
		///�ڻ���˾���б���
		TThostFtdcBankCodingForFutureType	BrokerIDByBank;
		///���׹�Ա
		TThostFtdcOperNoType	OperNo;
		///������
		TThostFtdcRequestIDType	RequestID;
		///����ID
		TThostFtdcTIDType	TID;
	};

	///���׺��������ڱ��̷�����Կͬ����Ӧ
	struct CThostFtdcRspSyncKeyField
	{
		///ҵ������
		TThostFtdcTradeCodeType	TradeCode;
		///���д���
		TThostFtdcBankIDType	BankID;
		///���з�֧��������
		TThostFtdcBankBrchIDType	BankBranchID;
		///���̴���
		TThostFtdcBrokerIDType	BrokerID;
		///���̷�֧��������
		TThostFtdcFutureBranchIDType	BrokerBranchID;
		///��������
		TThostFtdcTradeDateType	TradeDate;
		///����ʱ��
		TThostFtdcTradeTimeType	TradeTime;
		///������ˮ��
		TThostFtdcBankSerialType	BankSerial;
		///����ϵͳ���� 
		TThostFtdcTradeDateType	TradingDay;
		///����ƽ̨��Ϣ��ˮ��
		TThostFtdcSerialType	PlateSerial;
		///����Ƭ��־
		TThostFtdcLastFragmentType	LastFragment;
		///�Ự��
		TThostFtdcSessionIDType	SessionID;
		///��װ���
		TThostFtdcInstallIDType	InstallID;
		///�û���ʶ
		TThostFtdcUserIDType	UserID;
		///���׺��ĸ����ڱ��̵���Ϣ
		TThostFtdcAddInfoType	Message;
		///������־
		TThostFtdcDeviceIDType	DeviceID;
		///�ڻ���˾���б���
		TThostFtdcBankCodingForFutureType	BrokerIDByBank;
		///���׹�Ա
		TThostFtdcOperNoType	OperNo;
		///������
		TThostFtdcRequestIDType	RequestID;
		///����ID
		TThostFtdcTIDType	TID;
		///�������
		TThostFtdcErrorIDType	ErrorID;
		///������Ϣ
		TThostFtdcErrorMsgType	ErrorMsg;
	};

	///��ѯ�˻���Ϣ֪ͨ
	struct CThostFtdcNotifyQueryAccountField
	{
		///ҵ������
		TThostFtdcTradeCodeType	TradeCode;
		///���д���
		TThostFtdcBankIDType	BankID;
		///���з�֧��������
		TThostFtdcBankBrchIDType	BankBranchID;
		///���̴���
		TThostFtdcBrokerIDType	BrokerID;
		///���̷�֧��������
		TThostFtdcFutureBranchIDType	BrokerBranchID;
		///��������
		TThostFtdcTradeDateType	TradeDate;
		///����ʱ��
		TThostFtdcTradeTimeType	TradeTime;
		///������ˮ��
		TThostFtdcBankSerialType	BankSerial;
		///����ϵͳ���� 
		TThostFtdcTradeDateType	TradingDay;
		///����ƽ̨��Ϣ��ˮ��
		TThostFtdcSerialType	PlateSerial;
		///����Ƭ��־
		TThostFtdcLastFragmentType	LastFragment;
		///�Ự��
		TThostFtdcSessionIDType	SessionID;
		///�ͻ�����
		TThostFtdcIndividualNameType	CustomerName;
		///֤������
		TThostFtdcIdCardTypeType	IdCardType;
		///֤������
		TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
		///�ͻ�����
		TThostFtdcCustTypeType	CustType;
		///�����ʺ�
		TThostFtdcBankAccountType	BankAccount;
		///��������
		TThostFtdcPasswordType	BankPassWord;
		///Ͷ�����ʺ�
		TThostFtdcAccountIDType	AccountID;
		///�ڻ�����
		TThostFtdcPasswordType	Password;
		///�ڻ���˾��ˮ��
		TThostFtdcFutureSerialType	FutureSerial;
		///��װ���
		TThostFtdcInstallIDType	InstallID;
		///�û���ʶ
		TThostFtdcUserIDType	UserID;
		///��֤�ͻ�֤�������־
		TThostFtdcYesNoIndicatorType	VerifyCertNoFlag;
		///���ִ���
		TThostFtdcCurrencyIDType	CurrencyID;
		///ժҪ
		TThostFtdcDigestType	Digest;
		///�����ʺ�����
		TThostFtdcBankAccTypeType	BankAccType;
		///������־
		TThostFtdcDeviceIDType	DeviceID;
		///�ڻ���λ�ʺ�����
		TThostFtdcBankAccTypeType	BankSecuAccType;
		///�ڻ���˾���б���
		TThostFtdcBankCodingForFutureType	BrokerIDByBank;
		///�ڻ���λ�ʺ�
		TThostFtdcBankAccountType	BankSecuAcc;
		///���������־
		TThostFtdcPwdFlagType	BankPwdFlag;
		///�ڻ��ʽ�����˶Ա�־
		TThostFtdcPwdFlagType	SecuPwdFlag;
		///���׹�Ա
		TThostFtdcOperNoType	OperNo;
		///������
		TThostFtdcRequestIDType	RequestID;
		///����ID
		TThostFtdcTIDType	TID;
		///���п��ý��
		TThostFtdcTradeAmountType	BankUseAmount;
		///���п�ȡ���
		TThostFtdcTradeAmountType	BankFetchAmount;
		///�������
		TThostFtdcErrorIDType	ErrorID;
		///������Ϣ
		TThostFtdcErrorMsgType	ErrorMsg;
		///���ͻ�����
		TThostFtdcLongIndividualNameType	LongCustomerName;
	};

	///����ת�˽�����ˮ��
	struct CThostFtdcTransferSerialField
	{
		///ƽ̨��ˮ��
		TThostFtdcPlateSerialType	PlateSerial;
		///���׷�������
		TThostFtdcTradeDateType	TradeDate;
		///��������
		TThostFtdcDateType	TradingDay;
		///����ʱ��
		TThostFtdcTradeTimeType	TradeTime;
		///���״���
		TThostFtdcTradeCodeType	TradeCode;
		///�Ự���
		TThostFtdcSessionIDType	SessionID;
		///���б���
		TThostFtdcBankIDType	BankID;
		///���з�֧��������
		TThostFtdcBankBrchIDType	BankBranchID;
		///�����ʺ�����
		TThostFtdcBankAccTypeType	BankAccType;
		///�����ʺ�
		TThostFtdcBankAccountType	BankAccount;
		///������ˮ��
		TThostFtdcBankSerialType	BankSerial;
		///�ڻ���˾����
		TThostFtdcBrokerIDType	BrokerID;
		///���̷�֧��������
		TThostFtdcFutureBranchIDType	BrokerBranchID;
		///�ڻ���˾�ʺ�����
		TThostFtdcFutureAccTypeType	FutureAccType;
		///Ͷ�����ʺ�
		TThostFtdcAccountIDType	AccountID;
		///Ͷ���ߴ���
		TThostFtdcInvestorIDType	InvestorID;
		///�ڻ���˾��ˮ��
		TThostFtdcFutureSerialType	FutureSerial;
		///֤������
		TThostFtdcIdCardTypeType	IdCardType;
		///֤������
		TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
		///���ִ���
		TThostFtdcCurrencyIDType	CurrencyID;
		///���׽��
		TThostFtdcTradeAmountType	TradeAmount;
		///Ӧ�տͻ�����
		TThostFtdcCustFeeType	CustFee;
		///Ӧ���ڻ���˾����
		TThostFtdcFutureFeeType	BrokerFee;
		///��Ч��־
		TThostFtdcAvailabilityFlagType	AvailabilityFlag;
		///����Ա
		TThostFtdcOperatorCodeType	OperatorCode;
		///�������ʺ�
		TThostFtdcBankAccountType	BankNewAccount;
		///�������
		TThostFtdcErrorIDType	ErrorID;
		///������Ϣ
		TThostFtdcErrorMsgType	ErrorMsg;
	};

	///�����ѯת����ˮ
	struct CThostFtdcQryTransferSerialField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ�����ʺ�
		TThostFtdcAccountIDType	AccountID;
		///���б���
		TThostFtdcBankIDType	BankID;
		///���ִ���
		TThostFtdcCurrencyIDType	CurrencyID;
	};

	///����ǩ��֪ͨ
	struct CThostFtdcNotifyFutureSignInField
	{
		///ҵ������
		TThostFtdcTradeCodeType	TradeCode;
		///���д���
		TThostFtdcBankIDType	BankID;
		///���з�֧��������
		TThostFtdcBankBrchIDType	BankBranchID;
		///���̴���
		TThostFtdcBrokerIDType	BrokerID;
		///���̷�֧��������
		TThostFtdcFutureBranchIDType	BrokerBranchID;
		///��������
		TThostFtdcTradeDateType	TradeDate;
		///����ʱ��
		TThostFtdcTradeTimeType	TradeTime;
		///������ˮ��
		TThostFtdcBankSerialType	BankSerial;
		///����ϵͳ���� 
		TThostFtdcTradeDateType	TradingDay;
		///����ƽ̨��Ϣ��ˮ��
		TThostFtdcSerialType	PlateSerial;
		///����Ƭ��־
		TThostFtdcLastFragmentType	LastFragment;
		///�Ự��
		TThostFtdcSessionIDType	SessionID;
		///��װ���
		TThostFtdcInstallIDType	InstallID;
		///�û���ʶ
		TThostFtdcUserIDType	UserID;
		///ժҪ
		TThostFtdcDigestType	Digest;
		///���ִ���
		TThostFtdcCurrencyIDType	CurrencyID;
		///������־
		TThostFtdcDeviceIDType	DeviceID;
		///�ڻ���˾���б���
		TThostFtdcBankCodingForFutureType	BrokerIDByBank;
		///���׹�Ա
		TThostFtdcOperNoType	OperNo;
		///������
		TThostFtdcRequestIDType	RequestID;
		///����ID
		TThostFtdcTIDType	TID;
		///�������
		TThostFtdcErrorIDType	ErrorID;
		///������Ϣ
		TThostFtdcErrorMsgType	ErrorMsg;
		///PIN��Կ
		TThostFtdcPasswordKeyType	PinKey;
		///MAC��Կ
		TThostFtdcPasswordKeyType	MacKey;
	};

	///����ǩ��֪ͨ
	struct CThostFtdcNotifyFutureSignOutField
	{
		///ҵ������
		TThostFtdcTradeCodeType	TradeCode;
		///���д���
		TThostFtdcBankIDType	BankID;
		///���з�֧��������
		TThostFtdcBankBrchIDType	BankBranchID;
		///���̴���
		TThostFtdcBrokerIDType	BrokerID;
		///���̷�֧��������
		TThostFtdcFutureBranchIDType	BrokerBranchID;
		///��������
		TThostFtdcTradeDateType	TradeDate;
		///����ʱ��
		TThostFtdcTradeTimeType	TradeTime;
		///������ˮ��
		TThostFtdcBankSerialType	BankSerial;
		///����ϵͳ���� 
		TThostFtdcTradeDateType	TradingDay;
		///����ƽ̨��Ϣ��ˮ��
		TThostFtdcSerialType	PlateSerial;
		///����Ƭ��־
		TThostFtdcLastFragmentType	LastFragment;
		///�Ự��
		TThostFtdcSessionIDType	SessionID;
		///��װ���
		TThostFtdcInstallIDType	InstallID;
		///�û���ʶ
		TThostFtdcUserIDType	UserID;
		///ժҪ
		TThostFtdcDigestType	Digest;
		///���ִ���
		TThostFtdcCurrencyIDType	CurrencyID;
		///������־
		TThostFtdcDeviceIDType	DeviceID;
		///�ڻ���˾���б���
		TThostFtdcBankCodingForFutureType	BrokerIDByBank;
		///���׹�Ա
		TThostFtdcOperNoType	OperNo;
		///������
		TThostFtdcRequestIDType	RequestID;
		///����ID
		TThostFtdcTIDType	TID;
		///�������
		TThostFtdcErrorIDType	ErrorID;
		///������Ϣ
		TThostFtdcErrorMsgType	ErrorMsg;
	};

	///���׺��������ڱ��̷�����Կͬ����������֪ͨ
	struct CThostFtdcNotifySyncKeyField
	{
		///ҵ������
		TThostFtdcTradeCodeType	TradeCode;
		///���д���
		TThostFtdcBankIDType	BankID;
		///���з�֧��������
		TThostFtdcBankBrchIDType	BankBranchID;
		///���̴���
		TThostFtdcBrokerIDType	BrokerID;
		///���̷�֧��������
		TThostFtdcFutureBranchIDType	BrokerBranchID;
		///��������
		TThostFtdcTradeDateType	TradeDate;
		///����ʱ��
		TThostFtdcTradeTimeType	TradeTime;
		///������ˮ��
		TThostFtdcBankSerialType	BankSerial;
		///����ϵͳ���� 
		TThostFtdcTradeDateType	TradingDay;
		///����ƽ̨��Ϣ��ˮ��
		TThostFtdcSerialType	PlateSerial;
		///����Ƭ��־
		TThostFtdcLastFragmentType	LastFragment;
		///�Ự��
		TThostFtdcSessionIDType	SessionID;
		///��װ���
		TThostFtdcInstallIDType	InstallID;
		///�û���ʶ
		TThostFtdcUserIDType	UserID;
		///���׺��ĸ����ڱ��̵���Ϣ
		TThostFtdcAddInfoType	Message;
		///������־
		TThostFtdcDeviceIDType	DeviceID;
		///�ڻ���˾���б���
		TThostFtdcBankCodingForFutureType	BrokerIDByBank;
		///���׹�Ա
		TThostFtdcOperNoType	OperNo;
		///������
		TThostFtdcRequestIDType	RequestID;
		///����ID
		TThostFtdcTIDType	TID;
		///�������
		TThostFtdcErrorIDType	ErrorID;
		///������Ϣ
		TThostFtdcErrorMsgType	ErrorMsg;
	};

	///�����ѯ����ǩԼ��ϵ
	struct CThostFtdcQryAccountregisterField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ�����ʺ�
		TThostFtdcAccountIDType	AccountID;
		///���б���
		TThostFtdcBankIDType	BankID;
		///���з�֧��������
		TThostFtdcBankBrchIDType	BankBranchID;
		///���ִ���
		TThostFtdcCurrencyIDType	CurrencyID;
	};

	///�ͻ���������Ϣ��
	struct CThostFtdcAccountregisterField
	{
		///��������
		TThostFtdcTradeDateType	TradeDay;
		///���б���
		TThostFtdcBankIDType	BankID;
		///���з�֧��������
		TThostFtdcBankBrchIDType	BankBranchID;
		///�����ʺ�
		TThostFtdcBankAccountType	BankAccount;
		///�ڻ���˾����
		TThostFtdcBrokerIDType	BrokerID;
		///�ڻ���˾��֧��������
		TThostFtdcFutureBranchIDType	BrokerBranchID;
		///Ͷ�����ʺ�
		TThostFtdcAccountIDType	AccountID;
		///֤������
		TThostFtdcIdCardTypeType	IdCardType;
		///֤������
		TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
		///�ͻ�����
		TThostFtdcIndividualNameType	CustomerName;
		///���ִ���
		TThostFtdcCurrencyIDType	CurrencyID;
		///���������
		TThostFtdcOpenOrDestroyType	OpenOrDestroy;
		///ǩԼ����
		TThostFtdcTradeDateType	RegDate;
		///��Լ����
		TThostFtdcTradeDateType	OutDate;
		///����ID
		TThostFtdcTIDType	TID;
		///�ͻ�����
		TThostFtdcCustTypeType	CustType;
		///�����ʺ�����
		TThostFtdcBankAccTypeType	BankAccType;
		///���ͻ�����
		TThostFtdcLongIndividualNameType	LongCustomerName;
	};

	///���ڿ�����Ϣ
	struct CThostFtdcOpenAccountField
	{
		///ҵ������
		TThostFtdcTradeCodeType	TradeCode;
		///���д���
		TThostFtdcBankIDType	BankID;
		///���з�֧��������
		TThostFtdcBankBrchIDType	BankBranchID;
		///���̴���
		TThostFtdcBrokerIDType	BrokerID;
		///���̷�֧��������
		TThostFtdcFutureBranchIDType	BrokerBranchID;
		///��������
		TThostFtdcTradeDateType	TradeDate;
		///����ʱ��
		TThostFtdcTradeTimeType	TradeTime;
		///������ˮ��
		TThostFtdcBankSerialType	BankSerial;
		///����ϵͳ���� 
		TThostFtdcTradeDateType	TradingDay;
		///����ƽ̨��Ϣ��ˮ��
		TThostFtdcSerialType	PlateSerial;
		///����Ƭ��־
		TThostFtdcLastFragmentType	LastFragment;
		///�Ự��
		TThostFtdcSessionIDType	SessionID;
		///�ͻ�����
		TThostFtdcIndividualNameType	CustomerName;
		///֤������
		TThostFtdcIdCardTypeType	IdCardType;
		///֤������
		TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
		///�Ա�
		TThostFtdcGenderType	Gender;
		///���Ҵ���
		TThostFtdcCountryCodeType	CountryCode;
		///�ͻ�����
		TThostFtdcCustTypeType	CustType;
		///��ַ
		TThostFtdcAddressType	Address;
		///�ʱ�
		TThostFtdcZipCodeType	ZipCode;
		///�绰����
		TThostFtdcTelephoneType	Telephone;
		///�ֻ�
		TThostFtdcMobilePhoneType	MobilePhone;
		///����
		TThostFtdcFaxType	Fax;
		///�����ʼ�
		TThostFtdcEMailType	EMail;
		///�ʽ��˻�״̬
		TThostFtdcMoneyAccountStatusType	MoneyAccountStatus;
		///�����ʺ�
		TThostFtdcBankAccountType	BankAccount;
		///��������
		TThostFtdcPasswordType	BankPassWord;
		///Ͷ�����ʺ�
		TThostFtdcAccountIDType	AccountID;
		///�ڻ�����
		TThostFtdcPasswordType	Password;
		///��װ���
		TThostFtdcInstallIDType	InstallID;
		///��֤�ͻ�֤�������־
		TThostFtdcYesNoIndicatorType	VerifyCertNoFlag;
		///���ִ���
		TThostFtdcCurrencyIDType	CurrencyID;
		///�㳮��־
		TThostFtdcCashExchangeCodeType	CashExchangeCode;
		///ժҪ
		TThostFtdcDigestType	Digest;
		///�����ʺ�����
		TThostFtdcBankAccTypeType	BankAccType;
		///������־
		TThostFtdcDeviceIDType	DeviceID;
		///�ڻ���λ�ʺ�����
		TThostFtdcBankAccTypeType	BankSecuAccType;
		///�ڻ���˾���б���
		TThostFtdcBankCodingForFutureType	BrokerIDByBank;
		///�ڻ���λ�ʺ�
		TThostFtdcBankAccountType	BankSecuAcc;
		///���������־
		TThostFtdcPwdFlagType	BankPwdFlag;
		///�ڻ��ʽ�����˶Ա�־
		TThostFtdcPwdFlagType	SecuPwdFlag;
		///���׹�Ա
		TThostFtdcOperNoType	OperNo;
		///����ID
		TThostFtdcTIDType	TID;
		///�û���ʶ
		TThostFtdcUserIDType	UserID;
		///�������
		TThostFtdcErrorIDType	ErrorID;
		///������Ϣ
		TThostFtdcErrorMsgType	ErrorMsg;
		///���ͻ�����
		TThostFtdcLongIndividualNameType	LongCustomerName;
	};

	///����������Ϣ
	struct CThostFtdcCancelAccountField
	{
		///ҵ������
		TThostFtdcTradeCodeType	TradeCode;
		///���д���
		TThostFtdcBankIDType	BankID;
		///���з�֧��������
		TThostFtdcBankBrchIDType	BankBranchID;
		///���̴���
		TThostFtdcBrokerIDType	BrokerID;
		///���̷�֧��������
		TThostFtdcFutureBranchIDType	BrokerBranchID;
		///��������
		TThostFtdcTradeDateType	TradeDate;
		///����ʱ��
		TThostFtdcTradeTimeType	TradeTime;
		///������ˮ��
		TThostFtdcBankSerialType	BankSerial;
		///����ϵͳ���� 
		TThostFtdcTradeDateType	TradingDay;
		///����ƽ̨��Ϣ��ˮ��
		TThostFtdcSerialType	PlateSerial;
		///����Ƭ��־
		TThostFtdcLastFragmentType	LastFragment;
		///�Ự��
		TThostFtdcSessionIDType	SessionID;
		///�ͻ�����
		TThostFtdcIndividualNameType	CustomerName;
		///֤������
		TThostFtdcIdCardTypeType	IdCardType;
		///֤������
		TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
		///�Ա�
		TThostFtdcGenderType	Gender;
		///���Ҵ���
		TThostFtdcCountryCodeType	CountryCode;
		///�ͻ�����
		TThostFtdcCustTypeType	CustType;
		///��ַ
		TThostFtdcAddressType	Address;
		///�ʱ�
		TThostFtdcZipCodeType	ZipCode;
		///�绰����
		TThostFtdcTelephoneType	Telephone;
		///�ֻ�
		TThostFtdcMobilePhoneType	MobilePhone;
		///����
		TThostFtdcFaxType	Fax;
		///�����ʼ�
		TThostFtdcEMailType	EMail;
		///�ʽ��˻�״̬
		TThostFtdcMoneyAccountStatusType	MoneyAccountStatus;
		///�����ʺ�
		TThostFtdcBankAccountType	BankAccount;
		///��������
		TThostFtdcPasswordType	BankPassWord;
		///Ͷ�����ʺ�
		TThostFtdcAccountIDType	AccountID;
		///�ڻ�����
		TThostFtdcPasswordType	Password;
		///��װ���
		TThostFtdcInstallIDType	InstallID;
		///��֤�ͻ�֤�������־
		TThostFtdcYesNoIndicatorType	VerifyCertNoFlag;
		///���ִ���
		TThostFtdcCurrencyIDType	CurrencyID;
		///�㳮��־
		TThostFtdcCashExchangeCodeType	CashExchangeCode;
		///ժҪ
		TThostFtdcDigestType	Digest;
		///�����ʺ�����
		TThostFtdcBankAccTypeType	BankAccType;
		///������־
		TThostFtdcDeviceIDType	DeviceID;
		///�ڻ���λ�ʺ�����
		TThostFtdcBankAccTypeType	BankSecuAccType;
		///�ڻ���˾���б���
		TThostFtdcBankCodingForFutureType	BrokerIDByBank;
		///�ڻ���λ�ʺ�
		TThostFtdcBankAccountType	BankSecuAcc;
		///���������־
		TThostFtdcPwdFlagType	BankPwdFlag;
		///�ڻ��ʽ�����˶Ա�־
		TThostFtdcPwdFlagType	SecuPwdFlag;
		///���׹�Ա
		TThostFtdcOperNoType	OperNo;
		///����ID
		TThostFtdcTIDType	TID;
		///�û���ʶ
		TThostFtdcUserIDType	UserID;
		///�������
		TThostFtdcErrorIDType	ErrorID;
		///������Ϣ
		TThostFtdcErrorMsgType	ErrorMsg;
		///���ͻ�����
		TThostFtdcLongIndividualNameType	LongCustomerName;
	};

	///���ڱ�������˺���Ϣ
	struct CThostFtdcChangeAccountField
	{
		///ҵ������
		TThostFtdcTradeCodeType	TradeCode;
		///���д���
		TThostFtdcBankIDType	BankID;
		///���з�֧��������
		TThostFtdcBankBrchIDType	BankBranchID;
		///���̴���
		TThostFtdcBrokerIDType	BrokerID;
		///���̷�֧��������
		TThostFtdcFutureBranchIDType	BrokerBranchID;
		///��������
		TThostFtdcTradeDateType	TradeDate;
		///����ʱ��
		TThostFtdcTradeTimeType	TradeTime;
		///������ˮ��
		TThostFtdcBankSerialType	BankSerial;
		///����ϵͳ���� 
		TThostFtdcTradeDateType	TradingDay;
		///����ƽ̨��Ϣ��ˮ��
		TThostFtdcSerialType	PlateSerial;
		///����Ƭ��־
		TThostFtdcLastFragmentType	LastFragment;
		///�Ự��
		TThostFtdcSessionIDType	SessionID;
		///�ͻ�����
		TThostFtdcIndividualNameType	CustomerName;
		///֤������
		TThostFtdcIdCardTypeType	IdCardType;
		///֤������
		TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
		///�Ա�
		TThostFtdcGenderType	Gender;
		///���Ҵ���
		TThostFtdcCountryCodeType	CountryCode;
		///�ͻ�����
		TThostFtdcCustTypeType	CustType;
		///��ַ
		TThostFtdcAddressType	Address;
		///�ʱ�
		TThostFtdcZipCodeType	ZipCode;
		///�绰����
		TThostFtdcTelephoneType	Telephone;
		///�ֻ�
		TThostFtdcMobilePhoneType	MobilePhone;
		///����
		TThostFtdcFaxType	Fax;
		///�����ʼ�
		TThostFtdcEMailType	EMail;
		///�ʽ��˻�״̬
		TThostFtdcMoneyAccountStatusType	MoneyAccountStatus;
		///�����ʺ�
		TThostFtdcBankAccountType	BankAccount;
		///��������
		TThostFtdcPasswordType	BankPassWord;
		///�������ʺ�
		TThostFtdcBankAccountType	NewBankAccount;
		///����������
		TThostFtdcPasswordType	NewBankPassWord;
		///Ͷ�����ʺ�
		TThostFtdcAccountIDType	AccountID;
		///�ڻ�����
		TThostFtdcPasswordType	Password;
		///�����ʺ�����
		TThostFtdcBankAccTypeType	BankAccType;
		///��װ���
		TThostFtdcInstallIDType	InstallID;
		///��֤�ͻ�֤�������־
		TThostFtdcYesNoIndicatorType	VerifyCertNoFlag;
		///���ִ���
		TThostFtdcCurrencyIDType	CurrencyID;
		///�ڻ���˾���б���
		TThostFtdcBankCodingForFutureType	BrokerIDByBank;
		///���������־
		TThostFtdcPwdFlagType	BankPwdFlag;
		///�ڻ��ʽ�����˶Ա�־
		TThostFtdcPwdFlagType	SecuPwdFlag;
		///����ID
		TThostFtdcTIDType	TID;
		///ժҪ
		TThostFtdcDigestType	Digest;
		///�������
		TThostFtdcErrorIDType	ErrorID;
		///������Ϣ
		TThostFtdcErrorMsgType	ErrorMsg;
		///���ͻ�����
		TThostFtdcLongIndividualNameType	LongCustomerName;
	};

	///�����������Ա����Ȩ��
	struct CThostFtdcSecAgentACIDMapField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///�û�����
		TThostFtdcUserIDType	UserID;
		///�ʽ��˻�
		TThostFtdcAccountIDType	AccountID;
		///����
		TThostFtdcCurrencyIDType	CurrencyID;
		///�����н�����ʽ��ʺ�
		TThostFtdcAccountIDType	BrokerSecAgentID;
	};

	///�����������Ա����Ȩ�޲�ѯ
	struct CThostFtdcQrySecAgentACIDMapField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///�û�����
		TThostFtdcUserIDType	UserID;
		///�ʽ��˻�
		TThostFtdcAccountIDType	AccountID;
		///����
		TThostFtdcCurrencyIDType	CurrencyID;
	};

	///�ֱ����Ľ���Ȩ��
	struct CThostFtdcUserRightsAssignField
	{
		///Ӧ�õ�Ԫ����
		TThostFtdcBrokerIDType	BrokerID;
		///�û�����
		TThostFtdcUserIDType	UserID;
		///�������Ĵ���
		TThostFtdcDRIdentityIDType	DRIdentityID;
	};

	///���ù�˾�Ƿ����ڱ���ʾ�Ľ���Ȩ��
	struct CThostFtdcBrokerUserRightAssignField
	{
		///Ӧ�õ�Ԫ����
		TThostFtdcBrokerIDType	BrokerID;
		///�������Ĵ���
		TThostFtdcDRIdentityIDType	DRIdentityID;
		///�ܷ���
		TThostFtdcBoolType	Tradeable;
	};

	///�ֱ�����ת������
	struct CThostFtdcDRTransferField
	{
		///ԭ�������Ĵ���
		TThostFtdcDRIdentityIDType	OrigDRIdentityID;
		///Ŀ�꽻�����Ĵ���
		TThostFtdcDRIdentityIDType	DestDRIdentityID;
		///ԭӦ�õ�Ԫ����
		TThostFtdcBrokerIDType	OrigBrokerID;
		///Ŀ�����õ�Ԫ����
		TThostFtdcBrokerIDType	DestBrokerID;
	};

	///Fens�û���Ϣ
	struct CThostFtdcFensUserInfoField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///�û�����
		TThostFtdcUserIDType	UserID;
		///��¼ģʽ
		TThostFtdcLoginModeType	LoginMode;
	};

	///��ǰ����������������
	struct CThostFtdcCurrTransferIdentityField
	{
		///�������Ĵ���
		TThostFtdcDRIdentityIDType	IdentityID;
	};

	///��ֹ��¼�û�
	struct CThostFtdcLoginForbiddenUserField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///�û�����
		TThostFtdcUserIDType	UserID;
		///IP��ַ
		TThostFtdcIPAddressType	IPAddress;
	};

	///��ѯ��ֹ��¼�û�
	struct CThostFtdcQryLoginForbiddenUserField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///�û�����
		TThostFtdcUserIDType	UserID;
	};

	///UDP�鲥����Ϣ
	struct CThostFtdcMulticastGroupInfoField
	{
		///�鲥��IP��ַ
		TThostFtdcIPAddressType	GroupIP;
		///�鲥��IP�˿�
		TThostFtdcIPPortType	GroupPort;
		///Դ��ַ
		TThostFtdcIPAddressType	SourceIP;
	};

	///�ʽ��˻�����׼����
	struct CThostFtdcTradingAccountReserveField
	{
		///���͹�˾����
		TThostFtdcBrokerIDType	BrokerID;
		///Ͷ�����ʺ�
		TThostFtdcAccountIDType	AccountID;
		///����׼����
		TThostFtdcMoneyType	Reserve;
		///���ִ���
		TThostFtdcCurrencyIDType	CurrencyID;
	};

	///����ԤԼ����ȷ������
	struct CThostFtdcReserveOpenAccountConfirmField
	{
		///ҵ������
		TThostFtdcTradeCodeType	TradeCode;
		///���д���
		TThostFtdcBankIDType	BankID;
		///���з�֧��������
		TThostFtdcBankBrchIDType	BankBranchID;
		///���̴���
		TThostFtdcBrokerIDType	BrokerID;
		///���̷�֧��������
		TThostFtdcFutureBranchIDType	BrokerBranchID;
		///��������
		TThostFtdcTradeDateType	TradeDate;
		///����ʱ��
		TThostFtdcTradeTimeType	TradeTime;
		///������ˮ��
		TThostFtdcBankSerialType	BankSerial;
		///����ϵͳ���� 
		TThostFtdcTradeDateType	TradingDay;
		///����ƽ̨��Ϣ��ˮ��
		TThostFtdcSerialType	PlateSerial;
		///����Ƭ��־
		TThostFtdcLastFragmentType	LastFragment;
		///�Ự��
		TThostFtdcSessionIDType	SessionID;
		///�ͻ�����
		TThostFtdcLongIndividualNameType	CustomerName;
		///֤������
		TThostFtdcIdCardTypeType	IdCardType;
		///֤������
		TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
		///�Ա�
		TThostFtdcGenderType	Gender;
		///���Ҵ���
		TThostFtdcCountryCodeType	CountryCode;
		///�ͻ�����
		TThostFtdcCustTypeType	CustType;
		///��ַ
		TThostFtdcAddressType	Address;
		///�ʱ�
		TThostFtdcZipCodeType	ZipCode;
		///�绰����
		TThostFtdcTelephoneType	Telephone;
		///�ֻ�
		TThostFtdcMobilePhoneType	MobilePhone;
		///����
		TThostFtdcFaxType	Fax;
		///�����ʼ�
		TThostFtdcEMailType	EMail;
		///�ʽ��˻�״̬
		TThostFtdcMoneyAccountStatusType	MoneyAccountStatus;
		///�����ʺ�
		TThostFtdcBankAccountType	BankAccount;
		///��������
		TThostFtdcPasswordType	BankPassWord;
		///��װ���
		TThostFtdcInstallIDType	InstallID;
		///��֤�ͻ�֤�������־
		TThostFtdcYesNoIndicatorType	VerifyCertNoFlag;
		///���ִ���
		TThostFtdcCurrencyIDType	CurrencyID;
		///ժҪ
		TThostFtdcDigestType	Digest;
		///�����ʺ�����
		TThostFtdcBankAccTypeType	BankAccType;
		///�ڻ���˾���б���
		TThostFtdcBankCodingForFutureType	BrokerIDByBank;
		///����ID
		TThostFtdcTIDType	TID;
		///Ͷ�����ʺ�
		TThostFtdcAccountIDType	AccountID;
		///�ڻ�����
		TThostFtdcPasswordType	Password;
		///ԤԼ����������ˮ��
		TThostFtdcBankSerialType	BankReserveOpenSeq;
		///ԤԼ��������
		TThostFtdcTradeDateType	BookDate;
		///ԤԼ������֤����
		TThostFtdcPasswordType	BookPsw;
		///�������
		TThostFtdcErrorIDType	ErrorID;
		///������Ϣ
		TThostFtdcErrorMsgType	ErrorMsg;
	};

	///����ԤԼ����
	struct CThostFtdcReserveOpenAccountField
	{
		///ҵ������
		TThostFtdcTradeCodeType	TradeCode;
		///���д���
		TThostFtdcBankIDType	BankID;
		///���з�֧��������
		TThostFtdcBankBrchIDType	BankBranchID;
		///���̴���
		TThostFtdcBrokerIDType	BrokerID;
		///���̷�֧��������
		TThostFtdcFutureBranchIDType	BrokerBranchID;
		///��������
		TThostFtdcTradeDateType	TradeDate;
		///����ʱ��
		TThostFtdcTradeTimeType	TradeTime;
		///������ˮ��
		TThostFtdcBankSerialType	BankSerial;
		///����ϵͳ���� 
		TThostFtdcTradeDateType	TradingDay;
		///����ƽ̨��Ϣ��ˮ��
		TThostFtdcSerialType	PlateSerial;
		///����Ƭ��־
		TThostFtdcLastFragmentType	LastFragment;
		///�Ự��
		TThostFtdcSessionIDType	SessionID;
		///�ͻ�����
		TThostFtdcLongIndividualNameType	CustomerName;
		///֤������
		TThostFtdcIdCardTypeType	IdCardType;
		///֤������
		TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
		///�Ա�
		TThostFtdcGenderType	Gender;
		///���Ҵ���
		TThostFtdcCountryCodeType	CountryCode;
		///�ͻ�����
		TThostFtdcCustTypeType	CustType;
		///��ַ
		TThostFtdcAddressType	Address;
		///�ʱ�
		TThostFtdcZipCodeType	ZipCode;
		///�绰����
		TThostFtdcTelephoneType	Telephone;
		///�ֻ�
		TThostFtdcMobilePhoneType	MobilePhone;
		///����
		TThostFtdcFaxType	Fax;
		///�����ʼ�
		TThostFtdcEMailType	EMail;
		///�ʽ��˻�״̬
		TThostFtdcMoneyAccountStatusType	MoneyAccountStatus;
		///�����ʺ�
		TThostFtdcBankAccountType	BankAccount;
		///��������
		TThostFtdcPasswordType	BankPassWord;
		///��װ���
		TThostFtdcInstallIDType	InstallID;
		///��֤�ͻ�֤�������־
		TThostFtdcYesNoIndicatorType	VerifyCertNoFlag;
		///���ִ���
		TThostFtdcCurrencyIDType	CurrencyID;
		///ժҪ
		TThostFtdcDigestType	Digest;
		///�����ʺ�����
		TThostFtdcBankAccTypeType	BankAccType;
		///�ڻ���˾���б���
		TThostFtdcBankCodingForFutureType	BrokerIDByBank;
		///����ID
		TThostFtdcTIDType	TID;
		///ԤԼ����״̬
		TThostFtdcReserveOpenAccStasType	ReserveOpenAccStas;
		///�������
		TThostFtdcErrorIDType	ErrorID;
		///������Ϣ
		TThostFtdcErrorMsgType	ErrorMsg;
	};

