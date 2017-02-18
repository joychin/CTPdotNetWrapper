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
		///˰��ǼǺ�/������˰ID
		/// </summary>
		TaxNo = (Byte) 'A',
		/// <summary>
		///�۰ľ��������ڵ�ͨ��֤
		/// </summary>
		HMMainlandTravelPermit = (Byte)  'B',
		/// <summary>
		///̨�����������½ͨ��֤
		/// </summary>
		TwMainlandTravelPermit = (Byte) 'C',
		/// <summary>
		///����
		/// </summary>
		DrivingLicense = (Byte) 'D',
		/// <summary>
		///�����籣ID
		/// </summary>
		SocialID = (Byte) 'F',
		/// <summary>
		///�������֤
		/// </summary>
		LocalID = (Byte) 'G',
		/// <summary>
		///��ҵ�Ǽ�֤
		/// </summary>
		BusinessRegistration = (Byte) 'H',
		/// <summary>
		///�۰������Ծ������֤
		/// </summary>
		HKMCIDCard = (Byte) 'I',
		/// <summary>
		///���п������֤
		/// </summary>
		AccountsPermits = (Byte) 'J',
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
	///TFtdcMaxMarginSideAlgorithmType��һ�����߱�֤���㷨����
	/// </summary>
	public enum struct EnumMaxMarginSideAlgorithmTypeType : Byte
	{
		/// <summary>
		/// ��ʹ�ô��߱�֤���㷨
		/// </summary>
		NO = (Byte)'0',

		/// <summary>
		/// ʹ�ô��߱�֤���㷨
		/// </summary>
		YES = (Byte)'1'
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
		MarketMaker = (Byte)'5'
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
		BidPrice1PlusThreeTicks = (Byte)'F',
		/// <summary>
		/// �嵵��
		/// </summary>
		FiveLevelPrice = (Byte)'G'
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
		/// ��ϳֲֲ��Ϊ��һ�ֲ�,��ʼ����Ӧ���������͵ĳֲ�
		/// </summary>
		SplitCombination = (Byte)'#',
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
		Disable = (Byte)'2',

		/// <summary>
		///�޲ֲ��ܿ����������
		/// </summary>
		NoHoldEnable = (Byte) '3'
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
		///ָ���µ���
		/// </summary>
		Order = (Byte) '1',
		/// <summary>
		///������Ȩ��
		/// </summary>
		Open = (Byte) '2',
		/// <summary>
		///�ʽ������
		/// </summary>
		Fund = (Byte) '3',
		/// <summary>
		///���㵥ȷ����
		/// </summary>
		Settlement = (Byte) '4',
		/// <summary>
		///����
		/// </summary>
		Company = (Byte) '5',
		/// <summary>
		///���˴���
		/// </summary>
		Corporation = (Byte) '6',
		/// <summary>
		///Ͷ������ϵ��
		/// </summary>
		LinkMan = (Byte) '7',
		/// <summary>
		///�ֻ������ʲ�������
		/// </summary>
		Ledger = (Byte) '8',
		/// <summary>
		///�У���������
		/// </summary>
		Trustee = (Byte) '9',
		/// <summary>
		///�У������ܻ������˴���
		/// </summary>
		TrusteeCorporation = (Byte) 'A',
		/// <summary>
		///�У������ܻ���������Ȩ��
		/// </summary>
		TrusteeOpen = (Byte) 'B',
		/// <summary>
		///�У������ܻ�����ϵ��
		/// </summary>
		TrusteeContact = (Byte) 'C',
		/// <summary>
		///������Ȼ�˲ο�֤��
		/// </summary>
		ForeignerRefer = (Byte) 'D',
		/// <summary>
		///���˴���ο�֤��
		/// </summary>
		CorporationRefer = (Byte) 'E'
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
		///��¼
		/// <summary>
		Login = (Byte)'1',
		/// <summary>
				///�ǳ�
				/// <summary>
				Logout = (Byte) '2',
				/// <summary>
						///���׳ɹ�
						/// <summary>
						Trading = (Byte) '3',
						/// <summary>
								///����ʧ��
								/// <summary>
								TradingError = (Byte) '4',
								/// <summary>
										///�޸�����
										/// <summary>
										UpdatePassword = (Byte) '5',
										/// <summary>
												///�ͻ�����֤
												/// <summary>
												Authenticate = (Byte)'6',
												/// <summary>
														///����
														/// <summary>
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
	///<summary>
	///TFtdcTemplateTypeType��һ��ģ����������
	///</summary>
	public enum struct EnumTemplateTypeType : Byte
	{
		/// <summary>
		/// ȫ��
		/// </summary>
		Full = (Byte)'1',

		/// <summary>
		/// ����
		/// </summary>
		Increment = (Byte)'2',

		/// <summary>
		/// ����
		/// </summary>
		BackUp = (Byte)'3',
	};

	///<summary>
	///TFtdcLoginModeType��һ����¼ģʽ����
	///</summary>
	public enum struct EnumLoginModeType : Byte
	{
		/// <summary>
		/// ����
		/// </summary>
		Trade = (Byte)'0',

		/// <summary>
		/// ת��
		/// </summary>
		Transfer = (Byte)'1'
	};

	///<summary>
	///TFtdcPromptTypeType��һ��������ʾ��������
	///</summary>
	public enum struct EnumPromptTypeType : Byte
	{
		/// <summary>
		/// ��Լ������
		/// </summary>
		Instrument = (Byte)'1',

		/// <summary>
		/// ��֤��ֶ���Ч
		/// </summary>
		Margin = (Byte)'2'
	};

	///<summary>
	///TFtdcHasTrusteeType��һ���Ƿ����й�������
	///</summary>
	public enum struct EnumHasTrusteeType : Byte
	{
		/// <summary>
		/// û��
		/// </summary>
		NO = (Byte)'0',

		/// <summary>
		/// ��
		/// </summary>
		YES = (Byte)'1'
	};

	///<summary>
	///TFtdcAmTypeType��һ��������������
	///</summary>
	public enum struct EnumAmTypeType : Byte
	{
		///<summary>
		///����
		/// </summary>
		Bank = (Byte) '1',
		///<summary>
		///֤ȯ��˾
		/// </summary>
		Securities = (Byte)'2',
		///<summary>
		///����˾
		/// </summary>
		Fund = (Byte) '3',
		///<summary>
		///���չ�˾
		/// </summary>
		Insurance = (Byte) '4',
		///<summary>
		///���й�˾
		/// </summary>
		Trust = (Byte) '5',
		///<summary>
		///����
		/// </summary>
		Other = (Byte) '9'
	};
	///<summary>
	///TFtdcCSRCFundIOTypeType��һ���������������
	///</summary>
	public enum struct EnumCSRCFundIOTypeType : Byte
	{
		///<summary>
		///�����
		///</summary>
		FundIO = (Byte)'0',
		///<summary>
		///���ڻ���
		///</summary>
		SwapCurrency = (Byte)'1'
	};
	///<summary>
	///TFtdcCusAccountTypeType��һ�������˻���������
	///</summary>
	public enum struct EnumCusAccountTypeType : Byte
	{
		///<summary>
		///�ڻ������˻�
		///</summary>
		Futures = (Byte)'1',
		///<summary>
		///���ڻ��ʹ�ҵ���µ��ʹܽ����˻�
		///</summary>
		AssetmgrFuture = (Byte) '2',
		///<summary>
		///�ۺ����ʹ�ҵ���µ��ڻ��ʹ��й��˻�
		///</summary>
		AssetmgrTrustee = (Byte) '3',
		///<summary>
		///�ۺ����ʹ�ҵ���µ��ʽ���ת�˻�
		///</summary>
		AssetmgrTransfer = (Byte) '4'
	};
	///<summary>
	///TFtdcLanguageTypeType��һ��֪ͨ������������
	///</summary>
	public enum struct EnumLanguageTypeType : Byte
	{
		///<summary>
		///����
		///</summary>
		Chinese = (Byte)'1',
		///<summary>
		///Ӣ��
		///</summary>
		English = (Byte)'2'
	};

	///<summary>
	///TFtdcAssetmgrClientTypeType��һ���ʲ�����ͻ���������
	///</summary>
	public enum struct EnumAssetmgrClientTypeType : Byte
	{
		///<summary>
		///�����ʹܿͻ�
		///</summary>
		Person = (Byte)'1',
		///<summary>
		///��λ�ʹܿͻ�
		///</summary>
		Organ = (Byte) '2',
		///<summary>
		///���ⵥλ�ʹܿͻ�
		///</summary>
		SpecialOrgan = (Byte)'4'
	};

	///<summary>
	///TFtdcAssetmgrTypeType��һ��Ͷ����������
	///</summary>
	public enum struct EnumAssetmgrTypeType : Byte
	{
		///<summary>
		///�ڻ���
		///</summary>
		Futures = (Byte) '3',
		///<summary>
		///�ۺ���
		///</summary>
		SpecialOrgan = (Byte) '4'
	};

	///<summary>
	///TFtdcCheckInstrTypeType��һ����Լ�Ƚ���������
	///</summary>
	public enum struct EnumCheckInstrTypeType : Byte
	{
		///<summary>
		///��Լ������������
		///</summary>
		HasExch = (Byte) '0',
		///<summary>
		///��Լ��ϵͳ������
		///</summary>
		HasATP = (Byte)'1',
		///<summary>
		///��Լ�Ƚϲ�һ��
		///</summary>
		HasDiff = (Byte) '2'
	};
	///<summary>
	///TFtdcDeliveryTypeType��һ��������������
	///</summary>
	public enum struct EnumDeliveryTypeType : Byte
	{
		///<summary>
		///�ֹ�����
		///</summary>
		HandDeliv = (Byte) '1',
		///<summary>
		///���ڽ���
		///</summary>
		PersonDeliv = (Byte) '2'
	};
	///<summary>
	///TFtdcMaxMarginSideAlgorithmType��һ�����߱�֤���㷨����
	///</summary>
	public enum struct EnumMaxMarginSideAlgorithmType : Byte
	{
		///<summary>
		///��ʹ�ô��߱�֤���㷨
		///</summary>
		NO = (Byte)'0',
		///<summary>
		///ʹ�ô��߱�֤���㷨
		///</summary>
		YES = (Byte)'1'
	};

	///<summary>
	///TFtdcDAClientTypeType��һ���ʲ�����ͻ���������
	///</summary>
	public enum struct EnumDAClientTypeType : Byte
	{
		///<summary>
		///��Ȼ��
		///</summary>
		Person = (Byte) '0',
		///<summary>
		///����
		///</summary>
		Company = (Byte) '1',
		///<summary>
		///����
		///</summary>
		Other = (Byte) '2'
	};

	///<summary>
	///TFtdcUOAAssetmgrTypeType��һ��Ͷ����������
	///</summary>
	public enum struct EnumUOAAssetmgrTypeType : Byte
	{
		///<summary>
		///�ڻ���
		///</summary>
		Futures = (Byte) '1',
		///<summary>
		///�ۺ���
		///</summary>
		SpecialOrgan = (Byte) '2',
	};

	///<summary>
	///TFtdcDirectionEnType��һ��������������
	///</summary>
	public enum struct EnumDirectionEnType : Byte
	{
		///<summary>
		///Buy
		///</summary>
		Buy = (Byte) '0',
		///<summary>
		///Sell
		///</summary>
		Sell = (Byte) '1',
	};

	///<summary>
	///TFtdcOffsetFlagEnType��һ����ƽ��־����
	///</summary>
	public enum struct EnumOffsetFlagEnType : Byte
	{
		///<summary>
		///Position Opening
		///<summary>
		Open = (Byte)  '0',
		///<summary>
		///Position Close
		///<summary>
		Close = (Byte)  '1',
		///<summary>
		///Forced Liquidation
		///<summary>
		ForceClose = (Byte) '2',
		///<summary>
		///Close Today
		///<summary>
		CloseToday = (Byte) '3',
		///<summary>
		///Close Prev.
		///<summary>
		CloseYesterday = (Byte)  '4',
		///<summary>
		///Forced Reduction
		///<summary>
		ForceOff = (Byte) '5',
		///<summary>
		///Local Forced Liquidation
		///<summary>
		LocalForceClose = (Byte) '6'
	};
	///<summary>
	///TFtdcValueMethodType��һ��ȡֵ��ʽ����
	///</summary>
	public enum struct EnumValueMethodType : Byte
	{
		///<summary>
		///������ֵ
		///</summary>
		Absolute = (Byte) '0',
		///<summary>
		///������
		///</summary>
		Ratio = (Byte) '1',
	};
	///<summary>
	///TFtdcActionTypeType��һ��ִ����������
	///</summary>
	public enum struct EnumActionTypeType : Byte
	{
		///<summary>
		///ִ��
		///</summary>
		Exec = (Byte) '1',
		///<summary>
		///����
		///</summary>
		Abandon = (Byte) '2',
	};

	///<summary>
	///TFtdcExecOrderPositionFlagType��һ����Ȩ��Ȩ���Ƿ����ڻ�ͷ��ı������
	///</summary>
	public enum struct EnumExecOrderPositionFlagType : Byte
	{
		///<summary>
		///����
		///</summary>
		Reserve = (Byte) '0',
		///<summary>
		///������
		///</summary>
		UnReserve = (Byte) '1',
	};
	///<summary>
	///TFtdcExecOrderCloseFlagType��һ����Ȩ��Ȩ�����ɵ�ͷ���Ƿ��Զ�ƽ������
	///</summary>
	public enum struct EnumExecOrderCloseFlagType : Byte
	{
		///<summary>
		///�Զ�ƽ��
		///</summary>
		AutoClose = (Byte) '0',
		///<summary>
		///�����Զ�ƽ��
		///</summary>
		NotToClose = (Byte) '1',
	};
	///<summary>
	///TFtdcExecResultType��һ��ִ�н������
	///</summary>
	public enum struct EnumExecResultType : Byte
	{
		///<summary>
		///û��ִ��
		///</summary>
		NoExec = (Byte) 'n',
		///<summary>
		///�Ѿ�ȡ��
		Canceled = (Byte) 'c',
		///<summary>
		///ִ�гɹ�
		///</summary>
		OK = (Byte) '0',
		///<summary>
		///��Ȩ�ֲֲ���
		///</summary>
		NoPosition = (Byte) '1',
		///<summary>
		///�ʽ𲻹�
		///</summary>
		NoDeposit = (Byte) '2',
		///<summary>
		///��Ա������
		///</summary>
		NoParticipant = (Byte) '3',
		///<summary>
		///�ͻ�������
		///</summary>
		NoClient = (Byte) '4',
		///<summary>
		///��Լ������
		///</summary>
		NoInstrument = (Byte) '6',
		///<summary>
		///û��ִ��Ȩ��
		///</summary>
		NoRight = (Byte) '7',
		///<summary>
		///�����������
		///</summary>
		InvalidVolume = (Byte) '8',
		///<summary>
		///û���㹻����ʷ�ɽ�
		///</summary>
		NoEnoughHistoryTrade = (Byte) '9',
		///<summary>
		//δ֪
		Unknown = (Byte) 'a'
	};

	///<summary>
	///TFtdcForQuoteStatusType��һ��ѯ��״̬����
	///</summary>
	public enum struct EnumForQuoteStatusType : Byte
	{
		///<summary>
		///�Ѿ��ύ
		///</summary>
		Submitted = (Byte) 'a',
		///<summary>
		///�Ѿ�����
		///</summary>
		Accepted = (Byte) 'b',
		///<summary>
		///�Ѿ����ܾ�
		///</summary>
		Rejected = (Byte) 'c'
	};

	///<summary>
	///TFtdcCombDirectionType��һ�����ָ�������
	///</summary>
	public enum struct EnumCombDirectionType : Byte
	{
		///<summary>
		///�������
		///</summary>
		Comb = (Byte) '0',
		///<summary>
		///������
		///</summary>
		UnComb = (Byte) '1'
	};
	///<summary>
	///TFtdcBalanceAlgorithmType��һ��Ȩ���㷨����
	///</summary>
	public enum struct EnumBalanceAlgorithmType : Byte
	{
		///<summary>
		///��������Ȩ��ֵӯ��
		///</summary>
		Default = (Byte) '1',
		///<summary>
		///������Ȩ��ֵ����
		///</summary>
		IncludeOptValLost = (Byte) '2'
	};
	///<summary>
	///TFtdcReserveOpenAccStasType��һ��ԤԼ����״̬����
	///</summary>
	public enum struct EnumReserveOpenAccStasType : Byte
	{
		///<summary>
		///�ȴ�������
		///</summary>
		Processing = (Byte) '0',
		///<summary>
		///�ѳ���
		///</summary>
		Cancelled = (Byte) '1',
		///<summary>
		///�ѿ���
		///</summary>
		Opened = (Byte) '2',
		///<summary>
		///��Ч����
		///</summary>
		Invalid = (Byte) '3'
	};
	/// ������userapidatatype.h���������--------------------------------------------------------------------------------------------------------------------
}