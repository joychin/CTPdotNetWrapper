﻿/////////////////////////////////////////////////////////////////////////
/// 上期技术 CTP C++ => .Net Framework Adapter
/// 本文件修改自海风版C#接口struct.cs文件，十分感谢 
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
	/// TFtdcExchangePropertyType是一个交易所属性类型
	/// </summary>
	public enum struct EnumExchangePropertyType : Byte
	{
		/// <summary>
		/// 正常
		/// </summary>
		Normal = (Byte)'0',

		/// <summary>
		/// 根据成交生成报单
		/// </summary>
		GenOrderByTrade = (Byte)'1'
	};

	/// <summary>
	/// TFtdcIdCardTypeType是一个证件类型类型
	/// </summary>
	public enum struct EnumIdCardTypeType : Byte
	{
		/// <summary>
		/// 组织机构代码
		/// </summary>
		EID = (Byte)'0',

		/// <summary>
		/// 身份证
		/// </summary>
		IDCard = (Byte)'1',

		/// <summary>
		/// 军官证
		/// </summary>
		OfficerIDCard = (Byte)'2',

		/// <summary>
		/// 警官证
		/// </summary>
		PoliceIDCard = (Byte)'3',

		/// <summary>
		/// 士兵证
		/// </summary>
		SoldierIDCard = (Byte)'4',

		/// <summary>
		/// 户口簿
		/// </summary>
		HouseholdRegister = (Byte)'5',

		/// <summary>
		/// 护照
		/// </summary>
		Passport = (Byte)'6',

		/// <summary>
		/// 台胞证
		/// </summary>
		TaiwanCompatriotIDCard = (Byte)'7',

		/// <summary>
		/// 回乡证
		/// </summary>
		HomeComingCard = (Byte)'8',

		/// <summary>
		/// 营业执照号
		/// </summary>
		LicenseNo = (Byte)'9',

		/// <summary>
		/// 其他证件
		/// </summary>
		OtherCard = (Byte)'x'
	};

	/// <summary>
	/// TFtdcInvestorRangeType是一个投资者范围类型
	/// </summary>
	public enum struct EnumInvestorRangeTypeType : Byte
	{
		/// <summary>
		/// 所有
		/// </summary>
		All = (Byte)'1',

		/// <summary>
		/// 投资者组
		/// </summary>
		Group = (Byte)'2',

		/// <summary>
		/// 单一投资者
		/// </summary>
		Single = (Byte)'3'
	};

	/// <summary>
	/// TFtdcDepartmentRangeType是一个投资者范围类型
	/// </summary>
	public enum struct EnumDepartmentRangeType : Byte
	{
		/// <summary>
		/// 所有
		/// </summary>
		All = (Byte)'1',

		/// <summary>
		/// 组织架构
		/// </summary>
		Group = (Byte)'2',

		/// <summary>
		/// 单一投资者
		/// </summary>
		Single = (Byte)'3'
	};

	/// <summary>
	/// TFtdcDataSyncStatusType是一个数据同步状态类型
	/// </summary>
	public enum struct EnumDataSyncStatusType : Byte
	{
		/// <summary>
		/// 未同步
		/// </summary>
		Asynchronous = (Byte)'1',

		/// <summary>
		/// 同步中
		/// </summary>
		Synchronizing = (Byte)'2',

		/// <summary>
		/// 已同步
		/// </summary>
		Synchronized = (Byte)'3'
	};

	/// <summary>
	/// TFtdcBrokerDataSyncStatusType是一个经纪公司数据同步状态类型
	/// </summary>
	public enum struct EnumBrokerDataSyncStatusType : Byte
	{
		/// <summary>
		/// 已同步
		/// </summary>
		Synchronized = (Byte)'1',

		/// <summary>
		/// 同步中
		/// </summary>
		Synchronizing = (Byte)'2'
	};

	/// <summary>
	/// TFtdcExchangeConnectStatusType是一个交易所连接状态类型
	/// </summary>
	public enum struct EnumExchangeConnectStatusType : Byte
	{
		/// <summary>
		/// 没有任何连接
		/// </summary>
		NoConnection = (Byte)'1',

		/// <summary>
		/// 已经发出合约查询请求
		/// </summary>
		QryInstrumentSent = (Byte)'2',

		/// <summary>
		/// 已经获取信息
		/// </summary>
		GotInformation = (Byte)'9'
	};

	/// <summary>
	/// TFtdcTraderConnectStatusType是一个交易所交易员连接状态类型
	/// </summary>
	public enum struct EnumTraderConnectStatusType : Byte
	{
		/// <summary>
		/// 没有任何连接
		/// </summary>
		NotConnected = (Byte)'1',

		/// <summary>
		/// 已经连接
		/// </summary>
		Connected = (Byte)'2',

		/// <summary>
		/// 已经发出合约查询请求
		/// </summary>
		QryInstrumentSent = (Byte)'3',

		/// <summary>
		/// 订阅私有流
		/// </summary>
		SubPrivateFlow = (Byte)'4'
	};

	/// <summary>
	/// TFtdcFunctionCodeType是一个功能代码类型
	/// </summary>
	public enum struct EnumFunctionCodeType : Byte
	{
		/// <summary>
		/// 数据异步化
		/// </summary>
		DataAsync = (Byte)'1',

		/// <summary>
		/// 强制用户登出
		/// </summary>
		ForceUserLogout = (Byte)'2',

		/// <summary>
		/// 变更管理用户口令
		/// </summary>
		UserPasswordUpdate = (Byte)'3',

		/// <summary>
		/// 变更经纪公司口令
		/// </summary>
		BrokerPasswordUpdate = (Byte)'4',

		/// <summary>
		/// 变更投资者口令
		/// </summary>
		InvestorPasswordUpdate = (Byte)'5',

		/// <summary>
		/// 报单插入
		/// </summary>
		OrderInsert = (Byte)'6',

		/// <summary>
		/// 报单操作
		/// </summary>
		OrderAction = (Byte)'7',

		/// <summary>
		/// 同步系统数据
		/// </summary>
		SyncSystemData = (Byte)'8',

		/// <summary>
		/// 同步经纪公司数据
		/// </summary>
		SyncBrokerData = (Byte)'9',

		/// <summary>
		/// 批量同步经纪公司数据
		/// </summary>
		BachSyncBrokerData = (Byte)'A',

		/// <summary>
		/// 超级查询
		/// </summary>
		SuperQuery = (Byte)'B',

		/// <summary>
		/// 报单插入
		/// </summary>
		ParkedOrderInsert = (Byte)'C',

		/// <summary>
		/// 报单操作
		/// </summary>
		ParkedOrderAction = (Byte)'D',

		/// <summary>
		/// 同步动态令牌
		/// </summary>
		SyncOTP = (Byte)'E'
	};

	/// <summary>
	/// TFtdcBrokerFunctionCodeType是一个经纪公司功能代码类型
	/// </summary>
	public enum struct EnumBrokerFunctionCodeType : Byte
	{
		/// <summary>
		/// 强制用户登出
		/// </summary>
		ForceUserLogout = (Byte)'1',

		/// <summary>
		/// 变更用户口令
		/// </summary>
		UserPasswordUpdate = (Byte)'2',

		/// <summary>
		/// 同步经纪公司数据
		/// </summary>
		SyncBrokerData = (Byte)'3',

		/// <summary>
		/// 批量同步经纪公司数据
		/// </summary>
		BachSyncBrokerData = (Byte)'4',

		/// <summary>
		/// 报单插入
		/// </summary>
		OrderInsert = (Byte)'5',

		/// <summary>
		/// 报单操作
		/// </summary>
		OrderAction = (Byte)'6',

		/// <summary>
		/// 全部查询
		/// </summary>
		AllQuery = (Byte)'7',

		/// <summary>
		/// 系统功能：登入/登出/修改密码等
		/// </summary>
		log = (Byte)'a',

		/// <summary>
		/// 基本查询：查询基础数据，如合约，交易所等常量
		/// </summary>
		BaseQry = (Byte)'b',

		/// <summary>
		/// 交易查询：如查成交，委托
		/// </summary>
		TradeQry = (Byte)'c',

		/// <summary>
		/// 交易功能：报单，撤单
		/// </summary>
		Trade = (Byte)'d',

		/// <summary>
		/// 银期转账
		/// </summary>
		Virement = (Byte)'e',

		/// <summary>
		/// 风险监控
		/// </summary>
		Risk = (Byte)'f',

		/// <summary>
		/// 查询/管理：查询会话，踢人等
		/// </summary>
		Session = (Byte)'g',

		/// <summary>
		/// 风控通知控制
		/// </summary>
		RiskNoticeCtl = (Byte)'h',

		/// <summary>
		/// 风控通知发送
		/// </summary>
		RiskNotice = (Byte)'i',

		/// <summary>
		/// 察看经纪公司资金权限
		/// </summary>
		BrokerDeposit = (Byte)'j',

		/// <summary>
		/// 资金查询
		/// </summary>
		QueryFund = (Byte)'k',

		/// <summary>
		/// 报单查询
		/// </summary>
		QueryOrder = (Byte)'l',

		/// <summary>
		/// 成交查询
		/// </summary>
		QueryTrade = (Byte)'m',

		/// <summary>
		/// 持仓查询
		/// </summary>
		QueryPosition = (Byte)'n',

		/// <summary>
		/// 行情查询
		/// </summary>
		QueryMarketData = (Byte)'o',

		/// <summary>
		/// 用户事件查询
		/// </summary>
		QueryUserEvent = (Byte)'p',

		/// <summary>
		/// 风险通知查询
		/// </summary>
		QueryRiskNotify = (Byte)'q',

		/// <summary>
		/// 出入金查询
		/// </summary>
		QueryFundChange = (Byte)'r',

		/// <summary>
		/// 投资者信息查询
		/// </summary>
		QueryInvestor = (Byte)'s',

		/// <summary>
		/// 交易编码查询
		/// </summary>
		QueryTradingCode = (Byte)'t',

		/// <summary>
		/// 强平
		/// </summary>
		ForceClose = (Byte)'u',

		/// <summary>
		/// 压力测试
		/// </summary>
		PressTest = (Byte)'v',

		/// <summary>
		/// 权益反算
		/// </summary>
		RemainCalc = (Byte)'w',

		/// <summary>
		/// 净持仓保证金指标
		/// </summary>
		NetPositionInd = (Byte)'x',

		/// <summary>
		/// 风险预算
		/// </summary>
		RiskPredict = (Byte)'y',

		/// <summary>
		/// 数据导出
		/// </summary>
		DataExport = (Byte)'z',

		/// <summary>
		/// 风控指标设置
		/// </summary>
		RiskTargetSetup = (Byte)'A',

		/// <summary>
		/// 行情预警
		/// </summary>
		MarketDataWarn = (Byte)'B',

		/// <summary>
		/// 业务通知查询
		/// </summary>
		QryBizNotice = (Byte)'C',

		/// <summary>
		/// 业务通知模板设置
		/// </summary>
		CfgBizNotice = (Byte)'D',

		/// <summary>
		/// 同步动态令牌
		/// </summary>
		SyncOTP = (Byte)'E',

		/// <summary>
		/// 发送业务通知
		/// </summary>
		SendBizNotice = (Byte)'F',

		/// <summary>
		/// 风险级别标准设置
		/// </summary>
		CfgRiskLevelStd = (Byte)'G',

		/// <summary>
		/// 交易终端应急功能
		/// </summary>
		TbCommand = (Byte)'H'
	};

	/// <summary>
	/// TFtdcOrderActionStatusType是一个报单操作状态类型
	/// </summary>
	public enum struct EnumOrderActionStatusType : Byte
	{
		/// <summary>
		/// 已经提交
		/// </summary>
		Submitted = (Byte)'a',

		/// <summary>
		/// 已经接受
		/// </summary>
		Accepted = (Byte)'b',

		/// <summary>
		/// 已经被拒绝
		/// </summary>
		Rejected = (Byte)'c'
	};

	/// <summary>
	/// TFtdcOrderStatusType是一个报单状态类型
	/// </summary>
	public enum struct EnumOrderStatusType : Byte
	{
		/// <summary>
		/// 全部成交
		/// </summary>
		AllTraded = (Byte)'0',

		/// <summary>
		/// 部分成交还在队列中
		/// </summary>
		PartTradedQueueing = (Byte)'1',

		/// <summary>
		/// 部分成交不在队列中
		/// </summary>
		PartTradedNotQueueing = (Byte)'2',

		/// <summary>
		/// 未成交还在队列中
		/// </summary>
		NoTradeQueueing = (Byte)'3',

		/// <summary>
		/// 未成交不在队列中
		/// </summary>
		NoTradeNotQueueing = (Byte)'4',

		/// <summary>
		/// 撤单
		/// </summary>
		Canceled = (Byte)'5',

		/// <summary>
		/// 未知
		/// </summary>
		Unknown = (Byte)'a',

		/// <summary>
		/// 尚未触发
		/// </summary>
		NotTouched = (Byte)'b',

		/// <summary>
		/// 已触发
		/// </summary>
		Touched = (Byte)'c'
	};

	/// <summary>
	/// TFtdcOrderSubmitStatusType是一个报单提交状态类型
	/// </summary>
	public enum struct EnumOrderSubmitStatusType : Byte
	{
		/// <summary>
		/// 已经提交
		/// </summary>
		InsertSubmitted = (Byte)'0',

		/// <summary>
		/// 撤单已经提交
		/// </summary>
		CancelSubmitted = (Byte)'1',

		/// <summary>
		/// 修改已经提交
		/// </summary>
		ModifySubmitted = (Byte)'2',

		/// <summary>
		/// 已经接受
		/// </summary>
		Accepted = (Byte)'3',

		/// <summary>
		/// 报单已经被拒绝
		/// </summary>
		InsertRejected = (Byte)'4',

		/// <summary>
		/// 撤单已经被拒绝
		/// </summary>
		CancelRejected = (Byte)'5',

		/// <summary>
		/// 改单已经被拒绝
		/// </summary>
		ModifyRejected = (Byte)'6'
	};

	/// <summary>
	/// TFtdcPositionDateType是一个持仓日期类型
	/// </summary>
	public enum struct EnumPositionDateType : Byte
	{
		/// <summary>
		/// 今日持仓
		/// </summary>
		Today = (Byte)'1',

		/// <summary>
		/// 历史持仓
		/// </summary>
		History = (Byte)'2'
	};

	/// <summary>
	/// TFtdcPositionDateTypeType是一个持仓日期类型类型
	/// </summary>
	public enum struct EnumPositionDateTypeType : Byte
	{
		/// <summary>
		/// 使用历史持仓
		/// </summary>
		UseHistory = (Byte)'1',

		/// <summary>
		/// 不使用历史持仓
		/// </summary>
		NoUseHistory = (Byte)'2'
	};
	/// <summary>
	///TFtdcMaxMarginSideAlgorithmType是一个大额单边保证金算法类型
	/// </summary>
	public enum struct EnumMaxMarginSideAlgorithmTypeType : Byte
	{
		/// <summary>
		/// 不使用大额单边保证金算法
		/// </summary>
		NO = (Byte)'0',

		/// <summary>
		/// 使用大额单边保证金算法
		/// </summary>
		YES = (Byte)'1'
	};
	/// <summary>
	/// TFtdcOptionsTypeType是一个期权类型类型
	/// </summary>
	public enum struct EnumOptionsTypeType : Byte
	{
		/// <summary>
		/// 看涨
		/// </summary>
		CallOptions = (Byte)'1',

		/// <summary>
		/// 看跌
		/// </summary>
		PutOptions = (Byte)'2'
	};

	/// <summary>
	/// TFtdcCombinationTypeType是一个组合类型类型
	/// </summary>
	public enum struct EnumCombinationTypeType : Byte
	{
		/// <summary>
		/// 期货组合
		/// </summary>
		Future = (Byte)'0',
		/// <summary>
		/// 垂直价差BUL
		/// </summary>
		BUL = (Byte)'1',
		/// <summary>
		///垂直价差BER
		BER = (Byte)'2',
		/// <summary>
		///跨式组合			  
		/// </summary>
		STD = (Byte)'3',
		/// <summary>
		///宽跨式组合		 
		STG = (Byte)'4',
		/// <summary>
		///备兑组合			  
		/// </summary>
		PRT = (Byte)'5',
		/// <summary>
		///时间价差组合		
		/// </summary>
		CLD = (Byte)'6'
	};

	/// <summary>
	/// TFtdcTradingRoleType是一个交易角色类型
	/// </summary>
	public enum struct EnumTradingRoleType : Byte
	{
		/// <summary>
		/// 代理
		/// </summary>
		Broker = (Byte)'1',

		/// <summary>
		/// 自营
		/// </summary>
		Host = (Byte)'2',

		/// <summary>
		/// 做市商
		/// </summary>
		Maker = (Byte)'3'
	};

	/// <summary>
	/// TFtdcProductClassType是一个产品类型类型
	/// </summary>
	public enum struct EnumProductClassTypeType : Byte
	{
		/// <summary>
		/// 期货
		/// </summary>
		Futures = (Byte)'1',

		/// <summary>
		/// 期权
		/// </summary>
		Options = (Byte)'2',

		/// <summary>
		/// 组合
		/// </summary>
		Combination = (Byte)'3',

		/// <summary>
		/// 即期
		/// </summary>
		Spot = (Byte)'4',

		/// <summary>
		/// 期转现
		/// </summary>
		EFP = (Byte)'5'
	};

	/// <summary>
	/// TFtdcInstLifePhaseType是一个合约生命周期状态类型
	/// </summary>
	public enum struct EnumInstLifePhaseType : Byte
	{
		/// <summary>
		/// 未上市
		/// </summary>
		NotStart = (Byte)'0',

		/// <summary>
		/// 上市
		/// </summary>
		Started = (Byte)'1',

		/// <summary>
		/// 停牌
		/// </summary>
		Pause = (Byte)'2',

		/// <summary>
		/// 到期
		/// </summary>
		Expired = (Byte)'3'
	};

	/// <summary>
	/// TFtdcDirectionType是一个买卖方向类型
	/// </summary>
	public enum struct EnumDirectionType : Byte
	{
		/// <summary>
		/// 买
		/// </summary>
		Buy = (Byte)'0',

		/// <summary>
		/// 卖
		/// </summary>
		Sell = (Byte)'1'
	};

	/// <summary>
	/// TFtdcPositionTypeType是一个持仓类型类型
	/// </summary>
	public enum struct EnumPositionTypeType : Byte
	{
		/// <summary>
		/// 净持仓
		/// </summary>
		Net = (Byte)'1',

		/// <summary>
		/// 综合持仓
		/// </summary>
		Gross = (Byte)'2'
	};

	/// <summary>
	/// TFtdcPosiDirectionType是一个持仓多空方向类型
	/// </summary>
	public enum struct EnumPosiDirectionType : Byte
	{
		/// <summary>
		/// 净
		/// </summary>
		Net = (Byte)'1',

		/// <summary>
		/// 多头
		/// </summary>
		Long = (Byte)'2',

		/// <summary>
		/// 空头
		/// </summary>
		Short = (Byte)'3'
	};

	/// <summary>
	/// TFtdcSysSettlementStatusType是一个系统结算状态类型
	/// </summary>
	public enum struct EnumSysSettlementStatusType : Byte
	{
		/// <summary>
		/// 不活跃
		/// </summary>
		NonActive = (Byte)'1',

		/// <summary>
		/// 启动
		/// </summary>
		Startup = (Byte)'2',

		/// <summary>
		/// 操作
		/// </summary>
		Operating = (Byte)'3',

		/// <summary>
		/// 结算
		/// </summary>
		Settlement = (Byte)'4',

		/// <summary>
		/// 结算完成
		/// </summary>
		SettlementFinished = (Byte)'5'
	};

	/// <summary>
	/// TFtdcRatioAttrType是一个费率属性类型
	/// </summary>
	public enum struct EnumRatioAttrType : Byte
	{
		/// <summary>
		/// 交易费率
		/// </summary>
		Trade = (Byte)'0',

		/// <summary>
		/// 结算费率
		/// </summary>
		Settlement = (Byte)'1'
	};

	/// <summary>
	/// TFtdcHedgeFlagType是一个投机套保标志类型
	/// </summary>
	public enum struct EnumHedgeFlagType : Byte
	{
		/// <summary>
		/// 投机
		/// </summary>
		Speculation = (Byte)'1',

		/// <summary>
		/// 套利
		/// </summary>
		Arbitrage = (Byte)'2',

		/// <summary>
		/// 套保
		/// </summary>
		Hedge = (Byte)'3',

		/// <summary>
		/// 做市商
		/// </summary>
		Hedge = (Byte)'5'
	};

	/// <summary>
	/// TFtdcClientIDTypeType是一个交易编码类型类型
	/// </summary>
	public enum struct EnumClientIDTypeType : Byte
	{
		/// <summary>
		/// 投机
		/// </summary>
		Speculation = (Byte)'1',

		/// <summary>
		/// 套利
		/// </summary>
		Arbitrage = (Byte)'2',

		/// <summary>
		/// 套保
		/// </summary>
		Hedge = (Byte)'3'
	};


	/// <summary>
	/// TFtdcOrderPriceTypeType是一个报单价格条件类型
	/// </summary>
	public enum struct EnumOrderPriceTypeType : Byte
	{
		/// <summary>
		/// 任意价
		/// </summary>
		AnyPrice = (Byte)'1',

		/// <summary>
		/// 限价
		/// </summary>
		LimitPrice = (Byte)'2',

		/// <summary>
		/// 最优价
		/// </summary>
		BestPrice = (Byte)'3',

		/// <summary>
		/// 最新价
		/// </summary>
		LastPrice = (Byte)'4',

		/// <summary>
		/// 最新价浮动上浮1个ticks
		/// </summary>
		LastPricePlusOneTicks = (Byte)'5',

		/// <summary>
		/// 最新价浮动上浮2个ticks
		/// </summary>
		LastPricePlusTwoTicks = (Byte)'6',

		/// <summary>
		/// 最新价浮动上浮3个ticks
		/// </summary>
		LastPricePlusThreeTicks = (Byte)'7',

		/// <summary>
		/// 卖一价
		/// </summary>
		AskPrice1 = (Byte)'8',

		/// <summary>
		/// 卖一价浮动上浮1个ticks
		/// </summary>
		AskPrice1PlusOneTicks = (Byte)'9',

		/// <summary>
		/// 卖一价浮动上浮2个ticks
		/// </summary>
		AskPrice1PlusTwoTicks = (Byte)'A',

		/// <summary>
		/// 卖一价浮动上浮3个ticks
		/// </summary>
		AskPrice1PlusThreeTicks = (Byte)'B',

		/// <summary>
		/// 买一价
		/// </summary>
		BidPrice1 = (Byte)'C',

		/// <summary>
		/// 买一价浮动上浮1个ticks
		/// </summary>
		BidPrice1PlusOneTicks = (Byte)'D',

		/// <summary>
		/// 买一价浮动上浮2个ticks
		/// </summary>
		BidPrice1PlusTwoTicks = (Byte)'E',

		/// <summary>
		/// 买一价浮动上浮3个ticks
		/// </summary>
		BidPrice1PlusThreeTicks = (Byte)'F'
	};

	/// <summary>
	/// TFtdcOffsetFlagType是一个开平标志类型
	/// </summary>
	public enum struct EnumOffsetFlagType : Byte
	{
		/// <summary>
		/// 开仓
		/// </summary>
		Open = (Byte)'0',

		/// <summary>
		/// 平仓
		/// </summary>
		Close = (Byte)'1',

		/// <summary>
		/// 强平
		/// </summary>
		ForceClose = (Byte)'2',

		/// <summary>
		/// 平今
		/// </summary>
		CloseToday = (Byte)'3',

		/// <summary>
		/// 平昨
		/// </summary>
		CloseYesterday = (Byte)'4',

		/// <summary>
		/// 强减
		/// </summary>
		ForceOff = (Byte)'5',

		/// <summary>
		/// 本地强平
		/// </summary>
		LocalForceClose = (Byte)'6'
	};

	/// <summary>
	/// TFtdcForceCloseReasonType是一个强平原因类型
	/// </summary>
	public enum struct EnumForceCloseReasonType : Byte
	{
		/// <summary>
		/// 非强平
		/// </summary>
		NotForceClose = (Byte)'0',

		/// <summary>
		/// 资金不足
		/// </summary>
		LackDeposit = (Byte)'1',

		/// <summary>
		/// 客户超仓
		/// </summary>
		ClientOverPositionLimit = (Byte)'2',

		/// <summary>
		/// 会员超仓
		/// </summary>
		MemberOverPositionLimit = (Byte)'3',

		/// <summary>
		/// 持仓非整数倍
		/// </summary>
		NotMultiple = (Byte)'4',

		/// <summary>
		/// 违规
		/// </summary>
		Violation = (Byte)'5',

		/// <summary>
		/// 其它
		/// </summary>
		Other = (Byte)'6',

		/// <summary>
		/// 自然人临近交割
		/// </summary>
		PersonDeliv = (Byte)'7'
	};

	/// <summary>
	/// TFtdcOrderTypeType是一个报单类型类型
	/// </summary>
	public enum struct EnumOrderTypeType : Byte
	{
		/// <summary>
		/// 正常
		/// </summary>
		Normal = (Byte)'0',

		/// <summary>
		/// 报价衍生
		/// </summary>
		DeriveFromQuote = (Byte)'1',

		/// <summary>
		/// 组合衍生
		/// </summary>
		DeriveFromCombination = (Byte)'2',

		/// <summary>
		/// 组合报单
		/// </summary>
		Combination = (Byte)'3',

		/// <summary>
		/// 条件单
		/// </summary>
		ConditionalOrder = (Byte)'4',

		/// <summary>
		/// 互换单
		/// </summary>
		Swap = (Byte)'5'
	};

	/// <summary>
	/// TFtdcTimeConditionType是一个有效期类型类型
	/// </summary>
	public enum struct EnumTimeConditionType : Byte
	{
		/// <summary>
		/// 立即完成，否则撤销
		/// </summary>
		IOC = (Byte)'1',

		/// <summary>
		/// 本节有效
		/// </summary>
		GFS = (Byte)'2',

		/// <summary>
		/// 当日有效
		/// </summary>
		GFD = (Byte)'3',

		/// <summary>
		/// 指定日期前有效
		/// </summary>
		GTD = (Byte)'4',

		/// <summary>
		/// 撤销前有效
		/// </summary>
		GTC = (Byte)'5',

		/// <summary>
		/// 集合竞价有效
		/// </summary>
		GFA = (Byte)'6'
	};

	/// <summary>
	/// TFtdcVolumeConditionType是一个成交量类型类型
	/// </summary>
	public enum struct EnumVolumeConditionType : Byte
	{
		/// <summary>
		/// 任何数量
		/// </summary>
		AV = (Byte)'1',

		/// <summary>
		/// 最小数量
		/// </summary>
		MV = (Byte)'2',

		/// <summary>
		/// 全部数量
		/// </summary>
		CV = (Byte)'3'
	};

	/// <summary>
	/// TFtdcContingentConditionType是一个触发条件类型
	/// </summary>
	public enum struct EnumContingentConditionType : Byte
	{
		/// <summary>
		/// 立即
		/// </summary>
		Immediately = (Byte)'1',

		/// <summary>
		/// 止损
		/// </summary>
		Touch = (Byte)'2',

		/// <summary>
		/// 止赢
		/// </summary>
		TouchProfit = (Byte)'3',

		/// <summary>
		/// 预埋单
		/// </summary>
		ParkedOrder = (Byte)'4',

		/// <summary>
		/// 最新价大于条件价
		/// </summary>
		LastPriceGreaterThanStopPrice = (Byte)'5',

		/// <summary>
		/// 最新价大于等于条件价
		/// </summary>
		LastPriceGreaterEqualStopPrice = (Byte)'6',

		/// <summary>
		/// 最新价小于条件价
		/// </summary>
		LastPriceLesserThanStopPrice = (Byte)'7',

		/// <summary>
		/// 最新价小于等于条件价
		/// </summary>
		LastPriceLesserEqualStopPrice = (Byte)'8',

		/// <summary>
		/// 卖一价大于条件价
		/// </summary>
		AskPriceGreaterThanStopPrice = (Byte)'9',

		/// <summary>
		/// 卖一价大于等于条件价
		/// </summary>
		AskPriceGreaterEqualStopPrice = (Byte)'A',

		/// <summary>
		/// 卖一价小于条件价
		/// </summary>
		AskPriceLesserThanStopPrice = (Byte)'B',

		/// <summary>
		/// 卖一价小于等于条件价
		/// </summary>
		AskPriceLesserEqualStopPrice = (Byte)'C',

		/// <summary>
		/// 买一价大于条件价
		/// </summary>
		BidPriceGreaterThanStopPrice = (Byte)'D',

		/// <summary>
		/// 买一价大于等于条件价
		/// </summary>
		BidPriceGreaterEqualStopPrice = (Byte)'E',

		/// <summary>
		/// 买一价小于条件价
		/// </summary>
		BidPriceLesserThanStopPrice = (Byte)'F',

		/// <summary>
		/// 买一价小于等于条件价
		/// </summary>
		BidPriceLesserEqualStopPrice = (Byte)'H'
	};

	/// <summary>
	/// TFtdcActionFlagType是一个操作标志类型
	/// </summary>
	public enum struct EnumActionFlagType : Byte
	{
		/// <summary>
		/// 删除
		/// </summary>
		Delete = (Byte)'0',

		/// <summary>
		/// 修改
		/// </summary>
		Modify = (Byte)'3'
	};

	/// <summary>
	/// TFtdcTradingRightType是一个交易权限类型
	/// </summary>
	public enum struct EnumTradingRightType : Byte
	{
		/// <summary>
		/// 可以交易
		/// </summary>
		Allow = (Byte)'0',

		/// <summary>
		/// 只能平仓
		/// </summary>
		CloseOnly = (Byte)'1',

		/// <summary>
		/// 不能交易
		/// </summary>
		Forbidden = (Byte)'2'
	};

	/// <summary>
	/// TFtdcOrderSourceType是一个报单来源类型
	/// </summary>
	public enum struct EnumOrderSourceType : Byte
	{
		/// <summary>
		/// 来自参与者
		/// </summary>
		Participant = (Byte)'0',

		/// <summary>
		/// 来自管理员
		/// </summary>
		Administrator = (Byte)'1'
	};

	/// <summary>
	/// TFtdcTradeTypeType是一个成交类型类型
	/// </summary>
	public enum struct EnumTradeTypeType : Byte
	{
		/// <summary>
		/// 普通成交
		/// </summary>
		Common = (Byte)'0',

		/// <summary>
		/// 期权执行
		/// </summary>
		OptionsExecution = (Byte)'1',

		/// <summary>
		/// OTC成交
		/// </summary>
		OTC = (Byte)'2',

		/// <summary>
		/// 期转现衍生成交
		/// </summary>
		EFPDerived = (Byte)'3',

		/// <summary>
		/// 组合衍生成交
		/// </summary>
		CombinationDerived = (Byte)'4'
	};

	/// <summary>
	/// TFtdcPriceSourceType是一个成交价来源类型
	/// </summary>
	public enum struct EnumPriceSourceType : Byte
	{
		/// <summary>
		/// 前成交价
		/// </summary>
		LastPrice = (Byte)'0',

		/// <summary>
		/// 买委托价
		/// </summary>
		Buy = (Byte)'1',

		/// <summary>
		/// 卖委托价
		/// </summary>
		Sell = (Byte)'2'
	};

	/// <summary>
	/// TFtdcInstrumentStatusType是一个合约交易状态类型
	/// </summary>
	public enum struct EnumInstrumentStatusType : Byte
	{
		/// <summary>
		/// 开盘前
		/// </summary>
		BeforeTrading = (Byte)'0',

		/// <summary>
		/// 非交易
		/// </summary>
		NoTrading = (Byte)'1',

		/// <summary>
		/// 连续交易
		/// </summary>
		Continous = (Byte)'2',

		/// <summary>
		/// 集合竞价报单
		/// </summary>
		AuctionOrdering = (Byte)'3',

		/// <summary>
		/// 集合竞价价格平衡
		/// </summary>
		AuctionBalance = (Byte)'4',

		/// <summary>
		/// 集合竞价撮合
		/// </summary>
		AuctionMatch = (Byte)'5',

		/// <summary>
		/// 收盘
		/// </summary>
		Closed = (Byte)'6'
	};

	/// <summary>
	/// TFtdcInstStatusEnterReasonType是一个品种进入交易状态原因类型
	/// </summary>
	public enum struct EnumInstStatusEnterReasonType : Byte
	{
		/// <summary>
		/// 自动切换
		/// </summary>
		Automatic = (Byte)'1',

		/// <summary>
		/// 手动切换
		/// </summary>
		Manual = (Byte)'2',

		/// <summary>
		/// 熔断
		/// </summary>
		Fuse = (Byte)'3'
	};

	/// <summary>
	/// TFtdcBatchStatusType是一个处理状态类型
	/// </summary>
	public enum struct EnumBatchStatusType : Byte
	{
		/// <summary>
		/// 未上传
		/// </summary>
		NoUpload = (Byte)'1',

		/// <summary>
		/// 已上传
		/// </summary>
		Uploaded = (Byte)'2',

		/// <summary>
		/// 审核失败
		/// </summary>
		Failed = (Byte)'3'
	};

	/// <summary>
	/// TFtdcReturnStyleType是一个按品种返还方式类型
	/// </summary>
	public enum struct EnumReturnStyleType : Byte
	{
		/// <summary>
		/// 按所有品种
		/// </summary>
		All = (Byte)'1',

		/// <summary>
		/// 按品种
		/// </summary>
		ByProduct = (Byte)'2'
	};

	/// <summary>
	/// TFtdcReturnPatternType是一个返还模式类型
	/// </summary>
	public enum struct EnumReturnPatternType : Byte
	{
		/// <summary>
		/// 按成交手数
		/// </summary>
		ByVolume = (Byte)'1',

		/// <summary>
		/// 按留存手续费
		/// </summary>
		ByFeeOnHand = (Byte)'2'
	};

	/// <summary>
	/// TFtdcReturnLevelType是一个返还级别类型
	/// </summary>
	public enum struct EnumReturnLevelType : Byte
	{
		/// <summary>
		/// 级别1
		/// </summary>
		Level1 = (Byte)'1',

		/// <summary>
		/// 级别2
		/// </summary>
		Level2 = (Byte)'2',

		/// <summary>
		/// 级别3
		/// </summary>
		Level3 = (Byte)'3',

		/// <summary>
		/// 级别4
		/// </summary>
		Level4 = (Byte)'4',

		/// <summary>
		/// 级别5
		/// </summary>
		Level5 = (Byte)'5',

		/// <summary>
		/// 级别6
		/// </summary>
		Level6 = (Byte)'6',

		/// <summary>
		/// 级别7
		/// </summary>
		Level7 = (Byte)'7',

		/// <summary>
		/// 级别8
		/// </summary>
		Level8 = (Byte)'8',

		/// <summary>
		/// 级别9
		/// </summary>
		Level9 = (Byte)'9'
	};

	/// <summary>
	/// TFtdcReturnStandardType是一个返还标准类型
	/// </summary>
	public enum struct EnumReturnStandardType : Byte
	{
		/// <summary>
		/// 分阶段返还
		/// </summary>
		ByPeriod = (Byte)'1',

		/// <summary>
		/// 按某一标准
		/// </summary>
		ByStandard = (Byte)'2'
	};

	/// <summary>
	/// TFtdcMortgageTypeType是一个质押类型类型
	/// </summary>
	public enum struct EnumMortgageTypeType : Byte
	{
		/// <summary>
		/// 质出
		/// </summary>
		Out = (Byte)'0',

		/// <summary>
		/// 质入
		/// </summary>
		In = (Byte)'1'
	};

	/// <summary>
	/// TFtdcInvestorSettlementParamIDType是一个投资者结算参数代码类型
	/// </summary>
	public enum struct EnumInvestorSettlementParamIDType : Byte
	{
		/// <summary>
		/// 基础保证金
		/// </summary>
		BaseMargin = (Byte)'1',

		/// <summary>
		/// 最低权益标准
		/// </summary>
		LowestInterest = (Byte)'2',

		/// <summary>
		/// 质押比例
		/// </summary>
		MortgageRatio = (Byte)'4',

		/// <summary>
		/// 保证金算法
		/// </summary>
		MarginWay = (Byte)'5',

		/// <summary>
		/// 结算单结存是否包含质押
		/// </summary>
		BillDeposit = (Byte)'9'
	};

	/// <summary>
	/// TFtdcExchangeSettlementParamIDType是一个交易所结算参数代码类型
	/// </summary>
	public enum struct EnumExchangeSettlementParamIDType : Byte
	{
		/// <summary>
		/// 质押比例
		/// </summary>
		MortgageRatio = (Byte)'1',

		/// <summary>
		/// 分项资金导入项
		/// </summary>
		OtherFundItem = (Byte)'2',

		/// <summary>
		/// 分项资金入交易所出入金
		/// </summary>
		OtherFundImport = (Byte)'3',

		/// <summary>
		/// 上期所交割手续费收取方式
		/// </summary>
		SHFEDelivFee = (Byte)'4',

		/// <summary>
		/// 大商所交割手续费收取方式
		/// </summary>
		DCEDelivFee = (Byte)'5',

		/// <summary>
		/// 中金所开户最低可用金额
		/// </summary>
		CFFEXMinPrepa = (Byte)'6',

		/// <summary>
		/// 郑商所结算方式
		/// </summary>
		CZCESettlementType = (Byte)'7'
	};

	/// <summary>
	/// TFtdcSystemParamIDType是一个系统参数代码类型
	/// </summary>
	public enum struct EnumSystemParamIDType : Byte
	{
		/// <summary>
		/// 投资者代码最小长度
		/// </summary>
		InvestorIDMinLength = (Byte)'1',

		/// <summary>
		/// 投资者帐号代码最小长度
		/// </summary>
		AccountIDMinLength = (Byte)'2',

		/// <summary>
		/// 投资者开户默认登录权限
		/// </summary>
		UserRightLogon = (Byte)'3',

		/// <summary>
		/// 投资者交易结算单成交汇总方式
		/// </summary>
		SettlementBillTrade = (Byte)'4',

		/// <summary>
		/// 统一开户更新交易编码方式
		/// </summary>
		TradingCode = (Byte)'5',

		/// <summary>
		/// 结算是否判断存在未复核的出入金和分项资金
		/// </summary>
		CheckFund = (Byte)'6',

		/// <summary>
		/// 是否启用手续费模板数据权限
		/// </summary>
		CommModelRight = (Byte)'7',

		/// <summary>
		/// 是否启用保证金率模板数据权限
		/// </summary>
		MarginModelRight = (Byte)'9',

		/// <summary>
		/// 是否规范用户才能激活
		/// </summary>
		IsStandardActive = (Byte)'8',

		/// <summary>
		/// 上传的结算文件标识
		/// </summary>
		UploadSettlementFile = (Byte)'U',

		/// <summary>
		/// 下载的保证金存管文件
		/// </summary>
		DownloadCSRCFile = (Byte)'D',

		/// <summary>
		/// 结算单文件标识
		/// </summary>
		SettlementBillFile = (Byte)'S',

		/// <summary>
		/// 证监会文件标识
		/// </summary>
		CSRCOthersFile = (Byte)'C',

		/// <summary>
		/// 投资者照片路径
		/// </summary>
		InvestorPhoto = (Byte)'P',

		/// <summary>
		/// 上报保证金监控中心数据
		/// </summary>
		CSRCData = (Byte)'R',

		/// <summary>
		/// 开户密码录入方式
		/// </summary>
		InvestorPwdModel = (Byte)'I',

		/// <summary>
		/// 投资者中金所结算文件下载路径
		/// </summary>
		CFFEXInvestorSettleFile = (Byte)'F',

		/// <summary>
		/// 投资者代码编码方式
		/// </summary>
		InvestorIDType = (Byte)'a',

		/// <summary>
		/// 休眠户最高权益
		/// </summary>
		FreezeMaxReMain = (Byte)'r',

		/// <summary>
		/// 手续费相关操作实时上场开关
		/// </summary>
		IsSync = (Byte)'A'
	};

	/// <summary>
	/// TFtdcTradeParamIDType是一个交易系统参数代码类型
	/// </summary>
	public enum struct EnumTradeParamIDType : Byte
	{
		/// <summary>
		/// 系统加密算法
		/// </summary>
		EncryptionStandard = (Byte)'E',

		/// <summary>
		/// 系统风险算法
		/// </summary>
		RiskMode = (Byte)'R',

		/// <summary>
		/// 系统风险算法是否全局 0-否 1-是
		/// </summary>
		RiskModeGlobal = (Byte)'G'
	};

	/// <summary>
	/// TFtdcFileIDType是一个文件标识类型
	/// </summary>
	public enum struct EnumFileIDType : Byte
	{
		/// <summary>
		/// 资金数据
		/// </summary>
		SettlementFund = (Byte)'F',

		/// <summary>
		/// 成交数据
		/// </summary>
		Trade = (Byte)'T',

		/// <summary>
		/// 投资者持仓数据
		/// </summary>
		InvestorPosition = (Byte)'P',

		/// <summary>
		/// 投资者分项资金数据
		/// </summary>
		SubEntryFund = (Byte)'O',

		/// <summary>
		/// 郑商所组合持仓数据
		/// </summary>
		CZCECombinationPos = (Byte)'C',

		/// <summary>
		/// 上报保证金监控中心数据
		/// </summary>
		CSRCData = (Byte)'R',

		/// <summary>
		/// 郑商所平仓了结数据
		/// </summary>
		CZCEClose = (Byte)'L',

		/// <summary>
		/// 郑商所非平仓了结数据
		/// </summary>
		CZCENoClose = (Byte)'N'

	};

	/// <summary>
	/// TFtdcFileTypeType是一个文件上传类型类型
	/// </summary>
	public enum struct EnumFileTypeType : Byte
	{
		/// <summary>
		/// 结算
		/// </summary>
		Settlement = (Byte)'0',

		/// <summary>
		/// 核对
		/// </summary>
		Check = (Byte)'1'
	};

	/// <summary>
	/// TFtdcFileFormatType是一个文件格式类型
	/// </summary>
	public enum struct EnumFileFormatType : Byte
	{
		/// <summary>
		/// 文本文件(.txt)
		/// </summary>
		Txt = (Byte)'0',

		/// <summary>
		/// 压缩文件(.zip)
		/// </summary>
		Zip = (Byte)'1',

		/// <summary>
		/// DBF文件(.dbf)
		/// </summary>
		DBF = (Byte)'2'
	};

	/// <summary>
	/// TFtdcFileUploadStatusType是一个文件状态类型
	/// </summary>
	public enum struct EnumFileUploadStatusType : Byte
	{
		/// <summary>
		/// 上传成功
		/// </summary>
		SucceedUpload = (Byte)'1',

		/// <summary>
		/// 上传失败
		/// </summary>
		FailedUpload = (Byte)'2',

		/// <summary>
		/// 导入成功
		/// </summary>
		SucceedLoad = (Byte)'3',

		/// <summary>
		/// 导入部分成功
		/// </summary>
		PartSucceedLoad = (Byte)'4',

		/// <summary>
		/// 导入失败
		/// </summary>
		FailedLoad = (Byte)'5'
	};

	/// <summary>
	/// TFtdcTransferDirectionType是一个移仓方向类型
	/// </summary>
	public enum struct EnumTransferDirectionType : Byte
	{
		/// <summary>
		/// 移出
		/// </summary>
		Out = (Byte)'0',

		/// <summary>
		/// 移入
		/// </summary>
		In = (Byte)'1'
	};

	/// <summary>
	/// TFtdcBankFlagType是一个银行统一标识类型类型
	/// </summary>
	public enum struct EnumBankFlagType : Byte
	{
		/// <summary>
		/// 工商银行
		/// </summary>
		ICBC = (Byte)'1',

		/// <summary>
		/// 农业银行
		/// </summary>
		ABC = (Byte)'2',

		/// <summary>
		/// 中国银行
		/// </summary>
		BC = (Byte)'3',

		/// <summary>
		/// 建设银行
		/// </summary>
		CBC = (Byte)'4',

		/// <summary>
		/// 交通银行
		/// </summary>
		BOC = (Byte)'5',

		/// <summary>
		/// 其他银行
		/// </summary>
		Other = (Byte)'Z'
	};

	/// <summary>
	/// TFtdcSpecialCreateRuleType是一个特殊的创建规则类型
	/// </summary>
	public enum struct EnumSpecialCreateRuleType : Byte
	{
		/// <summary>
		/// 没有特殊创建规则
		/// </summary>
		NoSpecialRule = (Byte)'0',

		/// <summary>
		/// 不包含春节
		/// </summary>
		NoSpringFestival = (Byte)'1'
	};

	/// <summary>
	/// TFtdcBasisPriceTypeType是一个挂牌基准价类型类型
	/// </summary>
	public enum struct EnumBasisPriceTypeType : Byte
	{
		/// <summary>
		/// 上一合约结算价
		/// </summary>
		LastSettlement = (Byte)'1',

		/// <summary>
		/// 上一合约收盘价
		/// </summary>
		LaseClose = (Byte)'2'
	};

	/// <summary>
	/// TFtdcProductLifePhaseType是一个产品生命周期状态类型
	/// </summary>
	public enum struct EnumProductLifePhaseType : Byte
	{
		/// <summary>
		/// 活跃
		/// </summary>
		Active = (Byte)'1',

		/// <summary>
		/// 不活跃
		/// </summary>
		NonActive = (Byte)'2',

		/// <summary>
		/// 注销
		/// </summary>
		Canceled = (Byte)'3'
	};

	/// <summary>
	/// TFtdcDeliveryModeType是一个交割方式类型
	/// </summary>
	public enum struct EnumDeliveryModeType : Byte
	{
		/// <summary>
		/// 现金交割
		/// </summary>
		CashDeliv = (Byte)'1',

		/// <summary>
		/// 实物交割
		/// </summary>
		CommodityDeliv = (Byte)'2'
	};

	/// <summary>
	/// TFtdcFundIOTypeType是一个出入金类型类型
	/// </summary>
	public enum struct EnumFundIOTypeType : Byte
	{
		/// <summary>
		/// 出入金
		/// </summary>
		FundIO = (Byte)'1',

		/// <summary>
		/// 银期转帐
		/// </summary>
		Transfer = (Byte)'2'
	};

	/// <summary>
	/// TFtdcFundTypeType是一个资金类型类型
	/// </summary>
	public enum struct EnumFundTypeType : Byte
	{
		/// <summary>
		/// 银行存款
		/// </summary>
		Deposite = (Byte)'1',

		/// <summary>
		/// 分项资金
		/// </summary>
		ItemFund = (Byte)'2',

		/// <summary>
		/// 公司调整
		/// </summary>
		Company = (Byte)'3'
	};

	/// <summary>
	/// TFtdcFundDirectionType是一个出入金方向类型
	/// </summary>
	public enum struct EnumFundDirectionType : Byte
	{
		/// <summary>
		/// 入金
		/// </summary>
		In = (Byte)'1',

		/// <summary>
		/// 出金
		/// </summary>
		Out = (Byte)'2'
	};

	/// <summary>
	/// TFtdcFundStatusType是一个资金状态类型
	/// </summary>
	public enum struct EnumLoginModeType : Byte
	{
		/// <summary>
		/// 交易
		/// </summary>
		Trade = (Byte)'0',

		/// <summary>
		/// 转账
		/// </summary>
		Transfer = (Byte)'1',
	};

	/// <summary>
	/// TFtdcFundStatusType是一个资金状态类型
	/// </summary>
	public enum struct EnumFundStatusType : Byte
	{
		/// <summary>
		/// 已录入
		/// </summary>
		Record = (Byte)'1',

		/// <summary>
		/// 已复核
		/// </summary>
		Check = (Byte)'2',

		/// <summary>
		/// 已冲销
		/// </summary>
		Charge = (Byte)'3'
	};

	/// <summary>
	/// TFtdcPublishStatusType是一个发布状态类型
	/// </summary>
	public enum struct EnumPublishStatusType : Byte
	{
		/// <summary>
		/// 未发布
		/// </summary>
		None = (Byte)'1',

		/// <summary>
		/// 正在发布
		/// </summary>
		Publishing = (Byte)'2',

		/// <summary>
		/// 已发布
		/// </summary>
		Published = (Byte)'3'
	};

	/// <summary>
	/// TFtdcSystemStatusType是一个系统状态类型
	/// </summary>
	public enum struct EnumSystemStatusType : Byte
	{
		/// <summary>
		/// 不活跃
		/// </summary>
		NonActive = (Byte)'1',

		/// <summary>
		/// 启动
		/// </summary>
		Startup = (Byte)'2',

		/// <summary>
		/// 交易开始初始化
		/// </summary>
		Initialize = (Byte)'3',

		/// <summary>
		/// 交易完成初始化
		/// </summary>
		Initialized = (Byte)'4',

		/// <summary>
		/// 收市开始
		/// </summary>
		Close = (Byte)'5',

		/// <summary>
		/// 收市完成
		/// </summary>
		Closed = (Byte)'6',

		/// <summary>
		/// 结算
		/// </summary>
		Settlement = (Byte)'7'
	};

	/// <summary>
	/// TFtdcSettlementStatusType是一个结算状态类型
	/// </summary>
	public enum struct EnumSettlementStatusType : Byte
	{
		/// <summary>
		/// 初始
		/// </summary>
		Initialize = (Byte)'0',

		/// <summary>
		/// 结算中
		/// </summary>
		Settlementing = (Byte)'1',

		/// <summary>
		/// 已结算
		/// </summary>
		Settlemented = (Byte)'2',

		/// <summary>
		/// 结算完成
		/// </summary>
		Finished = (Byte)'3'
	};

	/// <summary>
	/// TFtdcInvestorTypeType是一个投资者类型类型
	/// </summary>
	public enum struct EnumInvestorTypeType : Byte
	{
		/// <summary>
		/// 自然人
		/// </summary>
		Person = (Byte)'0',

		/// <summary>
		/// 法人
		/// </summary>
		Company = (Byte)'1',

		/// <summary>
		/// 投资基金
		/// </summary>
		Fund = (Byte)'2'
	};

	/// <summary>
	/// TFtdcBrokerTypeType是一个经纪公司类型类型
	/// </summary>
	public enum struct EnumBrokerTypeType : Byte
	{
		/// <summary>
		/// 交易会员
		/// </summary>
		Trade = (Byte)'0',

		/// <summary>
		/// 交易结算会员
		/// </summary>
		TradeSettle = (Byte)'1'
	};

	/// <summary>
	/// TFtdcRiskLevelType是一个风险等级类型
	/// </summary>
	public enum struct EnumRiskLevelType : Byte
	{
		/// <summary>
		/// 低风险客户
		/// </summary>
		Low = (Byte)'1',

		/// <summary>
		/// 普通客户
		/// </summary>
		Normal = (Byte)'2',

		/// <summary>
		/// 关注客户
		/// </summary>
		Focus = (Byte)'3',

		/// <summary>
		/// 风险客户
		/// </summary>
		Risk = (Byte)'4'
	};

	/// <summary>
	/// TFtdcFeeAcceptStyleType是一个手续费收取方式类型
	/// </summary>
	public enum struct EnumFeeAcceptStyleType : Byte
	{
		/// <summary>
		/// 按交易收取
		/// </summary>
		ByTrade = (Byte)'1',

		/// <summary>
		/// 按交割收取
		/// </summary>
		ByDeliv = (Byte)'2',

		/// <summary>
		/// 不收
		/// </summary>
		None = (Byte)'3',

		/// <summary>
		/// 按指定手续费收取
		/// </summary>
		FixFee = (Byte)'4'
	};

	/// <summary>
	/// TFtdcPasswordTypeType是一个密码类型类型
	/// </summary>
	public enum struct EnumPasswordTypeType : Byte
	{
		/// <summary>
		/// 交易密码
		/// </summary>
		Trade = (Byte)'1',

		/// <summary>
		/// 资金密码
		/// </summary>
		Account = (Byte)'2'
	};

	/// <summary>
	/// TFtdcAlgorithmType是一个盈亏算法类型
	/// </summary>
	public enum struct EnumAlgorithmType : Byte
	{
		/// <summary>
		/// 浮盈浮亏都计算
		/// </summary>
		All = (Byte)'1',

		/// <summary>
		/// 浮盈不计，浮亏计
		/// </summary>
		OnlyLost = (Byte)'2',

		/// <summary>
		/// 浮盈计，浮亏不计
		/// </summary>
		OnlyGain = (Byte)'3',

		/// <summary>
		/// 浮盈浮亏都不计算
		/// </summary>
		None = (Byte)'4'
	};

	/// <summary>
	/// TFtdcIncludeCloseProfitType是一个是否包含平仓盈利类型
	/// </summary>
	public enum struct EnumIncludeCloseProfitType : Byte
	{
		/// <summary>
		/// 包含平仓盈利
		/// </summary>
		Include = (Byte)'0',

		/// <summary>
		/// 不包含平仓盈利
		/// </summary>
		NotInclude = (Byte)'2'
	};

	/// <summary>
	/// TFtdcAllWithoutTradeType是一个是否受可提比例限制类型
	/// </summary>
	public enum struct EnumAllWithoutTradeType : Byte
	{
		/// <summary>
		/// 不受可提比例限制
		/// </summary>
		Enable = (Byte)'0',

		/// <summary>
		/// 受可提比例限制
		/// </summary>
		Disable = (Byte)'2'
	};

	/// <summary>
	/// TFtdcFuturePwdFlagType是一个资金密码核对标志类型
	/// </summary>
	public enum struct EnumFuturePwdFlagType : Byte
	{
		/// <summary>
		/// 不核对
		/// </summary>
		UnCheck = (Byte)'0',

		/// <summary>
		/// 核对
		/// </summary>
		Check = (Byte)'1'
	};

	/// <summary>
	/// TFtdcTransferTypeType是一个银期转账类型类型
	/// </summary>
	public enum struct EnumTransferTypeType : Byte
	{
		/// <summary>
		/// 银行转期货
		/// </summary>
		BankToFuture = (Byte)'0',

		/// <summary>
		/// 期货转银行
		/// </summary>
		FutureToBank = (Byte)'1'
	};

	/// <summary>
	/// TFtdcTransferValidFlagType是一个转账有效标志类型
	/// </summary>
	public enum struct EnumTransferValidFlagType : Byte
	{
		/// <summary>
		/// 无效或失败
		/// </summary>
		Invalid = (Byte)'0',

		/// <summary>
		/// 有效
		/// </summary>
		Valid = (Byte)'1',

		/// <summary>
		/// 冲正
		/// </summary>
		Reverse = (Byte)'2'
	};

	/// <summary>
	/// TFtdcReasonType是一个事由类型
	/// </summary>
	public enum struct EnumReasonType : Byte
	{
		/// <summary>
		/// 错单
		/// </summary>
		CD = (Byte)'0',

		/// <summary>
		/// 资金在途
		/// </summary>
		ZT = (Byte)'1',

		/// <summary>
		/// 其它
		/// </summary>
		QT = (Byte)'2'
	};

	/// <summary>
	/// TFtdcSexType是一个性别类型
	/// </summary>
	public enum struct EnumSexType : Byte
	{
		/// <summary>
		/// 未知
		/// </summary>
		None = (Byte)'0',

		/// <summary>
		/// 男
		/// </summary>
		Man = (Byte)'1',

		/// <summary>
		/// 女
		/// </summary>
		Woman = (Byte)'2'
	};

	/// <summary>
	/// TFtdcUserTypeType是一个用户类型类型
	/// </summary>
	public enum struct EnumUserTypeType : Byte
	{
		/// <summary>
		/// 投资者
		/// </summary>
		Investor = (Byte)'0',

		/// <summary>
		/// 操作员
		/// </summary>
		Operator = (Byte)'1',

		/// <summary>
		/// 管理员
		/// </summary>
		SuperUser = (Byte)'2'
	};

	/// <summary>
	/// TFtdcRateTypeType是一个费率类型类型
	/// </summary>
	public enum struct EnumRateTypeType : Byte
	{
		/// <summary>
		/// 保证金率
		/// </summary>
		MarginRate = (Byte)'2',

		/// <summary>
		/// 手续费率
		/// </summary>
		CommRate = (Byte)'1',

		/// <summary>
		/// 所有
		/// </summary>
		AllRate = (Byte)'0'
	};

	/// <summary>
	/// TFtdcNoteTypeType是一个通知类型类型
	/// </summary>
	public enum struct EnumNoteTypeType : Byte
	{
		/// <summary>
		/// 交易结算单
		/// </summary>
		TradeSettleBill = (Byte)'1',

		/// <summary>
		/// 交易结算月报
		/// </summary>
		TradeSettleMonth = (Byte)'2',

		/// <summary>
		/// 追加保证金通知书
		/// </summary>
		CallMarginNotes = (Byte)'3',

		/// <summary>
		/// 强行平仓通知书
		/// </summary>
		ForceCloseNotes = (Byte)'4',

		/// <summary>
		/// 成交通知书
		/// </summary>
		TradeNotes = (Byte)'5',

		/// <summary>
		/// 交割通知书
		/// </summary>
		DelivNotes = (Byte)'6'
	};

	/// <summary>
	/// TFtdcSettlementStyleType是一个结算单方式类型
	/// </summary>
	public enum struct EnumSettlementStyleType : Byte
	{
		/// <summary>
		/// 逐日盯市
		/// </summary>
		Day = (Byte)'1',

		/// <summary>
		/// 逐笔对冲
		/// </summary>
		Volume = (Byte)'2'
	};

	/// <summary>
	/// TFtdcSettlementBillTypeType是一个结算单类型类型
	/// </summary>
	public enum struct EnumSettlementBillTypeType : Byte
	{
		/// <summary>
		/// 日报
		/// </summary>
		Day = (Byte)'0',

		/// <summary>
		/// 月报
		/// </summary>
		Month = (Byte)'1'
	};

	/// <summary>
	/// TFtdcUserRightTypeType是一个客户权限类型类型
	/// </summary>
	public enum struct EnumUserRightTypeType : Byte
	{
		/// <summary>
		/// 登录
		/// </summary>
		Logon = (Byte)'1',

		/// <summary>
		/// 银期转帐
		/// </summary>
		Transfer = (Byte)'2',

		/// <summary>
		/// 邮寄结算单
		/// </summary>
		EMail = (Byte)'3',

		/// <summary>
		/// 传真结算单
		/// </summary>
		Fax = (Byte)'4',

		/// <summary>
		/// 条件单
		/// </summary>
		ConditionOrder = (Byte)'5'
	};

	/// <summary>
	/// TFtdcMarginPriceTypeType是一个保证金价格类型类型
	/// </summary>
	public enum struct EnumMarginPriceTypeType : Byte
	{
		/// <summary>
		/// 昨结算价
		/// </summary>
		PreSettlementPrice = (Byte)'1',

		/// <summary>
		/// 最新价
		/// </summary>
		SettlementPrice = (Byte)'2',

		/// <summary>
		/// 成交均价
		/// </summary>
		AveragePrice = (Byte)'3',

		/// <summary>
		/// 开仓价
		/// </summary>
		OpenPrice = (Byte)'4'
	};

	/// <summary>
	/// TFtdcBillGenStatusType是一个结算单生成状态类型
	/// </summary>
	public enum struct EnumBillGenStatusType : Byte
	{
		/// <summary>
		/// 未生成
		/// </summary>
		None = (Byte)'0',

		/// <summary>
		/// 生成中
		/// </summary>
		NoGenerated = (Byte)'1',

		/// <summary>
		/// 已生成
		/// </summary>
		Generated = (Byte)'2'
	};

	/// <summary>
	/// TFtdcAlgoTypeType是一个算法类型类型
	/// </summary>
	public enum struct EnumAlgoTypeType : Byte
	{
		/// <summary>
		/// 持仓处理算法
		/// </summary>
		HandlePositionAlgo = (Byte)'1',

		/// <summary>
		/// 寻找保证金率算法
		/// </summary>
		FindMarginRateAlgo = (Byte)'2'
	};

	/// <summary>
	/// TFtdcHandlePositionAlgoIDType是一个持仓处理算法编号类型
	/// </summary>
	public enum struct EnumHandlePositionAlgoIDType : Byte
	{
		/// <summary>
		/// 基本
		/// </summary>
		Base = (Byte)'1',

		/// <summary>
		/// 大连商品交易所
		/// </summary>
		DCE = (Byte)'2',

		/// <summary>
		/// 郑州商品交易所
		/// </summary>
		CZCE = (Byte)'3'
	};

	/// <summary>
	/// TFtdcFindMarginRateAlgoIDType是一个寻找保证金率算法编号类型
	/// </summary>
	public enum struct EnumFindMarginRateAlgoIDType : Byte
	{
		/// <summary>
		/// 基本
		/// </summary>
		Base = (Byte)'1',

		/// <summary>
		/// 大连商品交易所
		/// </summary>
		DCE = (Byte)'2',

		/// <summary>
		/// 郑州商品交易所
		/// </summary>
		CZCE = (Byte)'3'
	};

	/// <summary>
	/// TFtdcHandleTradingAccountAlgoIDType是一个资金处理算法编号类型
	/// </summary>
	public enum struct EnumHandleTradingAccountAlgoIDType : Byte
	{
		/// <summary>
		/// 基本
		/// </summary>
		Base = (Byte)'1',

		/// <summary>
		/// 大连商品交易所
		/// </summary>
		DCE = (Byte)'2',

		/// <summary>
		/// 郑州商品交易所
		/// </summary>
		CZCE = (Byte)'3'
	};

	/// <summary>
	/// TFtdcPersonTypeType是一个联系人类型类型
	/// </summary>
	public enum struct EnumPersonTypeType : Byte
	{
		/// <summary>
		/// 指定下单人
		/// </summary>
		Order = (Byte)'1',

		/// <summary>
		/// 开户授权人
		/// </summary>
		Open = (Byte)'2',

		/// <summary>
		/// 资金调拨人
		/// </summary>
		Fund = (Byte)'3',

		/// <summary>
		/// 结算单确认人
		/// </summary>
		Settlement = (Byte)'4'
	};

	/// <summary>
	/// TFtdcQueryInvestorRangeType是一个查询范围类型
	/// </summary>
	public enum struct EnumQueryInvestorRangeType : Byte
	{
		/// <summary>
		/// 所有
		/// </summary>
		All = (Byte)'1',

		/// <summary>
		/// 查询分类
		/// </summary>
		Group = (Byte)'2',

		/// <summary>
		/// 单一投资者
		/// </summary>
		Single = (Byte)'3'
	};

	/// <summary>
	/// TFtdcInvestorRiskStatusType是一个投资者风险状态类型
	/// </summary>
	public enum struct EnumInvestorRiskStatusType : Byte
	{
		/// <summary>
		/// 正常
		/// </summary>
		Normal = (Byte)'1',

		/// <summary>
		/// 警告
		/// </summary>
		Warn = (Byte)'2',

		/// <summary>
		/// 追保
		/// </summary>
		Call = (Byte)'3',

		/// <summary>
		/// 强平
		/// </summary>
		Force = (Byte)'4',

		/// <summary>
		/// 异常
		/// </summary>
		Exception = (Byte)'5'
	};

	/// <summary>
	/// TFtdcUserEventTypeType是一个用户事件类型类型
	/// </summary>
	public enum struct EnumUserEventTypeType : Byte
	{
		/// <summary>
		/// 所有
		/// </summary>
		All = (Byte)' ',

		/// <summary>
		/// 登录
		/// </summary>
		Login = (Byte)'1',

		/// <summary>
		/// 登出
		/// </summary>
		Logout = (Byte)'2',

		/// <summary>
		/// 交易成功
		/// </summary>
		Trading = (Byte)'3',

		/// <summary>
		/// 交易失败
		/// </summary>
		TradingError = (Byte)'4',

		/// <summary>
		/// 修改密码
		/// </summary>
		UpdatePassword = (Byte)'5',

		/// <summary>
		/// 其他
		/// </summary>
		Other = (Byte)'9'
	};

	/// <summary>
	/// TFtdcCloseStyleType是一个平仓方式类型
	/// </summary>
	public enum struct EnumCloseStyleType : Byte
	{
		/// <summary>
		/// 先开先平
		/// </summary>
		Close = (Byte)'0',

		/// <summary>
		/// 先平今再平昨
		/// </summary>
		CloseToday = (Byte)'1'
	};

	/// <summary>
	/// TFtdcStatModeType是一个统计方式类型
	/// </summary>
	public enum struct EnumStatModeType : Byte
	{
		/// <summary>
		/// ----
		/// </summary>
		Non = (Byte)'0',

		/// <summary>
		/// 按合约统计
		/// </summary>
		Instrument = (Byte)'1',

		/// <summary>
		/// 按产品统计
		/// </summary>
		Product = (Byte)'2',

		/// <summary>
		/// 按投资者统计
		/// </summary>
		Investor = (Byte)'3'
	};

	/// <summary>
	/// TFtdcParkedOrderStatusType是一个预埋单状态类型
	/// </summary>
	public enum struct EnumParkedOrderStatusType : Byte
	{
		/// <summary>
		/// 未发送
		/// </summary>
		NotSend = (Byte)'1',

		/// <summary>
		/// 已发送
		/// </summary>
		Send = (Byte)'2',

		/// <summary>
		/// 已删除
		/// </summary>
		Deleted = (Byte)'3'
	};

	/// <summary>
	/// TFtdcVirDealStatusType是一个处理状态类型
	/// </summary>
	public enum struct EnumVirDealStatusType : Byte
	{
		/// <summary>
		/// 正在处理
		/// </summary>
		Dealing = (Byte)'1',

		/// <summary>
		/// 处理成功
		/// </summary>
		DeaclSucceed = (Byte)'2'
	};

	/// <summary>
	/// TFtdcOrgSystemIDType是一个原有系统代码类型
	/// </summary>
	public enum struct EnumOrgSystemIDType : Byte
	{
		/// <summary>
		/// 综合交易平台
		/// </summary>
		Standard = (Byte)'0',

		/// <summary>
		/// 易盛系统
		/// </summary>
		ESunny = (Byte)'1',

		/// <summary>
		/// 金仕达V6系统
		/// </summary>
		KingStarV6 = (Byte)'2'
	};

	/// <summary>
	/// TFtdcVirTradeStatusType是一个交易状态类型
	/// </summary>
	public enum struct EnumVirTradeStatusType : Byte
	{
		/// <summary>
		/// 正常处理中
		/// </summary>
		NaturalDeal = (Byte)'0',

		/// <summary>
		/// 成功结束
		/// </summary>
		SucceedEnd = (Byte)'1',

		/// <summary>
		/// 失败结束
		/// </summary>
		FailedEND = (Byte)'2',

		/// <summary>
		/// 异常中
		/// </summary>
		Exception = (Byte)'3',

		/// <summary>
		/// 已人工异常处理
		/// </summary>
		ManualDeal = (Byte)'4',

		/// <summary>
		/// 通讯异常 ，请人工处理
		/// </summary>
		MesException = (Byte)'5',

		/// <summary>
		/// 系统出错，请人工处理
		/// </summary>
		SysException = (Byte)'6'
	};

	/// <summary>
	/// TFtdcVirBankAccTypeType是一个银行帐户类型类型
	/// </summary>
	public enum struct EnumVirBankAccTypeType : Byte
	{
		/// <summary>
		/// 存折
		/// </summary>
		BankBook = (Byte)'1',

		/// <summary>
		/// 储蓄卡
		/// </summary>
		BankCard = (Byte)'2',

		/// <summary>
		/// 信用卡
		/// </summary>
		CreditCard = (Byte)'3'
	};

	/// <summary>
	/// TFtdcVirementStatusType是一个银行帐户类型类型
	/// </summary>
	public enum struct EnumVirementStatusType : Byte
	{
		/// <summary>
		/// 正常
		/// </summary>
		Natural = (Byte)'0',

		/// <summary>
		/// 销户
		/// </summary>
		Canceled = (Byte)'9'
	};

	/// <summary>
	/// TFtdcVirementAvailAbilityType是一个有效标志类型
	/// </summary>
	public enum struct EnumVirementAvailAbilityType : Byte
	{
		/// <summary>
		/// 未确认
		/// </summary>
		NoAvailAbility = (Byte)'0',

		/// <summary>
		/// 有效
		/// </summary>
		AvailAbility = (Byte)'1',

		/// <summary>
		/// 冲正
		/// </summary>
		Repeal = (Byte)'2'
	};

	/// <summary>
	/// TFtdcVirementTradeCodeType是一个交易代码类型
	/// </summary>
	public enum struct EnumVirementTradeCodeType : Byte
	{
		/// <summary>
		/// 银行发起银行资金转期货
		/// </summary>
		BankBankToFuture_102001 = (Byte)'1',//'102001',

											/// <summary>
											/// 银行发起期货资金转银行
											/// </summary>
											BankFutureToBank_102002 = (Byte)'2',//'102002',

																				/// <summary>
																				/// 期货发起银行资金转期货
																				/// </summary>
																				FutureBankToFuture_202001 = (Byte)'3',//'202001',

																													  /// <summary>
																													  /// 期货发起期货资金转银行
																													  /// </summary>
																													  FutureFutureToBank_202002 = (Byte)'4'//'202002'
	};

	/// <summary>
	/// TFtdcCFMMCKeyKindType是一个动态密钥类别(保证金监管)类型
	/// </summary>
	public enum struct EnumCFMMCKeyKindType : Byte
	{
		/// <summary>
		/// 主动请求更新
		/// </summary>
		REQUEST = (Byte)'R',

		/// <summary>
		/// CFMMC自动更新
		/// </summary>
		AUTO = (Byte)'A',

		/// <summary>
		/// CFMMC手动更新
		/// </summary>
		MANUAL = (Byte)'M'
	};

	/// <summary>
	/// TFtdcCertificationTypeType是一个证件类型类型
	/// </summary>
	public enum struct EnumCertificationTypeType : Byte
	{
		/// <summary>
		/// 身份证
		/// </summary>
		IDCard = (Byte)'0',

		/// <summary>
		/// 护照
		/// </summary>
		Passport = (Byte)'1',

		/// <summary>
		/// 军官证
		/// </summary>
		OfficerIDCard = (Byte)'2',

		/// <summary>
		/// 士兵证
		/// </summary>
		SoldierIDCard = (Byte)'3',

		/// <summary>
		/// 回乡证
		/// </summary>
		HomeComingCard = (Byte)'4',

		/// <summary>
		/// 户口簿
		/// </summary>
		HouseholdRegister = (Byte)'5',

		/// <summary>
		/// 营业执照号
		/// </summary>
		LicenseNo = (Byte)'6',

		/// <summary>
		/// 组织机构代码证
		/// </summary>
		InstitutionCodeCard = (Byte)'7',

		/// <summary>
		/// 临时营业执照号
		/// </summary>
		TempLicenseNo = (Byte)'8',

		/// <summary>
		/// 民办非企业登记证书
		/// </summary>
		NoEnterpriseLicenseNo = (Byte)'9',

		/// <summary>
		/// 其他证件
		/// </summary>
		OtherCard = (Byte)'x',

		/// <summary>
		/// 主管部门批文
		/// </summary>
		SuperDepAgree = (Byte)'a'
	};

	/// <summary>
	/// TFtdcFileBusinessCodeType是一个文件业务功能类型
	/// </summary>
	public enum struct EnumFileBusinessCodeType : Byte
	{
		/// <summary>
		/// 其他
		/// </summary>
		Others = (Byte)'0',

		/// <summary>
		/// 转账交易明细对账
		/// </summary>
		TransferDetails = (Byte)'1',

		/// <summary>
		/// 客户账户状态对账
		/// </summary>
		CustAccStatus = (Byte)'2',

		/// <summary>
		/// 账户类交易明细对账
		/// </summary>
		AccountTradeDetails = (Byte)'3',

		/// <summary>
		/// 期货账户信息变更明细对账
		/// </summary>
		FutureAccountChangeInfoDetails = (Byte)'4',

		/// <summary>
		/// 客户资金台账余额明细对账
		/// </summary>
		CustMoneyDetail = (Byte)'5',

		/// <summary>
		/// 客户销户结息明细对账
		/// </summary>
		CustCancelAccountInfo = (Byte)'6',

		/// <summary>
		/// 客户资金余额对账结果
		/// </summary>
		CustMoneyResult = (Byte)'7',

		/// <summary>
		/// 其它对账异常结果文件
		/// </summary>
		OthersExceptionResult = (Byte)'8',

		/// <summary>
		/// 客户结息净额明细
		/// </summary>
		CustInterestNetMoneyDetails = (Byte)'9',

		/// <summary>
		/// 客户资金交收明细
		/// </summary>
		CustMoneySendAndReceiveDetails = (Byte)'a',

		/// <summary>
		/// 法人存管银行资金交收汇总
		/// </summary>
		CorporationMoneyTotal = (Byte)'b',

		/// <summary>
		/// 主体间资金交收汇总
		/// </summary>
		MainbodyMoneyTotal = (Byte)'c',

		/// <summary>
		/// 总分平衡监管数据
		/// </summary>
		MainPartMonitorData = (Byte)'d',

		/// <summary>
		/// 存管银行备付金余额
		/// </summary>
		PreparationMoney = (Byte)'e',

		/// <summary>
		/// 协办存管银行资金监管数据
		/// </summary>
		BankMoneyMonitorData = (Byte)'f'
	};

	/// <summary>
	/// TFtdcCashExchangeCodeType是一个汇钞标志类型
	/// </summary>
	public enum struct EnumCashExchangeCodeType : Byte
	{
		/// <summary>
		/// 汇
		/// </summary>
		Exchange = (Byte)'1',

		/// <summary>
		/// 钞
		/// </summary>
		Cash = (Byte)'2'
	};

	/// <summary>
	/// TFtdcYesNoIndicatorType是一个是或否标识类型
	/// </summary>
	public enum struct EnumYesNoIndicatorType : Byte
	{
		/// <summary>
		/// 是
		/// </summary>
		Yes = (Byte)'0',

		/// <summary>
		/// 否
		/// </summary>
		No = (Byte)'1'
	};

	/// <summary>
	/// TFtdcBanlanceTypeType是一个余额类型类型
	/// </summary>
	public enum struct EnumBanlanceTypeType : Byte
	{
		/// <summary>
		/// 当前余额
		/// </summary>
		CurrentMoney = (Byte)'0',

		/// <summary>
		/// 可用余额
		/// </summary>
		UsableMoney = (Byte)'1',

		/// <summary>
		/// 可取余额
		/// </summary>
		FetchableMoney = (Byte)'2',

		/// <summary>
		/// 冻结余额
		/// </summary>
		FreezeMoney = (Byte)'3'
	};

	/// <summary>
	/// TFtdcGenderType是一个性别类型
	/// </summary>
	public enum struct EnumGenderType : Byte
	{
		/// <summary>
		/// 未知状态
		/// </summary>
		Unknown = (Byte)'0',

		/// <summary>
		/// 男
		/// </summary>
		Male = (Byte)'1',

		/// <summary>
		/// 女
		/// </summary>
		Female = (Byte)'2'
	};

	/// <summary>
	/// TFtdcFeePayFlagType是一个费用支付标志类型
	/// </summary>
	public enum struct EnumFeePayFlagType : Byte
	{
		/// <summary>
		/// 由受益方支付费用
		/// </summary>
		BEN = (Byte)'0',

		/// <summary>
		/// 由发送方支付费用
		/// </summary>
		OUR = (Byte)'1',

		/// <summary>
		/// 由发送方支付发起的费用，受益方支付接受的费用
		/// </summary>
		SHA = (Byte)'2'
	};

	/// <summary>
	/// TFtdcPassWordKeyTypeType是一个密钥类型类型
	/// </summary>
	public enum struct EnumPassWordKeyTypeType : Byte
	{
		/// <summary>
		/// 交换密钥
		/// </summary>
		ExchangeKey = (Byte)'0',

		/// <summary>
		/// 密码密钥
		/// </summary>
		PassWordKey = (Byte)'1',

		/// <summary>
		/// MAC密钥
		/// </summary>
		MACKey = (Byte)'2',

		/// <summary>
		/// 报文密钥
		/// </summary>
		MessageKey = (Byte)'3'
	};

	/// <summary>
	/// TFtdcFBTPassWordTypeType是一个密码类型类型
	/// </summary>
	public enum struct EnumFBTPassWordTypeType : Byte
	{
		/// <summary>
		/// 查询
		/// </summary>
		Query = (Byte)'0',

		/// <summary>
		/// 取款
		/// </summary>
		Fetch = (Byte)'1',

		/// <summary>
		/// 转帐
		/// </summary>
		Transfer = (Byte)'2',

		/// <summary>
		/// 交易
		/// </summary>
		Trade = (Byte)'3'
	};

	/// <summary>
	/// TFtdcFBTEncryModeType是一个加密方式类型
	/// </summary>
	public enum struct EnumFBTEncryModeType : Byte
	{
		/// <summary>
		/// 不加密
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
	/// TFtdcBankRepealFlagType是一个银行冲正标志类型
	/// </summary>
	public enum struct EnumBankRepealFlagType : Byte
	{
		/// <summary>
		/// 银行无需自动冲正
		/// </summary>
		BankNotNeedRepeal = (Byte)'0',

		/// <summary>
		/// 银行待自动冲正
		/// </summary>
		BankWaitingRepeal = (Byte)'1',

		/// <summary>
		/// 银行已自动冲正
		/// </summary>
		BankBeenRepealed = (Byte)'2'
	};

	/// <summary>
	/// TFtdcBrokerRepealFlagType是一个期商冲正标志类型
	/// </summary>
	public enum struct EnumBrokerRepealFlagType : Byte
	{
		/// <summary>
		/// 期商无需自动冲正
		/// </summary>
		BrokerNotNeedRepeal = (Byte)'0',

		/// <summary>
		/// 期商待自动冲正
		/// </summary>
		BrokerWaitingRepeal = (Byte)'1',

		/// <summary>
		/// 期商已自动冲正
		/// </summary>
		BrokerBeenRepealed = (Byte)'2'
	};

	/// <summary>
	/// TFtdcInstitutionTypeType是一个机构类别类型
	/// </summary>
	public enum struct EnumInstitutionTypeType : Byte
	{
		/// <summary>
		/// 银行
		/// </summary>
		Bank = (Byte)'0',

		/// <summary>
		/// 期商
		/// </summary>
		Future = (Byte)'1',

		/// <summary>
		/// 券商
		/// </summary>
		Store = (Byte)'2'
	};

	/// <summary>
	/// TFtdcLastFragmentType是一个最后分片标志类型
	/// </summary>
	public enum struct EnumLastFragmentType : Byte
	{
		/// <summary>
		/// 是最后分片
		/// </summary>
		Yes = (Byte)'0',

		/// <summary>
		/// 不是最后分片
		/// </summary>
		No = (Byte)'1'
	};

	/// <summary>
	/// TFtdcBankAccStatusType是一个银行账户状态类型
	/// </summary>
	public enum struct EnumBankAccStatusType : Byte
	{
		/// <summary>
		/// 正常
		/// </summary>
		Normal = (Byte)'0',

		/// <summary>
		/// 冻结
		/// </summary>
		Freeze = (Byte)'1',

		/// <summary>
		/// 挂失
		/// </summary>
		ReportLoss = (Byte)'2'
	};

	/// <summary>
	/// TFtdcMoneyAccountStatusType是一个资金账户状态类型
	/// </summary>
	public enum struct EnumMoneyAccountStatusType : Byte
	{
		/// <summary>
		/// 正常
		/// </summary>
		Normal = (Byte)'0',

		/// <summary>
		/// 销户
		/// </summary>
		Cancel = (Byte)'1'
	};

	/// <summary>
	/// TFtdcManageStatusType是一个存管状态类型
	/// </summary>
	public enum struct EnumManageStatusType : Byte
	{
		/// <summary>
		/// 指定存管
		/// </summary>
		Point = (Byte)'0',

		/// <summary>
		/// 预指定
		/// </summary>
		PrePoint = (Byte)'1',

		/// <summary>
		/// 撤销指定
		/// </summary>
		CancelPoint = (Byte)'2'
	};

	/// <summary>
	/// TFtdcSystemTypeType是一个应用系统类型类型
	/// </summary>
	public enum struct EnumSystemTypeType : Byte
	{
		/// <summary>
		/// 银期转帐
		/// </summary>
		FutureBankTransfer = (Byte)'0',

		/// <summary>
		/// 银证转帐
		/// </summary>
		StockBankTransfer = (Byte)'1',

		/// <summary>
		/// 第三方存管
		/// </summary>
		TheThirdPartStore = (Byte)'2'
	};

	/// <summary>
	/// TFtdcTxnEndFlagType是一个银期转帐划转结果标志类型
	/// </summary>
	public enum struct EnumTxnEndFlagType : Byte
	{
		/// <summary>
		/// 正常处理中
		/// </summary>
		NormalProcessing = (Byte)'0',

		/// <summary>
		/// 成功结束
		/// </summary>
		Success = (Byte)'1',

		/// <summary>
		/// 失败结束
		/// </summary>
		Failed = (Byte)'2',

		/// <summary>
		/// 异常中
		/// </summary>
		Abnormal = (Byte)'3',

		/// <summary>
		/// 已人工异常处理
		/// </summary>
		ManualProcessedForException = (Byte)'4',

		/// <summary>
		/// 通讯异常 ，请人工处理
		/// </summary>
		CommuFailedNeedManualProcess = (Byte)'5',

		/// <summary>
		/// 系统出错，请人工处理
		/// </summary>
		SysErrorNeedManualProcess = (Byte)'6'
	};

	/// <summary>
	/// TFtdcProcessStatusType是一个银期转帐服务处理状态类型
	/// </summary>
	public enum struct EnumProcessStatusType : Byte
	{
		/// <summary>
		/// 未处理
		/// </summary>
		NotProcess = (Byte)'0',

		/// <summary>
		/// 开始处理
		/// </summary>
		StartProcess = (Byte)'1',

		/// <summary>
		/// 处理完成
		/// </summary>
		Finished = (Byte)'2'
	};

	/// <summary>
	/// TFtdcCustTypeType是一个客户类型类型
	/// </summary>
	public enum struct EnumCustTypeType : Byte
	{
		/// <summary>
		/// 自然人
		/// </summary>
		Person = (Byte)'0',

		/// <summary>
		/// 机构户
		/// </summary>
		Institution = (Byte)'1'
	};

	/// <summary>
	/// TFtdcFBTTransferDirectionType是一个银期转帐方向类型
	/// </summary>
	public enum struct EnumFBTTransferDirectionType : Byte
	{
		/// <summary>
		/// 入金，银行转期货
		/// </summary>
		FromBankToFuture = (Byte)'1',

		/// <summary>
		/// 出金，期货转银行
		/// </summary>
		FromFutureToBank = (Byte)'2'
	};

	/// <summary>
	/// TFtdcOpenOrDestroyType是一个开销户类别类型
	/// </summary>
	public enum struct EnumOpenOrDestroyType : Byte
	{
		/// <summary>
		/// 开户
		/// </summary>
		Open = (Byte)'1',

		/// <summary>
		/// 销户
		/// </summary>
		Destroy = (Byte)'0'
	};

	/// <summary>
	/// TFtdcAvailabilityFlagType是一个有效标志类型
	/// </summary>
	public enum struct EnumAvailabilityFlagType : Byte
	{
		/// <summary>
		/// 未确认
		/// </summary>
		Invalid = (Byte)'0',

		/// <summary>
		/// 有效
		/// </summary>
		Valid = (Byte)'1',

		/// <summary>
		/// 冲正
		/// </summary>
		Repeal = (Byte)'2'
	};

	/// <summary>
	/// TFtdcOrganTypeType是一个机构类型类型
	/// </summary>
	public enum struct EnumOrganTypeType : Byte
	{
		/// <summary>
		/// 银行代理
		/// </summary>
		Bank = (Byte)'1',

		/// <summary>
		/// 交易前置
		/// </summary>
		Future = (Byte)'2',

		/// <summary>
		/// 银期转帐平台管理
		/// </summary>
		PlateForm = (Byte)'9'
	};

	/// <summary>
	/// TFtdcOrganLevelType是一个机构级别类型
	/// </summary>
	public enum struct EnumOrganLevelType : Byte
	{
		/// <summary>
		/// 银行总行或期商总部
		/// </summary>
		HeadQuarters = (Byte)'1',

		/// <summary>
		/// 银行分中心或期货公司营业部
		/// </summary>
		Branch = (Byte)'2'
	};

	/// <summary>
	/// TFtdcProtocalIDType是一个协议类型类型
	/// </summary>
	public enum struct EnumProtocalIDType : Byte
	{
		/// <summary>
		/// 期商协议
		/// </summary>
		FutureProtocal = (Byte)'0',

		/// <summary>
		/// 工行协议
		/// </summary>
		ICBCProtocal = (Byte)'1',

		/// <summary>
		/// 农行协议
		/// </summary>
		ABCProtocal = (Byte)'2',

		/// <summary>
		/// 中国银行协议
		/// </summary>
		CBCProtocal = (Byte)'3',

		/// <summary>
		/// 建行协议
		/// </summary>
		CCBProtocal = (Byte)'4',

		/// <summary>
		/// 交行协议
		/// </summary>
		BOCOMProtocal = (Byte)'5',

		/// <summary>
		/// 银期转帐平台协议
		/// </summary>
		FBTPlateFormProtocal = (Byte)'X'
	};

	/// <summary>
	/// TFtdcConnectModeType是一个套接字连接方式类型
	/// </summary>
	public enum struct EnumConnectModeType : Byte
	{
		/// <summary>
		/// 短连接
		/// </summary>
		ShortConnect = (Byte)'0',

		/// <summary>
		/// 长连接
		/// </summary>
		LongConnect = (Byte)'1'
	};

	/// <summary>
	/// TFtdcSyncModeType是一个套接字通信方式类型
	/// </summary>
	public enum struct EnumSyncModeType : Byte
	{
		/// <summary>
		/// 异步
		/// </summary>
		ASync = (Byte)'0',

		/// <summary>
		/// 同步
		/// </summary>
		Sync = (Byte)'1'
	};

	/// <summary>
	/// TFtdcBankAccTypeType是一个银行帐号类型类型
	/// </summary>
	public enum struct EnumBankAccTypeType : Byte
	{
		/// <summary>
		/// 银行存折
		/// </summary>
		BankBook = (Byte)'1',

		/// <summary>
		/// 储蓄卡
		/// </summary>
		SavingCard = (Byte)'2',

		/// <summary>
		/// 信用卡
		/// </summary>
		CreditCard = (Byte)'3'
	};

	/// <summary>
	/// TFtdcFutureAccTypeType是一个期货公司帐号类型类型
	/// </summary>
	public enum struct EnumFutureAccTypeType : Byte
	{
		/// <summary>
		/// 银行存折
		/// </summary>
		BankBook = (Byte)'1',

		/// <summary>
		/// 储蓄卡
		/// </summary>
		SavingCard = (Byte)'2',

		/// <summary>
		/// 信用卡
		/// </summary>
		CreditCard = (Byte)'3'
	};

	/// <summary>
	/// TFtdcOrganStatusType是一个接入机构状态类型
	/// </summary>
	public enum struct EnumOrganStatusType : Byte
	{
		/// <summary>
		/// 启用
		/// </summary>
		Ready = (Byte)'0',

		/// <summary>
		/// 签到
		/// </summary>
		CheckIn = (Byte)'1',

		/// <summary>
		/// 签退
		/// </summary>
		CheckOut = (Byte)'2',

		/// <summary>
		/// 对帐文件到达
		/// </summary>
		CheckFileArrived = (Byte)'3',

		/// <summary>
		/// 对帐
		/// </summary>
		CheckDetail = (Byte)'4',

		/// <summary>
		/// 日终清理
		/// </summary>
		DayEndClean = (Byte)'5',

		/// <summary>
		/// 注销
		/// </summary>
		Invalid = (Byte)'9'
	};

	/// <summary>
	/// TFtdcCCBFeeModeType是一个建行收费模式类型
	/// </summary>
	public enum struct EnumCCBFeeModeType : Byte
	{
		/// <summary>
		/// 按金额扣收
		/// </summary>
		ByAmount = (Byte)'1',

		/// <summary>
		/// 按月扣收
		/// </summary>
		ByMonth = (Byte)'2'
	};

	/// <summary>
	/// TFtdcCommApiTypeType是一个通讯API类型类型
	/// </summary>
	public enum struct EnumCommApiTypeType : Byte
	{
		/// <summary>
		/// 客户端
		/// </summary>
		Client = (Byte)'1',

		/// <summary>
		/// 服务端
		/// </summary>
		Server = (Byte)'2',

		/// <summary>
		/// 交易系统的UserApi
		/// </summary>
		UserApi = (Byte)'3'
	};

	/// <summary>
	/// TFtdcLinkStatusType是一个连接状态类型
	/// </summary>
	public enum struct EnumLinkStatusType : Byte
	{
		/// <summary>
		/// 已经连接
		/// </summary>
		Connected = (Byte)'1',

		/// <summary>
		/// 没有连接
		/// </summary>
		Disconnected = (Byte)'2'
	};

	/// <summary>
	/// TFtdcPwdFlagType是一个密码核对标志类型
	/// </summary>
	public enum struct EnumPwdFlagType : Byte
	{
		/// <summary>
		/// 不核对
		/// </summary>
		NoCheck = (Byte)'0',

		/// <summary>
		/// 明文核对
		/// </summary>
		BlankCheck = (Byte)'1',

		/// <summary>
		/// 密文核对
		/// </summary>
		EncryptCheck = (Byte)'2'
	};

	/// <summary>
	/// TFtdcSecuAccTypeType是一个期货帐号类型类型
	/// </summary>
	public enum struct EnumSecuAccTypeType : Byte
	{
		/// <summary>
		/// 资金帐号
		/// </summary>
		AccountID = (Byte)'1',

		/// <summary>
		/// 资金卡号
		/// </summary>
		CardID = (Byte)'2',

		/// <summary>
		/// 上海股东帐号
		/// </summary>
		SHStockholderID = (Byte)'3',

		/// <summary>
		/// 深圳股东帐号
		/// </summary>
		SZStockholderID = (Byte)'4'
	};

	/// <summary>
	/// TFtdcTransferStatusType是一个转账交易状态类型
	/// </summary>
	public enum struct EnumTransferStatusType : Byte
	{
		/// <summary>
		/// 正常
		/// </summary>
		Normal = (Byte)'0',

		/// <summary>
		/// 被冲正
		/// </summary>
		Repealed = (Byte)'1'
	};

	/// <summary>
	/// TFtdcSponsorTypeType是一个发起方类型
	/// </summary>
	public enum struct EnumSponsorTypeType : Byte
	{
		/// <summary>
		/// 期商
		/// </summary>
		Broker = (Byte)'0',

		/// <summary>
		/// 银行
		/// </summary>
		Bank = (Byte)'1'
	};

	/// <summary>
	/// TFtdcReqRspTypeType是一个请求响应类别类型
	/// </summary>
	public enum struct EnumReqRspTypeType : Byte
	{
		/// <summary>
		/// 请求
		/// </summary>
		Request = (Byte)'0',

		/// <summary>
		/// 响应
		/// </summary>
		Response = (Byte)'1'
	};

	/// <summary>
	/// TFtdcFBTUserEventTypeType是一个银期转帐用户事件类型类型
	/// </summary>
	public enum struct EnumFBTUserEventTypeType : Byte
	{
		/// <summary>
		/// 签到
		/// </summary>
		SignIn = (Byte)'0',

		/// <summary>
		/// 银行转期货
		/// </summary>
		FromBankToFuture = (Byte)'1',

		/// <summary>
		/// 期货转银行
		/// </summary>
		FromFutureToBank = (Byte)'2',

		/// <summary>
		/// 开户
		/// </summary>
		OpenAccount = (Byte)'3',

		/// <summary>
		/// 销户
		/// </summary>
		CancelAccount = (Byte)'4',

		/// <summary>
		/// 变更银行账户
		/// </summary>
		ChangeAccount = (Byte)'5',

		/// <summary>
		/// 冲正银行转期货
		/// </summary>
		RepealFromBankToFuture = (Byte)'6',

		/// <summary>
		/// 冲正期货转银行
		/// </summary>
		RepealFromFutureToBank = (Byte)'7',

		/// <summary>
		/// 查询银行账户
		/// </summary>
		QueryBankAccount = (Byte)'8',

		/// <summary>
		/// 查询期货账户
		/// </summary>
		QueryFutureAccount = (Byte)'9',

		/// <summary>
		/// 签退
		/// </summary>
		SignOut = (Byte)'A',

		/// <summary>
		/// 密钥同步
		/// </summary>
		SyncKey = (Byte)'B',

		/// <summary>
		/// 其他
		/// </summary>
		Other = (Byte)'Z'
	};

	/// <summary>
	/// TFtdcDBOperationType是一个记录操作类型类型
	/// </summary>
	public enum struct EnumDBOperationType : Byte
	{
		/// <summary>
		/// 插入
		/// </summary>
		Insert = (Byte)'0',

		/// <summary>
		/// 更新
		/// </summary>
		Update = (Byte)'1',

		/// <summary>
		/// 删除
		/// </summary>
		Delet = (Byte)'2'
	};


	/// <summary>
	/// TFtdcSyncFlagType是一个同步标记类型
	/// </summary>
	public enum struct EnumSyncFlagType : Byte
	{
		/// <summary>
		/// 已同步
		/// </summary>
		Yes = (Byte)'0',

		/// <summary>
		/// 未同步
		/// </summary>
		No = (Byte)'1'
	};


	/// <summary>
	/// TFtdcSyncTypeType是一个同步类型类型
	/// </summary>
	public enum struct EnumSyncTypeType : Byte
	{
		/// <summary>
		/// 一次同步
		/// </summary>
		OneOffSync = (Byte)'0',

		/// <summary>
		/// 定时同步
		/// </summary>
		TimerSync = (Byte)'1',

		/// <summary>
		/// 定时完全同步
		/// </summary>
		TimerFullSync = (Byte)'2'
	};


	/// <summary>
	/// TFtdcNotifyClassType是一个风险通知类型类型
	/// </summary>
	public enum struct EnumNotifyClassType : Byte
	{
		/// <summary>
		/// 正常
		/// </summary>
		NOERROR = (Byte)'0',

		/// <summary>
		/// 警示
		/// </summary>
		Warn = (Byte)'1',

		/// <summary>
		/// 追保
		/// </summary>
		Call = (Byte)'2',

		/// <summary>
		/// 强平
		/// </summary>
		Force = (Byte)'3',

		/// <summary>
		/// 穿仓
		/// </summary>
		CHUANCANG = (Byte)'4',

		/// <summary>
		/// 异常
		/// </summary>
		Exception = (Byte)'5'
	};

	/// <summary>
	/// TFtdcForceCloseTypeType是一个强平单类型类型
	/// </summary>
	public enum struct EnumForceCloseTypeType : Byte
	{
		/// <summary>
		/// 手工强平
		/// </summary>
		Manual = (Byte)'0',

		/// <summary>
		/// 单一投资者辅助强平
		/// </summary>
		Single = (Byte)'1',

		/// <summary>
		/// 批量投资者辅助强平
		/// </summary>
		Group = (Byte)'2'
	};

	/// <summary>
	/// TFtdcRiskNotifyMethodType是一个风险通知途径类型
	/// </summary>
	public enum struct EnumRiskNotifyMethodType : Byte
	{
		/// <summary>
		/// 系统通知
		/// </summary>
		System = (Byte)'0',

		/// <summary>
		/// 短信通知
		/// </summary>
		SMS = (Byte)'1',

		/// <summary>
		/// 邮件通知
		/// </summary>
		EMail = (Byte)'2',

		/// <summary>
		/// 人工通知
		/// </summary>
		Manual = (Byte)'3'
	};

	/// <summary>
	/// TFtdcRiskNotifyStatusType是一个风险通知状态类型
	/// </summary>
	public enum struct EnumRiskNotifyStatusType : Byte
	{
		/// <summary>
		/// 未生成
		/// </summary>
		NotGen = (Byte)'0',

		/// <summary>
		/// 已生成未发送
		/// </summary>
		Generated = (Byte)'1',

		/// <summary>
		/// 发送失败
		/// </summary>
		SendError = (Byte)'2',

		/// <summary>
		/// 已发送未接收
		/// </summary>
		SendOk = (Byte)'3',

		/// <summary>
		/// 已接收未确认
		/// </summary>
		Received = (Byte)'4',

		/// <summary>
		/// 已确认
		/// </summary>
		Confirmed = (Byte)'5'
	};

	/// <summary>
	/// TFtdcRiskUserEventType是一个风控用户操作事件类型
	/// </summary>
	public enum struct EnumRiskUserEventType : Byte
	{
		/// <summary>
		/// 导出数据
		/// </summary>
		ExportData = (Byte)'0'
	};

	/// <summary>
	/// TFtdcConditionalOrderSortTypeType是一个条件单索引条件类型
	/// </summary>
	public enum struct EnumConditionalOrderSortTypeType : Byte
	{
		/// <summary>
		/// 使用最新价升序
		/// </summary>
		LastPriceAsc = (Byte)'0',

		/// <summary>
		/// 使用最新价降序
		/// </summary>
		LastPriceDesc = (Byte)'1',

		/// <summary>
		/// 使用卖价升序
		/// </summary>
		AskPriceAsc = (Byte)'2',

		/// <summary>
		/// 使用卖价降序
		/// </summary>
		AskPriceDesc = (Byte)'3',

		/// <summary>
		/// 使用买价升序
		/// </summary>
		BidPriceAsc = (Byte)'4',

		/// <summary>
		/// 使用买价降序
		/// </summary>
		BidPriceDesc = (Byte)'5'
	};

	/// <summary>
	/// TFtdcSendTypeType是一个报送状态类型
	/// </summary>
	public enum struct EnumSendTypeType : Byte
	{
		/// <summary>
		/// 未发送
		/// </summary>
		NoSend = (Byte)'0',

		/// <summary>
		/// 已发送
		/// </summary>
		Sended = (Byte)'1',

		/// <summary>
		/// 已生成
		/// </summary>
		Generated = (Byte)'2',

		/// <summary>
		/// 报送失败
		/// </summary>
		SendFail = (Byte)'3',

		/// <summary>
		/// 接收成功
		/// </summary>
		Success = (Byte)'4',

		/// <summary>
		/// 接收失败
		/// </summary>
		Fail = (Byte)'5',

		/// <summary>
		/// 取消报送
		/// </summary>
		Cancel = (Byte)'6'
	};

	/// <summary>
	/// TFtdcClientIDStatusType是一个交易编码状态类型
	/// </summary>
	public enum struct EnumClientIDStatusType : Byte
	{
		/// <summary>
		/// 未申请
		/// </summary>
		NoApply = (Byte)'1',

		/// <summary>
		/// 已提交申请
		/// </summary>
		Submited = (Byte)'2',

		/// <summary>
		/// 已发送申请
		/// </summary>
		Sended = (Byte)'3',

		/// <summary>
		/// 完成
		/// </summary>
		Success = (Byte)'4',

		/// <summary>
		/// 拒绝
		/// </summary>
		Refuse = (Byte)'5',

		/// <summary>
		/// 已撤销编码
		/// </summary>
		Cancel = (Byte)'6'
	};

	/// <summary>
	/// TFtdcQuestionTypeType是一个特有信息类型类型
	/// </summary>
	public enum struct EnumQuestionTypeType : Byte
	{
		/// <summary>
		/// 单选
		/// </summary>
		Radio = (Byte)'1',

		/// <summary>
		/// 多选
		/// </summary>
		Option = (Byte)'2',

		/// <summary>
		/// 填空
		/// </summary>
		Blank = (Byte)'3'
	};

	/// <summary>
	/// TFtdcProcessTypeType是一个流程功能类型类型
	/// </summary>
	public enum struct EnumProcessTypeType : Byte
	{
		/// <summary>
		/// 申请交易编码
		/// </summary>
		ApplyTradingCode = (Byte)'1',

		/// <summary>
		/// 撤销交易编码
		/// </summary>
		CancelTradingCode = (Byte)'2',

		/// <summary>
		/// 修改身份信息
		/// </summary>
		ModifyIDCard = (Byte)'3',

		/// <summary>
		/// 修改一般信息
		/// </summary>
		ModifyNoIDCard = (Byte)'4',

		/// <summary>
		/// 交易所开户报备
		/// </summary>
		ExchOpenBak = (Byte)'5',

		/// <summary>
		/// 交易所销户报备
		/// </summary>
		ExchCancelBak = (Byte)'6'
	};

	/// <summary>
	/// TFtdcBusinessTypeType是一个业务类型类型
	/// </summary>
	public enum struct EnumBusinessTypeType : Byte
	{
		/// <summary>
		/// 请求
		/// </summary>
		Request = (Byte)'1',

		/// <summary>
		/// 应答
		/// </summary>
		Response = (Byte)'2',

		/// <summary>
		/// 通知
		/// </summary>
		Notice = (Byte)'3'
	};

	/// <summary>
	/// TFtdcCfmmcReturnCodeType是一个监控中心返回码类型
	/// </summary>
	public enum struct EnumCfmmcReturnCodeType : Byte
	{
		/// <summary>
		/// 成功
		/// </summary>
		Success = (Byte)'0',

		/// <summary>
		/// 该客户已经有流程在处理中
		/// </summary>
		Working = (Byte)'1',

		/// <summary>
		/// 监控中客户资料检查失败
		/// </summary>
		InfoFail = (Byte)'2',

		/// <summary>
		/// 监控中实名制检查失败
		/// </summary>
		IDCardFail = (Byte)'3',

		/// <summary>
		/// 其他错误
		/// </summary>
		OtherFail = (Byte)'4'
	};

	/// <summary>
	/// TFtdcClientTypeType是一个客户类型类型
	/// </summary>
	public enum struct EnumClientTypeType : Byte
	{
		/// <summary>
		/// 所有
		/// </summary>
		All = (Byte)'0',

		/// <summary>
		/// 个人
		/// </summary>
		Person = (Byte)'1',

		/// <summary>
		/// 单位
		/// </summary>
		Company = (Byte)'2'
	};

	/// <summary>
	/// TFtdcExchangeIDTypeType是一个交易所编号类型
	/// </summary>
	public enum struct EnumExchangeIDTypeType : Byte
	{
		/// <summary>
		/// 上海期货交易所
		/// </summary>
		SHFE = (Byte)'S',

		/// <summary>
		/// 郑州商品交易所
		/// </summary>
		CZCE = (Byte)'Z',

		/// <summary>
		/// 大连商品交易所
		/// </summary>
		DCE = (Byte)'D',

		/// <summary>
		/// 中国金融期货交易所
		/// </summary>
		CFFEX = (Byte)'J'
	};

	/// <summary>
	/// TFtdcExClientIDTypeType是一个交易编码类型类型
	/// </summary>
	public enum struct EnumExClientIDTypeType : Byte
	{
		/// <summary>
		/// 套保
		/// </summary>
		Hedge = (Byte)'1',

		/// <summary>
		/// 套利
		/// </summary>
		Arbitrage = (Byte)'2',

		/// <summary>
		/// 投机
		/// </summary>
		Speculation = (Byte)'3'
	};

	/// <summary>
	/// TFtdcUpdateFlagType是一个更新状态类型
	/// </summary>
	public enum struct EnumUpdateFlagType : Byte
	{
		/// <summary>
		/// 未更新
		/// </summary>
		NoUpdate = (Byte)'0',

		/// <summary>
		/// 更新全部信息成功
		/// </summary>
		Success = (Byte)'1',

		/// <summary>
		/// 更新全部信息失败
		/// </summary>
		Fail = (Byte)'2',

		/// <summary>
		/// 更新交易编码成功
		/// </summary>
		TCSuccess = (Byte)'3',

		/// <summary>
		/// 更新交易编码失败
		/// </summary>
		TCFail = (Byte)'4',

		/// <summary>
		/// 已丢弃
		/// </summary>
		Cancel = (Byte)'5'
	};

	/// <summary>
	/// TFtdcApplyOperateIDType是一个申请动作类型
	/// </summary>
	public enum struct EnumApplyOperateIDType : Byte
	{
		/// <summary>
		/// 开户
		/// </summary>
		OpenInvestor = (Byte)'1',

		/// <summary>
		/// 修改身份信息
		/// </summary>
		ModifyIDCard = (Byte)'2',

		/// <summary>
		/// 修改一般信息
		/// </summary>
		ModifyNoIDCard = (Byte)'3',

		/// <summary>
		/// 申请交易编码
		/// </summary>
		ApplyTradingCode = (Byte)'4',

		/// <summary>
		/// 撤销交易编码
		/// </summary>
		CancelTradingCode = (Byte)'5',

		/// <summary>
		/// 销户
		/// </summary>
		CancelInvestor = (Byte)'6'
	};

	/// <summary>
	/// TFtdcApplyStatusIDType是一个申请状态类型
	/// </summary>
	public enum struct EnumApplyStatusIDType : Byte
	{
		/// <summary>
		/// 未补全
		/// </summary>
		NoComplete = (Byte)'1',

		/// <summary>
		/// 已提交
		/// </summary>
		Submited = (Byte)'2',

		/// <summary>
		/// 已审核
		/// </summary>
		Checked = (Byte)'3',

		/// <summary>
		/// 已拒绝
		/// </summary>
		Refused = (Byte)'4',

		/// <summary>
		/// 已删除
		/// </summary>
		Deleted = (Byte)'5'
	};

	/// <summary>
	/// TFtdcSendMethodType是一个发送方式类型
	/// </summary>
	public enum struct EnumSendMethodType : Byte
	{
		/// <summary>
		/// 电子发送
		/// </summary>
		ByAPI = (Byte)'1',

		/// <summary>
		/// 文件发送
		/// </summary>
		ByFile = (Byte)'2'
	};

	/// <summary>
	/// TFtdcEventModeType是一个操作方法类型
	/// </summary>
	public enum struct EnumEventModeType : Byte
	{
		/// <summary>
		/// 增加
		/// </summary>
		ADD = (Byte)'1',

		/// <summary>
		/// 修改
		/// </summary>
		UPDATE = (Byte)'2',

		/// <summary>
		/// 删除
		/// </summary>
		DELETE = (Byte)'3',

		/// <summary>
		/// 复核
		/// </summary>
		CHECK = (Byte)'4'
	};

	/// <summary>
	/// TFtdcUOAAutoSendType是一个统一开户申请自动发送类型
	/// </summary>
	public enum struct EnumUOAAutoSendType : Byte
	{
		/// <summary>
		/// 自动发送并接收
		/// </summary>
		ASR = (Byte)'1',

		/// <summary>
		/// 自动发送，不自动接收
		/// </summary>
		ASNR = (Byte)'2',

		/// <summary>
		/// 不自动发送，自动接收
		/// </summary>
		NSAR = (Byte)'3',

		/// <summary>
		/// 不自动发送，也不自动接收
		/// </summary>
		NSR = (Byte)'4'
	};

	/// <summary>
	/// TFtdcFlowIDType是一个流程ID类型
	/// </summary>
	public enum struct EnumFlowIDType : Byte
	{
		/// <summary>
		/// 投资者对应投资者组设置
		/// </summary>
		InvestorGroupFlow = (Byte)'1'
	};

	/// <summary>
	/// TFtdcCheckLevelType是一个复核级别类型
	/// </summary>
	public enum struct EnumCheckLevelType : Byte
	{
		/// <summary>
		/// 零级复核
		/// </summary>
		Zero = (Byte)'0',

		/// <summary>
		/// 一级复核
		/// </summary>
		One = (Byte)'1',

		/// <summary>
		/// 二级复核
		/// </summary>
		Two = (Byte)'2'
	};

	/// <summary>
	/// TFtdcCheckStatusType是一个复核级别类型
	/// </summary>
	public enum struct EnumCheckStatusType : Byte
	{
		/// <summary>
		/// 未复核
		/// </summary>
		Init = (Byte)'0',

		/// <summary>
		/// 复核中
		/// </summary>
		Checking = (Byte)'1',

		/// <summary>
		/// 已复核
		/// </summary>
		Checked = (Byte)'2',

		/// <summary>
		/// 拒绝
		/// </summary>
		Refuse = (Byte)'3',

		/// <summary>
		/// 作废
		/// </summary>
		Cancel = (Byte)'4'
	};

	/// <summary>
	/// TFtdcUsedStatusType是一个生效状态类型
	/// </summary>
	public enum struct EnumUsedStatusType : Byte
	{
		/// <summary>
		/// 未生效
		/// </summary>
		Unused = (Byte)'0',

		/// <summary>
		/// 已生效
		/// </summary>
		Used = (Byte)'1',

		/// <summary>
		/// 生效失败
		/// </summary>
		Fail = (Byte)'2'
	};

	/// <summary>
	/// TFtdcBankAcountOriginType是一个账户来源类型
	/// </summary>
	public enum struct EnumBankAcountOriginType : Byte
	{
		/// <summary>
		/// 手工录入
		/// </summary>
		ByAccProperty = (Byte)'0',

		/// <summary>
		/// 银期转账
		/// </summary>
		ByFBTransfer = (Byte)'1'
	};

	/// <summary>
	/// TFtdcMonthBillTradeSumType是一个结算单月报成交汇总方式类型
	/// </summary>
	public enum struct EnumMonthBillTradeSumType : Byte
	{
		/// <summary>
		/// 同日同合约
		/// </summary>
		ByInstrument = (Byte)'0',

		/// <summary>
		/// 同日同合约同价格
		/// </summary>
		ByDayInsPrc = (Byte)'1',

		/// <summary>
		/// 同合约
		/// </summary>
		ByDayIns = (Byte)'2'
	};

	/// <summary>
	/// TFtdcFBTTradeCodeEnumType是一个银期交易代码枚举类型
	/// </summary>
	public enum struct EnumFBTTradeCodeEnumType : Byte
	{
		/// <summary>
		/// 银行发起银行转期货
		/// </summary>
		BankLaunchBankToBroker_102001 = (Byte)'1',//'102001',

												  /// <summary>
												  /// 期货发起银行转期货
												  /// </summary>
												  BrokerLaunchBankToBroker_202001 = (Byte)'2',//'202001',

																							  /// <summary>
																							  /// 银行发起期货转银行
																							  /// </summary>
																							  BankLaunchBrokerToBank_102002 = (Byte)'3',//'102002',

																																		/// <summary>
																																		/// 期货发起期货转银行
																																		/// </summary>
																																		BrokerLaunchBrokerToBank_202002 = (Byte)'4'//'202002'
	};

	/// <summary>
	/// TFtdcOTPTypeType是一个动态令牌类型类型
	/// </summary>
	public enum struct EnumOTPTypeType : Byte
	{
		/// <summary>
		/// 无动态令牌
		/// </summary>
		NONE = (Byte)'0',

		/// <summary>
		/// 时间令牌
		/// </summary>
		TOTP = (Byte)'1'
	};

	/// <summary>
	/// TFtdcOTPStatusType是一个动态令牌状态类型
	/// </summary>
	public enum struct EnumOTPStatusType : Byte
	{
		/// <summary>
		/// 未使用
		/// </summary>
		Unused = (Byte)'0',

		/// <summary>
		/// 已使用
		/// </summary>
		Used = (Byte)'1',

		/// <summary>
		/// 注销
		/// </summary>
		Disuse = (Byte)'2'
	};

	/// <summary>
	/// TFtdcBrokerUserTypeType是一个经济公司用户类型类型
	/// </summary>
	public enum struct EnumBrokerUserTypeType : Byte
	{
		/// <summary>
		/// 投资者
		/// </summary>
		Investor = (Byte)'1'
	};

	/// <summary>
	/// TFtdcFutureTypeType是一个期货类型类型
	/// </summary>
	public enum struct EnumFutureTypeType : Byte
	{
		/// <summary>
		/// 商品期货
		/// </summary>
		Commodity = (Byte)'1',

		/// <summary>
		/// 金融期货
		/// </summary>
		Financial = (Byte)'2'
	};

	/// <summary>
	/// TFtdcFundEventTypeType是一个资金管理操作类型类型
	/// </summary>
	public enum struct EnumFundEventTypeType : Byte
	{
		/// <summary>
		/// 转账限额
		/// </summary>
		Restriction = (Byte)'0',

		/// <summary>
		/// 当日转账限额
		/// </summary>
		TodayRestriction = (Byte)'1',

		/// <summary>
		/// 期商流水
		/// </summary>
		Transfer = (Byte)'2',

		/// <summary>
		/// 资金冻结
		/// </summary>
		Credit = (Byte)'3',

		/// <summary>
		/// 投资者可提资金比例
		/// </summary>
		InvestorWithdrawAlm = (Byte)'4',

		/// <summary>
		/// 单个银行帐户转账限额
		/// </summary>
		BankRestriction = (Byte)'5'
	};

	/// <summary>
	/// TFtdcAccountSourceTypeType是一个资金账户来源类型
	/// </summary>
	public enum struct EnumAccountSourceTypeType : Byte
	{
		/// <summary>
		/// 银期同步
		/// </summary>
		FBTransfer = (Byte)'0',

		/// <summary>
		/// 手工录入
		/// </summary>
		ManualEntry = (Byte)'1'
	};

	/// <summary>
	/// TFtdcCodeSourceTypeType是一个交易编码来源类型
	/// </summary>
	public enum struct EnumCodeSourceTypeType : Byte
	{
		/// <summary>
		/// 统一开户
		/// </summary>
		UnifyAccount = (Byte)'0',

		/// <summary>
		/// 手工录入
		/// </summary>
		ManualEntry = (Byte)'1'
	};

	/// <summary>
	/// TFtdcUserRangeType是一个操作员范围类型
	/// </summary>
	public enum struct EnumUserRangeType : Byte
	{
		/// <summary>
		/// 所有
		/// </summary>
		All = (Byte)'0',

		/// <summary>
		/// 单一操作员
		/// </summary>
		Single = (Byte)'1'
	};

	/// <summary>
	/// TFtdcByGroupType是一个交易统计表按客户统计方式类型
	/// </summary>
	public enum struct EnumByGroupType : Byte
	{
		/// <summary>
		/// 按投资者统计
		/// </summary>
		Investor = (Byte)'2',

		/// <summary>
		/// 按类统计
		/// </summary>
		Group = (Byte)'1'
	};

	/// <summary>
	/// TFtdcTradeSumStatModeType是一个交易统计表按范围统计方式类型
	/// </summary>
	public enum struct EnumTradeSumStatModeType : Byte
	{
		/// <summary>
		/// 按合约统计
		/// </summary>
		Instrument = (Byte)'1',

		/// <summary>
		/// 按产品统计
		/// </summary>
		Product = (Byte)'2',

		/// <summary>
		/// 按交易所统计
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
	/// TFtdcExprSetModeType是一个日期表达式设置类型类型
	/// </summary>
	public enum struct EnumExprSetModeType : Byte
	{
		/// <summary>
		/// 相对已有规则设置
		/// </summary>
		Relative = (Byte)'1',

		/// <summary>
		/// 典型设置
		/// </summary>
		Typical = (Byte)'2'
	};

	/// <summary>
	/// TFtdcRateInvestorRangeType是一个投资者范围类型
	/// </summary>
	public enum struct EnumRateInvestorRangeType : Byte
	{
		/// <summary>
		/// 公司标准
		/// </summary>
		All = (Byte)'1',

		/// <summary>
		/// 模板
		/// </summary>
		Model = (Byte)'2',

		/// <summary>
		/// 单一投资者
		/// </summary>
		Single = (Byte)'3'
	};


	/// <summary>
	/// TFtdcSyncDataStatusType是一个主次用系统数据同步状态类型
	/// </summary>
	public enum struct EnumSyncDataStatusType : Byte
	{
		/// <summary>
		/// 未同步
		/// </summary>
		Initialize = (Byte)'0',

		/// <summary>
		/// 同步中
		/// </summary>
		Settlementin = (Byte)'1',

		/// <summary>
		/// 已同步
		/// </summary>
		Settlemented = (Byte)'2'
	};


	/// <summary>
	/// TFtdcTradeSourceType是一个成交来源类型
	/// </summary>
	public enum struct EnumTradeSourceType : Byte
	{
		/// <summary>
		/// 来自交易所普通回报
		/// </summary>
		NORMAL = (Byte)'0',

		/// <summary>
		/// 来自查询
		/// </summary>
		QUERY = (Byte)'1'
	};


	/// <summary>
	/// TFtdcFlexStatModeType是一个产品合约统计方式类型
	/// </summary>
	public enum struct EnumFlexStatModeType : Byte
	{
		/// <summary>
		/// 产品统计
		/// </summary>
		Product = (Byte)'1',

		/// <summary>
		/// 交易所统计
		/// </summary>
		Exchange = (Byte)'2',

		/// <summary>
		/// 统计所有
		/// </summary>
		All = (Byte)'3'
	};

	/// <summary>
	/// TFtdcByInvestorRangeType是一个投资者范围统计方式类型
	/// </summary>
	public enum struct EnumByInvestorRangeType : Byte
	{

		/// <summary>
		/// 属性统计
		/// </summary>
		Property = (Byte)'1',

		/// <summary>
		/// 统计所有
		/// </summary>
		All = (Byte)'2'
	};

	/// <summary>
	/// TFtdcPropertyInvestorRangeType是一个投资者范围类型
	/// </summary>
	public enum struct EnumPropertyInvestorRangeType : Byte
	{
		/// <summary>
		/// 所有
		/// </summary>
		All = (Byte)'1',

		/// <summary>
		/// 投资者属性
		/// </summary>
		Property = (Byte)'2',

		/// <summary>
		/// 单一投资者
		/// </summary>
		Single = (Byte)'3'
	};

	/// <summary>
	/// TFtdcFileStatusType是一个文件状态类型
	/// </summary>
	public enum struct EnumFileStatusType : Byte
	{
		/// <summary>
		/// 未生成
		/// </summary>
		NoCreate = (Byte)'0',

		/// <summary>
		/// 已生成
		/// </summary>
		Created = (Byte)'1',

		/// <summary>
		/// 生成失败
		/// </summary>
		Failed = (Byte)'2'
	};

	/// <summary>
	/// TFtdcFileGenStyleType是一个文件生成方式类型
	/// </summary>
	public enum struct EnumFileGenStyleType : Byte
	{
		/// <summary>
		/// 下发
		/// </summary>
		FileTransmit = (Byte)'0',

		/// <summary>
		/// 生成
		/// </summary>
		FileGen = (Byte)'1',
	};

	/// <summary>
	/// TFtdcSysOperModeType是一个系统日志操作方法类型
	/// </summary>
	public enum struct EnumSysOperModeType : Byte
	{
		/// <summary>
		/// 增加
		/// </summary>
		Add = (Byte)'1',

		/// <summary>
		/// 修改
		/// </summary>
		Update = (Byte)'2',

		/// <summary>
		/// 删除
		/// </summary>
		Delete = (Byte)'3',

		/// <summary>
		/// 复制
		/// </summary>
		Copy = (Byte)'4',

		/// <summary>
		/// 激活
		/// </summary>
		AcTive = (Byte)'5',

		/// <summary>
		/// 注销
		/// </summary>
		CanCel = (Byte)'6',

		/// <summary>
		/// 重置
		/// </summary>
		ReSet = (Byte)'7'
	};

	/// <summary>
	/// TFtdcSysOperTypeType是一个系统日志操作类型类型
	/// </summary>
	public enum struct EnumSysOperTypeType : Byte
	{
		/// <summary>
		/// 修改操作员密码
		/// </summary>
		UpdatePassword = (Byte)'0',

		/// <summary>
		/// 操作员组织架构关系
		/// </summary>
		UserDepartment = (Byte)'1',

		/// <summary>
		/// 角色管理
		/// </summary>
		RoleManager = (Byte)'2',

		/// <summary>
		/// 角色功能设置
		/// </summary>
		RoleFunction = (Byte)'3',

		/// <summary>
		/// 基础参数设置
		/// </summary>
		BaseParam = (Byte)'4',

		/// <summary>
		/// 设置操作员
		/// </summary>
		SetUserID = (Byte)'5',

		/// <summary>
		/// 用户角色设置
		/// </summary>
		SetUserRole = (Byte)'6',

		/// <summary>
		/// 用户IP限制
		/// </summary>
		UserIpRestriction = (Byte)'7',

		/// <summary>
		/// 组织架构管理
		/// </summary>
		DepartmentManager = (Byte)'8',

		/// <summary>
		/// 组织架构向查询分类复制
		/// </summary>
		DepartmentCopy = (Byte)'9',

		/// <summary>
		/// 交易编码管理
		/// </summary>
		Tradingcode = (Byte)'A',

		/// <summary>
		/// 投资者状态维护
		/// </summary>
		InvestorStatus = (Byte)'B',

		/// <summary>
		/// 投资者权限管理
		/// </summary>
		InvestorAuthority = (Byte)'C',

		/// <summary>
		/// 属性设置
		/// </summary>
		PropertySet = (Byte)'D',

		/// <summary>
		/// 重置投资者密码
		/// </summary>
		ReSetInvestorPasswd = (Byte)'E',

		/// <summary>
		/// 投资者个性信息维护
		/// </summary>
		InvestorPersonalityInfo = (Byte)'F'
	};

	/// <summary>
	/// TFtdcCSRCDataQueyTypeType是一个上报数据查询类型类型
	/// </summary>
	public enum struct EnumCSRCDataQueyTypeType : Byte
	{
		/// <summary>
		/// 查询当前交易日报送的数据
		/// </summary>
		Current = (Byte)'0',

		/// <summary>
		/// 查询历史报送的代理经纪公司的数据
		/// </summary>
		History = (Byte)'1',
	};

	/// <summary>
	/// TFtdcFreezeStatusType是一个休眠状态类型
	/// </summary>
	public enum struct EnumFreezeStatusType : Byte
	{
		/// <summary>
		/// 活跃
		/// </summary>
		Normal = (Byte)'1',

		/// <summary>
		/// 休眠
		/// </summary>
		Freeze = (Byte)'0',
	};

	/// <summary>
	/// TFtdcStandardStatusType是一个规范状态类型
	/// </summary>
	public enum struct EnumStandardStatusType : Byte
	{
		/// <summary>
		/// 已规范
		/// </summary>
		Standard = (Byte)'0',

		/// <summary>
		/// 未规范
		/// </summary>
		NonStandard = (Byte)'1',
	};

	/// <summary>
	/// TFtdcRightParamTypeType是一个配置类型类型
	/// </summary>
	public enum struct EnumRightParamTypeType : Byte
	{
		/// <summary>
		/// 休眠户
		/// </summary>
		Freeze = (Byte)'1',

		/// <summary>
		/// 激活休眠户
		/// </summary>
		FreezeActive = (Byte)'2',
	};

	/// <summary>
	/// TFtdcDataStatusType是一个反洗钱审核表数据状态类型
	/// </summary>
	public enum struct EnumDataStatusType : Byte
	{
		/// <summary>
		/// 正常
		/// </summary>
		Normal = (Byte)'0',

		/// <summary>
		/// 已删除
		/// </summary>
		Deleted = (Byte)'1',
	};


	/// <summary>
	/// TFtdcAMLCheckStatusType是一个审核状态类型
	/// </summary>
	public enum struct EnumAMLCheckStatusType : Byte
	{
		/// <summary>
		/// 未复核
		/// </summary>
		Init = (Byte)'0',

		/// <summary>
		/// 复核中
		/// </summary>
		Checking = (Byte)'1',

		/// <summary>
		/// 已复核
		/// </summary>
		Checked = (Byte)'2',

		/// <summary>
		/// 拒绝上报
		/// </summary>
		RefuseReport = (Byte)'3',
	};


	/// <summary>
	/// TFtdcAmlDateTypeType是一个日期类型类型
	/// </summary>
	public enum struct EnumAmlDateTypeType : Byte
	{
		/// <summary>
		/// 检查日期
		/// </summary>
		DrawDay = (Byte)'0',

		/// <summary>
		/// 发生日期
		/// </summary>
		TouchDay = (Byte)'1',
	};
	/// <summary>
	/// TFtdcAmlCheckLevelType是一个审核级别类型
	/// </summary>
	public enum struct EnumAmlCheckLevelType : Byte
	{
		/// <summary>
		/// 零级审核
		/// </summary>
		CheckLevel0 = (Byte)'0',

		/// <summary>
		/// 一级审核
		/// </summary>
		CheckLevel1 = (Byte)'1',

		/// <summary>
		/// 二级审核
		/// </summary>
		CheckLevel2 = (Byte)'2',

		/// <summary>
		/// 三级审核
		/// </summary>
		CheckLevel3 = (Byte)'3',
	};


	/// <summary>
	/// TFtdcExportFileTypeType是一个导出文件类型类型
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
	/// TFtdcSettleManagerTypeType是一个结算配置类型类型
	/// </summary>
	public enum struct EnumSettleManagerTypeType : Byte
	{
		/// <summary>
		/// 结算前准备
		/// </summary>
		Before = (Byte)'1',

		/// <summary>
		/// 结算
		/// </summary>
		Settlement = (Byte)'2',

		/// <summary>
		/// 结算后核对
		/// </summary>
		After = (Byte)'3',

		/// <summary>
		/// 结算后处理
		/// </summary>
		Settlemented = (Byte)'4',
	};


	/// <summary>
	/// TFtdcSettleManagerLevelType是一个结算配置等级类型
	/// </summary>
	public enum struct EnumSettleManagerLevelType : Byte
	{
		/// <summary>
		/// 必要
		/// </summary>
		Must = (Byte)'1',

		/// <summary>
		/// 警告
		/// </summary>
		Alarm = (Byte)'2',

		/// <summary>
		/// 提示
		/// </summary>
		Prompt = (Byte)'3',

		/// <summary>
		/// 不检查
		/// </summary>
		Ignore = (Byte)'4',
	};

	/// <summary>
	/// TFtdcSettleManagerGroupType是一个模块分组类型
	/// </summary>
	public enum struct EnumSettleManagerGroupType : Byte
	{
		/// <summary>
		/// 交易所核对
		/// </summary>
		Exhcange = (Byte)'1',

		/// <summary>
		/// 内部核对
		/// </summary>
		ASP = (Byte)'2',

		/// <summary>
		/// 上报数据核对
		/// </summary>
		CSRC = (Byte)'3',
	};

	/// <summary>
	/// TFtdcLimitUseTypeType是一个保值额度使用类型类型
	/// </summary>
	public enum struct EnumLimitUseTypeType : Byte
	{
		/// <summary>
		/// 可重复使用
		/// </summary>
		Repeatable = (Byte)'1',

		/// <summary>
		/// 不可重复使用
		/// </summary>
		Unrepeatable = (Byte)'2',
	};


	/// <summary>
	/// TFtdcDataResourceType是一个数据来源类型
	/// </summary>
	public enum struct EnumDataResourceType : Byte
	{
		/// <summary>
		/// 本系统
		/// </summary>
		Settle = (Byte)'1',

		/// <summary>
		/// 交易所
		/// </summary>
		Exchange = (Byte)'2',

		/// <summary>
		/// 报送数据
		/// </summary>
		CSRC = (Byte)'3',
	};

	/// <summary>
	/// TFtdcMarginTypeType是一个保证金类型类型
	/// </summary>
	public enum struct EnumMarginTypeType : Byte
	{
		/// <summary>
		/// 交易所保证金率
		/// </summary>
		ExchMarginRate = (Byte)'0',

		/// <summary>
		/// 投资者保证金率
		/// </summary>
		InstrMarginRate = (Byte)'1',

		/// <summary>
		/// 投资者交易保证金率
		/// </summary>
		InstrMarginRateTrade = (Byte)'2',
	};


	/// <summary>
	/// TFtdcActiveTypeType是一个生效类型类型
	/// </summary>
	public enum struct EnumActiveTypeType : Byte
	{
		/// <summary>
		/// 仅当日生效
		/// </summary>
		Intraday = (Byte)'1',

		/// <summary>
		/// 长期生效
		/// </summary>
		Long = (Byte)'2',
	};

	/// <summary>
	/// TFtdcMarginRateTypeType是一个冲突保证金率类型类型
	/// </summary>
	public enum struct EnumMarginRateTypeType : Byte
	{
		/// <summary>
		/// 交易所保证金率
		/// </summary>
		Exchange = (Byte)'1',

		/// <summary>
		/// 投资者保证金率
		/// </summary>
		Investor = (Byte)'2',

		/// <summary>
		/// 投资者交易保证金率
		/// </summary>
		InvestorTrade = (Byte)'3',
	};

	/// <summary>
	/// TFtdcBackUpStatusType是一个备份数据状态类型
	/// </summary>
	public enum struct EnumBackUpStatusType : Byte
	{
		/// <summary>
		/// 未生成备份数据
		/// </summary>
		UnBak = (Byte)'0',

		/// <summary>
		/// 备份数据生成中
		/// </summary>
		BakUp = (Byte)'1',

		/// <summary>
		/// 已生成备份数据
		/// </summary>
		BakUped = (Byte)'2',

		/// <summary>
		/// 备份数据失败
		/// </summary>
		BakFail = (Byte)'3',
	};

	/// <summary>
	/// TFtdcInitSettlementType是一个结算初始化状态类型
	/// </summary>
	public enum struct EnumInitSettlementType : Byte
	{
		/// <summary>
		/// 结算初始化未开始
		/// </summary>
		UnInitialize = (Byte)'0',

		/// <summary>
		/// 结算初始化中
		/// </summary>
		Initialize = (Byte)'1',

		/// <summary>
		/// 结算初始化完成
		/// </summary>
		Initialized = (Byte)'2',
	};

	/// <summary>
	/// TFtdcReportStatusType是一个报表数据生成状态类型
	/// </summary>
	public enum struct EnumReportStatusType : Byte
	{
		/// <summary>
		/// 未生成报表数据
		/// </summary>
		NoCreate = (Byte)'0',

		/// <summary>
		/// 报表数据生成中
		/// </summary>
		Create = (Byte)'1',

		/// <summary>
		/// 已生成报表数据
		/// </summary>
		Created = (Byte)'2',

		/// <summary>
		/// 生成报表数据失败
		/// </summary>
		CreateFail = (Byte)'3',
	};

	/// <summary>
	/// TFtdcSaveStatusType是一个数据归档状态类型
	/// </summary>
	public enum struct EnumSaveStatusType : Byte
	{
		/// <summary>
		/// 归档未完成
		/// </summary>
		UnSaveData = (Byte)'0',

		/// <summary>
		/// 归档完成
		/// </summary>
		SaveDatad = (Byte)'1',
	};


	/// <summary>
	/// TFtdcSettArchiveStatusType是一个结算确认数据归档状态类型
	/// </summary>
	public enum struct EnumSettArchiveStatusType : Byte
	{
		/// <summary>
		/// 未归档数据
		/// </summary>
		UnArchived = (Byte)'0',

		/// <summary>
		/// 数据归档中
		/// </summary>
		Archiving = (Byte)'1',

		/// <summary>
		/// 已归档数据
		/// </summary>
		Archived = (Byte)'2',

		/// <summary>
		/// 归档数据失败
		/// </summary>
		ArchiveFail = (Byte)'3',
	};

	/// <summary>
	/// TFtdcCTPTypeType是一个CTP交易系统类型类型
	/// </summary>
	public enum struct EnumCTPTypeType : Byte
	{
		/// <summary>
		/// 未知类型
		/// </summary>
		Unkown = (Byte)'0',

		/// <summary>
		/// 主中心
		/// </summary>
		MainCenter = (Byte)'1',

		/// <summary>
		/// 备中心
		/// </summary>
		BackUp = (Byte)'2',
	};

	/// <summary>
	/// TFtdcCloseDealTypeType是一个平仓处理类型类型
	/// </summary>
	public enum struct EnumCloseDealTypeType : Byte
	{
		/// <summary>
		/// 正常
		/// </summary>
		Normal = (Byte)'0',
		/// <summary>
		/// 投机平仓优先
		/// </summary>
		SpecFirst = (Byte)'1'
	};

	/// <summary>
	///TThostFtdcMortgageFundUseRangeType是一个货币质押资金可用范围类型
	/// </summary>
	public enum struct EnumMortgageFundUseRangeTypeType : Byte
	{
		/// <summary>
		///不能使用
		/// </summary>
		None = (Byte)'0',
		/// <summary>
		///用于保证金
		/// </summary>
		Margin = (Byte)'1',
		/// <summary>
		///用于手续费、盈亏、保证金
		/// </summary>
		All = (Byte)'2'
	};



	/// <summary>
	/// TFtdcStartModeType是一个启动模式类型
	/// </summary>
	public enum struct EnumStartModeType : Byte
	{
		/// <summary>
		/// 正常
		/// </summary>
		Normal = (Byte)'1',

		/// <summary>
		/// 应急
		/// </summary>
		Emerge = (Byte)'2',

		/// <summary>
		/// 恢复
		/// </summary>
		Restore = (Byte)'3',
	};
	///<summary>
	///TFtdcTemplateTypeType是一个模型类型类型
	///</summary>
	public enum struct EnumTemplateTypeType : Byte
	{
		/// <summary>
		/// 全量
		/// </summary>
		Full = (Byte)'1',

		/// <summary>
		/// 增量
		/// </summary>
		Increment = (Byte)'2',

		/// <summary>
		/// 备份
		/// </summary>
		BackUp = (Byte)'3',
	};

	///<summary>
	///TFtdcLoginModeType是一个登录模式类型
	///</summary>
	public enum struct EnumLoginModeType : Byte
	{
		/// <summary>
		/// 交易
		/// </summary>
		Trade = (Byte)'0',

		/// <summary>
		/// 转账
		/// </summary>
		Transfer = (Byte)'1'
	};

	///<summary>
	///TFtdcPromptTypeType是一个日历提示类型类型
	///</summary>
	public enum struct EnumPromptTypeType : Byte
	{
		/// <summary>
		/// 合约上下市
		/// </summary>
		Instrument = (Byte)'1',

		/// <summary>
		/// 保证金分段生效
		/// </summary>
		Margin = (Byte)'2'
	};

	///<summary>
	///TFtdcHasTrusteeType是一个是否有托管人类型
	///</summary>
	public enum struct EnumHasTrusteeType : Byte
	{
		/// <summary>
		/// 没有
		/// </summary>
		NO = (Byte)'0',

		/// <summary>
		/// 有
		/// </summary>
		YES = (Byte)'1'
	};

	///<summary>
	///TFtdcAmTypeType是一个机构类型类型
	///</summary>
	public enum struct EnumAmTypeType : Byte
	{
		///<summary>
		///银行
		/// </summary>
		Bank = (Byte) '1',
		///<summary>
		///证券公司
		/// </summary>
		Securities = (Byte)'2',
		///<summary>
		///基金公司
		/// </summary>
		Fund = (Byte) '3',
		///<summary>
		///保险公司
		/// </summary>
		Insurance = (Byte) '4',
		///<summary>
		///信托公司
		/// </summary>
		Trust = (Byte) '5',
		///<summary>
		///其他
		/// </summary>
		Other = (Byte) '9'
	};
	///<summary>
	///TFtdcCSRCFundIOTypeType是一个出入金类型类型
	///</summary>
	public enum struct EnumCSRCFundIOTypeType : Byte
	{
		///<summary>
		///出入金
		///</summary>
		FundIO = (Byte)'0',
		///<summary>
		///银期换汇
		///</summary>
		SwapCurrency = (Byte)'1'
	};
	///<summary>
	///TFtdcCusAccountTypeType是一个结算账户类型类型
	///</summary>
	public enum struct EnumCusAccountTypeType : Byte
	{
		///<summary>
		///期货结算账户
		///</summary>
		Futures = (Byte)'1',
		///<summary>
		///纯期货资管业务下的资管结算账户
		///</summary>
		AssetmgrFuture = (Byte) '2',
		///<summary>
		///综合类资管业务下的期货资管托管账户
		///</summary>
		AssetmgrTrustee = (Byte) '3',
		///<summary>
		///综合类资管业务下的资金中转账户
		///</summary>
		AssetmgrTransfer = (Byte) '4'
	};
	///<summary>
	///TFtdcLanguageTypeType是一个通知语言类型类型
	///</summary>
	public enum struct EnumLanguageTypeType : Byte
	{
		///<summary>
		///中文
		///</summary>
		Chinese = (Byte)'1',
		///<summary>
		///英文
		///</summary>
		English = (Byte)'2'
	};

	///<summary>
	///TFtdcAssetmgrClientTypeType是一个资产管理客户类型类型
	///</summary>
	public enum struct EnumAssetmgrClientTypeType : Byte
	{
		///<summary>
		///个人资管客户
		///</summary>
		Person = (Byte)'1',
		///<summary>
		///单位资管客户
		///</summary>
		Organ = (Byte) '2',
		///<summary>
		///特殊单位资管客户
		///</summary>
		SpecialOrgan = (Byte)'4'
	};

	///<summary>
	///TFtdcAssetmgrTypeType是一个投资类型类型
	///</summary>
	public enum struct EnumAssetmgrTypeType : Byte
	{
		///<summary>
		///期货类
		///</summary>
		Futures = (Byte) '3',
		///<summary>
		///综合类
		///</summary>
		SpecialOrgan = (Byte) '4'
	};

	///<summary>
	///TFtdcCheckInstrTypeType是一个合约比较类型类型
	///</summary>
	public enum struct EnumCheckInstrTypeType : Byte
	{
		///<summary>
		///合约交易所不存在
		///</summary>
		HasExch = (Byte) '0',
		///<summary>
		///合约本系统不存在
		///</summary>
		HasATP = (Byte)'1',
		///<summary>
		///合约比较不一致
		///</summary>
		HasDiff = (Byte) '2'
	};
	///<summary>
	///TFtdcDeliveryTypeType是一个交割类型类型
	///</summary>
	public enum struct EnumDeliveryTypeType : Byte
	{
		///<summary>
		///手工交割
		///</summary>
		HandDeliv = (Byte) '1',
		///<summary>
		///到期交割
		///</summary>
		PersonDeliv = (Byte) '2'
	};
	///<summary>
	///TFtdcMaxMarginSideAlgorithmType是一个大额单边保证金算法类型
	///</summary>
	public enum struct EnumMaxMarginSideAlgorithmType : Byte
	{
		///<summary>
		///不使用大额单边保证金算法
		///</summary>
		NO = (Byte)'0',
		///<summary>
		///使用大额单边保证金算法
		///</summary>
		YES = (Byte)'1'
	};

	///<summary>
	///TFtdcDAClientTypeType是一个资产管理客户类型类型
	///</summary>
	public enum struct EnumDAClientTypeType : Byte
	{
		///<summary>
		///自然人
		///</summary>
		Person = (Byte) '0',
		///<summary>
		///法人
		///</summary>
		Company = (Byte) '1',
		///<summary>
		///其他
		///</summary>
		Other = (Byte) '2'
	};

	///<summary>
	///TFtdcUOAAssetmgrTypeType是一个投资类型类型
	///</summary>
	public enum struct EnumUOAAssetmgrTypeType : Byte
	{
		///<summary>
		///期货类
		///</summary>
		Futures = (Byte) '1',
		///<summary>
		///综合类
		///</summary>
		SpecialOrgan = (Byte) '2',
	};

	///<summary>
	///TFtdcDirectionEnType是一个买卖方向类型
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
	///TFtdcOffsetFlagEnType是一个开平标志类型
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

	/// 以上是userapidatatype.h里面的内容--------------------------------------------------------------------------------------------------------------------


	/// <summary>
	/// 信息分发
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcDisseminationField
	{
		/// <summary>
		/// 序列系列号
		/// </summary>
		short SequenceSeries;
		/// <summary>
		/// 序列号
		/// </summary>
		int SequenceNo;
	};

	/// <summary>
	/// 用户登录请求
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcReqUserLoginField
	{
		/// <summary>
		/// 交易日
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradingDay;
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 用户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// 密码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ Password;
		/// <summary>
		/// 用户端产品信息
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ UserProductInfo;
		/// <summary>
		/// 接口端产品信息
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ InterfaceProductInfo;
		/// <summary>
		/// 协议信息
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ProtocolInfo;
		/// <summary>
		/// Mac地址
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ MacAddress;
		/// <summary>
		/// 动态密码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ OneTimePassword;
		/// <summary>
		/// 终端IP地址
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ ClientIPAddress;

		/// <summary>
		///登录备注
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 36)]
		String^ LoginRemark;
	};


	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcFensUserInfoField
	{
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 用户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// 登录模式
		/// </summary>
		EnumLoginModeType	LoginMode;
	};

	/// <summary>
	/// 用户登录应答
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcRspUserLoginField
	{
		/// <summary>
		/// 交易日
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradingDay;
		/// <summary>
		/// 登录成功时间
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ LoginTime;
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 用户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// 交易系统名称
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ SystemName;
		/// <summary>
		/// 前置编号
		/// </summary>
		int FrontID;
		/// <summary>
		/// 会话编号
		/// </summary>
		int SessionID;
		/// <summary>
		/// 最大报单引用
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ MaxOrderRef;
		/// <summary>
		/// 上期所时间
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ SHFETime;
		/// <summary>
		/// 大商所时间
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ DCETime;
		/// <summary>
		/// 郑商所时间
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ CZCETime;
		/// <summary>
		/// 中金所时间
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ FFEXTime;

		/// <summary>
		///能源中心时间
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	INETime;
	};

	/// <summary>
	/// 用户登出请求
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcUserLogoutField
	{
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 用户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
	};

	/// <summary>
	/// 强制交易员退出
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcForceUserLogoutField
	{
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 用户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
	};

	/// <summary>
	/// 客户端认证请求
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcReqAuthenticateField
	{
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 用户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		///用户端产品信息
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	UserProductInfo;
		/// <summary>
		///认证码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
		String^	AuthCode;
	};

	/// <summary>
	/// 客户端认证响应
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcRspAuthenticateField
	{
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 用户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		///用户端产品信息
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	UserProductInfo;
	};

	/// <summary>
	///客户端认证信息
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	ref struct ThostFtdcAuthenticationInfoField
	{
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 用户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// 用户端产品信息
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	UserProductInfo;
		/// <summary>
		/// 认证信息
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 129)]
		String^	AuthInfo;
		/// <summary>
		/// 是否为认证结果
		/// </summary>
		int	IsResult;
	};

	/// <summary>
	/// 银期转帐报文头
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcTransferHeaderField
	{
		/// <summary>
		/// 版本号，常量，1.0
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ Version;
		/// <summary>
		/// 交易代码，必填
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 7)]
		String^ TradeCode;
		/// <summary>
		/// 交易日期，必填，格式：yyyymmdd
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradeDate;
		/// <summary>
		/// 交易时间，必填，格式：hhmmss
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradeTime;
		/// <summary>
		/// 发起方流水号，N/A
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradeSerial;
		/// <summary>
		/// 期货公司代码，必填
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ FutureID;
		/// <summary>
		/// 银行代码，根据查询银行得到，必填
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ BankID;
		/// <summary>
		/// 银行分中心代码，根据查询银行得到，必填
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
		String^ BankBrchID;
		/// <summary>
		/// 操作员，N/A
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
		String^ OperNo;
		/// <summary>
		/// 交易设备类型，N/A
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 3)]
		String^ DeviceID;
		/// <summary>
		/// 记录数，N/A
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 7)]
		String^ RecordNum;
		/// <summary>
		/// 会话编号，N/A
		/// </summary>
		int SessionID;
		/// <summary>
		/// 请求编号，N/A
		/// </summary>
		int RequestID;
	};

	/// <summary>
	/// 银行资金转期货请求，TradeCode=202001
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcTransferBankToFutureReqField
	{
		/// <summary>
		/// 期货资金账户
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ FutureAccount;
		/// <summary>
		/// 密码标志
		/// </summary>
		EnumFuturePwdFlagType FuturePwdFlag;
		/// <summary>
		/// 密码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
		String^ FutureAccPwd;
		/// <summary>
		/// 转账金额
		/// </summary>
		double TradeAmt;
		/// <summary>
		/// 客户手续费
		/// </summary>
		double CustFee;
		/// <summary>
		/// 币种：RMB-人民币 USD-美圆 HKD-港元
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ CurrencyCode;
	};

	/// <summary>
	/// 银行资金转期货请求响应
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcTransferBankToFutureRspField
	{
		/// <summary>
		/// 响应代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
		String^ RetCode;
		/// <summary>
		/// 响应信息
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 129)]
		String^ RetInfo;
		/// <summary>
		/// 资金账户
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ FutureAccount;
		/// <summary>
		/// 转帐金额
		/// </summary>
		double TradeAmt;
		/// <summary>
		/// 应收客户手续费
		/// </summary>
		double CustFee;
		/// <summary>
		/// 币种
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ CurrencyCode;
	};

	/// <summary>
	/// 期货资金转银行请求，TradeCode=202002
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcTransferFutureToBankReqField
	{
		/// <summary>
		/// 期货资金账户
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ FutureAccount;
		/// <summary>
		/// 密码标志
		/// </summary>
		EnumFuturePwdFlagType FuturePwdFlag;
		/// <summary>
		/// 密码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
		String^ FutureAccPwd;
		/// <summary>
		/// 转账金额
		/// </summary>
		double TradeAmt;
		/// <summary>
		/// 客户手续费
		/// </summary>
		double CustFee;
		/// <summary>
		/// 币种：RMB-人民币 USD-美圆 HKD-港元
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ CurrencyCode;
	};

	/// <summary>
	/// 期货资金转银行请求响应
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcTransferFutureToBankRspField
	{
		/// <summary>
		/// 响应代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
		String^ RetCode;
		/// <summary>
		/// 响应信息
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 129)]
		String^ RetInfo;
		/// <summary>
		/// 资金账户
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ FutureAccount;
		/// <summary>
		/// 转帐金额
		/// </summary>
		double TradeAmt;
		/// <summary>
		/// 应收客户手续费
		/// </summary>
		double CustFee;
		/// <summary>
		/// 币种
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ CurrencyCode;
	};

	/// <summary>
	/// 查询银行资金请求，TradeCode=204002
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcTransferQryBankReqField
	{
		/// <summary>
		/// 期货资金账户
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ FutureAccount;
		/// <summary>
		/// 密码标志
		/// </summary>
		EnumFuturePwdFlagType FuturePwdFlag;
		/// <summary>
		/// 密码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
		String^ FutureAccPwd;
		/// <summary>
		/// 币种：RMB-人民币 USD-美圆 HKD-港元
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ CurrencyCode;
	};

	/// <summary>
	/// 查询银行资金请求响应
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcTransferQryBankRspField
	{
		/// <summary>
		/// 响应代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
		String^ RetCode;
		/// <summary>
		/// 响应信息
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 129)]
		String^ RetInfo;
		/// <summary>
		/// 资金账户
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ FutureAccount;
		/// <summary>
		/// 银行余额
		/// </summary>
		double TradeAmt;
		/// <summary>
		/// 银行可用余额
		/// </summary>
		double UseAmt;
		/// <summary>
		/// 银行可取余额
		/// </summary>
		double FetchAmt;
		/// <summary>
		/// 币种
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ CurrencyCode;
	};

	/// <summary>
	/// 查询银行交易明细请求，TradeCode=204999
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcTransferQryDetailReqField
	{
		/// <summary>
		/// 期货资金账户
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ FutureAccount;
	};

	/// <summary>
	/// 查询银行交易明细请求响应
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcTransferQryDetailRspField
	{
		/// <summary>
		/// 交易日期
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradeDate;
		/// <summary>
		/// 交易时间
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradeTime;
		/// <summary>
		/// 交易代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 7)]
		String^ TradeCode;
		/// <summary>
		/// 期货流水号
		/// </summary>
		int FutureSerial;
		/// <summary>
		/// 期货公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ FutureID;
		/// <summary>
		/// 资金帐号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 22)]
		String^ FutureAccount;
		/// <summary>
		/// 银行流水号
		/// </summary>
		int BankSerial;
		/// <summary>
		/// 银行代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ BankID;
		/// <summary>
		/// 银行分中心代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
		String^ BankBrchID;
		/// <summary>
		/// 银行账号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ BankAccount;
		/// <summary>
		/// 证件号码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ CertCode;
		/// <summary>
		/// 货币代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ CurrencyCode;
		/// <summary>
		/// 发生金额
		/// </summary>
		double TxAmount;
		/// <summary>
		/// 有效标志
		/// </summary>
		EnumTransferValidFlagType Flag;
	};

	/// <summary>
	/// 响应信息
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcRspInfoField
	{
		/// <summary>
		/// 错误代码
		/// </summary>
		int ErrorID;
		/// <summary>
		/// 错误信息
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^ ErrorMsg;
	};

	/// <summary>
	/// 交易所
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcExchangeField
	{
		/// <summary>
		/// 交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// 交易所名称
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ ExchangeName;
		/// <summary>
		/// 交易所属性
		/// </summary>
		EnumExchangePropertyType ExchangeProperty;
	};

	/// <summary>
	/// 产品
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcProductField
	{
		/// <summary>
		/// 产品代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ ProductID;
		/// <summary>
		/// 产品名称
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ ProductName;
		/// <summary>
		/// 交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// 产品类型
		/// </summary>
		EnumProductClassTypeType ProductClass;
		/// <summary>
		/// 合约数量乘数
		/// </summary>
		int VolumeMultiple;
		/// <summary>
		/// 最小变动价位
		/// </summary>
		double PriceTick;
		/// <summary>
		/// 市价单最大下单量
		/// </summary>
		int MaxMarketOrderVolume;
		/// <summary>
		/// 市价单最小下单量
		/// </summary>
		int MinMarketOrderVolume;
		/// <summary>
		/// 限价单最大下单量
		/// </summary>
		int MaxLimitOrderVolume;
		/// <summary>
		/// 限价单最小下单量
		/// </summary>
		int MinLimitOrderVolume;
		/// <summary>
		/// 持仓类型
		/// </summary>
		EnumPositionTypeType PositionType;
		/// <summary>
		/// 持仓日期类型
		/// </summary>
		EnumPositionDateTypeType PositionDateType;
		/// <summary>
		///平仓处理类型
		/// </summary>
		EnumCloseDealTypeType CloseDealType;
		/// <summary>
		///交易币种类型
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^	TradeCurrencyID;
		/// <summary>
		///质押资金可用范围
		/// </summary>
		EnumMortgageFundUseRangeTypeType MortgageFundUseRange;
		/// <summary>
		///交易所产品代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ ExchangeProductID;
		/// <summary>
		///合约基础商品乘数
		/// </summary>
		double UnderlyingMultiple;
	};

	/// <summary>
	/// 合约
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcInstrumentField
	{
		/// <summary>
		/// 合约代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// 交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// 合约名称
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ InstrumentName;
		/// <summary>
		/// 合约在交易所的代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ ExchangeInstID;
		/// <summary>
		/// 产品代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ ProductID;
		/// <summary>
		/// 产品类型
		/// </summary>
		EnumProductClassTypeType ProductClass;
		/// <summary>
		/// 交割年份
		/// </summary>
		int DeliveryYear;
		/// <summary>
		/// 交割月
		/// </summary>
		int DeliveryMonth;
		/// <summary>
		/// 市价单最大下单量
		/// </summary>
		int MaxMarketOrderVolume;
		/// <summary>
		/// 市价单最小下单量
		/// </summary>
		int MinMarketOrderVolume;
		/// <summary>
		/// 限价单最大下单量
		/// </summary>
		int MaxLimitOrderVolume;
		/// <summary>
		/// 限价单最小下单量
		/// </summary>
		int MinLimitOrderVolume;
		/// <summary>
		/// 合约数量乘数
		/// </summary>
		int VolumeMultiple;
		/// <summary>
		/// 最小变动价位
		/// </summary>
		double PriceTick;
		/// <summary>
		/// 创建日
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ CreateDate;
		/// <summary>
		/// 上市日
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ OpenDate;
		/// <summary>
		/// 到期日
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExpireDate;
		/// <summary>
		/// 开始交割日
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ StartDelivDate;
		/// <summary>
		/// 结束交割日
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ EndDelivDate;
		/// <summary>
		/// 合约生命周期状态
		/// </summary>
		EnumInstLifePhaseType InstLifePhase;
		/// <summary>
		/// 当前是否交易
		/// </summary>
		int IsTrading;
		/// <summary>
		/// 持仓类型
		/// </summary>
		EnumPositionTypeType PositionType;
		/// <summary>
		/// 持仓日期类型
		/// </summary>
		EnumPositionDateTypeType PositionDateType;
		/// <summary>
		/// 多头保证金率
		/// </summary>
		double LongMarginRatio;
		/// <summary>
		/// 空头保证金率
		/// </summary>
		double ShortMarginRatio;
		/// <summary>
		///是否使用大额单边保证金算法
		EnumMaxMarginSideAlgorithmTypeType	MaxMarginSideAlgorithm;
		/// <summary>
		///基础商品代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^	UnderlyingInstrID;
		/// <summary>
		///执行价
		/// </summary>
		double	StrikePrice;
		/// <summary>
		///期权类型
		/// </summary>
		EnumOptionsTypeType	OptionsType;
		/// <summary>
		///合约基础商品乘数
		/// </summary>
		double	UnderlyingMultiple;
		/// <summary>
		///组合类型
		/// </summary>
		EnumCombinationTypeType	CombinationType;
	};

	/// <summary>
	/// 经纪公司
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcBrokerField
	{
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 经纪公司简称
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ BrokerAbbr;
		/// <summary>
		/// 经纪公司名称
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^ BrokerName;
		/// <summary>
		/// 是否活跃
		/// </summary>
		int IsActive;
	};

	/// <summary>
	/// 交易所交易员
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcTraderField
	{
		/// <summary>
		/// 交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// 交易所交易员代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ TraderID;
		/// <summary>
		/// 会员代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ParticipantID;
		/// <summary>
		/// 密码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ Password;
		/// <summary>
		/// 安装数量
		/// </summary>
		int InstallCount;
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
	};

	/// <summary>
	/// 投资者
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcInvestorField
	{
		/// <summary>
		/// 投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 投资者分组代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorGroupID;
		/// <summary>
		/// 投资者名称
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^ InvestorName;
		/// <summary>
		/// 证件类型
		/// </summary>
		EnumIdCardTypeType IdentifiedCardType;
		/// <summary>
		/// 证件号码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 51)]
		String^ IdentifiedCardNo;
		/// <summary>
		/// 是否活跃
		/// </summary>
		int IsActive;
		/// <summary>
		/// 联系电话
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ Telephone;
		/// <summary>
		/// 通讯地址
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 101)]
		String^ Address;
		/// <summary>
		/// 开户日期
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ OpenDate;
		/// <summary>
		/// 手机
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ Mobile;
		/// <summary>
		///手续费率模板代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^	CommModelID;
		/// <summary>
		///保证金率模板代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^	MarginModelID;
	};

	/// <summary>
	/// 交易编码
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcTradingCodeField
	{
		/// <summary>
		/// 投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// 客户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ClientID;
		/// <summary>
		/// 是否活跃
		/// </summary>
		int IsActive;
		/// <summary>
		/// 交易编码类型
		/// </summary>
		EnumClientIDTypeType ClientIDType;
	};

	/// <summary>
	/// 会员编码和经纪公司编码对照表
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcPartBrokerField
	{
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// 会员代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ParticipantID;
		/// <summary>
		/// 是否活跃
		/// </summary>
		int IsActive;
	};

	/// <summary>
	/// 管理用户
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcSuperUserField
	{
		/// <summary>
		/// 用户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// 用户名称
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^ UserName;
		/// <summary>
		/// 密码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ Password;
		/// <summary>
		/// 是否活跃
		/// </summary>
		int IsActive;
	};

	/// <summary>
	/// 管理用户功能权限
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcSuperUserFunctionField
	{
		/// <summary>
		/// 用户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// 功能代码
		/// </summary>
		EnumFunctionCodeType FunctionCode;
	};

	/// <summary>
	/// 投资者组
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcInvestorGroupField
	{
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 投资者分组代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorGroupID;
		/// <summary>
		/// 投资者分组名称
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ InvestorGroupName;
	};

	/// <summary>
	/// 资金账户
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcTradingAccountField
	{
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 投资者帐号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ AccountID;
		/// <summary>
		/// 上次质押金额
		/// </summary>
		double PreMortgage;
		/// <summary>
		/// 上次信用额度
		/// </summary>
		double PreCredit;
		/// <summary>
		/// 上次存款额
		/// </summary>
		double PreDeposit;
		/// <summary>
		/// 上次结算准备金
		/// </summary>
		double PreBalance;
		/// <summary>
		/// 上次占用的保证金
		/// </summary>
		double PreMargin;
		/// <summary>
		/// 利息基数
		/// </summary>
		double InterestBase;
		/// <summary>
		/// 利息收入
		/// </summary>
		double Interest;
		/// <summary>
		/// 入金金额
		/// </summary>
		double Deposit;
		/// <summary>
		/// 出金金额
		/// </summary>
		double Withdraw;
		/// <summary>
		/// 冻结的保证金
		/// </summary>
		double FrozenMargin;
		/// <summary>
		/// 冻结的资金
		/// </summary>
		double FrozenCash;
		/// <summary>
		/// 冻结的手续费
		/// </summary>
		double FrozenCommission;
		/// <summary>
		/// 当前保证金总额
		/// </summary>
		double CurrMargin;
		/// <summary>
		/// 资金差额
		/// </summary>
		double CashIn;
		/// <summary>
		/// 手续费
		/// </summary>
		double Commission;
		/// <summary>
		/// 平仓盈亏
		/// </summary>
		double CloseProfit;
		/// <summary>
		/// 持仓盈亏
		/// </summary>
		double PositionProfit;
		/// <summary>
		/// 期货结算准备金
		/// </summary>
		double Balance;
		/// <summary>
		/// 可用资金
		/// </summary>
		double Available;
		/// <summary>
		/// 可取资金
		/// </summary>
		double WithdrawQuota;
		/// <summary>
		/// 基本准备金
		/// </summary>
		double Reserve;
		/// <summary>
		/// 交易日
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradingDay;
		/// <summary>
		/// 结算编号
		/// </summary>
		int SettlementID;
		/// <summary>
		/// 信用额度
		/// </summary>
		double Credit;
		/// <summary>
		/// 质押金额
		/// </summary>
		double Mortgage;
		/// <summary>
		/// 交易所保证金
		/// </summary>
		double ExchangeMargin;
		/// <summary>
		/// 投资者交割保证金
		/// </summary>
		double DeliveryMargin;
		/// <summary>
		/// 交易所交割保证金
		/// </summary>
		double ExchangeDeliveryMargin;
		/// <summary>
		///保底期货结算准备金
		/// </summary>
		double	ReserveBalance;
		/// <summary>
		///币种代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^	CurrencyID;
		/// <summary>
		///上次货币质入金额
		/// </summary>
		double	PreFundMortgageIn;
		/// <summary>
		///上次货币质出金额
		/// </summary>
		double	PreFundMortgageOut;
		/// <summary>
		///货币质入金额
		/// </summary>
		double	FundMortgageIn;
		/// <summary>
		///货币质出金额
		/// </summary>
		double	FundMortgageOut;
		/// <summary>
		///货币质押余额
		/// </summary>
		double	FundMortgageAvailable;
		/// <summary>
		///可质押货币金额
		/// </summary>
		double	MortgageableFund;
		/// <summary>
		///特殊产品占用保证金
		/// </summary>
		double	SpecProductMargin;
		/// <summary>
		///特殊产品冻结保证金
		/// </summary>
		double	SpecProductFrozenMargin;
		/// <summary>
		///特殊产品手续费
		/// </summary>
		double	SpecProductCommission;
		/// <summary>
		///特殊产品冻结手续费
		/// </summary>
		double	SpecProductFrozenCommission;
		/// <summary>
		///特殊产品持仓盈亏
		/// </summary>
		double	SpecProductPositionProfit;
		/// <summary>
		///特殊产品平仓盈亏
		/// </summary>
		double	SpecProductCloseProfit;
		/// <summary>
		///根据持仓盈亏算法计算的特殊产品持仓盈亏
		/// </summary>
		double	SpecProductPositionProfitByAlg;
		/// <summary>
		///特殊产品交易所保证金
		/// </summary>
		double	SpecProductExchangeMargin;
	};

	/// <summary>
	/// 投资者持仓
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcInvestorPositionField
	{
		/// <summary>
		/// 合约代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// 持仓多空方向
		/// </summary>
		EnumPosiDirectionType PosiDirection;
		/// <summary>
		/// 投机套保标志
		/// </summary>
		EnumHedgeFlagType HedgeFlag;
		/// <summary>
		/// 持仓日期
		/// </summary>
		EnumPositionDateType PositionDate;
		/// <summary>
		/// 上日持仓
		/// </summary>
		int YdPosition;
		/// <summary>
		/// 今日持仓
		/// </summary>
		int Position;
		/// <summary>
		/// 多头冻结
		/// </summary>
		int LongFrozen;
		/// <summary>
		/// 空头冻结
		/// </summary>
		int ShortFrozen;
		/// <summary>
		/// 开仓冻结金额
		/// </summary>
		double LongFrozenAmount;
		/// <summary>
		/// 开仓冻结金额
		/// </summary>
		double ShortFrozenAmount;
		/// <summary>
		/// 开仓量
		/// </summary>
		int OpenVolume;
		/// <summary>
		/// 平仓量
		/// </summary>
		int CloseVolume;
		/// <summary>
		/// 开仓金额
		/// </summary>
		double OpenAmount;
		/// <summary>
		/// 平仓金额
		/// </summary>
		double CloseAmount;
		/// <summary>
		/// 持仓成本
		/// </summary>
		double PositionCost;
		/// <summary>
		/// 上次占用的保证金
		/// </summary>
		double PreMargin;
		/// <summary>
		/// 占用的保证金
		/// </summary>
		double UseMargin;
		/// <summary>
		/// 冻结的保证金
		/// </summary>
		double FrozenMargin;
		/// <summary>
		/// 冻结的资金
		/// </summary>
		double FrozenCash;
		/// <summary>
		/// 冻结的手续费
		/// </summary>
		double FrozenCommission;
		/// <summary>
		/// 资金差额
		/// </summary>
		double CashIn;
		/// <summary>
		/// 手续费
		/// </summary>
		double Commission;
		/// <summary>
		/// 平仓盈亏
		/// </summary>
		double CloseProfit;
		/// <summary>
		/// 持仓盈亏
		/// </summary>
		double PositionProfit;
		/// <summary>
		/// 上次结算价
		/// </summary>
		double PreSettlementPrice;
		/// <summary>
		/// 本次结算价
		/// </summary>
		double SettlementPrice;
		/// <summary>
		/// 交易日
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradingDay;
		/// <summary>
		/// 结算编号
		/// </summary>
		int SettlementID;
		/// <summary>
		/// 开仓成本
		/// </summary>
		double OpenCost;
		/// <summary>
		/// 交易所保证金
		/// </summary>
		double ExchangeMargin;
		/// <summary>
		/// 组合成交形成的持仓
		/// </summary>
		int CombPosition;
		/// <summary>
		/// 组合多头冻结
		/// </summary>
		int CombLongFrozen;
		/// <summary>
		/// 组合空头冻结
		/// </summary>
		int CombShortFrozen;
		/// <summary>
		/// 逐日盯市平仓盈亏
		/// </summary>
		double CloseProfitByDate;
		/// <summary>
		/// 逐笔对冲平仓盈亏
		/// </summary>
		double CloseProfitByTrade;
		/// <summary>
		/// 今日持仓
		/// </summary>
		int TodayPosition;
		/// <summary>
		/// 保证金率
		/// </summary>
		double MarginRateByMoney;
		/// <summary>
		/// 保证金率(按手数)
		/// </summary>
		double MarginRateByVolume;
		/// <summary>
		///执行冻结
		/// </summary>
		int	StrikeFrozen;
		/// <summary>
		///执行冻结金额
		/// </summary>
		double	StrikeFrozenAmount;
		/// <summary>
		///放弃执行冻结
		/// </summary>
		int	AbandonFrozen;
	};

	/// <summary>
	/// 合约保证金率
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcInstrumentMarginRateField
	{
		/// <summary>
		/// 合约代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// 投资者范围
		/// </summary>
		EnumInvestorRangeTypeType InvestorRange;
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// 投机套保标志
		/// </summary>
		EnumHedgeFlagType HedgeFlag;
		/// <summary>
		/// 多头保证金率
		/// </summary>
		double LongMarginRatioByMoney;
		/// <summary>
		/// 多头保证金费
		/// </summary>
		double LongMarginRatioByVolume;
		/// <summary>
		/// 空头保证金率
		/// </summary>
		double ShortMarginRatioByMoney;
		/// <summary>
		/// 空头保证金费
		/// </summary>
		double ShortMarginRatioByVolume;
		/// <summary>
		/// 是否相对交易所收取
		/// </summary>
		EnumBoolType IsRelative;
	};

	/// <summary>
	/// 合约手续费率
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcInstrumentCommissionRateField
	{
		/// <summary>
		/// 合约代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// 投资者范围
		/// </summary>
		EnumInvestorRangeTypeType InvestorRange;
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// 开仓手续费率
		/// </summary>
		double OpenRatioByMoney;
		/// <summary>
		/// 开仓手续费
		/// </summary>
		double OpenRatioByVolume;
		/// <summary>
		/// 平仓手续费率
		/// </summary>
		double CloseRatioByMoney;
		/// <summary>
		/// 平仓手续费
		/// </summary>
		double CloseRatioByVolume;
		/// <summary>
		/// 平今手续费率
		/// </summary>
		double CloseTodayRatioByMoney;
		/// <summary>
		/// 平今手续费
		/// </summary>
		double CloseTodayRatioByVolume;
	};

	/// <summary>
	/// 深度行情
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcDepthMarketDataField
	{
		/// <summary>
		/// 交易日
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradingDay;
		/// <summary>
		/// 合约代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// 交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// 合约在交易所的代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ ExchangeInstID;
		/// <summary>
		/// 最新价
		/// </summary>
		double LastPrice;
		/// <summary>
		/// 上次结算价
		/// </summary>
		double PreSettlementPrice;
		/// <summary>
		/// 昨收盘
		/// </summary>
		double PreClosePrice;
		/// <summary>
		/// 昨持仓量
		/// </summary>
		double PreOpenInterest;
		/// <summary>
		/// 今开盘
		/// </summary>
		double OpenPrice;
		/// <summary>
		/// 最高价
		/// </summary>
		double HighestPrice;
		/// <summary>
		/// 最低价
		/// </summary>
		double LowestPrice;
		/// <summary>
		/// 数量
		/// </summary>
		int Volume;
		/// <summary>
		/// 成交金额
		/// </summary>
		double Turnover;
		/// <summary>
		/// 持仓量
		/// </summary>
		double OpenInterest;
		/// <summary>
		/// 今收盘
		/// </summary>
		double ClosePrice;
		/// <summary>
		/// 本次结算价
		/// </summary>
		double SettlementPrice;
		/// <summary>
		/// 涨停板价
		/// </summary>
		double UpperLimitPrice;
		/// <summary>
		/// 跌停板价
		/// </summary>
		double LowerLimitPrice;
		/// <summary>
		/// 昨虚实度
		/// </summary>
		double PreDelta;
		/// <summary>
		/// 今虚实度
		/// </summary>
		double CurrDelta;
		/// <summary>
		/// 最后修改时间
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ UpdateTime;
		/// <summary>
		/// 最后修改毫秒
		/// </summary>
		int UpdateMillisec;
		/// <summary>
		/// 申买价一
		/// </summary>
		double BidPrice1;
		/// <summary>
		/// 申买量一
		/// </summary>
		int BidVolume1;
		/// <summary>
		/// 申卖价一
		/// </summary>
		double AskPrice1;
		/// <summary>
		/// 申卖量一
		/// </summary>
		int AskVolume1;
		/// <summary>
		/// 申买价二
		/// </summary>
		double BidPrice2;
		/// <summary>
		/// 申买量二
		/// </summary>
		int BidVolume2;
		/// <summary>
		/// 申卖价二
		/// </summary>
		double AskPrice2;
		/// <summary>
		/// 申卖量二
		/// </summary>
		int AskVolume2;
		/// <summary>
		/// 申买价三
		/// </summary>
		double BidPrice3;
		/// <summary>
		/// 申买量三
		/// </summary>
		int BidVolume3;
		/// <summary>
		/// 申卖价三
		/// </summary>
		double AskPrice3;
		/// <summary>
		/// 申卖量三
		/// </summary>
		int AskVolume3;
		/// <summary>
		/// 申买价四
		/// </summary>
		double BidPrice4;
		/// <summary>
		/// 申买量四
		/// </summary>
		int BidVolume4;
		/// <summary>
		/// 申卖价四
		/// </summary>
		double AskPrice4;
		/// <summary>
		/// 申卖量四
		/// </summary>
		int AskVolume4;
		/// <summary>
		/// 申买价五
		/// </summary>
		double BidPrice5;
		/// <summary>
		/// 申买量五
		/// </summary>
		int BidVolume5;
		/// <summary>
		/// 申卖价五
		/// </summary>
		double AskPrice5;
		/// <summary>
		/// 申卖量五
		/// </summary>
		int AskVolume5;
		/// <summary>
		/// 当日均价
		/// </summary>
		double AveragePrice;
		/// <summary>
		/// 业务日期
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ActionDay;
	};

	/// <summary>
	/// 投资者合约交易权限
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcInstrumentTradingRightField
	{
		/// <summary>
		/// 合约代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// 投资者范围
		/// </summary>
		EnumInvestorRangeTypeType InvestorRange;
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// 交易权限
		/// </summary>
		EnumTradingRightType TradingRight;
	};

	/// <summary>
	/// 经纪公司用户
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcBrokerUserField
	{
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 用户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// 用户名称
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^ UserName;
		/// <summary>
		/// 用户类型
		/// </summary>
		EnumUserTypeType UserType;
		/// <summary>
		/// 是否活跃
		/// </summary>
		int IsActive;
		/// <summary>
		/// 是否使用令牌
		/// </summary>
		int IsUsingOTP;
	};

	/// <summary>
	/// 经纪公司用户口令
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcBrokerUserPasswordField
	{
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 用户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// 密码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ Password;
	};

	/// <summary>
	/// 经纪公司用户功能权限
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcBrokerUserFunctionField
	{
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 用户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// 经纪公司功能代码
		/// </summary>
		EnumBrokerFunctionCodeType BrokerFunctionCode;
	};

	/// <summary>
	/// 交易所交易员报盘机
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcTraderOfferField
	{
		/// <summary>
		/// 交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// 交易所交易员代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ TraderID;
		/// <summary>
		/// 会员代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ParticipantID;
		/// <summary>
		/// 密码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ Password;
		/// <summary>
		/// 安装编号
		/// </summary>
		int InstallID;
		/// <summary>
		/// 本地报单编号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ OrderLocalID;
		/// <summary>
		/// 交易所交易员连接状态
		/// </summary>
		EnumTraderConnectStatusType TraderConnectStatus;
		/// <summary>
		/// 发出连接请求的日期
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ConnectRequestDate;
		/// <summary>
		/// 发出连接请求的时间
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ConnectRequestTime;
		/// <summary>
		/// 上次报告日期
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ LastReportDate;
		/// <summary>
		/// 上次报告时间
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ LastReportTime;
		/// <summary>
		/// 完成连接日期
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ConnectDate;
		/// <summary>
		/// 完成连接时间
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ConnectTime;
		/// <summary>
		/// 启动日期
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ StartDate;
		/// <summary>
		/// 启动时间
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ StartTime;
		/// <summary>
		/// 交易日
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradingDay;
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
	};

	/// <summary>
	/// 投资者结算结果
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcSettlementInfoField
	{
		/// <summary>
		/// 交易日
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradingDay;
		/// <summary>
		/// 结算编号
		/// </summary>
		int SettlementID;
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// 序号
		/// </summary>
		int SequenceNo;
		/// <summary>
		/// 消息正文
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 501)]
		String^ Content;
	};

	/// <summary>
	/// 合约保证金率调整
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcInstrumentMarginRateAdjustField
	{
		/// <summary>
		/// 合约代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// 投资者范围
		/// </summary>
		EnumInvestorRangeTypeType InvestorRange;
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// 投机套保标志
		/// </summary>
		EnumHedgeFlagType HedgeFlag;
		/// <summary>
		/// 多头保证金率
		/// </summary>
		double LongMarginRatioByMoney;
		/// <summary>
		/// 多头保证金费
		/// </summary>
		double LongMarginRatioByVolume;
		/// <summary>
		/// 空头保证金率
		/// </summary>
		double ShortMarginRatioByMoney;
		/// <summary>
		/// 空头保证金费
		/// </summary>
		double ShortMarginRatioByVolume;
		/// <summary>
		/// 是否相对交易所收取
		/// </summary>
		int IsRelative;
	};

	/// <summary>
	/// 交易所保证金率
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcExchangeMarginRateField
	{
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 合约代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// 投机套保标志
		/// </summary>
		EnumHedgeFlagType HedgeFlag;
		/// <summary>
		/// 多头保证金率
		/// </summary>
		double LongMarginRatioByMoney;
		/// <summary>
		/// 多头保证金费
		/// </summary>
		double LongMarginRatioByVolume;
		/// <summary>
		/// 空头保证金率
		/// </summary>
		double ShortMarginRatioByMoney;
		/// <summary>
		/// 空头保证金费
		/// </summary>
		double ShortMarginRatioByVolume;
	};

	/// <summary>
	/// 交易所保证金率调整
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcExchangeMarginRateAdjustField
	{
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 合约代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// 投机套保标志
		/// </summary>
		EnumHedgeFlagType HedgeFlag;
		/// <summary>
		/// 跟随交易所投资者多头保证金率
		/// </summary>
		double LongMarginRatioByMoney;
		/// <summary>
		/// 跟随交易所投资者多头保证金费
		/// </summary>
		double LongMarginRatioByVolume;
		/// <summary>
		/// 跟随交易所投资者空头保证金率
		/// </summary>
		double ShortMarginRatioByMoney;
		/// <summary>
		/// 跟随交易所投资者空头保证金费
		/// </summary>
		double ShortMarginRatioByVolume;
		/// <summary>
		/// 交易所多头保证金率
		/// </summary>
		double ExchLongMarginRatioByMoney;
		/// <summary>
		/// 交易所多头保证金费
		/// </summary>
		double ExchLongMarginRatioByVolume;
		/// <summary>
		/// 交易所空头保证金率
		/// </summary>
		double ExchShortMarginRatioByMoney;
		/// <summary>
		/// 交易所空头保证金费
		/// </summary>
		double ExchShortMarginRatioByVolume;
		/// <summary>
		/// 不跟随交易所投资者多头保证金率
		/// </summary>
		double NoLongMarginRatioByMoney;
		/// <summary>
		/// 不跟随交易所投资者多头保证金费
		/// </summary>
		double NoLongMarginRatioByVolume;
		/// <summary>
		/// 不跟随交易所投资者空头保证金率
		/// </summary>
		double NoShortMarginRatioByMoney;
		/// <summary>
		/// 不跟随交易所投资者空头保证金费
		/// </summary>
		double NoShortMarginRatioByVolume;
	};
	/// <summary>
	///汇率
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct CThostFtdcExchangeRateField
	{
		/// <summary>
		///经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		/// <summary>
		///源币种
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^	FromCurrencyID;
		/// <summary>
		///源币种单位数量
		/// </summary>
		double	FromCurrencyUnit;
		/// <summary>
		///目标币种
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^	ToCurrencyID;
		/// <summary>
		///汇率
		/// </summary>
		double	ExchangeRate;
	};
	/// <summary>
	/// 结算引用
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcSettlementRefField
	{
		/// <summary>
		/// 交易日
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradingDay;
		/// <summary>
		/// 结算编号
		/// </summary>
		int SettlementID;
	};

	/// <summary>
	/// 当前时间
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcCurrentTimeField
	{
		/// <summary>
		/// 当前日期
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ CurrDate;
		/// <summary>
		/// 当前时间
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ CurrTime;
		/// <summary>
		/// 当前时间（毫秒）
		/// </summary>
		int CurrMillisec;
	};

	/// <summary>
	/// 通讯阶段
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcCommPhaseField
	{
		/// <summary>
		/// 交易日
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradingDay;
		/// <summary>
		/// 通讯时段编号
		/// </summary>
		short CommPhaseNo;
	};

	/// <summary>
	/// 登录信息
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcLoginInfoField
	{
		/// <summary>
		/// 前置编号
		/// </summary>
		int FrontID;
		/// <summary>
		/// 会话编号
		/// </summary>
		int SessionID;
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 用户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// 登录日期
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ LoginDate;
		/// <summary>
		/// 登录时间
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ LoginTime;
		/// <summary>
		/// IP地址
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ IPAddress;
		/// <summary>
		/// 用户端产品信息
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ UserProductInfo;
		/// <summary>
		/// 接口端产品信息
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ InterfaceProductInfo;
		/// <summary>
		/// 协议信息
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ProtocolInfo;
		/// <summary>
		/// 系统名称
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ SystemName;
		/// <summary>
		/// 密码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ Password;
		/// <summary>
		/// 最大报单引用
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ MaxOrderRef;
		/// <summary>
		/// 上期所时间
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ SHFETime;
		/// <summary>
		/// 大商所时间
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ DCETime;
		/// <summary>
		/// 郑商所时间
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ CZCETime;
		/// <summary>
		/// 中金所时间
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ FFEXTime;
		/// <summary>
		/// Mac地址
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ MacAddress;
		/// <summary>
		/// 动态密码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ OneTimePassword;
		/// <summary>
		///能源中心时间
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	INETime;
		/// <summary>
		///查询时是否需要流控
		/// </summary>
		int	IsQryControl;
		/// <summary>
		///登录备注
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 36)]
		String^	LoginRemark;
	};

	/// <summary>
	/// 登录信息
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcLogoutAllField
	{
		/// <summary>
		/// 前置编号
		/// </summary>
		int FrontID;
		/// <summary>
		/// 会话编号
		/// </summary>
		int SessionID;
		/// <summary>
		/// 系统名称
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ SystemName;
	};

	/// <summary>
	/// 前置状态
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcFrontStatusField
	{
		/// <summary>
		/// 前置编号
		/// </summary>
		int FrontID;
		/// <summary>
		/// 上次报告日期
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ LastReportDate;
		/// <summary>
		/// 上次报告时间
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ LastReportTime;
		/// <summary>
		/// 是否活跃
		/// </summary>
		int IsActive;
	};

	/// <summary>
	/// 用户口令变更
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcUserPasswordUpdateField
	{
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 用户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// 原来的口令
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ OldPassword;
		/// <summary>
		/// 新的口令
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ NewPassword;
	};

	/// <summary>
	/// 输入报单
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcInputOrderField
	{
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// 合约代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// 报单引用
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ OrderRef;
		/// <summary>
		/// 用户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// 报单价格条件
		/// </summary>
		EnumOrderPriceTypeType OrderPriceType;
		/// <summary>
		/// 买卖方向
		/// </summary>
		EnumDirectionType Direction;
		/// <summary>
		/// 组合开平标志
		/// </summary>
		EnumOffsetFlagType CombOffsetFlag;
		/// <summary>
		/// 组合开平标志
		/// </summary>
		EnumOffsetFlagType CombOffsetFlag_1;
		/// <summary>
		/// 组合开平标志
		/// </summary>
		EnumOffsetFlagType CombOffsetFlag_2;
		/// <summary>
		/// 组合开平标志
		/// </summary>
		EnumOffsetFlagType CombOffsetFlag_3;
		/// <summary>
		/// 组合开平标志
		/// </summary>
		EnumOffsetFlagType CombOffsetFlag_4;
		/// <summary>
		/// 组合投机套保标志
		/// </summary>
		EnumHedgeFlagType CombHedgeFlag;
		/// <summary>
		/// 组合投机套保标志
		/// </summary>
		EnumHedgeFlagType CombHedgeFlag_1;
		/// <summary>
		/// 组合投机套保标志
		/// </summary>
		EnumHedgeFlagType CombHedgeFlag_2;
		/// <summary>
		/// 组合投机套保标志
		/// </summary>
		EnumHedgeFlagType CombHedgeFlag_3;
		/// <summary>
		/// 组合投机套保标志
		/// </summary>
		EnumHedgeFlagType CombHedgeFlag_4;
		/// <summary>
		/// 价格
		/// </summary>
		double LimitPrice;
		/// <summary>
		/// 数量
		/// </summary>
		int VolumeTotalOriginal;
		/// <summary>
		/// 有效期类型
		/// </summary>
		EnumTimeConditionType TimeCondition;
		/// <summary>
		/// GTD日期
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ GTDDate;
		/// <summary>
		/// 成交量类型
		/// </summary>
		EnumVolumeConditionType VolumeCondition;
		/// <summary>
		/// 最小成交量
		/// </summary>
		int MinVolume;
		/// <summary>
		/// 触发条件
		/// </summary>
		EnumContingentConditionType ContingentCondition;
		/// <summary>
		/// 止损价
		/// </summary>
		double StopPrice;
		/// <summary>
		/// 强平原因
		/// </summary>
		EnumForceCloseReasonType ForceCloseReason;
		/// <summary>
		/// 自动挂起标志
		/// </summary>
		int IsAutoSuspend;
		/// <summary>
		/// 业务单元
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ BusinessUnit;
		/// <summary>
		/// 请求编号
		/// </summary>
		int RequestID;
		/// <summary>
		/// 用户强评标志
		/// </summary>
		int UserForceClose;
		/// <summary>
		/// 互换单标志
		/// </summary>
		int	IsSwapOrder;
		/// <summary>
		///交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	ExchangeID;
		/// <summary>
		///投资单元代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
		String^	InvestUnitID;
		/// <summary>
		///资金账号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^	AccountID;
		/// <summary>
		///币种代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^	CurrencyID;
		/// <summary>
		///交易编码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	ClientID;
		/// <summary>
		///IP地址
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	IPAddress;
		/// <summary>
		///Mac地址
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^	MacAddress;
	};

	/// <summary>
	/// 报单
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcOrderField
	{
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// 合约代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// 报单引用
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ OrderRef;
		/// <summary>
		/// 用户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// 报单价格条件
		/// </summary>
		EnumOrderPriceTypeType OrderPriceType;
		/// <summary>
		/// 买卖方向
		/// </summary>
		EnumDirectionType Direction;
		/// <summary>
		/// 组合开平标志
		/// </summary>
		EnumOffsetFlagType CombOffsetFlag;
		/// <summary>
		/// 组合开平标志
		/// </summary>
		EnumOffsetFlagType CombOffsetFlag_1;
		/// <summary>
		/// 组合开平标志
		/// </summary>
		EnumOffsetFlagType CombOffsetFlag_2;
		/// <summary>
		/// 组合开平标志
		/// </summary>
		EnumOffsetFlagType CombOffsetFlag_3;
		/// <summary>
		/// 组合开平标志
		/// </summary>
		EnumOffsetFlagType CombOffsetFlag_4;
		/// <summary>
		/// 组合投机套保标志
		/// </summary>
		EnumHedgeFlagType CombHedgeFlag;
		/// <summary>
		/// 组合投机套保标志
		/// </summary>
		EnumHedgeFlagType CombHedgeFlag_1;
		/// <summary>
		/// 组合投机套保标志
		/// </summary>
		EnumHedgeFlagType CombHedgeFlag_2;
		/// <summary>
		/// 组合投机套保标志
		/// </summary>
		EnumHedgeFlagType CombHedgeFlag_3;
		/// <summary>
		/// 组合投机套保标志
		/// </summary>
		EnumHedgeFlagType CombHedgeFlag_4;
		/// <summary>
		/// 价格
		/// </summary>
		double LimitPrice;
		/// <summary>
		/// 数量
		/// </summary>
		int VolumeTotalOriginal;
		/// <summary>
		/// 有效期类型
		/// </summary>
		EnumTimeConditionType TimeCondition;
		/// <summary>
		/// GTD日期
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ GTDDate;
		/// <summary>
		/// 成交量类型
		/// </summary>
		EnumVolumeConditionType VolumeCondition;
		/// <summary>
		/// 最小成交量
		/// </summary>
		int MinVolume;
		/// <summary>
		/// 触发条件
		/// </summary>
		EnumContingentConditionType ContingentCondition;
		/// <summary>
		/// 止损价
		/// </summary>
		double StopPrice;
		/// <summary>
		/// 强平原因
		/// </summary>
		EnumForceCloseReasonType ForceCloseReason;
		/// <summary>
		/// 自动挂起标志
		/// </summary>
		int IsAutoSuspend;
		/// <summary>
		/// 业务单元
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ BusinessUnit;
		/// <summary>
		/// 请求编号
		/// </summary>
		int RequestID;
		/// <summary>
		/// 本地报单编号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ OrderLocalID;
		/// <summary>
		/// 交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// 会员代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ParticipantID;
		/// <summary>
		/// 客户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ClientID;
		/// <summary>
		/// 合约在交易所的代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ ExchangeInstID;
		/// <summary>
		/// 交易所交易员代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ TraderID;
		/// <summary>
		/// 安装编号
		/// </summary>
		int InstallID;
		/// <summary>
		/// 报单提交状态
		/// </summary>
		EnumOrderSubmitStatusType OrderSubmitStatus;
		/// <summary>
		/// 报单提示序号
		/// </summary>
		int NotifySequence;
		/// <summary>
		/// 交易日
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradingDay;
		/// <summary>
		/// 结算编号
		/// </summary>
		int SettlementID;
		/// <summary>
		/// 报单编号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ OrderSysID;
		/// <summary>
		/// 报单来源
		/// </summary>
		EnumOrderSourceType OrderSource;
		/// <summary>
		/// 报单状态
		/// </summary>
		EnumOrderStatusType OrderStatus;
		/// <summary>
		/// 报单类型
		/// </summary>
		EnumOrderTypeType OrderType;
		/// <summary>
		/// 今成交数量
		/// </summary>
		int VolumeTraded;
		/// <summary>
		/// 剩余数量
		/// </summary>
		int VolumeTotal;
		/// <summary>
		/// 报单日期
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ InsertDate;
		/// <summary>
		/// 委托时间
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ InsertTime;
		/// <summary>
		/// 激活时间
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ActiveTime;
		/// <summary>
		/// 挂起时间
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ SuspendTime;
		/// <summary>
		/// 最后修改时间
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ UpdateTime;
		/// <summary>
		/// 撤销时间
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ CancelTime;
		/// <summary>
		/// 最后修改交易所交易员代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ ActiveTraderID;
		/// <summary>
		/// 结算会员编号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ClearingPartID;
		/// <summary>
		/// 序号
		/// </summary>
		int SequenceNo;
		/// <summary>
		/// 前置编号
		/// </summary>
		int FrontID;
		/// <summary>
		/// 会话编号
		/// </summary>
		int SessionID;
		/// <summary>
		/// 用户端产品信息
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ UserProductInfo;
		/// <summary>
		/// 状态信息
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^ StatusMsg;
		/// <summary>
		/// 用户强评标志
		/// </summary>
		int UserForceClose;
		/// <summary>
		/// 操作用户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ ActiveUserID;
		/// <summary>
		/// 经纪公司报单编号
		/// </summary>
		int BrokerOrderSeq;
		/// <summary>
		/// 相关报单
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ RelativeOrderSysID;
		/// <summary>
		///郑商所成交数量
		/// </summary>
		int	ZCETotalTradedVolume;
		/// <summary>
		///互换单标志
		/// </summary>
		int	IsSwapOrder;
		/// <summary>
		///营业部编号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	BranchID;
		/// <summary>
		///投资单元代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
		String^	InvestUnitID;
		/// <summary>
		///资金账号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^	AccountID;
		/// <summary>
		///币种代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^	CurrencyID;
		/// <summary>
		///IP地址
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	IPAddress;
		/// <summary>
		///Mac地址
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^	MacAddress;
	};

	/// <summary>
	/// 交易所报单
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcExchangeOrderField
	{
		/// <summary>
		/// 报单价格条件
		/// </summary>
		EnumOrderPriceTypeType OrderPriceType;
		/// <summary>
		/// 买卖方向
		/// </summary>
		EnumDirectionType Direction;
		/// <summary>
		/// 组合开平标志
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
		String^ CombOffsetFlag;
		/// <summary>
		/// 组合投机套保标志
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
		String^ CombHedgeFlag;
		/// <summary>
		/// 价格
		/// </summary>
		double LimitPrice;
		/// <summary>
		/// 数量
		/// </summary>
		int VolumeTotalOriginal;
		/// <summary>
		/// 有效期类型
		/// </summary>
		EnumTimeConditionType TimeCondition;
		/// <summary>
		/// GTD日期
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ GTDDate;
		/// <summary>
		/// 成交量类型
		/// </summary>
		EnumVolumeConditionType VolumeCondition;
		/// <summary>
		/// 最小成交量
		/// </summary>
		int MinVolume;
		/// <summary>
		/// 触发条件
		/// </summary>
		EnumContingentConditionType ContingentCondition;
		/// <summary>
		/// 止损价
		/// </summary>
		double StopPrice;
		/// <summary>
		/// 强平原因
		/// </summary>
		EnumForceCloseReasonType ForceCloseReason;
		/// <summary>
		/// 自动挂起标志
		/// </summary>
		int IsAutoSuspend;
		/// <summary>
		/// 业务单元
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ BusinessUnit;
		/// <summary>
		/// 请求编号
		/// </summary>
		int RequestID;
		/// <summary>
		/// 本地报单编号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ OrderLocalID;
		/// <summary>
		/// 交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// 会员代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ParticipantID;
		/// <summary>
		/// 客户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ClientID;
		/// <summary>
		/// 合约在交易所的代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ ExchangeInstID;
		/// <summary>
		/// 交易所交易员代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ TraderID;
		/// <summary>
		/// 安装编号
		/// </summary>
		int InstallID;
		/// <summary>
		/// 报单提交状态
		/// </summary>
		EnumOrderSubmitStatusType OrderSubmitStatus;
		/// <summary>
		/// 报单提示序号
		/// </summary>
		int NotifySequence;
		/// <summary>
		/// 交易日
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradingDay;
		/// <summary>
		/// 结算编号
		/// </summary>
		int SettlementID;
		/// <summary>
		/// 报单编号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ OrderSysID;
		/// <summary>
		/// 报单来源
		/// </summary>
		EnumOrderSourceType OrderSource;
		/// <summary>
		/// 报单状态
		/// </summary>
		EnumOrderStatusType OrderStatus;
		/// <summary>
		/// 报单类型
		/// </summary>
		EnumOrderTypeType OrderType;
		/// <summary>
		/// 今成交数量
		/// </summary>
		int VolumeTraded;
		/// <summary>
		/// 剩余数量
		/// </summary>
		int VolumeTotal;
		/// <summary>
		/// 报单日期
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ InsertDate;
		/// <summary>
		/// 委托时间
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ InsertTime;
		/// <summary>
		/// 激活时间
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ActiveTime;
		/// <summary>
		/// 挂起时间
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ SuspendTime;
		/// <summary>
		/// 最后修改时间
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ UpdateTime;
		/// <summary>
		/// 撤销时间
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ CancelTime;
		/// <summary>
		/// 最后修改交易所交易员代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ ActiveTraderID;
		/// <summary>
		/// 结算会员编号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ClearingPartID;
		/// <summary>
		/// 序号
		/// </summary>
		int SequenceNo;
		/// <summary>
		///营业部编号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	BranchID;
		/// <summary>
		///IP地址
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	IPAddress;
		/// <summary>
		///Mac地址
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^	MacAddress;
	};

	/// <summary>
	/// 交易所报单插入失败
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcExchangeOrderInsertErrorField
	{
		/// <summary>
		/// 交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// 会员代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ParticipantID;
		/// <summary>
		/// 交易所交易员代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ TraderID;
		/// <summary>
		/// 安装编号
		/// </summary>
		int InstallID;
		/// <summary>
		/// 本地报单编号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ OrderLocalID;
		/// <summary>
		/// 错误代码
		/// </summary>
		int ErrorID;
		/// <summary>
		/// 错误信息
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^ ErrorMsg;
	};

	/// <summary>
	/// 输入报单操作
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcInputOrderActionField
	{
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// 报单操作引用
		/// </summary>
		int OrderActionRef;
		/// <summary>
		/// 报单引用
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ OrderRef;
		/// <summary>
		/// 请求编号
		/// </summary>
		int RequestID;
		/// <summary>
		/// 前置编号
		/// </summary>
		int FrontID;
		/// <summary>
		/// 会话编号
		/// </summary>
		int SessionID;
		/// <summary>
		/// 交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// 报单编号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ OrderSysID;
		/// <summary>
		/// 操作标志
		/// </summary>
		EnumActionFlagType ActionFlag;
		/// <summary>
		/// 价格
		/// </summary>
		double LimitPrice;
		/// <summary>
		/// 数量变化
		/// </summary>
		int VolumeChange;
		/// <summary>
		/// 用户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// 合约代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		///投资单元代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
		String^	InvestUnitID;
		/// <summary>
		///IP地址
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	IPAddress;
		/// <summary>
		///Mac地址
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^	MacAddress;
	};

	/// <summary>
	/// 报单操作
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcOrderActionField
	{
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// 报单操作引用
		/// </summary>
		int OrderActionRef;
		/// <summary>
		/// 报单引用
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ OrderRef;
		/// <summary>
		/// 请求编号
		/// </summary>
		int RequestID;
		/// <summary>
		/// 前置编号
		/// </summary>
		int FrontID;
		/// <summary>
		/// 会话编号
		/// </summary>
		int SessionID;
		/// <summary>
		/// 交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// 报单编号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ OrderSysID;
		/// <summary>
		/// 操作标志
		/// </summary>
		EnumActionFlagType ActionFlag;
		/// <summary>
		/// 价格
		/// </summary>
		double LimitPrice;
		/// <summary>
		/// 数量变化
		/// </summary>
		int VolumeChange;
		/// <summary>
		/// 操作日期
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ActionDate;
		/// <summary>
		/// 操作时间
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ActionTime;
		/// <summary>
		/// 交易所交易员代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ TraderID;
		/// <summary>
		/// 安装编号
		/// </summary>
		int InstallID;
		/// <summary>
		/// 本地报单编号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ OrderLocalID;
		/// <summary>
		/// 操作本地编号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ ActionLocalID;
		/// <summary>
		/// 会员代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ParticipantID;
		/// <summary>
		/// 客户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ClientID;
		/// <summary>
		/// 业务单元
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ BusinessUnit;
		/// <summary>
		/// 报单操作状态
		/// </summary>
		EnumOrderActionStatusType OrderActionStatus;
		/// <summary>
		/// 用户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// 状态信息
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^ StatusMsg;
		/// <summary>
		/// 合约代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		///营业部编号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	BranchID;
		/// <summary>
		///投资单元代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
		String^	InvestUnitID;
		/// <summary>
		///IP地址
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	IPAddress;
		/// <summary>
		///Mac地址
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^	MacAddress;
	};

	/// <summary>
	/// 交易所报单操作
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcExchangeOrderActionField
	{
		/// <summary>
		/// 交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// 报单编号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ OrderSysID;
		/// <summary>
		/// 操作标志
		/// </summary>
		EnumActionFlagType ActionFlag;
		/// <summary>
		/// 价格
		/// </summary>
		double LimitPrice;
		/// <summary>
		/// 数量变化
		/// </summary>
		int VolumeChange;
		/// <summary>
		/// 操作日期
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ActionDate;
		/// <summary>
		/// 操作时间
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ActionTime;
		/// <summary>
		/// 交易所交易员代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ TraderID;
		/// <summary>
		/// 安装编号
		/// </summary>
		int InstallID;
		/// <summary>
		/// 本地报单编号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ OrderLocalID;
		/// <summary>
		/// 操作本地编号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ ActionLocalID;
		/// <summary>
		/// 会员代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ParticipantID;
		/// <summary>
		/// 客户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ClientID;
		/// <summary>
		/// 业务单元
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ BusinessUnit;
		/// <summary>
		/// 报单操作状态
		/// </summary>
		EnumOrderActionStatusType OrderActionStatus;
		/// <summary>
		/// 用户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		///营业部编号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	BranchID;
		/// <summary>
		///IP地址
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	IPAddress;
		/// <summary>
		///Mac地址
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^	MacAddress;
	};

	/// <summary>
	/// 交易所报单操作失败
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcExchangeOrderActionErrorField
	{
		/// <summary>
		/// 交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// 报单编号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ OrderSysID;
		/// <summary>
		/// 交易所交易员代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ TraderID;
		/// <summary>
		/// 安装编号
		/// </summary>
		int InstallID;
		/// <summary>
		/// 本地报单编号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ OrderLocalID;
		/// <summary>
		/// 操作本地编号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ ActionLocalID;
		/// <summary>
		/// 错误代码
		/// </summary>
		int ErrorID;
		/// <summary>
		/// 错误信息
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^ ErrorMsg;
	};

	/// <summary>
	/// 交易所成交
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcExchangeTradeField
	{
		/// <summary>
		/// 交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// 成交编号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ TradeID;
		/// <summary>
		/// 买卖方向
		/// </summary>
		EnumDirectionType Direction;
		/// <summary>
		/// 报单编号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ OrderSysID;
		/// <summary>
		/// 会员代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ParticipantID;
		/// <summary>
		/// 客户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ClientID;
		/// <summary>
		/// 交易角色
		/// </summary>
		EnumTradingRoleType TradingRole;
		/// <summary>
		/// 合约在交易所的代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ ExchangeInstID;
		/// <summary>
		/// 开平标志
		/// </summary>
		EnumOffsetFlagType OffsetFlag;
		/// <summary>
		/// 投机套保标志
		/// </summary>
		EnumHedgeFlagType HedgeFlag;
		/// <summary>
		/// 价格
		/// </summary>
		double Price;
		/// <summary>
		/// 数量
		/// </summary>
		int Volume;
		/// <summary>
		/// 成交时期
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradeDate;
		/// <summary>
		/// 成交时间
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradeTime;
		/// <summary>
		/// 成交类型
		/// </summary>
		EnumTradeTypeType TradeType;
		/// <summary>
		/// 成交价来源
		/// </summary>
		EnumPriceSourceType PriceSource;
		/// <summary>
		/// 交易所交易员代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ TraderID;
		/// <summary>
		/// 本地报单编号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ OrderLocalID;
		/// <summary>
		/// 结算会员编号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ClearingPartID;
		/// <summary>
		/// 业务单元
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ BusinessUnit;
		/// <summary>
		/// 序号
		/// </summary>
		int SequenceNo;
	};

	/// <summary>
	/// 成交
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcTradeField
	{
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// 合约代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// 报单引用
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ OrderRef;
		/// <summary>
		/// 用户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// 交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// 成交编号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ TradeID;
		/// <summary>
		/// 买卖方向
		/// </summary>
		EnumDirectionType Direction;
		/// <summary>
		/// 报单编号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ OrderSysID;
		/// <summary>
		/// 会员代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ParticipantID;
		/// <summary>
		/// 客户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ClientID;
		/// <summary>
		/// 交易角色
		/// </summary>
		EnumTradingRoleType TradingRole;
		/// <summary>
		/// 合约在交易所的代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ ExchangeInstID;
		/// <summary>
		/// 开平标志
		/// </summary>
		EnumOffsetFlagType OffsetFlag;
		/// <summary>
		/// 投机套保标志
		/// </summary>
		EnumHedgeFlagType HedgeFlag;
		/// <summary>
		/// 价格
		/// </summary>
		double Price;
		/// <summary>
		/// 数量
		/// </summary>
		int Volume;
		/// <summary>
		/// 成交时期
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradeDate;
		/// <summary>
		/// 成交时间
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradeTime;
		/// <summary>
		/// 成交类型
		/// </summary>
		EnumTradeTypeType TradeType;
		/// <summary>
		/// 成交价来源
		/// </summary>
		EnumPriceSourceType PriceSource;
		/// <summary>
		/// 交易所交易员代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ TraderID;
		/// <summary>
		/// 本地报单编号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ OrderLocalID;
		/// <summary>
		/// 结算会员编号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ClearingPartID;
		/// <summary>
		/// 业务单元
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ BusinessUnit;
		/// <summary>
		/// 序号
		/// </summary>
		int SequenceNo;
		/// <summary>
		/// 交易日
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradingDay;
		/// <summary>
		/// 结算编号
		/// </summary>
		int SettlementID;
		/// <summary>
		/// 经纪公司报单编号
		/// </summary>
		int BrokerOrderSeq;
	};

	/// <summary>
	/// 用户会话
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcUserSessionField
	{
		/// <summary>
		/// 前置编号
		/// </summary>
		int FrontID;
		/// <summary>
		/// 会话编号
		/// </summary>
		int SessionID;
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 用户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// 登录日期
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ LoginDate;
		/// <summary>
		/// 登录时间
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ LoginTime;
		/// <summary>
		/// IP地址
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ IPAddress;
		/// <summary>
		/// 用户端产品信息
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ UserProductInfo;
		/// <summary>
		/// 接口端产品信息
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ InterfaceProductInfo;
		/// <summary>
		/// 协议信息
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ProtocolInfo;
		/// <summary>
		/// Mac地址
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ MacAddress;
		/// <summary>
		///登录备注
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 36)]
		String^	LoginRemark;
	};

	/// <summary>
	/// 查询最大报单数量
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcQueryMaxOrderVolumeField
	{
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// 合约代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// 买卖方向
		/// </summary>
		EnumDirectionType Direction;
		/// <summary>
		/// 开平标志
		/// </summary>
		EnumOffsetFlagType OffsetFlag;
		/// <summary>
		/// 投机套保标志
		/// </summary>
		EnumHedgeFlagType HedgeFlag;
		/// <summary>
		/// 最大允许报单数量
		/// </summary>
		int MaxVolume;
	};

	/// <summary>
	/// 投资者结算结果确认信息
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcSettlementInfoConfirmField
	{
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// 确认日期
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ConfirmDate;
		/// <summary>
		/// 确认时间
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ConfirmTime;
	};

	/// <summary>
	/// 出入金同步
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcSyncDepositField
	{
		/// <summary>
		/// 出入金流水号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^ DepositSeqNo;
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// 入金金额
		/// </summary>
		double Deposit;
		/// <summary>
		/// 是否强制进行
		/// </summary>
		int IsForce;
		/// <summary>
		///币种代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^	CurrencyID;
	};
	///<summary>
	///货币质押同步
	///</summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct CThostFtdcSyncFundMortgageField
	{
		///<summary>
		///货币质押流水号
		///</summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^	MortgageSeqNo;
		///<summary>
		///经纪公司代码
		///</summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///<summary>
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^	InvestorID;
		///<summary>
		///源币种
		///</summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^	FromCurrencyID;
		///<summary>
		///质押金额
		///</summary>
		double	MortgageAmount;
		///<summary>
		///目标币种
		///</summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^	ToCurrencyID;
	};

	/// <summary>
	/// 经纪公司同步
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcBrokerSyncField
	{
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
	};

	/// <summary>
	/// 正在同步中的投资者
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcSyncingInvestorField
	{
		/// <summary>
		/// 投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 投资者分组代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorGroupID;
		/// <summary>
		/// 投资者名称
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^ InvestorName;
		/// <summary>
		/// 证件类型
		/// </summary>
		EnumIdCardTypeType IdentifiedCardType;
		/// <summary>
		/// 证件号码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 51)]
		String^ IdentifiedCardNo;
		/// <summary>
		/// 是否活跃
		/// </summary>
		int IsActive;
		/// <summary>
		/// 联系电话
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ Telephone;
		/// <summary>
		/// 通讯地址
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 101)]
		String^ Address;
		/// <summary>
		/// 开户日期
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ OpenDate;
		/// <summary>
		/// 手机
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ Mobile;
		/// <summary>
		///手续费率模板代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^	CommModelID;
		/// <summary>
		///保证金率模板代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^	MarginModelID;
	};

	/// <summary>
	/// 正在同步中的交易代码
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcSyncingTradingCodeField
	{
		/// <summary>
		/// 投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// 客户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ClientID;
		/// <summary>
		/// 是否活跃
		/// </summary>
		int IsActive;
		/// <summary>
		/// 交易编码类型
		/// </summary>
		EnumClientIDTypeType ClientIDType;
	};

	/// <summary>
	/// 正在同步中的投资者分组
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcSyncingInvestorGroupField
	{
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 投资者分组代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorGroupID;
		/// <summary>
		/// 投资者分组名称
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ InvestorGroupName;
	};

	/// <summary>
	/// 正在同步中的交易账号
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcSyncingTradingAccountField
	{
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 投资者帐号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ AccountID;
		/// <summary>
		/// 上次质押金额
		/// </summary>
		double PreMortgage;
		/// <summary>
		/// 上次信用额度
		/// </summary>
		double PreCredit;
		/// <summary>
		/// 上次存款额
		/// </summary>
		double PreDeposit;
		/// <summary>
		/// 上次结算准备金
		/// </summary>
		double PreBalance;
		/// <summary>
		/// 上次占用的保证金
		/// </summary>
		double PreMargin;
		/// <summary>
		/// 利息基数
		/// </summary>
		double InterestBase;
		/// <summary>
		/// 利息收入
		/// </summary>
		double Interest;
		/// <summary>
		/// 入金金额
		/// </summary>
		double Deposit;
		/// <summary>
		/// 出金金额
		/// </summary>
		double Withdraw;
		/// <summary>
		/// 冻结的保证金
		/// </summary>
		double FrozenMargin;
		/// <summary>
		/// 冻结的资金
		/// </summary>
		double FrozenCash;
		/// <summary>
		/// 冻结的手续费
		/// </summary>
		double FrozenCommission;
		/// <summary>
		/// 当前保证金总额
		/// </summary>
		double CurrMargin;
		/// <summary>
		/// 资金差额
		/// </summary>
		double CashIn;
		/// <summary>
		/// 手续费
		/// </summary>
		double Commission;
		/// <summary>
		/// 平仓盈亏
		/// </summary>
		double CloseProfit;
		/// <summary>
		/// 持仓盈亏
		/// </summary>
		double PositionProfit;
		/// <summary>
		/// 期货结算准备金
		/// </summary>
		double Balance;
		/// <summary>
		/// 可用资金
		/// </summary>
		double Available;
		/// <summary>
		/// 可取资金
		/// </summary>
		double WithdrawQuota;
		/// <summary>
		/// 基本准备金
		/// </summary>
		double Reserve;
		/// <summary>
		/// 交易日
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradingDay;
		/// <summary>
		/// 结算编号
		/// </summary>
		int SettlementID;
		/// <summary>
		/// 信用额度
		/// </summary>
		double Credit;
		/// <summary>
		/// 质押金额
		/// </summary>
		double Mortgage;
		/// <summary>
		/// 交易所保证金
		/// </summary>
		double ExchangeMargin;
		/// <summary>
		/// 投资者交割保证金
		/// </summary>
		double DeliveryMargin;
		/// <summary>
		/// 交易所交割保证金
		/// </summary>
		double ExchangeDeliveryMargin;
		/// <summary>
		///保底期货结算准备金
		/// </summary>
		double	ReserveBalance;
		/// <summary>
		///币种代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^	CurrencyID;
		/// <summary>
		///上次货币质入金额
		/// </summary>
		double	PreFundMortgageIn;
		/// <summary>
		///上次货币质出金额
		/// </summary>
		double	PreFundMortgageOut;
		/// <summary>
		///货币质入金额
		/// </summary>
		double	FundMortgageIn;
		/// <summary>
		///货币质出金额
		/// </summary>
		double	FundMortgageOut;
		/// <summary>
		///货币质押余额
		/// </summary>
		double	FundMortgageAvailable;
		/// <summary>
		///可质押货币金额
		/// </summary>
		double	MortgageableFund;
		/// <summary>
		///特殊产品占用保证金
		/// </summary>
		double	SpecProductMargin;
		/// <summary>
		///特殊产品冻结保证金		
		/// </summary>
		double	SpecProductFrozenMargin;
		/// <summary>
		///特殊产品手续费
		/// </summary>
		double	SpecProductCommission;
		/// <summary>
		///特殊产品冻结手续费
		/// </summary>
		double	SpecProductFrozenCommission;
		/// <summary>
		///特殊产品持仓盈亏
		/// </summary>
		double	SpecProductPositionProfit;
		/// <summary>
		///特殊产品平仓盈亏
		/// </summary>
		double	SpecProductCloseProfit;
		/// <summary>
		///根据持仓盈亏算法计算的特殊产品持仓盈亏
		/// </summary>
		double	SpecProductPositionProfitByAlg;
		/// <summary>
		///特殊产品交易所保证金
		/// </summary>
		double	SpecProductExchangeMargin;
	};

	/// <summary>
	/// 正在同步中的投资者持仓
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcSyncingInvestorPositionField
	{
		/// <summary>
		/// 合约代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// 持仓多空方向
		/// </summary>
		EnumPosiDirectionType PosiDirection;
		/// <summary>
		/// 投机套保标志
		/// </summary>
		EnumHedgeFlagType HedgeFlag;
		/// <summary>
		/// 持仓日期
		/// </summary>
		EnumPositionDateType PositionDate;
		/// <summary>
		/// 上日持仓
		/// </summary>
		int YdPosition;
		/// <summary>
		/// 今日持仓
		/// </summary>
		int Position;
		/// <summary>
		/// 多头冻结
		/// </summary>
		int LongFrozen;
		/// <summary>
		/// 空头冻结
		/// </summary>
		int ShortFrozen;
		/// <summary>
		/// 开仓冻结金额
		/// </summary>
		double LongFrozenAmount;
		/// <summary>
		/// 开仓冻结金额
		/// </summary>
		double ShortFrozenAmount;
		/// <summary>
		/// 开仓量
		/// </summary>
		int OpenVolume;
		/// <summary>
		/// 平仓量
		/// </summary>
		int CloseVolume;
		/// <summary>
		/// 开仓金额
		/// </summary>
		double OpenAmount;
		/// <summary>
		/// 平仓金额
		/// </summary>
		double CloseAmount;
		/// <summary>
		/// 持仓成本
		/// </summary>
		double PositionCost;
		/// <summary>
		/// 上次占用的保证金
		/// </summary>
		double PreMargin;
		/// <summary>
		/// 占用的保证金
		/// </summary>
		double UseMargin;
		/// <summary>
		/// 冻结的保证金
		/// </summary>
		double FrozenMargin;
		/// <summary>
		/// 冻结的资金
		/// </summary>
		double FrozenCash;
		/// <summary>
		/// 冻结的手续费
		/// </summary>
		double FrozenCommission;
		/// <summary>
		/// 资金差额
		/// </summary>
		double CashIn;
		/// <summary>
		/// 手续费
		/// </summary>
		double Commission;
		/// <summary>
		/// 平仓盈亏
		/// </summary>
		double CloseProfit;
		/// <summary>
		/// 持仓盈亏
		/// </summary>
		double PositionProfit;
		/// <summary>
		/// 上次结算价
		/// </summary>
		double PreSettlementPrice;
		/// <summary>
		/// 本次结算价
		/// </summary>
		double SettlementPrice;
		/// <summary>
		/// 交易日
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradingDay;
		/// <summary>
		/// 结算编号
		/// </summary>
		int SettlementID;
		/// <summary>
		/// 开仓成本
		/// </summary>
		double OpenCost;
		/// <summary>
		/// 交易所保证金
		/// </summary>
		double ExchangeMargin;
		/// <summary>
		/// 组合成交形成的持仓
		/// </summary>
		int CombPosition;
		/// <summary>
		/// 组合多头冻结
		/// </summary>
		int CombLongFrozen;
		/// <summary>
		/// 组合空头冻结
		/// </summary>
		int CombShortFrozen;
		/// <summary>
		/// 逐日盯市平仓盈亏
		/// </summary>
		double CloseProfitByDate;
		/// <summary>
		/// 逐笔对冲平仓盈亏
		/// </summary>
		double CloseProfitByTrade;
		/// <summary>
		/// 今日持仓
		/// </summary>
		int TodayPosition;
		/// <summary>
		/// 保证金率
		/// </summary>
		double MarginRateByMoney;
		/// <summary>
		/// 保证金率(按手数)
		/// </summary>
		double MarginRateByVolume;
		/// <summary>
		///执行冻结
		/// </summary>
		int	StrikeFrozen;
		/// <summary>
		///执行冻结金额
		/// </summary>
		double	StrikeFrozenAmount;
		/// <summary>
		///放弃执行冻结
		/// </summary>
		int	AbandonFrozen;
	};

	/// <summary>
	/// 正在同步中的合约保证金率
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcSyncingInstrumentMarginRateField
	{
		/// <summary>
		/// 合约代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// 投资者范围
		/// </summary>
		EnumInvestorRangeTypeType InvestorRange;
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// 投机套保标志
		/// </summary>
		EnumHedgeFlagType HedgeFlag;
		/// <summary>
		/// 多头保证金率
		/// </summary>
		double LongMarginRatioByMoney;
		/// <summary>
		/// 多头保证金费
		/// </summary>
		double LongMarginRatioByVolume;
		/// <summary>
		/// 空头保证金率
		/// </summary>
		double ShortMarginRatioByMoney;
		/// <summary>
		/// 空头保证金费
		/// </summary>
		double ShortMarginRatioByVolume;
		/// <summary>
		/// 是否相对交易所收取
		/// </summary>
		int IsRelative;
	};

	/// <summary>
	/// 正在同步中的合约手续费率
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcSyncingInstrumentCommissionRateField
	{
		/// <summary>
		/// 合约代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// 投资者范围
		/// </summary>
		EnumInvestorRangeTypeType InvestorRange;
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// 开仓手续费率
		/// </summary>
		double OpenRatioByMoney;
		/// <summary>
		/// 开仓手续费
		/// </summary>
		double OpenRatioByVolume;
		/// <summary>
		/// 平仓手续费率
		/// </summary>
		double CloseRatioByMoney;
		/// <summary>
		/// 平仓手续费
		/// </summary>
		double CloseRatioByVolume;
		/// <summary>
		/// 平今手续费率
		/// </summary>
		double CloseTodayRatioByMoney;
		/// <summary>
		/// 平今手续费
		/// </summary>
		double CloseTodayRatioByVolume;
	};

	/// <summary>
	/// 正在同步中的合约交易权限
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcSyncingInstrumentTradingRightField
	{
		/// <summary>
		/// 合约代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// 投资者范围
		/// </summary>
		EnumInvestorRangeTypeType InvestorRange;
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// 交易权限
		/// </summary>
		EnumTradingRightType TradingRight;
	};

	/// <summary>
	/// 查询报单
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct ThostFtdcQryOrderField
	{
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		/// 合约代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// 交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// 报单编号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ OrderSysID;
		/// <summary>
		/// 开始时间
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ InsertTimeStart;
		/// <summary>
		/// 结束时间
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ InsertTimeEnd;
	};
	/// <summary>
	///当前期权合约最小保证金
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct CThostFtdcOptionInstrMiniMarginField
	{
		/// <summary>
		/// 合约代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// 投资者范围
		/// </summary>
		EnumInvestorRangeTypeType InvestorRange;
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		///单位（手）期权合约最小保证金
		/// </summary>
		double	MinMargin;
		/// <summary>
		///取值方式
		/// </summary>
		TThostFtdcValueMethodType	ValueMethod;
		/// <summary>
		///是否跟随交易所收取
		/// </summary>
		TThostFtdcBoolType	IsRelative;
	};

	///当前期权合约保证金调整系数
	struct CThostFtdcOptionInstrMarginAdjustField
	{
		///合约代码
		TThostFtdcInstrumentIDType	InstrumentID;
		///投资者范围
		TThostFtdcInvestorRangeType	InvestorRange;
		///经纪公司代码
		TThostFtdcBrokerIDType	BrokerID;
		///投资者代码
		TThostFtdcInvestorIDType	InvestorID;
		///投机空头保证金调整系数
		TThostFtdcRatioType	SShortMarginRatioByMoney;
		///投机空头保证金调整系数
		TThostFtdcMoneyType	SShortMarginRatioByVolume;
		///保值空头保证金调整系数
		TThostFtdcRatioType	HShortMarginRatioByMoney;
		///保值空头保证金调整系数
		TThostFtdcMoneyType	HShortMarginRatioByVolume;
		///套利空头保证金调整系数
		TThostFtdcRatioType	AShortMarginRatioByMoney;
		///套利空头保证金调整系数
		TThostFtdcMoneyType	AShortMarginRatioByVolume;
		///是否跟随交易所收取
		TThostFtdcBoolType	IsRelative;
		///做市商空头保证金调整系数
		TThostFtdcRatioType	MShortMarginRatioByMoney;
		///做市商空头保证金调整系数
		TThostFtdcMoneyType	MShortMarginRatioByVolume;
	};

	///当前期权合约手续费的详细内容
	struct CThostFtdcOptionInstrCommRateField
	{
		///合约代码
		TThostFtdcInstrumentIDType	InstrumentID;
		///投资者范围
		TThostFtdcInvestorRangeType	InvestorRange;
		///经纪公司代码
		TThostFtdcBrokerIDType	BrokerID;
		///投资者代码
		TThostFtdcInvestorIDType	InvestorID;
		///开仓手续费率
		TThostFtdcRatioType	OpenRatioByMoney;
		///开仓手续费
		TThostFtdcRatioType	OpenRatioByVolume;
		///平仓手续费率
		TThostFtdcRatioType	CloseRatioByMoney;
		///平仓手续费
		TThostFtdcRatioType	CloseRatioByVolume;
		///平今手续费率
		TThostFtdcRatioType	CloseTodayRatioByMoney;
		///平今手续费
		TThostFtdcRatioType	CloseTodayRatioByVolume;
		///执行手续费率
		TThostFtdcRatioType	StrikeRatioByMoney;
		///执行手续费
		TThostFtdcRatioType	StrikeRatioByVolume;
	};

	///期权交易成本
	struct CThostFtdcOptionInstrTradeCostField
	{
		///经纪公司代码
		TThostFtdcBrokerIDType	BrokerID;
		///投资者代码
		TThostFtdcInvestorIDType	InvestorID;
		///合约代码
		TThostFtdcInstrumentIDType	InstrumentID;
		///投机套保标志
		TThostFtdcHedgeFlagType	HedgeFlag;
		///期权合约保证金不变部分
		TThostFtdcMoneyType	FixedMargin;
		///期权合约最小保证金
		TThostFtdcMoneyType	MiniMargin;
		///期权合约权利金
		TThostFtdcMoneyType	Royalty;
		///交易所期权合约保证金不变部分
		TThostFtdcMoneyType	ExchFixedMargin;
		///交易所期权合约最小保证金
		TThostFtdcMoneyType	ExchMiniMargin;
	};

	///期权交易成本查询
	struct CThostFtdcQryOptionInstrTradeCostField
	{
		///经纪公司代码
		TThostFtdcBrokerIDType	BrokerID;
		///投资者代码
		TThostFtdcInvestorIDType	InvestorID;
		///合约代码
		TThostFtdcInstrumentIDType	InstrumentID;
		///投机套保标志
		TThostFtdcHedgeFlagType	HedgeFlag;
		///期权合约报价
		TThostFtdcPriceType	InputPrice;
		///标的价格,填0则用昨结算价
		TThostFtdcPriceType	UnderlyingPrice;
	};

	///期权手续费率查询
	struct CThostFtdcQryOptionInstrCommRateField
	{
		///经纪公司代码
		TThostFtdcBrokerIDType	BrokerID;
		///投资者代码
		TThostFtdcInvestorIDType	InvestorID;
		///合约代码
		TThostFtdcInstrumentIDType	InstrumentID;
	};

	///股指现货指数
	struct CThostFtdcIndexPriceField
	{
		///经纪公司代码
		TThostFtdcBrokerIDType	BrokerID;
		///合约代码
		TThostFtdcInstrumentIDType	InstrumentID;
		///指数现货收盘价
		TThostFtdcPriceType	ClosePrice;
	};

	///输入的执行宣告
	struct CThostFtdcInputExecOrderField
	{
		///经纪公司代码
		TThostFtdcBrokerIDType	BrokerID;
		///投资者代码
		TThostFtdcInvestorIDType	InvestorID;
		///合约代码
		TThostFtdcInstrumentIDType	InstrumentID;
		///执行宣告引用
		TThostFtdcOrderRefType	ExecOrderRef;
		///用户代码
		TThostFtdcUserIDType	UserID;
		///数量
		TThostFtdcVolumeType	Volume;
		///请求编号
		TThostFtdcRequestIDType	RequestID;
		///业务单元
		TThostFtdcBusinessUnitType	BusinessUnit;
		///开平标志
		TThostFtdcOffsetFlagType	OffsetFlag;
		///投机套保标志
		TThostFtdcHedgeFlagType	HedgeFlag;
		///执行类型
		TThostFtdcActionTypeType	ActionType;
		///保留头寸申请的持仓方向
		TThostFtdcPosiDirectionType	PosiDirection;
		///期权行权后是否保留期货头寸的标记
		TThostFtdcExecOrderPositionFlagType	ReservePositionFlag;
		///期权行权后生成的头寸是否自动平仓
		TThostFtdcExecOrderCloseFlagType	CloseFlag;
		///交易所代码
		TThostFtdcExchangeIDType	ExchangeID;
		///投资单元代码
		TThostFtdcInvestUnitIDType	InvestUnitID;
		///资金账号
		TThostFtdcAccountIDType	AccountID;
		///币种代码
		TThostFtdcCurrencyIDType	CurrencyID;
		///交易编码
		TThostFtdcClientIDType	ClientID;
		///IP地址
		TThostFtdcIPAddressType	IPAddress;
		///Mac地址
		TThostFtdcMacAddressType	MacAddress;
	};

	///输入执行宣告操作
	struct CThostFtdcInputExecOrderActionField
	{
		///经纪公司代码
		TThostFtdcBrokerIDType	BrokerID;
		///投资者代码
		TThostFtdcInvestorIDType	InvestorID;
		///执行宣告操作引用
		TThostFtdcOrderActionRefType	ExecOrderActionRef;
		///执行宣告引用
		TThostFtdcOrderRefType	ExecOrderRef;
		///请求编号
		TThostFtdcRequestIDType	RequestID;
		///前置编号
		TThostFtdcFrontIDType	FrontID;
		///会话编号
		TThostFtdcSessionIDType	SessionID;
		///交易所代码
		TThostFtdcExchangeIDType	ExchangeID;
		///执行宣告操作编号
		TThostFtdcExecOrderSysIDType	ExecOrderSysID;
		///操作标志
		TThostFtdcActionFlagType	ActionFlag;
		///用户代码
		TThostFtdcUserIDType	UserID;
		///合约代码
		TThostFtdcInstrumentIDType	InstrumentID;
		///投资单元代码
		TThostFtdcInvestUnitIDType	InvestUnitID;
		///IP地址
		TThostFtdcIPAddressType	IPAddress;
		///Mac地址
		TThostFtdcMacAddressType	MacAddress;
	};

	///执行宣告
	struct CThostFtdcExecOrderField
	{
		///经纪公司代码
		TThostFtdcBrokerIDType	BrokerID;
		///投资者代码
		TThostFtdcInvestorIDType	InvestorID;
		///合约代码
		TThostFtdcInstrumentIDType	InstrumentID;
		///执行宣告引用
		TThostFtdcOrderRefType	ExecOrderRef;
		///用户代码
		TThostFtdcUserIDType	UserID;
		///数量
		TThostFtdcVolumeType	Volume;
		///请求编号
		TThostFtdcRequestIDType	RequestID;
		///业务单元
		TThostFtdcBusinessUnitType	BusinessUnit;
		///开平标志
		TThostFtdcOffsetFlagType	OffsetFlag;
		///投机套保标志
		TThostFtdcHedgeFlagType	HedgeFlag;
		///执行类型
		TThostFtdcActionTypeType	ActionType;
		///保留头寸申请的持仓方向
		TThostFtdcPosiDirectionType	PosiDirection;
		///期权行权后是否保留期货头寸的标记
		TThostFtdcExecOrderPositionFlagType	ReservePositionFlag;
		///期权行权后生成的头寸是否自动平仓
		TThostFtdcExecOrderCloseFlagType	CloseFlag;
		///本地执行宣告编号
		TThostFtdcOrderLocalIDType	ExecOrderLocalID;
		///交易所代码
		TThostFtdcExchangeIDType	ExchangeID;
		///会员代码
		TThostFtdcParticipantIDType	ParticipantID;
		///客户代码
		TThostFtdcClientIDType	ClientID;
		///合约在交易所的代码
		TThostFtdcExchangeInstIDType	ExchangeInstID;
		///交易所交易员代码
		TThostFtdcTraderIDType	TraderID;
		///安装编号
		TThostFtdcInstallIDType	InstallID;
		///执行宣告提交状态
		TThostFtdcOrderSubmitStatusType	OrderSubmitStatus;
		///报单提示序号
		TThostFtdcSequenceNoType	NotifySequence;
		///交易日
		TThostFtdcDateType	TradingDay;
		///结算编号
		TThostFtdcSettlementIDType	SettlementID;
		///执行宣告编号
		TThostFtdcExecOrderSysIDType	ExecOrderSysID;
		///报单日期
		TThostFtdcDateType	InsertDate;
		///插入时间
		TThostFtdcTimeType	InsertTime;
		///撤销时间
		TThostFtdcTimeType	CancelTime;
		///执行结果
		TThostFtdcExecResultType	ExecResult;
		///结算会员编号
		TThostFtdcParticipantIDType	ClearingPartID;
		///序号
		TThostFtdcSequenceNoType	SequenceNo;
		///前置编号
		TThostFtdcFrontIDType	FrontID;
		///会话编号
		TThostFtdcSessionIDType	SessionID;
		///用户端产品信息
		TThostFtdcProductInfoType	UserProductInfo;
		///状态信息
		TThostFtdcErrorMsgType	StatusMsg;
		///操作用户代码
		TThostFtdcUserIDType	ActiveUserID;
		///经纪公司报单编号
		TThostFtdcSequenceNoType	BrokerExecOrderSeq;
		///营业部编号
		TThostFtdcBranchIDType	BranchID;
		///投资单元代码
		TThostFtdcInvestUnitIDType	InvestUnitID;
		///资金账号
		TThostFtdcAccountIDType	AccountID;
		///币种代码
		TThostFtdcCurrencyIDType	CurrencyID;
		///IP地址
		TThostFtdcIPAddressType	IPAddress;
		///Mac地址
		TThostFtdcMacAddressType	MacAddress;
	};

	///执行宣告操作
	struct CThostFtdcExecOrderActionField
	{
		///经纪公司代码
		TThostFtdcBrokerIDType	BrokerID;
		///投资者代码
		TThostFtdcInvestorIDType	InvestorID;
		///执行宣告操作引用
		TThostFtdcOrderActionRefType	ExecOrderActionRef;
		///执行宣告引用
		TThostFtdcOrderRefType	ExecOrderRef;
		///请求编号
		TThostFtdcRequestIDType	RequestID;
		///前置编号
		TThostFtdcFrontIDType	FrontID;
		///会话编号
		TThostFtdcSessionIDType	SessionID;
		///交易所代码
		TThostFtdcExchangeIDType	ExchangeID;
		///执行宣告操作编号
		TThostFtdcExecOrderSysIDType	ExecOrderSysID;
		///操作标志
		TThostFtdcActionFlagType	ActionFlag;
		///操作日期
		TThostFtdcDateType	ActionDate;
		///操作时间
		TThostFtdcTimeType	ActionTime;
		///交易所交易员代码
		TThostFtdcTraderIDType	TraderID;
		///安装编号
		TThostFtdcInstallIDType	InstallID;
		///本地执行宣告编号
		TThostFtdcOrderLocalIDType	ExecOrderLocalID;
		///操作本地编号
		TThostFtdcOrderLocalIDType	ActionLocalID;
		///会员代码
		TThostFtdcParticipantIDType	ParticipantID;
		///客户代码
		TThostFtdcClientIDType	ClientID;
		///业务单元
		TThostFtdcBusinessUnitType	BusinessUnit;
		///报单操作状态
		TThostFtdcOrderActionStatusType	OrderActionStatus;
		///用户代码
		TThostFtdcUserIDType	UserID;
		///执行类型
		TThostFtdcActionTypeType	ActionType;
		///状态信息
		TThostFtdcErrorMsgType	StatusMsg;
		///合约代码
		TThostFtdcInstrumentIDType	InstrumentID;
		///营业部编号
		TThostFtdcBranchIDType	BranchID;
		///投资单元代码
		TThostFtdcInvestUnitIDType	InvestUnitID;
		///IP地址
		TThostFtdcIPAddressType	IPAddress;
		///Mac地址
		TThostFtdcMacAddressType	MacAddress;
	};

	///执行宣告查询
	struct CThostFtdcQryExecOrderField
	{
		///经纪公司代码
		TThostFtdcBrokerIDType	BrokerID;
		///投资者代码
		TThostFtdcInvestorIDType	InvestorID;
		///合约代码
		TThostFtdcInstrumentIDType	InstrumentID;
		///交易所代码
		TThostFtdcExchangeIDType	ExchangeID;
		///执行宣告编号
		TThostFtdcExecOrderSysIDType	ExecOrderSysID;
		///开始时间
		TThostFtdcTimeType	InsertTimeStart;
		///结束时间
		TThostFtdcTimeType	InsertTimeEnd;
	};

	///交易所执行宣告信息
	struct CThostFtdcExchangeExecOrderField
	{
		///数量
		TThostFtdcVolumeType	Volume;
		///请求编号
		TThostFtdcRequestIDType	RequestID;
		///业务单元
		TThostFtdcBusinessUnitType	BusinessUnit;
		///开平标志
		TThostFtdcOffsetFlagType	OffsetFlag;
		///投机套保标志
		TThostFtdcHedgeFlagType	HedgeFlag;
		///执行类型
		TThostFtdcActionTypeType	ActionType;
		///保留头寸申请的持仓方向
		TThostFtdcPosiDirectionType	PosiDirection;
		///期权行权后是否保留期货头寸的标记
		TThostFtdcExecOrderPositionFlagType	ReservePositionFlag;
		///期权行权后生成的头寸是否自动平仓
		TThostFtdcExecOrderCloseFlagType	CloseFlag;
		///本地执行宣告编号
		TThostFtdcOrderLocalIDType	ExecOrderLocalID;
		///交易所代码
		TThostFtdcExchangeIDType	ExchangeID;
		///会员代码
		TThostFtdcParticipantIDType	ParticipantID;
		///客户代码
		TThostFtdcClientIDType	ClientID;
		///合约在交易所的代码
		TThostFtdcExchangeInstIDType	ExchangeInstID;
		///交易所交易员代码
		TThostFtdcTraderIDType	TraderID;
		///安装编号
		TThostFtdcInstallIDType	InstallID;
		///执行宣告提交状态
		TThostFtdcOrderSubmitStatusType	OrderSubmitStatus;
		///报单提示序号
		TThostFtdcSequenceNoType	NotifySequence;
		///交易日
		TThostFtdcDateType	TradingDay;
		///结算编号
		TThostFtdcSettlementIDType	SettlementID;
		///执行宣告编号
		TThostFtdcExecOrderSysIDType	ExecOrderSysID;
		///报单日期
		TThostFtdcDateType	InsertDate;
		///插入时间
		TThostFtdcTimeType	InsertTime;
		///撤销时间
		TThostFtdcTimeType	CancelTime;
		///执行结果
		TThostFtdcExecResultType	ExecResult;
		///结算会员编号
		TThostFtdcParticipantIDType	ClearingPartID;
		///序号
		TThostFtdcSequenceNoType	SequenceNo;
		///营业部编号
		TThostFtdcBranchIDType	BranchID;
		///IP地址
		TThostFtdcIPAddressType	IPAddress;
		///Mac地址
		TThostFtdcMacAddressType	MacAddress;
	};

	///交易所执行宣告查询
	struct CThostFtdcQryExchangeExecOrderField
	{
		///会员代码
		TThostFtdcParticipantIDType	ParticipantID;
		///客户代码
		TThostFtdcClientIDType	ClientID;
		///合约在交易所的代码
		TThostFtdcExchangeInstIDType	ExchangeInstID;
		///交易所代码
		TThostFtdcExchangeIDType	ExchangeID;
		///交易所交易员代码
		TThostFtdcTraderIDType	TraderID;
	};

	///执行宣告操作查询
	struct CThostFtdcQryExecOrderActionField
	{
		///经纪公司代码
		TThostFtdcBrokerIDType	BrokerID;
		///投资者代码
		TThostFtdcInvestorIDType	InvestorID;
		///交易所代码
		TThostFtdcExchangeIDType	ExchangeID;
	};

	///交易所执行宣告操作
	struct CThostFtdcExchangeExecOrderActionField
	{
		///交易所代码
		TThostFtdcExchangeIDType	ExchangeID;
		///执行宣告操作编号
		TThostFtdcExecOrderSysIDType	ExecOrderSysID;
		///操作标志
		TThostFtdcActionFlagType	ActionFlag;
		///操作日期
		TThostFtdcDateType	ActionDate;
		///操作时间
		TThostFtdcTimeType	ActionTime;
		///交易所交易员代码
		TThostFtdcTraderIDType	TraderID;
		///安装编号
		TThostFtdcInstallIDType	InstallID;
		///本地执行宣告编号
		TThostFtdcOrderLocalIDType	ExecOrderLocalID;
		///操作本地编号
		TThostFtdcOrderLocalIDType	ActionLocalID;
		///会员代码
		TThostFtdcParticipantIDType	ParticipantID;
		///客户代码
		TThostFtdcClientIDType	ClientID;
		///业务单元
		TThostFtdcBusinessUnitType	BusinessUnit;
		///报单操作状态
		TThostFtdcOrderActionStatusType	OrderActionStatus;
		///用户代码
		TThostFtdcUserIDType	UserID;
		///执行类型
		TThostFtdcActionTypeType	ActionType;
		///营业部编号
		TThostFtdcBranchIDType	BranchID;
		///IP地址
		TThostFtdcIPAddressType	IPAddress;
		///Mac地址
		TThostFtdcMacAddressType	MacAddress;
	};

	///交易所执行宣告操作查询
	struct CThostFtdcQryExchangeExecOrderActionField
	{
		///会员代码
		TThostFtdcParticipantIDType	ParticipantID;
		///客户代码
		TThostFtdcClientIDType	ClientID;
		///交易所代码
		TThostFtdcExchangeIDType	ExchangeID;
		///交易所交易员代码
		TThostFtdcTraderIDType	TraderID;
	};

	///错误执行宣告
	struct CThostFtdcErrExecOrderField
	{
		///经纪公司代码
		TThostFtdcBrokerIDType	BrokerID;
		///投资者代码
		TThostFtdcInvestorIDType	InvestorID;
		///合约代码
		TThostFtdcInstrumentIDType	InstrumentID;
		///执行宣告引用
		TThostFtdcOrderRefType	ExecOrderRef;
		///用户代码
		TThostFtdcUserIDType	UserID;
		///数量
		TThostFtdcVolumeType	Volume;
		///请求编号
		TThostFtdcRequestIDType	RequestID;
		///业务单元
		TThostFtdcBusinessUnitType	BusinessUnit;
		///开平标志
		TThostFtdcOffsetFlagType	OffsetFlag;
		///投机套保标志
		TThostFtdcHedgeFlagType	HedgeFlag;
		///执行类型
		TThostFtdcActionTypeType	ActionType;
		///保留头寸申请的持仓方向
		TThostFtdcPosiDirectionType	PosiDirection;
		///期权行权后是否保留期货头寸的标记
		TThostFtdcExecOrderPositionFlagType	ReservePositionFlag;
		///期权行权后生成的头寸是否自动平仓
		TThostFtdcExecOrderCloseFlagType	CloseFlag;
		///交易所代码
		TThostFtdcExchangeIDType	ExchangeID;
		///投资单元代码
		TThostFtdcInvestUnitIDType	InvestUnitID;
		///资金账号
		TThostFtdcAccountIDType	AccountID;
		///币种代码
		TThostFtdcCurrencyIDType	CurrencyID;
		///交易编码
		TThostFtdcClientIDType	ClientID;
		///IP地址
		TThostFtdcIPAddressType	IPAddress;
		///Mac地址
		TThostFtdcMacAddressType	MacAddress;
		///错误代码
		TThostFtdcErrorIDType	ErrorID;
		///错误信息
		TThostFtdcErrorMsgType	ErrorMsg;
	};

	///查询错误执行宣告
	struct CThostFtdcQryErrExecOrderField
	{
		///经纪公司代码
		TThostFtdcBrokerIDType	BrokerID;
		///投资者代码
		TThostFtdcInvestorIDType	InvestorID;
	};

	///错误执行宣告操作
	struct CThostFtdcErrExecOrderActionField
	{
		///经纪公司代码
		TThostFtdcBrokerIDType	BrokerID;
		///投资者代码
		TThostFtdcInvestorIDType	InvestorID;
		///执行宣告操作引用
		TThostFtdcOrderActionRefType	ExecOrderActionRef;
		///执行宣告引用
		TThostFtdcOrderRefType	ExecOrderRef;
		///请求编号
		TThostFtdcRequestIDType	RequestID;
		///前置编号
		TThostFtdcFrontIDType	FrontID;
		///会话编号
		TThostFtdcSessionIDType	SessionID;
		///交易所代码
		TThostFtdcExchangeIDType	ExchangeID;
		///执行宣告操作编号
		TThostFtdcExecOrderSysIDType	ExecOrderSysID;
		///操作标志
		TThostFtdcActionFlagType	ActionFlag;
		///用户代码
		TThostFtdcUserIDType	UserID;
		///合约代码
		TThostFtdcInstrumentIDType	InstrumentID;
		///投资单元代码
		TThostFtdcInvestUnitIDType	InvestUnitID;
		///IP地址
		TThostFtdcIPAddressType	IPAddress;
		///Mac地址
		TThostFtdcMacAddressType	MacAddress;
		///错误代码
		TThostFtdcErrorIDType	ErrorID;
		///错误信息
		TThostFtdcErrorMsgType	ErrorMsg;
	};

	///查询错误执行宣告操作
	struct CThostFtdcQryErrExecOrderActionField
	{
		///经纪公司代码
		TThostFtdcBrokerIDType	BrokerID;
		///投资者代码
		TThostFtdcInvestorIDType	InvestorID;
	};

	///投资者期权合约交易权限
	struct CThostFtdcOptionInstrTradingRightField
	{
		///合约代码
		TThostFtdcInstrumentIDType	InstrumentID;
		///投资者范围
		TThostFtdcInvestorRangeType	InvestorRange;
		///经纪公司代码
		TThostFtdcBrokerIDType	BrokerID;
		///投资者代码
		TThostFtdcInvestorIDType	InvestorID;
		///买卖方向
		TThostFtdcDirectionType	Direction;
		///交易权限
		TThostFtdcTradingRightType	TradingRight;
	};

	///查询期权合约交易权限
	struct CThostFtdcQryOptionInstrTradingRightField
	{
		///经纪公司代码
		TThostFtdcBrokerIDType	BrokerID;
		///投资者代码
		TThostFtdcInvestorIDType	InvestorID;
		///合约代码
		TThostFtdcInstrumentIDType	InstrumentID;
		///买卖方向
		TThostFtdcDirectionType	Direction;
	};

	///输入的询价
	struct CThostFtdcInputForQuoteField
	{
		///经纪公司代码
		TThostFtdcBrokerIDType	BrokerID;
		///投资者代码
		TThostFtdcInvestorIDType	InvestorID;
		///合约代码
		TThostFtdcInstrumentIDType	InstrumentID;
		///询价引用
		TThostFtdcOrderRefType	ForQuoteRef;
		///用户代码
		TThostFtdcUserIDType	UserID;
		///交易所代码
		TThostFtdcExchangeIDType	ExchangeID;
		///投资单元代码
		TThostFtdcInvestUnitIDType	InvestUnitID;
		///IP地址
		TThostFtdcIPAddressType	IPAddress;
		///Mac地址
		TThostFtdcMacAddressType	MacAddress;
	};

	///询价
	struct CThostFtdcForQuoteField
	{
		///经纪公司代码
		TThostFtdcBrokerIDType	BrokerID;
		///投资者代码
		TThostFtdcInvestorIDType	InvestorID;
		///合约代码
		TThostFtdcInstrumentIDType	InstrumentID;
		///询价引用
		TThostFtdcOrderRefType	ForQuoteRef;
		///用户代码
		TThostFtdcUserIDType	UserID;
		///本地询价编号
		TThostFtdcOrderLocalIDType	ForQuoteLocalID;
		///交易所代码
		TThostFtdcExchangeIDType	ExchangeID;
		///会员代码
		TThostFtdcParticipantIDType	ParticipantID;
		///客户代码
		TThostFtdcClientIDType	ClientID;
		///合约在交易所的代码
		TThostFtdcExchangeInstIDType	ExchangeInstID;
		///交易所交易员代码
		TThostFtdcTraderIDType	TraderID;
		///安装编号
		TThostFtdcInstallIDType	InstallID;
		///报单日期
		TThostFtdcDateType	InsertDate;
		///插入时间
		TThostFtdcTimeType	InsertTime;
		///询价状态
		TThostFtdcForQuoteStatusType	ForQuoteStatus;
		///前置编号
		TThostFtdcFrontIDType	FrontID;
		///会话编号
		TThostFtdcSessionIDType	SessionID;
		///状态信息
		TThostFtdcErrorMsgType	StatusMsg;
		///操作用户代码
		TThostFtdcUserIDType	ActiveUserID;
		///经纪公司询价编号
		TThostFtdcSequenceNoType	BrokerForQutoSeq;
		///投资单元代码
		TThostFtdcInvestUnitIDType	InvestUnitID;
		///IP地址
		TThostFtdcIPAddressType	IPAddress;
		///Mac地址
		TThostFtdcMacAddressType	MacAddress;
	};

	///询价查询
	struct CThostFtdcQryForQuoteField
	{
		///经纪公司代码
		TThostFtdcBrokerIDType	BrokerID;
		///投资者代码
		TThostFtdcInvestorIDType	InvestorID;
		///合约代码
		TThostFtdcInstrumentIDType	InstrumentID;
		///交易所代码
		TThostFtdcExchangeIDType	ExchangeID;
		///开始时间
		TThostFtdcTimeType	InsertTimeStart;
		///结束时间
		TThostFtdcTimeType	InsertTimeEnd;
	};

	///交易所询价信息
	struct CThostFtdcExchangeForQuoteField
	{
		///本地询价编号
		TThostFtdcOrderLocalIDType	ForQuoteLocalID;
		///交易所代码
		TThostFtdcExchangeIDType	ExchangeID;
		///会员代码
		TThostFtdcParticipantIDType	ParticipantID;
		///客户代码
		TThostFtdcClientIDType	ClientID;
		///合约在交易所的代码
		TThostFtdcExchangeInstIDType	ExchangeInstID;
		///交易所交易员代码
		TThostFtdcTraderIDType	TraderID;
		///安装编号
		TThostFtdcInstallIDType	InstallID;
		///报单日期
		TThostFtdcDateType	InsertDate;
		///插入时间
		TThostFtdcTimeType	InsertTime;
		///询价状态
		TThostFtdcForQuoteStatusType	ForQuoteStatus;
		///IP地址
		TThostFtdcIPAddressType	IPAddress;
		///Mac地址
		TThostFtdcMacAddressType	MacAddress;
	};

	///交易所询价查询
	struct CThostFtdcQryExchangeForQuoteField
	{
		///会员代码
		TThostFtdcParticipantIDType	ParticipantID;
		///客户代码
		TThostFtdcClientIDType	ClientID;
		///合约在交易所的代码
		TThostFtdcExchangeInstIDType	ExchangeInstID;
		///交易所代码
		TThostFtdcExchangeIDType	ExchangeID;
		///交易所交易员代码
		TThostFtdcTraderIDType	TraderID;
	};

	///输入的报价
	struct CThostFtdcInputQuoteField
	{
		///经纪公司代码
		TThostFtdcBrokerIDType	BrokerID;
		///投资者代码
		TThostFtdcInvestorIDType	InvestorID;
		///合约代码
		TThostFtdcInstrumentIDType	InstrumentID;
		///报价引用
		TThostFtdcOrderRefType	QuoteRef;
		///用户代码
		TThostFtdcUserIDType	UserID;
		///卖价格
		TThostFtdcPriceType	AskPrice;
		///买价格
		TThostFtdcPriceType	BidPrice;
		///卖数量
		TThostFtdcVolumeType	AskVolume;
		///买数量
		TThostFtdcVolumeType	BidVolume;
		///请求编号
		TThostFtdcRequestIDType	RequestID;
		///业务单元
		TThostFtdcBusinessUnitType	BusinessUnit;
		///卖开平标志
		TThostFtdcOffsetFlagType	AskOffsetFlag;
		///买开平标志
		TThostFtdcOffsetFlagType	BidOffsetFlag;
		///卖投机套保标志
		TThostFtdcHedgeFlagType	AskHedgeFlag;
		///买投机套保标志
		TThostFtdcHedgeFlagType	BidHedgeFlag;
		///衍生卖报单引用
		TThostFtdcOrderRefType	AskOrderRef;
		///衍生买报单引用
		TThostFtdcOrderRefType	BidOrderRef;
		///应价编号
		TThostFtdcOrderSysIDType	ForQuoteSysID;
		///交易所代码
		TThostFtdcExchangeIDType	ExchangeID;
		///投资单元代码
		TThostFtdcInvestUnitIDType	InvestUnitID;
		///交易编码
		TThostFtdcClientIDType	ClientID;
		///IP地址
		TThostFtdcIPAddressType	IPAddress;
		///Mac地址
		TThostFtdcMacAddressType	MacAddress;
	};

	///输入报价操作
	struct CThostFtdcInputQuoteActionField
	{
		///经纪公司代码
		TThostFtdcBrokerIDType	BrokerID;
		///投资者代码
		TThostFtdcInvestorIDType	InvestorID;
		///报价操作引用
		TThostFtdcOrderActionRefType	QuoteActionRef;
		///报价引用
		TThostFtdcOrderRefType	QuoteRef;
		///请求编号
		TThostFtdcRequestIDType	RequestID;
		///前置编号
		TThostFtdcFrontIDType	FrontID;
		///会话编号
		TThostFtdcSessionIDType	SessionID;
		///交易所代码
		TThostFtdcExchangeIDType	ExchangeID;
		///报价操作编号
		TThostFtdcOrderSysIDType	QuoteSysID;
		///操作标志
		TThostFtdcActionFlagType	ActionFlag;
		///用户代码
		TThostFtdcUserIDType	UserID;
		///合约代码
		TThostFtdcInstrumentIDType	InstrumentID;
		///投资单元代码
		TThostFtdcInvestUnitIDType	InvestUnitID;
		///交易编码
		TThostFtdcClientIDType	ClientID;
		///IP地址
		TThostFtdcIPAddressType	IPAddress;
		///Mac地址
		TThostFtdcMacAddressType	MacAddress;
	};

	///报价
	struct CThostFtdcQuoteField
	{
		///经纪公司代码
		TThostFtdcBrokerIDType	BrokerID;
		///投资者代码
		TThostFtdcInvestorIDType	InvestorID;
		///合约代码
		TThostFtdcInstrumentIDType	InstrumentID;
		///报价引用
		TThostFtdcOrderRefType	QuoteRef;
		///用户代码
		TThostFtdcUserIDType	UserID;
		///卖价格
		TThostFtdcPriceType	AskPrice;
		///买价格
		TThostFtdcPriceType	BidPrice;
		///卖数量
		TThostFtdcVolumeType	AskVolume;
		///买数量
		TThostFtdcVolumeType	BidVolume;
		///请求编号
		TThostFtdcRequestIDType	RequestID;
		///业务单元
		TThostFtdcBusinessUnitType	BusinessUnit;
		///卖开平标志
		TThostFtdcOffsetFlagType	AskOffsetFlag;
		///买开平标志
		TThostFtdcOffsetFlagType	BidOffsetFlag;
		///卖投机套保标志
		TThostFtdcHedgeFlagType	AskHedgeFlag;
		///买投机套保标志
		TThostFtdcHedgeFlagType	BidHedgeFlag;
		///本地报价编号
		TThostFtdcOrderLocalIDType	QuoteLocalID;
		///交易所代码
		TThostFtdcExchangeIDType	ExchangeID;
		///会员代码
		TThostFtdcParticipantIDType	ParticipantID;
		///客户代码
		TThostFtdcClientIDType	ClientID;
		///合约在交易所的代码
		TThostFtdcExchangeInstIDType	ExchangeInstID;
		///交易所交易员代码
		TThostFtdcTraderIDType	TraderID;
		///安装编号
		TThostFtdcInstallIDType	InstallID;
		///报价提示序号
		TThostFtdcSequenceNoType	NotifySequence;
		///报价提交状态
		TThostFtdcOrderSubmitStatusType	OrderSubmitStatus;
		///交易日
		TThostFtdcDateType	TradingDay;
		///结算编号
		TThostFtdcSettlementIDType	SettlementID;
		///报价编号
		TThostFtdcOrderSysIDType	QuoteSysID;
		///报单日期
		TThostFtdcDateType	InsertDate;
		///插入时间
		TThostFtdcTimeType	InsertTime;
		///撤销时间
		TThostFtdcTimeType	CancelTime;
		///报价状态
		TThostFtdcOrderStatusType	QuoteStatus;
		///结算会员编号
		TThostFtdcParticipantIDType	ClearingPartID;
		///序号
		TThostFtdcSequenceNoType	SequenceNo;
		///卖方报单编号
		TThostFtdcOrderSysIDType	AskOrderSysID;
		///买方报单编号
		TThostFtdcOrderSysIDType	BidOrderSysID;
		///前置编号
		TThostFtdcFrontIDType	FrontID;
		///会话编号
		TThostFtdcSessionIDType	SessionID;
		///用户端产品信息
		TThostFtdcProductInfoType	UserProductInfo;
		///状态信息
		TThostFtdcErrorMsgType	StatusMsg;
		///操作用户代码
		TThostFtdcUserIDType	ActiveUserID;
		///经纪公司报价编号
		TThostFtdcSequenceNoType	BrokerQuoteSeq;
		///衍生卖报单引用
		TThostFtdcOrderRefType	AskOrderRef;
		///衍生买报单引用
		TThostFtdcOrderRefType	BidOrderRef;
		///应价编号
		TThostFtdcOrderSysIDType	ForQuoteSysID;
		///营业部编号
		TThostFtdcBranchIDType	BranchID;
		///投资单元代码
		TThostFtdcInvestUnitIDType	InvestUnitID;
		///资金账号
		TThostFtdcAccountIDType	AccountID;
		///币种代码
		TThostFtdcCurrencyIDType	CurrencyID;
		///IP地址
		TThostFtdcIPAddressType	IPAddress;
		///Mac地址
		TThostFtdcMacAddressType	MacAddress;
	};

	///报价操作
	struct CThostFtdcQuoteActionField
	{
		///经纪公司代码
		TThostFtdcBrokerIDType	BrokerID;
		///投资者代码
		TThostFtdcInvestorIDType	InvestorID;
		///报价操作引用
		TThostFtdcOrderActionRefType	QuoteActionRef;
		///报价引用
		TThostFtdcOrderRefType	QuoteRef;
		///请求编号
		TThostFtdcRequestIDType	RequestID;
		///前置编号
		TThostFtdcFrontIDType	FrontID;
		///会话编号
		TThostFtdcSessionIDType	SessionID;
		///交易所代码
		TThostFtdcExchangeIDType	ExchangeID;
		///报价操作编号
		TThostFtdcOrderSysIDType	QuoteSysID;
		///操作标志
		TThostFtdcActionFlagType	ActionFlag;
		///操作日期
		TThostFtdcDateType	ActionDate;
		///操作时间
		TThostFtdcTimeType	ActionTime;
		///交易所交易员代码
		TThostFtdcTraderIDType	TraderID;
		///安装编号
		TThostFtdcInstallIDType	InstallID;
		///本地报价编号
		TThostFtdcOrderLocalIDType	QuoteLocalID;
		///操作本地编号
		TThostFtdcOrderLocalIDType	ActionLocalID;
		///会员代码
		TThostFtdcParticipantIDType	ParticipantID;
		///客户代码
		TThostFtdcClientIDType	ClientID;
		///业务单元
		TThostFtdcBusinessUnitType	BusinessUnit;
		///报单操作状态
		TThostFtdcOrderActionStatusType	OrderActionStatus;
		///用户代码
		TThostFtdcUserIDType	UserID;
		///状态信息
		TThostFtdcErrorMsgType	StatusMsg;
		///合约代码
		TThostFtdcInstrumentIDType	InstrumentID;
		///营业部编号
		TThostFtdcBranchIDType	BranchID;
		///投资单元代码
		TThostFtdcInvestUnitIDType	InvestUnitID;
		///IP地址
		TThostFtdcIPAddressType	IPAddress;
		///Mac地址
		TThostFtdcMacAddressType	MacAddress;
	};

	///报价查询
	struct CThostFtdcQryQuoteField
	{
		///经纪公司代码
		TThostFtdcBrokerIDType	BrokerID;
		///投资者代码
		TThostFtdcInvestorIDType	InvestorID;
		///合约代码
		TThostFtdcInstrumentIDType	InstrumentID;
		///交易所代码
		TThostFtdcExchangeIDType	ExchangeID;
		///报价编号
		TThostFtdcOrderSysIDType	QuoteSysID;
		///开始时间
		TThostFtdcTimeType	InsertTimeStart;
		///结束时间
		TThostFtdcTimeType	InsertTimeEnd;
	};

	///交易所报价信息
	struct CThostFtdcExchangeQuoteField
	{
		///卖价格
		TThostFtdcPriceType	AskPrice;
		///买价格
		TThostFtdcPriceType	BidPrice;
		///卖数量
		TThostFtdcVolumeType	AskVolume;
		///买数量
		TThostFtdcVolumeType	BidVolume;
		///请求编号
		TThostFtdcRequestIDType	RequestID;
		///业务单元
		TThostFtdcBusinessUnitType	BusinessUnit;
		///卖开平标志
		TThostFtdcOffsetFlagType	AskOffsetFlag;
		///买开平标志
		TThostFtdcOffsetFlagType	BidOffsetFlag;
		///卖投机套保标志
		TThostFtdcHedgeFlagType	AskHedgeFlag;
		///买投机套保标志
		TThostFtdcHedgeFlagType	BidHedgeFlag;
		///本地报价编号
		TThostFtdcOrderLocalIDType	QuoteLocalID;
		///交易所代码
		TThostFtdcExchangeIDType	ExchangeID;
		///会员代码
		TThostFtdcParticipantIDType	ParticipantID;
		///客户代码
		TThostFtdcClientIDType	ClientID;
		///合约在交易所的代码
		TThostFtdcExchangeInstIDType	ExchangeInstID;
		///交易所交易员代码
		TThostFtdcTraderIDType	TraderID;
		///安装编号
		TThostFtdcInstallIDType	InstallID;
		///报价提示序号
		TThostFtdcSequenceNoType	NotifySequence;
		///报价提交状态
		TThostFtdcOrderSubmitStatusType	OrderSubmitStatus;
		///交易日
		TThostFtdcDateType	TradingDay;
		///结算编号
		TThostFtdcSettlementIDType	SettlementID;
		///报价编号
		TThostFtdcOrderSysIDType	QuoteSysID;
		///报单日期
		TThostFtdcDateType	InsertDate;
		///插入时间
		TThostFtdcTimeType	InsertTime;
		///撤销时间
		TThostFtdcTimeType	CancelTime;
		///报价状态
		TThostFtdcOrderStatusType	QuoteStatus;
		///结算会员编号
		TThostFtdcParticipantIDType	ClearingPartID;
		///序号
		TThostFtdcSequenceNoType	SequenceNo;
		///卖方报单编号
		TThostFtdcOrderSysIDType	AskOrderSysID;
		///买方报单编号
		TThostFtdcOrderSysIDType	BidOrderSysID;
		///应价编号
		TThostFtdcOrderSysIDType	ForQuoteSysID;
		///营业部编号
		TThostFtdcBranchIDType	BranchID;
		///IP地址
		TThostFtdcIPAddressType	IPAddress;
		///Mac地址
		TThostFtdcMacAddressType	MacAddress;
	};

	///交易所报价查询
	struct CThostFtdcQryExchangeQuoteField
	{
		///会员代码
		TThostFtdcParticipantIDType	ParticipantID;
		///客户代码
		TThostFtdcClientIDType	ClientID;
		///合约在交易所的代码
		TThostFtdcExchangeInstIDType	ExchangeInstID;
		///交易所代码
		TThostFtdcExchangeIDType	ExchangeID;
		///交易所交易员代码
		TThostFtdcTraderIDType	TraderID;
	};

	///报价操作查询
	struct CThostFtdcQryQuoteActionField
	{
		///经纪公司代码
		TThostFtdcBrokerIDType	BrokerID;
		///投资者代码
		TThostFtdcInvestorIDType	InvestorID;
		///交易所代码
		TThostFtdcExchangeIDType	ExchangeID;
	};

	///交易所报价操作
	struct CThostFtdcExchangeQuoteActionField
	{
		///交易所代码
		TThostFtdcExchangeIDType	ExchangeID;
		///报价操作编号
		TThostFtdcOrderSysIDType	QuoteSysID;
		///操作标志
		TThostFtdcActionFlagType	ActionFlag;
		///操作日期
		TThostFtdcDateType	ActionDate;
		///操作时间
		TThostFtdcTimeType	ActionTime;
		///交易所交易员代码
		TThostFtdcTraderIDType	TraderID;
		///安装编号
		TThostFtdcInstallIDType	InstallID;
		///本地报价编号
		TThostFtdcOrderLocalIDType	QuoteLocalID;
		///操作本地编号
		TThostFtdcOrderLocalIDType	ActionLocalID;
		///会员代码
		TThostFtdcParticipantIDType	ParticipantID;
		///客户代码
		TThostFtdcClientIDType	ClientID;
		///业务单元
		TThostFtdcBusinessUnitType	BusinessUnit;
		///报单操作状态
		TThostFtdcOrderActionStatusType	OrderActionStatus;
		///用户代码
		TThostFtdcUserIDType	UserID;
		///IP地址
		TThostFtdcIPAddressType	IPAddress;
		///Mac地址
		TThostFtdcMacAddressType	MacAddress;
	};

	///交易所报价操作查询
	struct CThostFtdcQryExchangeQuoteActionField
	{
		///会员代码
		TThostFtdcParticipantIDType	ParticipantID;
		///客户代码
		TThostFtdcClientIDType	ClientID;
		///交易所代码
		TThostFtdcExchangeIDType	ExchangeID;
		///交易所交易员代码
		TThostFtdcTraderIDType	TraderID;
	};

	///期权合约delta值
	struct CThostFtdcOptionInstrDeltaField
	{
		///合约代码
		TThostFtdcInstrumentIDType	InstrumentID;
		///投资者范围
		TThostFtdcInvestorRangeType	InvestorRange;
		///经纪公司代码
		TThostFtdcBrokerIDType	BrokerID;
		///投资者代码
		TThostFtdcInvestorIDType	InvestorID;
		///Delta值
		TThostFtdcRatioType	Delta;
	};

	///发给做市商的询价请求
	struct CThostFtdcForQuoteRspField
	{
		///交易日
		TThostFtdcDateType	TradingDay;
		///合约代码
		TThostFtdcInstrumentIDType	InstrumentID;
		///询价编号
		TThostFtdcOrderSysIDType	ForQuoteSysID;
		///询价时间
		TThostFtdcTimeType	ForQuoteTime;
		///业务日期
		TThostFtdcDateType	ActionDay;
		///交易所代码
		TThostFtdcExchangeIDType	ExchangeID;
	};

	///当前期权合约执行偏移值的详细内容
	struct CThostFtdcStrikeOffsetField
	{
		///合约代码
		TThostFtdcInstrumentIDType	InstrumentID;
		///投资者范围
		TThostFtdcInvestorRangeType	InvestorRange;
		///经纪公司代码
		TThostFtdcBrokerIDType	BrokerID;
		///投资者代码
		TThostFtdcInvestorIDType	InvestorID;
		///执行偏移值
		TThostFtdcMoneyType	Offset;
		///执行偏移类型
		TThostFtdcStrikeOffsetTypeType	OffsetType;
	};

	///期权执行偏移值查询
	struct CThostFtdcQryStrikeOffsetField
	{
		///经纪公司代码
		TThostFtdcBrokerIDType	BrokerID;
		///投资者代码
		TThostFtdcInvestorIDType	InvestorID;
		///合约代码
		TThostFtdcInstrumentIDType	InstrumentID;
	};

	///输入批量报单操作
	struct CThostFtdcInputBatchOrderActionField
	{
		///经纪公司代码
		TThostFtdcBrokerIDType	BrokerID;
		///投资者代码
		TThostFtdcInvestorIDType	InvestorID;
		///报单操作引用
		TThostFtdcOrderActionRefType	OrderActionRef;
		///请求编号
		TThostFtdcRequestIDType	RequestID;
		///前置编号
		TThostFtdcFrontIDType	FrontID;
		///会话编号
		TThostFtdcSessionIDType	SessionID;
		///交易所代码
		TThostFtdcExchangeIDType	ExchangeID;
		///用户代码
		TThostFtdcUserIDType	UserID;
		///投资单元代码
		TThostFtdcInvestUnitIDType	InvestUnitID;
		///IP地址
		TThostFtdcIPAddressType	IPAddress;
		///Mac地址
		TThostFtdcMacAddressType	MacAddress;
	};

	///批量报单操作
	struct CThostFtdcBatchOrderActionField
	{
		///经纪公司代码
		TThostFtdcBrokerIDType	BrokerID;
		///投资者代码
		TThostFtdcInvestorIDType	InvestorID;
		///报单操作引用
		TThostFtdcOrderActionRefType	OrderActionRef;
		///请求编号
		TThostFtdcRequestIDType	RequestID;
		///前置编号
		TThostFtdcFrontIDType	FrontID;
		///会话编号
		TThostFtdcSessionIDType	SessionID;
		///交易所代码
		TThostFtdcExchangeIDType	ExchangeID;
		///操作日期
		TThostFtdcDateType	ActionDate;
		///操作时间
		TThostFtdcTimeType	ActionTime;
		///交易所交易员代码
		TThostFtdcTraderIDType	TraderID;
		///安装编号
		TThostFtdcInstallIDType	InstallID;
		///操作本地编号
		TThostFtdcOrderLocalIDType	ActionLocalID;
		///会员代码
		TThostFtdcParticipantIDType	ParticipantID;
		///客户代码
		TThostFtdcClientIDType	ClientID;
		///业务单元
		TThostFtdcBusinessUnitType	BusinessUnit;
		///报单操作状态
		TThostFtdcOrderActionStatusType	OrderActionStatus;
		///用户代码
		TThostFtdcUserIDType	UserID;
		///状态信息
		TThostFtdcErrorMsgType	StatusMsg;
		///投资单元代码
		TThostFtdcInvestUnitIDType	InvestUnitID;
		///IP地址
		TThostFtdcIPAddressType	IPAddress;
		///Mac地址
		TThostFtdcMacAddressType	MacAddress;
	};

	///交易所批量报单操作
	struct CThostFtdcExchangeBatchOrderActionField
	{
		///交易所代码
		TThostFtdcExchangeIDType	ExchangeID;
		///操作日期
		TThostFtdcDateType	ActionDate;
		///操作时间
		TThostFtdcTimeType	ActionTime;
		///交易所交易员代码
		TThostFtdcTraderIDType	TraderID;
		///安装编号
		TThostFtdcInstallIDType	InstallID;
		///操作本地编号
		TThostFtdcOrderLocalIDType	ActionLocalID;
		///会员代码
		TThostFtdcParticipantIDType	ParticipantID;
		///客户代码
		TThostFtdcClientIDType	ClientID;
		///业务单元
		TThostFtdcBusinessUnitType	BusinessUnit;
		///报单操作状态
		TThostFtdcOrderActionStatusType	OrderActionStatus;
		///用户代码
		TThostFtdcUserIDType	UserID;
		///IP地址
		TThostFtdcIPAddressType	IPAddress;
		///Mac地址
		TThostFtdcMacAddressType	MacAddress;
	};

	///查询批量报单操作
	struct CThostFtdcQryBatchOrderActionField
	{
		///经纪公司代码
		TThostFtdcBrokerIDType	BrokerID;
		///投资者代码
		TThostFtdcInvestorIDType	InvestorID;
		///交易所代码
		TThostFtdcExchangeIDType	ExchangeID;
	};

	///组合合约安全系数
	struct CThostFtdcCombInstrumentGuardField
	{
		///经纪公司代码
		TThostFtdcBrokerIDType	BrokerID;
		///合约代码
		TThostFtdcInstrumentIDType	InstrumentID;
		///
		TThostFtdcRatioType	GuarantRatio;
	};

	///组合合约安全系数查询
	struct CThostFtdcQryCombInstrumentGuardField
	{
		///经纪公司代码
		TThostFtdcBrokerIDType	BrokerID;
		///合约代码
		TThostFtdcInstrumentIDType	InstrumentID;
	};

	///输入的申请组合
	struct CThostFtdcInputCombActionField
	{
		///经纪公司代码
		TThostFtdcBrokerIDType	BrokerID;
		///投资者代码
		TThostFtdcInvestorIDType	InvestorID;
		///合约代码
		TThostFtdcInstrumentIDType	InstrumentID;
		///组合引用
		TThostFtdcOrderRefType	CombActionRef;
		///用户代码
		TThostFtdcUserIDType	UserID;
		///买卖方向
		TThostFtdcDirectionType	Direction;
		///数量
		TThostFtdcVolumeType	Volume;
		///组合指令方向
		TThostFtdcCombDirectionType	CombDirection;
		///投机套保标志
		TThostFtdcHedgeFlagType	HedgeFlag;
		///交易所代码
		TThostFtdcExchangeIDType	ExchangeID;
		///IP地址
		TThostFtdcIPAddressType	IPAddress;
		///Mac地址
		TThostFtdcMacAddressType	MacAddress;
	};

	///申请组合
	struct CThostFtdcCombActionField
	{
		///经纪公司代码
		TThostFtdcBrokerIDType	BrokerID;
		///投资者代码
		TThostFtdcInvestorIDType	InvestorID;
		///合约代码
		TThostFtdcInstrumentIDType	InstrumentID;
		///组合引用
		TThostFtdcOrderRefType	CombActionRef;
		///用户代码
		TThostFtdcUserIDType	UserID;
		///买卖方向
		TThostFtdcDirectionType	Direction;
		///数量
		TThostFtdcVolumeType	Volume;
		///组合指令方向
		TThostFtdcCombDirectionType	CombDirection;
		///投机套保标志
		TThostFtdcHedgeFlagType	HedgeFlag;
		///本地申请组合编号
		TThostFtdcOrderLocalIDType	ActionLocalID;
		///交易所代码
		TThostFtdcExchangeIDType	ExchangeID;
		///会员代码
		TThostFtdcParticipantIDType	ParticipantID;
		///客户代码
		TThostFtdcClientIDType	ClientID;
		///合约在交易所的代码
		TThostFtdcExchangeInstIDType	ExchangeInstID;
		///交易所交易员代码
		TThostFtdcTraderIDType	TraderID;
		///安装编号
		TThostFtdcInstallIDType	InstallID;
		///组合状态
		TThostFtdcOrderActionStatusType	ActionStatus;
		///报单提示序号
		TThostFtdcSequenceNoType	NotifySequence;
		///交易日
		TThostFtdcDateType	TradingDay;
		///结算编号
		TThostFtdcSettlementIDType	SettlementID;
		///序号
		TThostFtdcSequenceNoType	SequenceNo;
		///前置编号
		TThostFtdcFrontIDType	FrontID;
		///会话编号
		TThostFtdcSessionIDType	SessionID;
		///用户端产品信息
		TThostFtdcProductInfoType	UserProductInfo;
		///状态信息
		TThostFtdcErrorMsgType	StatusMsg;
		///IP地址
		TThostFtdcIPAddressType	IPAddress;
		///Mac地址
		TThostFtdcMacAddressType	MacAddress;
	};

	///申请组合查询
	struct CThostFtdcQryCombActionField
	{
		///经纪公司代码
		TThostFtdcBrokerIDType	BrokerID;
		///投资者代码
		TThostFtdcInvestorIDType	InvestorID;
		///合约代码
		TThostFtdcInstrumentIDType	InstrumentID;
		///交易所代码
		TThostFtdcExchangeIDType	ExchangeID;
	};

	///交易所申请组合信息
	struct CThostFtdcExchangeCombActionField
	{
		///买卖方向
		TThostFtdcDirectionType	Direction;
		///数量
		TThostFtdcVolumeType	Volume;
		///组合指令方向
		TThostFtdcCombDirectionType	CombDirection;
		///投机套保标志
		TThostFtdcHedgeFlagType	HedgeFlag;
		///本地申请组合编号
		TThostFtdcOrderLocalIDType	ActionLocalID;
		///交易所代码
		TThostFtdcExchangeIDType	ExchangeID;
		///会员代码
		TThostFtdcParticipantIDType	ParticipantID;
		///客户代码
		TThostFtdcClientIDType	ClientID;
		///合约在交易所的代码
		TThostFtdcExchangeInstIDType	ExchangeInstID;
		///交易所交易员代码
		TThostFtdcTraderIDType	TraderID;
		///安装编号
		TThostFtdcInstallIDType	InstallID;
		///组合状态
		TThostFtdcOrderActionStatusType	ActionStatus;
		///报单提示序号
		TThostFtdcSequenceNoType	NotifySequence;
		///交易日
		TThostFtdcDateType	TradingDay;
		///结算编号
		TThostFtdcSettlementIDType	SettlementID;
		///序号
		TThostFtdcSequenceNoType	SequenceNo;
		///IP地址
		TThostFtdcIPAddressType	IPAddress;
		///Mac地址
		TThostFtdcMacAddressType	MacAddress;
	};

	///交易所申请组合查询
	struct CThostFtdcQryExchangeCombActionField
	{
		///会员代码
		TThostFtdcParticipantIDType	ParticipantID;
		///客户代码
		TThostFtdcClientIDType	ClientID;
		///合约在交易所的代码
		TThostFtdcExchangeInstIDType	ExchangeInstID;
		///交易所代码
		TThostFtdcExchangeIDType	ExchangeID;
		///交易所交易员代码
		TThostFtdcTraderIDType	TraderID;
	};

	///产品报价汇率
	struct CThostFtdcProductExchRateField
	{
		///产品代码
		TThostFtdcInstrumentIDType	ProductID;
		///报价币种类型
		TThostFtdcCurrencyIDType	QuoteCurrencyID;
		///汇率
		TThostFtdcExchangeRateType	ExchangeRate;
	};

	///产品报价汇率查询
	struct CThostFtdcQryProductExchRateField
	{
		///产品代码
		TThostFtdcInstrumentIDType	ProductID;
	};

	///查询询价价差参数
	struct CThostFtdcQryForQuoteParamField
	{
		///经纪公司代码
		TThostFtdcBrokerIDType	BrokerID;
		///合约代码
		TThostFtdcInstrumentIDType	InstrumentID;
		///交易所代码
		TThostFtdcExchangeIDType	ExchangeID;
	};

	///询价价差参数
	struct CThostFtdcForQuoteParamField
	{
		///经纪公司代码
		TThostFtdcBrokerIDType	BrokerID;
		///合约代码
		TThostFtdcInstrumentIDType	InstrumentID;
		///交易所代码
		TThostFtdcExchangeIDType	ExchangeID;
		///最新价
		TThostFtdcPriceType	LastPrice;
		///价差
		TThostFtdcPriceType	PriceInterval;
	};

	///当前做市商期权合约手续费的详细内容
	struct CThostFtdcMMOptionInstrCommRateField
	{
		///合约代码
		TThostFtdcInstrumentIDType	InstrumentID;
		///投资者范围
		TThostFtdcInvestorRangeType	InvestorRange;
		///经纪公司代码
		TThostFtdcBrokerIDType	BrokerID;
		///投资者代码
		TThostFtdcInvestorIDType	InvestorID;
		///开仓手续费率
		TThostFtdcRatioType	OpenRatioByMoney;
		///开仓手续费
		TThostFtdcRatioType	OpenRatioByVolume;
		///平仓手续费率
		TThostFtdcRatioType	CloseRatioByMoney;
		///平仓手续费
		TThostFtdcRatioType	CloseRatioByVolume;
		///平今手续费率
		TThostFtdcRatioType	CloseTodayRatioByMoney;
		///平今手续费
		TThostFtdcRatioType	CloseTodayRatioByVolume;
		///执行手续费率
		TThostFtdcRatioType	StrikeRatioByMoney;
		///执行手续费
		TThostFtdcRatioType	StrikeRatioByVolume;
	};

	///做市商期权手续费率查询
	struct CThostFtdcQryMMOptionInstrCommRateField
	{
		///经纪公司代码
		TThostFtdcBrokerIDType	BrokerID;
		///投资者代码
		TThostFtdcInvestorIDType	InvestorID;
		///合约代码
		TThostFtdcInstrumentIDType	InstrumentID;
	};

	///做市商合约手续费率
	struct CThostFtdcMMInstrumentCommissionRateField
	{
		///合约代码
		TThostFtdcInstrumentIDType	InstrumentID;
		///投资者范围
		TThostFtdcInvestorRangeType	InvestorRange;
		///经纪公司代码
		TThostFtdcBrokerIDType	BrokerID;
		///投资者代码
		TThostFtdcInvestorIDType	InvestorID;
		///开仓手续费率
		TThostFtdcRatioType	OpenRatioByMoney;
		///开仓手续费
		TThostFtdcRatioType	OpenRatioByVolume;
		///平仓手续费率
		TThostFtdcRatioType	CloseRatioByMoney;
		///平仓手续费
		TThostFtdcRatioType	CloseRatioByVolume;
		///平今手续费率
		TThostFtdcRatioType	CloseTodayRatioByMoney;
		///平今手续费
		TThostFtdcRatioType	CloseTodayRatioByVolume;
	};

	///查询做市商合约手续费率
	struct CThostFtdcQryMMInstrumentCommissionRateField
	{
		///经纪公司代码
		TThostFtdcBrokerIDType	BrokerID;
		///投资者代码
		TThostFtdcInvestorIDType	InvestorID;
		///合约代码
		TThostFtdcInstrumentIDType	InstrumentID;
	};

	///当前报单手续费的详细内容
	struct CThostFtdcInstrumentOrderCommRateField
	{
		///合约代码
		TThostFtdcInstrumentIDType	InstrumentID;
		///投资者范围
		TThostFtdcInvestorRangeType	InvestorRange;
		///经纪公司代码
		TThostFtdcBrokerIDType	BrokerID;
		///投资者代码
		TThostFtdcInvestorIDType	InvestorID;
		///投机套保标志
		TThostFtdcHedgeFlagType	HedgeFlag;
		///报单手续费
		TThostFtdcRatioType	OrderCommByVolume;
		///撤单手续费
		TThostFtdcRatioType	OrderActionCommByVolume;
	};

	///报单手续费率查询
	struct CThostFtdcQryInstrumentOrderCommRateField
	{
		///经纪公司代码
		TThostFtdcBrokerIDType	BrokerID;
		///投资者代码
		TThostFtdcInvestorIDType	InvestorID;
		///合约代码
		TThostFtdcInstrumentIDType	InstrumentID;
	};

	///市场行情
	struct CThostFtdcMarketDataField
	{
		///交易日
		TThostFtdcDateType	TradingDay;
		///合约代码
		TThostFtdcInstrumentIDType	InstrumentID;
		///交易所代码
		TThostFtdcExchangeIDType	ExchangeID;
		///合约在交易所的代码
		TThostFtdcExchangeInstIDType	ExchangeInstID;
		///最新价
		TThostFtdcPriceType	LastPrice;
		///上次结算价
		TThostFtdcPriceType	PreSettlementPrice;
		///昨收盘
		TThostFtdcPriceType	PreClosePrice;
		///昨持仓量
		TThostFtdcLargeVolumeType	PreOpenInterest;
		///今开盘
		TThostFtdcPriceType	OpenPrice;
		///最高价
		TThostFtdcPriceType	HighestPrice;
		///最低价
		TThostFtdcPriceType	LowestPrice;
		///数量
		TThostFtdcVolumeType	Volume;
		///成交金额
		TThostFtdcMoneyType	Turnover;
		///持仓量
		TThostFtdcLargeVolumeType	OpenInterest;
		///今收盘
		TThostFtdcPriceType	ClosePrice;
		///本次结算价
		TThostFtdcPriceType	SettlementPrice;
		///涨停板价
		TThostFtdcPriceType	UpperLimitPrice;
		///跌停板价
		TThostFtdcPriceType	LowerLimitPrice;
		///昨虚实度
		TThostFtdcRatioType	PreDelta;
		///今虚实度
		TThostFtdcRatioType	CurrDelta;
		///最后修改时间
		TThostFtdcTimeType	UpdateTime;
		///最后修改毫秒
		TThostFtdcMillisecType	UpdateMillisec;
		///业务日期
		TThostFtdcDateType	ActionDay;
	};

	///行情基础属性
	struct CThostFtdcMarketDataBaseField
	{
		///交易日
		TThostFtdcDateType	TradingDay;
		///上次结算价
		TThostFtdcPriceType	PreSettlementPrice;
		///昨收盘
		TThostFtdcPriceType	PreClosePrice;
		///昨持仓量
		TThostFtdcLargeVolumeType	PreOpenInterest;
		///昨虚实度
		TThostFtdcRatioType	PreDelta;
	};

	///行情静态属性
	struct CThostFtdcMarketDataStaticField
	{
		///今开盘
		TThostFtdcPriceType	OpenPrice;
		///最高价
		TThostFtdcPriceType	HighestPrice;
		///最低价
		TThostFtdcPriceType	LowestPrice;
		///今收盘
		TThostFtdcPriceType	ClosePrice;
		///涨停板价
		TThostFtdcPriceType	UpperLimitPrice;
		///跌停板价
		TThostFtdcPriceType	LowerLimitPrice;
		///本次结算价
		TThostFtdcPriceType	SettlementPrice;
		///今虚实度
		TThostFtdcRatioType	CurrDelta;
	};

	///行情最新成交属性
	struct CThostFtdcMarketDataLastMatchField
	{
		///最新价
		TThostFtdcPriceType	LastPrice;
		///数量
		TThostFtdcVolumeType	Volume;
		///成交金额
		TThostFtdcMoneyType	Turnover;
		///持仓量
		TThostFtdcLargeVolumeType	OpenInterest;
	};

	///行情最优价属性
	struct CThostFtdcMarketDataBestPriceField
	{
		///申买价一
		TThostFtdcPriceType	BidPrice1;
		///申买量一
		TThostFtdcVolumeType	BidVolume1;
		///申卖价一
		TThostFtdcPriceType	AskPrice1;
		///申卖量一
		TThostFtdcVolumeType	AskVolume1;
	};

	///行情申买二、三属性
	struct CThostFtdcMarketDataBid23Field
	{
		///申买价二
		TThostFtdcPriceType	BidPrice2;
		///申买量二
		TThostFtdcVolumeType	BidVolume2;
		///申买价三
		TThostFtdcPriceType	BidPrice3;
		///申买量三
		TThostFtdcVolumeType	BidVolume3;
	};

	///行情申卖二、三属性
	struct CThostFtdcMarketDataAsk23Field
	{
		///申卖价二
		TThostFtdcPriceType	AskPrice2;
		///申卖量二
		TThostFtdcVolumeType	AskVolume2;
		///申卖价三
		TThostFtdcPriceType	AskPrice3;
		///申卖量三
		TThostFtdcVolumeType	AskVolume3;
	};

	///行情申买四、五属性
	struct CThostFtdcMarketDataBid45Field
	{
		///申买价四
		TThostFtdcPriceType	BidPrice4;
		///申买量四
		TThostFtdcVolumeType	BidVolume4;
		///申买价五
		TThostFtdcPriceType	BidPrice5;
		///申买量五
		TThostFtdcVolumeType	BidVolume5;
	};

	///行情申卖四、五属性
	struct CThostFtdcMarketDataAsk45Field
	{
		///申卖价四
		TThostFtdcPriceType	AskPrice4;
		///申卖量四
		TThostFtdcVolumeType	AskVolume4;
		///申卖价五
		TThostFtdcPriceType	AskPrice5;
		///申卖量五
		TThostFtdcVolumeType	AskVolume5;
	};

	///行情更新时间属性
	struct CThostFtdcMarketDataUpdateTimeField
	{
		///合约代码
		TThostFtdcInstrumentIDType	InstrumentID;
		///最后修改时间
		TThostFtdcTimeType	UpdateTime;
		///最后修改毫秒
		TThostFtdcMillisecType	UpdateMillisec;
		///业务日期
		TThostFtdcDateType	ActionDay;
	};

	///行情交易所代码属性
	struct CThostFtdcMarketDataExchangeField
	{
		///交易所代码
		TThostFtdcExchangeIDType	ExchangeID;
	};

	///指定的合约
	struct CThostFtdcSpecificInstrumentField
	{
		///合约代码
		TThostFtdcInstrumentIDType	InstrumentID;
	};

	///合约状态
	struct CThostFtdcInstrumentStatusField
	{
		///交易所代码
		TThostFtdcExchangeIDType	ExchangeID;
		///合约在交易所的代码
		TThostFtdcExchangeInstIDType	ExchangeInstID;
		///结算组代码
		TThostFtdcSettlementGroupIDType	SettlementGroupID;
		///合约代码
		TThostFtdcInstrumentIDType	InstrumentID;
		///合约交易状态
		TThostFtdcInstrumentStatusType	InstrumentStatus;
		///交易阶段编号
		TThostFtdcTradingSegmentSNType	TradingSegmentSN;
		///进入本状态时间
		TThostFtdcTimeType	EnterTime;
		///进入本状态原因
		TThostFtdcInstStatusEnterReasonType	EnterReason;
	};

	///查询合约状态
	struct CThostFtdcQryInstrumentStatusField
	{
		///交易所代码
		TThostFtdcExchangeIDType	ExchangeID;
		///合约在交易所的代码
		TThostFtdcExchangeInstIDType	ExchangeInstID;
	};

	///投资者账户
	struct CThostFtdcInvestorAccountField
	{
		///经纪公司代码
		TThostFtdcBrokerIDType	BrokerID;
		///投资者代码
		TThostFtdcInvestorIDType	InvestorID;
		///投资者帐号
		TThostFtdcAccountIDType	AccountID;
		///币种代码
		TThostFtdcCurrencyIDType	CurrencyID;
	};

	///浮动盈亏算法
	struct CThostFtdcPositionProfitAlgorithmField
	{
		///经纪公司代码
		TThostFtdcBrokerIDType	BrokerID;
		///投资者帐号
		TThostFtdcAccountIDType	AccountID;
		///盈亏算法
		TThostFtdcAlgorithmType	Algorithm;
		///备注
		TThostFtdcMemoType	Memo;
		///币种代码
		TThostFtdcCurrencyIDType	CurrencyID;
	};

	///会员资金折扣
	struct CThostFtdcDiscountField
	{
		///经纪公司代码
		TThostFtdcBrokerIDType	BrokerID;
		///投资者范围
		TThostFtdcInvestorRangeType	InvestorRange;
		///投资者代码
		TThostFtdcInvestorIDType	InvestorID;
		///资金折扣比例
		TThostFtdcRatioType	Discount;
	};

	///查询转帐银行
	struct CThostFtdcQryTransferBankField
	{
		///银行代码
		TThostFtdcBankIDType	BankID;
		///银行分中心代码
		TThostFtdcBankBrchIDType	BankBrchID;
	};

	///转帐银行
	struct CThostFtdcTransferBankField
	{
		///银行代码
		TThostFtdcBankIDType	BankID;
		///银行分中心代码
		TThostFtdcBankBrchIDType	BankBrchID;
		///银行名称
		TThostFtdcBankNameType	BankName;
		///是否活跃
		TThostFtdcBoolType	IsActive;
	};

	///查询投资者持仓明细
	struct CThostFtdcQryInvestorPositionDetailField
	{
		///经纪公司代码
		TThostFtdcBrokerIDType	BrokerID;
		///投资者代码
		TThostFtdcInvestorIDType	InvestorID;
		///合约代码
		TThostFtdcInstrumentIDType	InstrumentID;
	};

	///投资者持仓明细
	struct CThostFtdcInvestorPositionDetailField
	{
		///合约代码
		TThostFtdcInstrumentIDType	InstrumentID;
		///经纪公司代码
		TThostFtdcBrokerIDType	BrokerID;
		///投资者代码
		TThostFtdcInvestorIDType	InvestorID;
		///投机套保标志
		TThostFtdcHedgeFlagType	HedgeFlag;
		///买卖
		TThostFtdcDirectionType	Direction;
		///开仓日期
		TThostFtdcDateType	OpenDate;
		///成交编号
		TThostFtdcTradeIDType	TradeID;
		///数量
		TThostFtdcVolumeType	Volume;
		///开仓价
		TThostFtdcPriceType	OpenPrice;
		///交易日
		TThostFtdcDateType	TradingDay;
		///结算编号
		TThostFtdcSettlementIDType	SettlementID;
		///成交类型
		TThostFtdcTradeTypeType	TradeType;
		///组合合约代码
		TThostFtdcInstrumentIDType	CombInstrumentID;
		///交易所代码
		TThostFtdcExchangeIDType	ExchangeID;
		///逐日盯市平仓盈亏
		TThostFtdcMoneyType	CloseProfitByDate;
		///逐笔对冲平仓盈亏
		TThostFtdcMoneyType	CloseProfitByTrade;
		///逐日盯市持仓盈亏
		TThostFtdcMoneyType	PositionProfitByDate;
		///逐笔对冲持仓盈亏
		TThostFtdcMoneyType	PositionProfitByTrade;
		///投资者保证金
		TThostFtdcMoneyType	Margin;
		///交易所保证金
		TThostFtdcMoneyType	ExchMargin;
		///保证金率
		TThostFtdcRatioType	MarginRateByMoney;
		///保证金率(按手数)
		TThostFtdcRatioType	MarginRateByVolume;
		///昨结算价
		TThostFtdcPriceType	LastSettlementPrice;
		///结算价
		TThostFtdcPriceType	SettlementPrice;
		///平仓量
		TThostFtdcVolumeType	CloseVolume;
		///平仓金额
		TThostFtdcMoneyType	CloseAmount;
	};

	///资金账户口令域
	struct CThostFtdcTradingAccountPasswordField
	{
		///经纪公司代码
		TThostFtdcBrokerIDType	BrokerID;
		///投资者帐号
		TThostFtdcAccountIDType	AccountID;
		///密码
		TThostFtdcPasswordType	Password;
		///币种代码
		TThostFtdcCurrencyIDType	CurrencyID;
	};

	///交易所行情报盘机
	struct CThostFtdcMDTraderOfferField
	{
		///交易所代码
		TThostFtdcExchangeIDType	ExchangeID;
		///交易所交易员代码
		TThostFtdcTraderIDType	TraderID;
		///会员代码
		TThostFtdcParticipantIDType	ParticipantID;
		///密码
		TThostFtdcPasswordType	Password;
		///安装编号
		TThostFtdcInstallIDType	InstallID;
		///本地报单编号
		TThostFtdcOrderLocalIDType	OrderLocalID;
		///交易所交易员连接状态
		TThostFtdcTraderConnectStatusType	TraderConnectStatus;
		///发出连接请求的日期
		TThostFtdcDateType	ConnectRequestDate;
		///发出连接请求的时间
		TThostFtdcTimeType	ConnectRequestTime;
		///上次报告日期
		TThostFtdcDateType	LastReportDate;
		///上次报告时间
		TThostFtdcTimeType	LastReportTime;
		///完成连接日期
		TThostFtdcDateType	ConnectDate;
		///完成连接时间
		TThostFtdcTimeType	ConnectTime;
		///启动日期
		TThostFtdcDateType	StartDate;
		///启动时间
		TThostFtdcTimeType	StartTime;
		///交易日
		TThostFtdcDateType	TradingDay;
		///经纪公司代码
		TThostFtdcBrokerIDType	BrokerID;
		///本席位最大成交编号
		TThostFtdcTradeIDType	MaxTradeID;
		///本席位最大报单备拷
		TThostFtdcReturnCodeType	MaxOrderMessageReference;
	};

	///查询行情报盘机
	struct CThostFtdcQryMDTraderOfferField
	{
		///交易所代码
		TThostFtdcExchangeIDType	ExchangeID;
		///会员代码
		TThostFtdcParticipantIDType	ParticipantID;
		///交易所交易员代码
		TThostFtdcTraderIDType	TraderID;
	};

	///查询客户通知
	struct CThostFtdcQryNoticeField
	{
		///经纪公司代码
		TThostFtdcBrokerIDType	BrokerID;
	};

	///客户通知
	struct CThostFtdcNoticeField
	{
		///经纪公司代码
		TThostFtdcBrokerIDType	BrokerID;
		///消息正文
		TThostFtdcContentType	Content;
		///经纪公司通知内容序列号
		TThostFtdcSequenceLabelType	SequenceLabel;
	};

	///用户权限
	struct CThostFtdcUserRightField
	{
		///经纪公司代码
		TThostFtdcBrokerIDType	BrokerID;
		///用户代码
		TThostFtdcUserIDType	UserID;
		///客户权限类型
		TThostFtdcUserRightTypeType	UserRightType;
		///是否禁止
		TThostFtdcBoolType	IsForbidden;
	};

	///查询结算信息确认域
	struct CThostFtdcQrySettlementInfoConfirmField
	{
		///经纪公司代码
		TThostFtdcBrokerIDType	BrokerID;
		///投资者代码
		TThostFtdcInvestorIDType	InvestorID;
	};

	///装载结算信息
	struct CThostFtdcLoadSettlementInfoField
	{
		///经纪公司代码
		TThostFtdcBrokerIDType	BrokerID;
	};

	///经纪公司可提资金算法表
	struct CThostFtdcBrokerWithdrawAlgorithmField
	{
		///经纪公司代码
		TThostFtdcBrokerIDType	BrokerID;
		///可提资金算法
		TThostFtdcAlgorithmType	WithdrawAlgorithm;
		///资金使用率
		TThostFtdcRatioType	UsingRatio;
		///可提是否包含平仓盈利
		TThostFtdcIncludeCloseProfitType	IncludeCloseProfit;
		///本日无仓且无成交客户是否受可提比例限制
		TThostFtdcAllWithoutTradeType	AllWithoutTrade;
		///可用是否包含平仓盈利
		TThostFtdcIncludeCloseProfitType	AvailIncludeCloseProfit;
		///是否启用用户事件
		TThostFtdcBoolType	IsBrokerUserEvent;
		///币种代码
		TThostFtdcCurrencyIDType	CurrencyID;
		///货币质押比率
		TThostFtdcRatioType	FundMortgageRatio;
		///权益算法
		TThostFtdcBalanceAlgorithmType	BalanceAlgorithm;
	};

	///资金账户口令变更域
	struct CThostFtdcTradingAccountPasswordUpdateV1Field
	{
		///经纪公司代码
		TThostFtdcBrokerIDType	BrokerID;
		///投资者代码
		TThostFtdcInvestorIDType	InvestorID;
		///原来的口令
		TThostFtdcPasswordType	OldPassword;
		///新的口令
		TThostFtdcPasswordType	NewPassword;
	};

	///资金账户口令变更域
	struct CThostFtdcTradingAccountPasswordUpdateField
	{
		///经纪公司代码
		TThostFtdcBrokerIDType	BrokerID;
		///投资者帐号
		TThostFtdcAccountIDType	AccountID;
		///原来的口令
		TThostFtdcPasswordType	OldPassword;
		///新的口令
		TThostFtdcPasswordType	NewPassword;
		///币种代码
		TThostFtdcCurrencyIDType	CurrencyID;
	};

	///查询组合合约分腿
	struct CThostFtdcQryCombinationLegField
	{
		///组合合约代码
		TThostFtdcInstrumentIDType	CombInstrumentID;
		///单腿编号
		TThostFtdcLegIDType	LegID;
		///单腿合约代码
		TThostFtdcInstrumentIDType	LegInstrumentID;
	};

	///查询组合合约分腿
	struct CThostFtdcQrySyncStatusField
	{
		///交易日
		TThostFtdcDateType	TradingDay;
	};

	///组合交易合约的单腿
	struct CThostFtdcCombinationLegField
	{
		///组合合约代码
		TThostFtdcInstrumentIDType	CombInstrumentID;
		///单腿编号
		TThostFtdcLegIDType	LegID;
		///单腿合约代码
		TThostFtdcInstrumentIDType	LegInstrumentID;
		///买卖方向
		TThostFtdcDirectionType	Direction;
		///单腿乘数
		TThostFtdcLegMultipleType	LegMultiple;
		///派生层数
		TThostFtdcImplyLevelType	ImplyLevel;
	};

	///数据同步状态
	struct CThostFtdcSyncStatusField
	{
		///交易日
		TThostFtdcDateType	TradingDay;
		///数据同步状态
		TThostFtdcDataSyncStatusType	DataSyncStatus;
	};

	///查询联系人
	struct CThostFtdcQryLinkManField
	{
		///经纪公司代码
		TThostFtdcBrokerIDType	BrokerID;
		///投资者代码
		TThostFtdcInvestorIDType	InvestorID;
	};

	///联系人
	struct CThostFtdcLinkManField
	{
		///经纪公司代码
		TThostFtdcBrokerIDType	BrokerID;
		///投资者代码
		TThostFtdcInvestorIDType	InvestorID;
		///联系人类型
		TThostFtdcPersonTypeType	PersonType;
		///证件类型
		TThostFtdcIdCardTypeType	IdentifiedCardType;
		///证件号码
		TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
		///名称
		TThostFtdcPartyNameType	PersonName;
		///联系电话
		TThostFtdcTelephoneType	Telephone;
		///通讯地址
		TThostFtdcAddressType	Address;
		///邮政编码
		TThostFtdcZipCodeType	ZipCode;
		///优先级
		TThostFtdcPriorityType	Priority;
		///开户邮政编码
		TThostFtdcUOAZipCodeType	UOAZipCode;
		///全称
		TThostFtdcInvestorFullNameType	PersonFullName;
	};

	///查询经纪公司用户事件
	struct CThostFtdcQryBrokerUserEventField
	{
		///经纪公司代码
		TThostFtdcBrokerIDType	BrokerID;
		///用户代码
		TThostFtdcUserIDType	UserID;
		///用户事件类型
		TThostFtdcUserEventTypeType	UserEventType;
	};

	///查询经纪公司用户事件
	struct CThostFtdcBrokerUserEventField
	{
		///经纪公司代码
		TThostFtdcBrokerIDType	BrokerID;
		///用户代码
		TThostFtdcUserIDType	UserID;
		///用户事件类型
		TThostFtdcUserEventTypeType	UserEventType;
		///用户事件序号
		TThostFtdcSequenceNoType	EventSequenceNo;
		///事件发生日期
		TThostFtdcDateType	EventDate;
		///事件发生时间
		TThostFtdcTimeType	EventTime;
		///用户事件信息
		TThostFtdcUserEventInfoType	UserEventInfo;
		///投资者代码
		TThostFtdcInvestorIDType	InvestorID;
		///合约代码
		TThostFtdcInstrumentIDType	InstrumentID;
	};

	///查询签约银行请求
	struct CThostFtdcQryContractBankField
	{
		///经纪公司代码
		TThostFtdcBrokerIDType	BrokerID;
		///银行代码
		TThostFtdcBankIDType	BankID;
		///银行分中心代码
		TThostFtdcBankBrchIDType	BankBrchID;
	};

	///查询签约银行响应
	struct CThostFtdcContractBankField
	{
		///经纪公司代码
		TThostFtdcBrokerIDType	BrokerID;
		///银行代码
		TThostFtdcBankIDType	BankID;
		///银行分中心代码
		TThostFtdcBankBrchIDType	BankBrchID;
		///银行名称
		TThostFtdcBankNameType	BankName;
	};

	///投资者组合持仓明细
	struct CThostFtdcInvestorPositionCombineDetailField
	{
		///交易日
		TThostFtdcDateType	TradingDay;
		///开仓日期
		TThostFtdcDateType	OpenDate;
		///交易所代码
		TThostFtdcExchangeIDType	ExchangeID;
		///结算编号
		TThostFtdcSettlementIDType	SettlementID;
		///经纪公司代码
		TThostFtdcBrokerIDType	BrokerID;
		///投资者代码
		TThostFtdcInvestorIDType	InvestorID;
		///组合编号
		TThostFtdcTradeIDType	ComTradeID;
		///撮合编号
		TThostFtdcTradeIDType	TradeID;
		///合约代码
		TThostFtdcInstrumentIDType	InstrumentID;
		///投机套保标志
		TThostFtdcHedgeFlagType	HedgeFlag;
		///买卖
		TThostFtdcDirectionType	Direction;
		///持仓量
		TThostFtdcVolumeType	TotalAmt;
		///投资者保证金
		TThostFtdcMoneyType	Margin;
		///交易所保证金
		TThostFtdcMoneyType	ExchMargin;
		///保证金率
		TThostFtdcRatioType	MarginRateByMoney;
		///保证金率(按手数)
		TThostFtdcRatioType	MarginRateByVolume;
		///单腿编号
		TThostFtdcLegIDType	LegID;
		///单腿乘数
		TThostFtdcLegMultipleType	LegMultiple;
		///组合持仓合约编码
		TThostFtdcInstrumentIDType	CombInstrumentID;
		///成交组号
		TThostFtdcTradeGroupIDType	TradeGroupID;
	};

	///预埋单
	struct CThostFtdcParkedOrderField
	{
		///经纪公司代码
		TThostFtdcBrokerIDType	BrokerID;
		///投资者代码
		TThostFtdcInvestorIDType	InvestorID;
		///合约代码
		TThostFtdcInstrumentIDType	InstrumentID;
		///报单引用
		TThostFtdcOrderRefType	OrderRef;
		///用户代码
		TThostFtdcUserIDType	UserID;
		///报单价格条件
		TThostFtdcOrderPriceTypeType	OrderPriceType;
		///买卖方向
		TThostFtdcDirectionType	Direction;
		///组合开平标志
		TThostFtdcCombOffsetFlagType	CombOffsetFlag;
		///组合投机套保标志
		TThostFtdcCombHedgeFlagType	CombHedgeFlag;
		///价格
		TThostFtdcPriceType	LimitPrice;
		///数量
		TThostFtdcVolumeType	VolumeTotalOriginal;
		///有效期类型
		TThostFtdcTimeConditionType	TimeCondition;
		///GTD日期
		TThostFtdcDateType	GTDDate;
		///成交量类型
		TThostFtdcVolumeConditionType	VolumeCondition;
		///最小成交量
		TThostFtdcVolumeType	MinVolume;
		///触发条件
		TThostFtdcContingentConditionType	ContingentCondition;
		///止损价
		TThostFtdcPriceType	StopPrice;
		///强平原因
		TThostFtdcForceCloseReasonType	ForceCloseReason;
		///自动挂起标志
		TThostFtdcBoolType	IsAutoSuspend;
		///业务单元
		TThostFtdcBusinessUnitType	BusinessUnit;
		///请求编号
		TThostFtdcRequestIDType	RequestID;
		///用户强评标志
		TThostFtdcBoolType	UserForceClose;
		///交易所代码
		TThostFtdcExchangeIDType	ExchangeID;
		///预埋报单编号
		TThostFtdcParkedOrderIDType	ParkedOrderID;
		///用户类型
		TThostFtdcUserTypeType	UserType;
		///预埋单状态
		TThostFtdcParkedOrderStatusType	Status;
		///错误代码
		TThostFtdcErrorIDType	ErrorID;
		///错误信息
		TThostFtdcErrorMsgType	ErrorMsg;
		///互换单标志
		TThostFtdcBoolType	IsSwapOrder;
		///资金账号
		TThostFtdcAccountIDType	AccountID;
		///币种代码
		TThostFtdcCurrencyIDType	CurrencyID;
		///交易编码
		TThostFtdcClientIDType	ClientID;
		///投资单元代码
		TThostFtdcInvestUnitIDType	InvestUnitID;
		///IP地址
		TThostFtdcIPAddressType	IPAddress;
		///Mac地址
		TThostFtdcMacAddressType	MacAddress;
	};

	///输入预埋单操作
	struct CThostFtdcParkedOrderActionField
	{
		///经纪公司代码
		TThostFtdcBrokerIDType	BrokerID;
		///投资者代码
		TThostFtdcInvestorIDType	InvestorID;
		///报单操作引用
		TThostFtdcOrderActionRefType	OrderActionRef;
		///报单引用
		TThostFtdcOrderRefType	OrderRef;
		///请求编号
		TThostFtdcRequestIDType	RequestID;
		///前置编号
		TThostFtdcFrontIDType	FrontID;
		///会话编号
		TThostFtdcSessionIDType	SessionID;
		///交易所代码
		TThostFtdcExchangeIDType	ExchangeID;
		///报单编号
		TThostFtdcOrderSysIDType	OrderSysID;
		///操作标志
		TThostFtdcActionFlagType	ActionFlag;
		///价格
		TThostFtdcPriceType	LimitPrice;
		///数量变化
		TThostFtdcVolumeType	VolumeChange;
		///用户代码
		TThostFtdcUserIDType	UserID;
		///合约代码
		TThostFtdcInstrumentIDType	InstrumentID;
		///预埋撤单单编号
		TThostFtdcParkedOrderActionIDType	ParkedOrderActionID;
		///用户类型
		TThostFtdcUserTypeType	UserType;
		///预埋撤单状态
		TThostFtdcParkedOrderStatusType	Status;
		///错误代码
		TThostFtdcErrorIDType	ErrorID;
		///错误信息
		TThostFtdcErrorMsgType	ErrorMsg;
		///投资单元代码
		TThostFtdcInvestUnitIDType	InvestUnitID;
		///IP地址
		TThostFtdcIPAddressType	IPAddress;
		///Mac地址
		TThostFtdcMacAddressType	MacAddress;
	};

	///查询预埋单
	struct CThostFtdcQryParkedOrderField
	{
		///经纪公司代码
		TThostFtdcBrokerIDType	BrokerID;
		///投资者代码
		TThostFtdcInvestorIDType	InvestorID;
		///合约代码
		TThostFtdcInstrumentIDType	InstrumentID;
		///交易所代码
		TThostFtdcExchangeIDType	ExchangeID;
	};

	///查询预埋撤单
	struct CThostFtdcQryParkedOrderActionField
	{
		///经纪公司代码
		TThostFtdcBrokerIDType	BrokerID;
		///投资者代码
		TThostFtdcInvestorIDType	InvestorID;
		///合约代码
		TThostFtdcInstrumentIDType	InstrumentID;
		///交易所代码
		TThostFtdcExchangeIDType	ExchangeID;
	};

	///删除预埋单
	struct CThostFtdcRemoveParkedOrderField
	{
		///经纪公司代码
		TThostFtdcBrokerIDType	BrokerID;
		///投资者代码
		TThostFtdcInvestorIDType	InvestorID;
		///预埋报单编号
		TThostFtdcParkedOrderIDType	ParkedOrderID;
	};

	///删除预埋撤单
	struct CThostFtdcRemoveParkedOrderActionField
	{
		///经纪公司代码
		TThostFtdcBrokerIDType	BrokerID;
		///投资者代码
		TThostFtdcInvestorIDType	InvestorID;
		///预埋撤单编号
		TThostFtdcParkedOrderActionIDType	ParkedOrderActionID;
	};

	///经纪公司可提资金算法表
	struct CThostFtdcInvestorWithdrawAlgorithmField
	{
		///经纪公司代码
		TThostFtdcBrokerIDType	BrokerID;
		///投资者范围
		TThostFtdcInvestorRangeType	InvestorRange;
		///投资者代码
		TThostFtdcInvestorIDType	InvestorID;
		///可提资金比例
		TThostFtdcRatioType	UsingRatio;
		///币种代码
		TThostFtdcCurrencyIDType	CurrencyID;
		///货币质押比率
		TThostFtdcRatioType	FundMortgageRatio;
	};

	///查询组合持仓明细
	struct CThostFtdcQryInvestorPositionCombineDetailField
	{
		///经纪公司代码
		TThostFtdcBrokerIDType	BrokerID;
		///投资者代码
		TThostFtdcInvestorIDType	InvestorID;
		///组合持仓合约编码
		TThostFtdcInstrumentIDType	CombInstrumentID;
	};

	///成交均价
	struct CThostFtdcMarketDataAveragePriceField
	{
		///当日均价
		TThostFtdcPriceType	AveragePrice;
	};

	///校验投资者密码
	struct CThostFtdcVerifyInvestorPasswordField
	{
		///经纪公司代码
		TThostFtdcBrokerIDType	BrokerID;
		///投资者代码
		TThostFtdcInvestorIDType	InvestorID;
		///密码
		TThostFtdcPasswordType	Password;
	};

	///用户IP
	struct CThostFtdcUserIPField
	{
		///经纪公司代码
		TThostFtdcBrokerIDType	BrokerID;
		///用户代码
		TThostFtdcUserIDType	UserID;
		///IP地址
		TThostFtdcIPAddressType	IPAddress;
		///IP地址掩码
		TThostFtdcIPAddressType	IPMask;
		///Mac地址
		TThostFtdcMacAddressType	MacAddress;
	};

	///用户事件通知信息
	struct CThostFtdcTradingNoticeInfoField
	{
		///经纪公司代码
		TThostFtdcBrokerIDType	BrokerID;
		///投资者代码
		TThostFtdcInvestorIDType	InvestorID;
		///发送时间
		TThostFtdcTimeType	SendTime;
		///消息正文
		TThostFtdcContentType	FieldContent;
		///序列系列号
		TThostFtdcSequenceSeriesType	SequenceSeries;
		///序列号
		TThostFtdcSequenceNoType	SequenceNo;
	};

	///用户事件通知
	struct CThostFtdcTradingNoticeField
	{
		///经纪公司代码
		TThostFtdcBrokerIDType	BrokerID;
		///投资者范围
		TThostFtdcInvestorRangeType	InvestorRange;
		///投资者代码
		TThostFtdcInvestorIDType	InvestorID;
		///序列系列号
		TThostFtdcSequenceSeriesType	SequenceSeries;
		///用户代码
		TThostFtdcUserIDType	UserID;
		///发送时间
		TThostFtdcTimeType	SendTime;
		///序列号
		TThostFtdcSequenceNoType	SequenceNo;
		///消息正文
		TThostFtdcContentType	FieldContent;
	};

	///查询交易事件通知
	struct CThostFtdcQryTradingNoticeField
	{
		///经纪公司代码
		TThostFtdcBrokerIDType	BrokerID;
		///投资者代码
		TThostFtdcInvestorIDType	InvestorID;
	};

	///查询错误报单
	struct CThostFtdcQryErrOrderField
	{
		///经纪公司代码
		TThostFtdcBrokerIDType	BrokerID;
		///投资者代码
		TThostFtdcInvestorIDType	InvestorID;
	};

	///错误报单
	struct CThostFtdcErrOrderField
	{
		///经纪公司代码
		TThostFtdcBrokerIDType	BrokerID;
		///投资者代码
		TThostFtdcInvestorIDType	InvestorID;
		///合约代码
		TThostFtdcInstrumentIDType	InstrumentID;
		///报单引用
		TThostFtdcOrderRefType	OrderRef;
		///用户代码
		TThostFtdcUserIDType	UserID;
		///报单价格条件
		TThostFtdcOrderPriceTypeType	OrderPriceType;
		///买卖方向
		TThostFtdcDirectionType	Direction;
		///组合开平标志
		TThostFtdcCombOffsetFlagType	CombOffsetFlag;
		///组合投机套保标志
		TThostFtdcCombHedgeFlagType	CombHedgeFlag;
		///价格
		TThostFtdcPriceType	LimitPrice;
		///数量
		TThostFtdcVolumeType	VolumeTotalOriginal;
		///有效期类型
		TThostFtdcTimeConditionType	TimeCondition;
		///GTD日期
		TThostFtdcDateType	GTDDate;
		///成交量类型
		TThostFtdcVolumeConditionType	VolumeCondition;
		///最小成交量
		TThostFtdcVolumeType	MinVolume;
		///触发条件
		TThostFtdcContingentConditionType	ContingentCondition;
		///止损价
		TThostFtdcPriceType	StopPrice;
		///强平原因
		TThostFtdcForceCloseReasonType	ForceCloseReason;
		///自动挂起标志
		TThostFtdcBoolType	IsAutoSuspend;
		///业务单元
		TThostFtdcBusinessUnitType	BusinessUnit;
		///请求编号
		TThostFtdcRequestIDType	RequestID;
		///用户强评标志
		TThostFtdcBoolType	UserForceClose;
		///错误代码
		TThostFtdcErrorIDType	ErrorID;
		///错误信息
		TThostFtdcErrorMsgType	ErrorMsg;
		///互换单标志
		TThostFtdcBoolType	IsSwapOrder;
		///交易所代码
		TThostFtdcExchangeIDType	ExchangeID;
		///投资单元代码
		TThostFtdcInvestUnitIDType	InvestUnitID;
		///资金账号
		TThostFtdcAccountIDType	AccountID;
		///币种代码
		TThostFtdcCurrencyIDType	CurrencyID;
		///交易编码
		TThostFtdcClientIDType	ClientID;
		///IP地址
		TThostFtdcIPAddressType	IPAddress;
		///Mac地址
		TThostFtdcMacAddressType	MacAddress;
	};

	///查询错误报单操作
	struct CThostFtdcErrorConditionalOrderField
	{
		///经纪公司代码
		TThostFtdcBrokerIDType	BrokerID;
		///投资者代码
		TThostFtdcInvestorIDType	InvestorID;
		///合约代码
		TThostFtdcInstrumentIDType	InstrumentID;
		///报单引用
		TThostFtdcOrderRefType	OrderRef;
		///用户代码
		TThostFtdcUserIDType	UserID;
		///报单价格条件
		TThostFtdcOrderPriceTypeType	OrderPriceType;
		///买卖方向
		TThostFtdcDirectionType	Direction;
		///组合开平标志
		TThostFtdcCombOffsetFlagType	CombOffsetFlag;
		///组合投机套保标志
		TThostFtdcCombHedgeFlagType	CombHedgeFlag;
		///价格
		TThostFtdcPriceType	LimitPrice;
		///数量
		TThostFtdcVolumeType	VolumeTotalOriginal;
		///有效期类型
		TThostFtdcTimeConditionType	TimeCondition;
		///GTD日期
		TThostFtdcDateType	GTDDate;
		///成交量类型
		TThostFtdcVolumeConditionType	VolumeCondition;
		///最小成交量
		TThostFtdcVolumeType	MinVolume;
		///触发条件
		TThostFtdcContingentConditionType	ContingentCondition;
		///止损价
		TThostFtdcPriceType	StopPrice;
		///强平原因
		TThostFtdcForceCloseReasonType	ForceCloseReason;
		///自动挂起标志
		TThostFtdcBoolType	IsAutoSuspend;
		///业务单元
		TThostFtdcBusinessUnitType	BusinessUnit;
		///请求编号
		TThostFtdcRequestIDType	RequestID;
		///本地报单编号
		TThostFtdcOrderLocalIDType	OrderLocalID;
		///交易所代码
		TThostFtdcExchangeIDType	ExchangeID;
		///会员代码
		TThostFtdcParticipantIDType	ParticipantID;
		///客户代码
		TThostFtdcClientIDType	ClientID;
		///合约在交易所的代码
		TThostFtdcExchangeInstIDType	ExchangeInstID;
		///交易所交易员代码
		TThostFtdcTraderIDType	TraderID;
		///安装编号
		TThostFtdcInstallIDType	InstallID;
		///报单提交状态
		TThostFtdcOrderSubmitStatusType	OrderSubmitStatus;
		///报单提示序号
		TThostFtdcSequenceNoType	NotifySequence;
		///交易日
		TThostFtdcDateType	TradingDay;
		///结算编号
		TThostFtdcSettlementIDType	SettlementID;
		///报单编号
		TThostFtdcOrderSysIDType	OrderSysID;
		///报单来源
		TThostFtdcOrderSourceType	OrderSource;
		///报单状态
		TThostFtdcOrderStatusType	OrderStatus;
		///报单类型
		TThostFtdcOrderTypeType	OrderType;
		///今成交数量
		TThostFtdcVolumeType	VolumeTraded;
		///剩余数量
		TThostFtdcVolumeType	VolumeTotal;
		///报单日期
		TThostFtdcDateType	InsertDate;
		///委托时间
		TThostFtdcTimeType	InsertTime;
		///激活时间
		TThostFtdcTimeType	ActiveTime;
		///挂起时间
		TThostFtdcTimeType	SuspendTime;
		///最后修改时间
		TThostFtdcTimeType	UpdateTime;
		///撤销时间
		TThostFtdcTimeType	CancelTime;
		///最后修改交易所交易员代码
		TThostFtdcTraderIDType	ActiveTraderID;
		///结算会员编号
		TThostFtdcParticipantIDType	ClearingPartID;
		///序号
		TThostFtdcSequenceNoType	SequenceNo;
		///前置编号
		TThostFtdcFrontIDType	FrontID;
		///会话编号
		TThostFtdcSessionIDType	SessionID;
		///用户端产品信息
		TThostFtdcProductInfoType	UserProductInfo;
		///状态信息
		TThostFtdcErrorMsgType	StatusMsg;
		///用户强评标志
		TThostFtdcBoolType	UserForceClose;
		///操作用户代码
		TThostFtdcUserIDType	ActiveUserID;
		///经纪公司报单编号
		TThostFtdcSequenceNoType	BrokerOrderSeq;
		///相关报单
		TThostFtdcOrderSysIDType	RelativeOrderSysID;
		///郑商所成交数量
		TThostFtdcVolumeType	ZCETotalTradedVolume;
		///错误代码
		TThostFtdcErrorIDType	ErrorID;
		///错误信息
		TThostFtdcErrorMsgType	ErrorMsg;
		///互换单标志
		TThostFtdcBoolType	IsSwapOrder;
		///营业部编号
		TThostFtdcBranchIDType	BranchID;
		///投资单元代码
		TThostFtdcInvestUnitIDType	InvestUnitID;
		///资金账号
		TThostFtdcAccountIDType	AccountID;
		///币种代码
		TThostFtdcCurrencyIDType	CurrencyID;
		///IP地址
		TThostFtdcIPAddressType	IPAddress;
		///Mac地址
		TThostFtdcMacAddressType	MacAddress;
	};

	///查询错误报单操作
	struct CThostFtdcQryErrOrderActionField
	{
		///经纪公司代码
		TThostFtdcBrokerIDType	BrokerID;
		///投资者代码
		TThostFtdcInvestorIDType	InvestorID;
	};

	///错误报单操作
	struct CThostFtdcErrOrderActionField
	{
		///经纪公司代码
		TThostFtdcBrokerIDType	BrokerID;
		///投资者代码
		TThostFtdcInvestorIDType	InvestorID;
		///报单操作引用
		TThostFtdcOrderActionRefType	OrderActionRef;
		///报单引用
		TThostFtdcOrderRefType	OrderRef;
		///请求编号
		TThostFtdcRequestIDType	RequestID;
		///前置编号
		TThostFtdcFrontIDType	FrontID;
		///会话编号
		TThostFtdcSessionIDType	SessionID;
		///交易所代码
		TThostFtdcExchangeIDType	ExchangeID;
		///报单编号
		TThostFtdcOrderSysIDType	OrderSysID;
		///操作标志
		TThostFtdcActionFlagType	ActionFlag;
		///价格
		TThostFtdcPriceType	LimitPrice;
		///数量变化
		TThostFtdcVolumeType	VolumeChange;
		///操作日期
		TThostFtdcDateType	ActionDate;
		///操作时间
		TThostFtdcTimeType	ActionTime;
		///交易所交易员代码
		TThostFtdcTraderIDType	TraderID;
		///安装编号
		TThostFtdcInstallIDType	InstallID;
		///本地报单编号
		TThostFtdcOrderLocalIDType	OrderLocalID;
		///操作本地编号
		TThostFtdcOrderLocalIDType	ActionLocalID;
		///会员代码
		TThostFtdcParticipantIDType	ParticipantID;
		///客户代码
		TThostFtdcClientIDType	ClientID;
		///业务单元
		TThostFtdcBusinessUnitType	BusinessUnit;
		///报单操作状态
		TThostFtdcOrderActionStatusType	OrderActionStatus;
		///用户代码
		TThostFtdcUserIDType	UserID;
		///状态信息
		TThostFtdcErrorMsgType	StatusMsg;
		///合约代码
		TThostFtdcInstrumentIDType	InstrumentID;
		///营业部编号
		TThostFtdcBranchIDType	BranchID;
		///投资单元代码
		TThostFtdcInvestUnitIDType	InvestUnitID;
		///IP地址
		TThostFtdcIPAddressType	IPAddress;
		///Mac地址
		TThostFtdcMacAddressType	MacAddress;
		///错误代码
		TThostFtdcErrorIDType	ErrorID;
		///错误信息
		TThostFtdcErrorMsgType	ErrorMsg;
	};

	///查询交易所状态
	struct CThostFtdcQryExchangeSequenceField
	{
		///交易所代码
		TThostFtdcExchangeIDType	ExchangeID;
	};

	///交易所状态
	struct CThostFtdcExchangeSequenceField
	{
		///交易所代码
		TThostFtdcExchangeIDType	ExchangeID;
		///序号
		TThostFtdcSequenceNoType	SequenceNo;
		///合约交易状态
		TThostFtdcInstrumentStatusType	MarketStatus;
	};

	///根据价格查询最大报单数量
	struct CThostFtdcQueryMaxOrderVolumeWithPriceField
	{
		///经纪公司代码
		TThostFtdcBrokerIDType	BrokerID;
		///投资者代码
		TThostFtdcInvestorIDType	InvestorID;
		///合约代码
		TThostFtdcInstrumentIDType	InstrumentID;
		///买卖方向
		TThostFtdcDirectionType	Direction;
		///开平标志
		TThostFtdcOffsetFlagType	OffsetFlag;
		///投机套保标志
		TThostFtdcHedgeFlagType	HedgeFlag;
		///最大允许报单数量
		TThostFtdcVolumeType	MaxVolume;
		///报单价格
		TThostFtdcPriceType	Price;
	};

	///查询经纪公司交易参数
	struct CThostFtdcQryBrokerTradingParamsField
	{
		///经纪公司代码
		TThostFtdcBrokerIDType	BrokerID;
		///投资者代码
		TThostFtdcInvestorIDType	InvestorID;
		///币种代码
		TThostFtdcCurrencyIDType	CurrencyID;
	};

	///经纪公司交易参数
	struct CThostFtdcBrokerTradingParamsField
	{
		///经纪公司代码
		TThostFtdcBrokerIDType	BrokerID;
		///投资者代码
		TThostFtdcInvestorIDType	InvestorID;
		///保证金价格类型
		TThostFtdcMarginPriceTypeType	MarginPriceType;
		///盈亏算法
		TThostFtdcAlgorithmType	Algorithm;
		///可用是否包含平仓盈利
		TThostFtdcIncludeCloseProfitType	AvailIncludeCloseProfit;
		///币种代码
		TThostFtdcCurrencyIDType	CurrencyID;
		///期权权利金价格类型
		TThostFtdcOptionRoyaltyPriceTypeType	OptionRoyaltyPriceType;
	};

	///查询经纪公司交易算法
	struct CThostFtdcQryBrokerTradingAlgosField
	{
		///经纪公司代码
		TThostFtdcBrokerIDType	BrokerID;
		///交易所代码
		TThostFtdcExchangeIDType	ExchangeID;
		///合约代码
		TThostFtdcInstrumentIDType	InstrumentID;
	};

	///经纪公司交易算法
	struct CThostFtdcBrokerTradingAlgosField
	{
		///经纪公司代码
		TThostFtdcBrokerIDType	BrokerID;
		///交易所代码
		TThostFtdcExchangeIDType	ExchangeID;
		///合约代码
		TThostFtdcInstrumentIDType	InstrumentID;
		///持仓处理算法编号
		TThostFtdcHandlePositionAlgoIDType	HandlePositionAlgoID;
		///寻找保证金率算法编号
		TThostFtdcFindMarginRateAlgoIDType	FindMarginRateAlgoID;
		///资金处理算法编号
		TThostFtdcHandleTradingAccountAlgoIDType	HandleTradingAccountAlgoID;
	};

	///查询经纪公司资金
	struct CThostFtdcQueryBrokerDepositField
	{
		///经纪公司代码
		TThostFtdcBrokerIDType	BrokerID;
		///交易所代码
		TThostFtdcExchangeIDType	ExchangeID;
	};

	///经纪公司资金
	struct CThostFtdcBrokerDepositField
	{
		///交易日期
		TThostFtdcTradeDateType	TradingDay;
		///经纪公司代码
		TThostFtdcBrokerIDType	BrokerID;
		///会员代码
		TThostFtdcParticipantIDType	ParticipantID;
		///交易所代码
		TThostFtdcExchangeIDType	ExchangeID;
		///上次结算准备金
		TThostFtdcMoneyType	PreBalance;
		///当前保证金总额
		TThostFtdcMoneyType	CurrMargin;
		///平仓盈亏
		TThostFtdcMoneyType	CloseProfit;
		///期货结算准备金
		TThostFtdcMoneyType	Balance;
		///入金金额
		TThostFtdcMoneyType	Deposit;
		///出金金额
		TThostFtdcMoneyType	Withdraw;
		///可提资金
		TThostFtdcMoneyType	Available;
		///基本准备金
		TThostFtdcMoneyType	Reserve;
		///冻结的保证金
		TThostFtdcMoneyType	FrozenMargin;
	};

	///查询保证金监管系统经纪公司密钥
	struct CThostFtdcQryCFMMCBrokerKeyField
	{
		///经纪公司代码
		TThostFtdcBrokerIDType	BrokerID;
	};

	///保证金监管系统经纪公司密钥
	struct CThostFtdcCFMMCBrokerKeyField
	{
		///经纪公司代码
		TThostFtdcBrokerIDType	BrokerID;
		///经纪公司统一编码
		TThostFtdcParticipantIDType	ParticipantID;
		///密钥生成日期
		TThostFtdcDateType	CreateDate;
		///密钥生成时间
		TThostFtdcTimeType	CreateTime;
		///密钥编号
		TThostFtdcSequenceNoType	KeyID;
		///动态密钥
		TThostFtdcCFMMCKeyType	CurrentKey;
		///动态密钥类型
		TThostFtdcCFMMCKeyKindType	KeyKind;
	};

	///保证金监管系统经纪公司资金账户密钥
	struct CThostFtdcCFMMCTradingAccountKeyField
	{
		///经纪公司代码
		TThostFtdcBrokerIDType	BrokerID;
		///经纪公司统一编码
		TThostFtdcParticipantIDType	ParticipantID;
		///投资者帐号
		TThostFtdcAccountIDType	AccountID;
		///密钥编号
		TThostFtdcSequenceNoType	KeyID;
		///动态密钥
		TThostFtdcCFMMCKeyType	CurrentKey;
	};

	///请求查询保证金监管系统经纪公司资金账户密钥
	struct CThostFtdcQryCFMMCTradingAccountKeyField
	{
		///经纪公司代码
		TThostFtdcBrokerIDType	BrokerID;
		///投资者代码
		TThostFtdcInvestorIDType	InvestorID;
	};

	///用户动态令牌参数
	struct CThostFtdcBrokerUserOTPParamField
	{
		///经纪公司代码
		TThostFtdcBrokerIDType	BrokerID;
		///用户代码
		TThostFtdcUserIDType	UserID;
		///动态令牌提供商
		TThostFtdcOTPVendorsIDType	OTPVendorsID;
		///动态令牌序列号
		TThostFtdcSerialNumberType	SerialNumber;
		///令牌密钥
		TThostFtdcAuthKeyType	AuthKey;
		///漂移值
		TThostFtdcLastDriftType	LastDrift;
		///成功值
		TThostFtdcLastSuccessType	LastSuccess;
		///动态令牌类型
		TThostFtdcOTPTypeType	OTPType;
	};

	///手工同步用户动态令牌
	struct CThostFtdcManualSyncBrokerUserOTPField
	{
		///经纪公司代码
		TThostFtdcBrokerIDType	BrokerID;
		///用户代码
		TThostFtdcUserIDType	UserID;
		///动态令牌类型
		TThostFtdcOTPTypeType	OTPType;
		///第一个动态密码
		TThostFtdcPasswordType	FirstOTP;
		///第二个动态密码
		TThostFtdcPasswordType	SecondOTP;
	};

	///投资者手续费率模板
	struct CThostFtdcCommRateModelField
	{
		///经纪公司代码
		TThostFtdcBrokerIDType	BrokerID;
		///手续费率模板代码
		TThostFtdcInvestorIDType	CommModelID;
		///模板名称
		TThostFtdcCommModelNameType	CommModelName;
	};

	///请求查询投资者手续费率模板
	struct CThostFtdcQryCommRateModelField
	{
		///经纪公司代码
		TThostFtdcBrokerIDType	BrokerID;
		///手续费率模板代码
		TThostFtdcInvestorIDType	CommModelID;
	};

	///投资者保证金率模板
	struct CThostFtdcMarginModelField
	{
		///经纪公司代码
		TThostFtdcBrokerIDType	BrokerID;
		///保证金率模板代码
		TThostFtdcInvestorIDType	MarginModelID;
		///模板名称
		TThostFtdcCommModelNameType	MarginModelName;
	};

	///请求查询投资者保证金率模板
	struct CThostFtdcQryMarginModelField
	{
		///经纪公司代码
		TThostFtdcBrokerIDType	BrokerID;
		///保证金率模板代码
		TThostFtdcInvestorIDType	MarginModelID;
	};

	///仓单折抵信息
	struct CThostFtdcEWarrantOffsetField
	{
		///交易日期
		TThostFtdcTradeDateType	TradingDay;
		///经纪公司代码
		TThostFtdcBrokerIDType	BrokerID;
		///投资者代码
		TThostFtdcInvestorIDType	InvestorID;
		///交易所代码
		TThostFtdcExchangeIDType	ExchangeID;
		///合约代码
		TThostFtdcInstrumentIDType	InstrumentID;
		///买卖方向
		TThostFtdcDirectionType	Direction;
		///投机套保标志
		TThostFtdcHedgeFlagType	HedgeFlag;
		///数量
		TThostFtdcVolumeType	Volume;
	};

	///查询仓单折抵信息
	struct CThostFtdcQryEWarrantOffsetField
	{
		///经纪公司代码
		TThostFtdcBrokerIDType	BrokerID;
		///投资者代码
		TThostFtdcInvestorIDType	InvestorID;
		///交易所代码
		TThostFtdcExchangeIDType	ExchangeID;
		///合约代码
		TThostFtdcInstrumentIDType	InstrumentID;
	};

	///查询投资者品种/跨品种保证金
	struct CThostFtdcQryInvestorProductGroupMarginField
	{
		///经纪公司代码
		TThostFtdcBrokerIDType	BrokerID;
		///投资者代码
		TThostFtdcInvestorIDType	InvestorID;
		///品种/跨品种标示
		TThostFtdcInstrumentIDType	ProductGroupID;
		///投机套保标志
		TThostFtdcHedgeFlagType	HedgeFlag;
	};

	///投资者品种/跨品种保证金
	struct CThostFtdcInvestorProductGroupMarginField
	{
		///品种/跨品种标示
		TThostFtdcInstrumentIDType	ProductGroupID;
		///经纪公司代码
		TThostFtdcBrokerIDType	BrokerID;
		///投资者代码
		TThostFtdcInvestorIDType	InvestorID;
		///交易日
		TThostFtdcDateType	TradingDay;
		///结算编号
		TThostFtdcSettlementIDType	SettlementID;
		///冻结的保证金
		TThostFtdcMoneyType	FrozenMargin;
		///多头冻结的保证金
		TThostFtdcMoneyType	LongFrozenMargin;
		///空头冻结的保证金
		TThostFtdcMoneyType	ShortFrozenMargin;
		///占用的保证金
		TThostFtdcMoneyType	UseMargin;
		///多头保证金
		TThostFtdcMoneyType	LongUseMargin;
		///空头保证金
		TThostFtdcMoneyType	ShortUseMargin;
		///交易所保证金
		TThostFtdcMoneyType	ExchMargin;
		///交易所多头保证金
		TThostFtdcMoneyType	LongExchMargin;
		///交易所空头保证金
		TThostFtdcMoneyType	ShortExchMargin;
		///平仓盈亏
		TThostFtdcMoneyType	CloseProfit;
		///冻结的手续费
		TThostFtdcMoneyType	FrozenCommission;
		///手续费
		TThostFtdcMoneyType	Commission;
		///冻结的资金
		TThostFtdcMoneyType	FrozenCash;
		///资金差额
		TThostFtdcMoneyType	CashIn;
		///持仓盈亏
		TThostFtdcMoneyType	PositionProfit;
		///折抵总金额
		TThostFtdcMoneyType	OffsetAmount;
		///多头折抵总金额
		TThostFtdcMoneyType	LongOffsetAmount;
		///空头折抵总金额
		TThostFtdcMoneyType	ShortOffsetAmount;
		///交易所折抵总金额
		TThostFtdcMoneyType	ExchOffsetAmount;
		///交易所多头折抵总金额
		TThostFtdcMoneyType	LongExchOffsetAmount;
		///交易所空头折抵总金额
		TThostFtdcMoneyType	ShortExchOffsetAmount;
		///投机套保标志
		TThostFtdcHedgeFlagType	HedgeFlag;
	};

	///查询监控中心用户令牌
	struct CThostFtdcQueryCFMMCTradingAccountTokenField
	{
		///经纪公司代码
		TThostFtdcBrokerIDType	BrokerID;
		///投资者代码
		TThostFtdcInvestorIDType	InvestorID;
	};

	///监控中心用户令牌
	struct CThostFtdcCFMMCTradingAccountTokenField
	{
		///经纪公司代码
		TThostFtdcBrokerIDType	BrokerID;
		///经纪公司统一编码
		TThostFtdcParticipantIDType	ParticipantID;
		///投资者帐号
		TThostFtdcAccountIDType	AccountID;
		///密钥编号
		TThostFtdcSequenceNoType	KeyID;
		///动态令牌
		TThostFtdcCFMMCTokenType	Token;
	};

	///查询产品组
	struct CThostFtdcQryProductGroupField
	{
		///产品代码
		TThostFtdcInstrumentIDType	ProductID;
		///交易所代码
		TThostFtdcExchangeIDType	ExchangeID;
	};

	///投资者品种/跨品种保证金产品组
	struct CThostFtdcProductGroupField
	{
		///产品代码
		TThostFtdcInstrumentIDType	ProductID;
		///交易所代码
		TThostFtdcExchangeIDType	ExchangeID;
		///产品组代码
		TThostFtdcInstrumentIDType	ProductGroupID;
	};

	///交易所公告
	struct CThostFtdcBulletinField
	{
		///交易所代码
		TThostFtdcExchangeIDType	ExchangeID;
		///交易日
		TThostFtdcDateType	TradingDay;
		///公告编号
		TThostFtdcBulletinIDType	BulletinID;
		///序列号
		TThostFtdcSequenceNoType	SequenceNo;
		///公告类型
		TThostFtdcNewsTypeType	NewsType;
		///紧急程度
		TThostFtdcNewsUrgencyType	NewsUrgency;
		///发送时间
		TThostFtdcTimeType	SendTime;
		///消息摘要
		TThostFtdcAbstractType	Abstract;
		///消息来源
		TThostFtdcComeFromType	ComeFrom;
		///消息正文
		TThostFtdcContentType	Content;
		///WEB地址
		TThostFtdcURLLinkType	URLLink;
		///市场代码
		TThostFtdcMarketIDType	MarketID;
	};

	///查询交易所公告
	struct CThostFtdcQryBulletinField
	{
		///交易所代码
		TThostFtdcExchangeIDType	ExchangeID;
		///公告编号
		TThostFtdcBulletinIDType	BulletinID;
		///序列号
		TThostFtdcSequenceNoType	SequenceNo;
		///公告类型
		TThostFtdcNewsTypeType	NewsType;
		///紧急程度
		TThostFtdcNewsUrgencyType	NewsUrgency;
	};

	///转帐开户请求
	struct CThostFtdcReqOpenAccountField
	{
		///业务功能码
		TThostFtdcTradeCodeType	TradeCode;
		///银行代码
		TThostFtdcBankIDType	BankID;
		///银行分支机构代码
		TThostFtdcBankBrchIDType	BankBranchID;
		///期商代码
		TThostFtdcBrokerIDType	BrokerID;
		///期商分支机构代码
		TThostFtdcFutureBranchIDType	BrokerBranchID;
		///交易日期
		TThostFtdcTradeDateType	TradeDate;
		///交易时间
		TThostFtdcTradeTimeType	TradeTime;
		///银行流水号
		TThostFtdcBankSerialType	BankSerial;
		///交易系统日期 
		TThostFtdcTradeDateType	TradingDay;
		///银期平台消息流水号
		TThostFtdcSerialType	PlateSerial;
		///最后分片标志
		TThostFtdcLastFragmentType	LastFragment;
		///会话号
		TThostFtdcSessionIDType	SessionID;
		///客户姓名
		TThostFtdcIndividualNameType	CustomerName;
		///证件类型
		TThostFtdcIdCardTypeType	IdCardType;
		///证件号码
		TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
		///性别
		TThostFtdcGenderType	Gender;
		///国家代码
		TThostFtdcCountryCodeType	CountryCode;
		///客户类型
		TThostFtdcCustTypeType	CustType;
		///地址
		TThostFtdcAddressType	Address;
		///邮编
		TThostFtdcZipCodeType	ZipCode;
		///电话号码
		TThostFtdcTelephoneType	Telephone;
		///手机
		TThostFtdcMobilePhoneType	MobilePhone;
		///传真
		TThostFtdcFaxType	Fax;
		///电子邮件
		TThostFtdcEMailType	EMail;
		///资金账户状态
		TThostFtdcMoneyAccountStatusType	MoneyAccountStatus;
		///银行帐号
		TThostFtdcBankAccountType	BankAccount;
		///银行密码
		TThostFtdcPasswordType	BankPassWord;
		///投资者帐号
		TThostFtdcAccountIDType	AccountID;
		///期货密码
		TThostFtdcPasswordType	Password;
		///安装编号
		TThostFtdcInstallIDType	InstallID;
		///验证客户证件号码标志
		TThostFtdcYesNoIndicatorType	VerifyCertNoFlag;
		///币种代码
		TThostFtdcCurrencyIDType	CurrencyID;
		///汇钞标志
		TThostFtdcCashExchangeCodeType	CashExchangeCode;
		///摘要
		TThostFtdcDigestType	Digest;
		///银行帐号类型
		TThostFtdcBankAccTypeType	BankAccType;
		///渠道标志
		TThostFtdcDeviceIDType	DeviceID;
		///期货单位帐号类型
		TThostFtdcBankAccTypeType	BankSecuAccType;
		///期货公司银行编码
		TThostFtdcBankCodingForFutureType	BrokerIDByBank;
		///期货单位帐号
		TThostFtdcBankAccountType	BankSecuAcc;
		///银行密码标志
		TThostFtdcPwdFlagType	BankPwdFlag;
		///期货资金密码核对标志
		TThostFtdcPwdFlagType	SecuPwdFlag;
		///交易柜员
		TThostFtdcOperNoType	OperNo;
		///交易ID
		TThostFtdcTIDType	TID;
		///用户标识
		TThostFtdcUserIDType	UserID;
		///长客户姓名
		TThostFtdcLongIndividualNameType	LongCustomerName;
	};

	///转帐销户请求
	struct CThostFtdcReqCancelAccountField
	{
		///业务功能码
		TThostFtdcTradeCodeType	TradeCode;
		///银行代码
		TThostFtdcBankIDType	BankID;
		///银行分支机构代码
		TThostFtdcBankBrchIDType	BankBranchID;
		///期商代码
		TThostFtdcBrokerIDType	BrokerID;
		///期商分支机构代码
		TThostFtdcFutureBranchIDType	BrokerBranchID;
		///交易日期
		TThostFtdcTradeDateType	TradeDate;
		///交易时间
		TThostFtdcTradeTimeType	TradeTime;
		///银行流水号
		TThostFtdcBankSerialType	BankSerial;
		///交易系统日期 
		TThostFtdcTradeDateType	TradingDay;
		///银期平台消息流水号
		TThostFtdcSerialType	PlateSerial;
		///最后分片标志
		TThostFtdcLastFragmentType	LastFragment;
		///会话号
		TThostFtdcSessionIDType	SessionID;
		///客户姓名
		TThostFtdcIndividualNameType	CustomerName;
		///证件类型
		TThostFtdcIdCardTypeType	IdCardType;
		///证件号码
		TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
		///性别
		TThostFtdcGenderType	Gender;
		///国家代码
		TThostFtdcCountryCodeType	CountryCode;
		///客户类型
		TThostFtdcCustTypeType	CustType;
		///地址
		TThostFtdcAddressType	Address;
		///邮编
		TThostFtdcZipCodeType	ZipCode;
		///电话号码
		TThostFtdcTelephoneType	Telephone;
		///手机
		TThostFtdcMobilePhoneType	MobilePhone;
		///传真
		TThostFtdcFaxType	Fax;
		///电子邮件
		TThostFtdcEMailType	EMail;
		///资金账户状态
		TThostFtdcMoneyAccountStatusType	MoneyAccountStatus;
		///银行帐号
		TThostFtdcBankAccountType	BankAccount;
		///银行密码
		TThostFtdcPasswordType	BankPassWord;
		///投资者帐号
		TThostFtdcAccountIDType	AccountID;
		///期货密码
		TThostFtdcPasswordType	Password;
		///安装编号
		TThostFtdcInstallIDType	InstallID;
		///验证客户证件号码标志
		TThostFtdcYesNoIndicatorType	VerifyCertNoFlag;
		///币种代码
		TThostFtdcCurrencyIDType	CurrencyID;
		///汇钞标志
		TThostFtdcCashExchangeCodeType	CashExchangeCode;
		///摘要
		TThostFtdcDigestType	Digest;
		///银行帐号类型
		TThostFtdcBankAccTypeType	BankAccType;
		///渠道标志
		TThostFtdcDeviceIDType	DeviceID;
		///期货单位帐号类型
		TThostFtdcBankAccTypeType	BankSecuAccType;
		///期货公司银行编码
		TThostFtdcBankCodingForFutureType	BrokerIDByBank;
		///期货单位帐号
		TThostFtdcBankAccountType	BankSecuAcc;
		///银行密码标志
		TThostFtdcPwdFlagType	BankPwdFlag;
		///期货资金密码核对标志
		TThostFtdcPwdFlagType	SecuPwdFlag;
		///交易柜员
		TThostFtdcOperNoType	OperNo;
		///交易ID
		TThostFtdcTIDType	TID;
		///用户标识
		TThostFtdcUserIDType	UserID;
		///长客户姓名
		TThostFtdcLongIndividualNameType	LongCustomerName;
	};

	///变更银行账户请求
	struct CThostFtdcReqChangeAccountField
	{
		///业务功能码
		TThostFtdcTradeCodeType	TradeCode;
		///银行代码
		TThostFtdcBankIDType	BankID;
		///银行分支机构代码
		TThostFtdcBankBrchIDType	BankBranchID;
		///期商代码
		TThostFtdcBrokerIDType	BrokerID;
		///期商分支机构代码
		TThostFtdcFutureBranchIDType	BrokerBranchID;
		///交易日期
		TThostFtdcTradeDateType	TradeDate;
		///交易时间
		TThostFtdcTradeTimeType	TradeTime;
		///银行流水号
		TThostFtdcBankSerialType	BankSerial;
		///交易系统日期 
		TThostFtdcTradeDateType	TradingDay;
		///银期平台消息流水号
		TThostFtdcSerialType	PlateSerial;
		///最后分片标志
		TThostFtdcLastFragmentType	LastFragment;
		///会话号
		TThostFtdcSessionIDType	SessionID;
		///客户姓名
		TThostFtdcIndividualNameType	CustomerName;
		///证件类型
		TThostFtdcIdCardTypeType	IdCardType;
		///证件号码
		TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
		///性别
		TThostFtdcGenderType	Gender;
		///国家代码
		TThostFtdcCountryCodeType	CountryCode;
		///客户类型
		TThostFtdcCustTypeType	CustType;
		///地址
		TThostFtdcAddressType	Address;
		///邮编
		TThostFtdcZipCodeType	ZipCode;
		///电话号码
		TThostFtdcTelephoneType	Telephone;
		///手机
		TThostFtdcMobilePhoneType	MobilePhone;
		///传真
		TThostFtdcFaxType	Fax;
		///电子邮件
		TThostFtdcEMailType	EMail;
		///资金账户状态
		TThostFtdcMoneyAccountStatusType	MoneyAccountStatus;
		///银行帐号
		TThostFtdcBankAccountType	BankAccount;
		///银行密码
		TThostFtdcPasswordType	BankPassWord;
		///新银行帐号
		TThostFtdcBankAccountType	NewBankAccount;
		///新银行密码
		TThostFtdcPasswordType	NewBankPassWord;
		///投资者帐号
		TThostFtdcAccountIDType	AccountID;
		///期货密码
		TThostFtdcPasswordType	Password;
		///银行帐号类型
		TThostFtdcBankAccTypeType	BankAccType;
		///安装编号
		TThostFtdcInstallIDType	InstallID;
		///验证客户证件号码标志
		TThostFtdcYesNoIndicatorType	VerifyCertNoFlag;
		///币种代码
		TThostFtdcCurrencyIDType	CurrencyID;
		///期货公司银行编码
		TThostFtdcBankCodingForFutureType	BrokerIDByBank;
		///银行密码标志
		TThostFtdcPwdFlagType	BankPwdFlag;
		///期货资金密码核对标志
		TThostFtdcPwdFlagType	SecuPwdFlag;
		///交易ID
		TThostFtdcTIDType	TID;
		///摘要
		TThostFtdcDigestType	Digest;
		///长客户姓名
		TThostFtdcLongIndividualNameType	LongCustomerName;
	};

	///转账请求
	struct CThostFtdcReqTransferField
	{
		///业务功能码
		TThostFtdcTradeCodeType	TradeCode;
		///银行代码
		TThostFtdcBankIDType	BankID;
		///银行分支机构代码
		TThostFtdcBankBrchIDType	BankBranchID;
		///期商代码
		TThostFtdcBrokerIDType	BrokerID;
		///期商分支机构代码
		TThostFtdcFutureBranchIDType	BrokerBranchID;
		///交易日期
		TThostFtdcTradeDateType	TradeDate;
		///交易时间
		TThostFtdcTradeTimeType	TradeTime;
		///银行流水号
		TThostFtdcBankSerialType	BankSerial;
		///交易系统日期 
		TThostFtdcTradeDateType	TradingDay;
		///银期平台消息流水号
		TThostFtdcSerialType	PlateSerial;
		///最后分片标志
		TThostFtdcLastFragmentType	LastFragment;
		///会话号
		TThostFtdcSessionIDType	SessionID;
		///客户姓名
		TThostFtdcIndividualNameType	CustomerName;
		///证件类型
		TThostFtdcIdCardTypeType	IdCardType;
		///证件号码
		TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
		///客户类型
		TThostFtdcCustTypeType	CustType;
		///银行帐号
		TThostFtdcBankAccountType	BankAccount;
		///银行密码
		TThostFtdcPasswordType	BankPassWord;
		///投资者帐号
		TThostFtdcAccountIDType	AccountID;
		///期货密码
		TThostFtdcPasswordType	Password;
		///安装编号
		TThostFtdcInstallIDType	InstallID;
		///期货公司流水号
		TThostFtdcFutureSerialType	FutureSerial;
		///用户标识
		TThostFtdcUserIDType	UserID;
		///验证客户证件号码标志
		TThostFtdcYesNoIndicatorType	VerifyCertNoFlag;
		///币种代码
		TThostFtdcCurrencyIDType	CurrencyID;
		///转帐金额
		TThostFtdcTradeAmountType	TradeAmount;
		///期货可取金额
		TThostFtdcTradeAmountType	FutureFetchAmount;
		///费用支付标志
		TThostFtdcFeePayFlagType	FeePayFlag;
		///应收客户费用
		TThostFtdcCustFeeType	CustFee;
		///应收期货公司费用
		TThostFtdcFutureFeeType	BrokerFee;
		///发送方给接收方的消息
		TThostFtdcAddInfoType	Message;
		///摘要
		TThostFtdcDigestType	Digest;
		///银行帐号类型
		TThostFtdcBankAccTypeType	BankAccType;
		///渠道标志
		TThostFtdcDeviceIDType	DeviceID;
		///期货单位帐号类型
		TThostFtdcBankAccTypeType	BankSecuAccType;
		///期货公司银行编码
		TThostFtdcBankCodingForFutureType	BrokerIDByBank;
		///期货单位帐号
		TThostFtdcBankAccountType	BankSecuAcc;
		///银行密码标志
		TThostFtdcPwdFlagType	BankPwdFlag;
		///期货资金密码核对标志
		TThostFtdcPwdFlagType	SecuPwdFlag;
		///交易柜员
		TThostFtdcOperNoType	OperNo;
		///请求编号
		TThostFtdcRequestIDType	RequestID;
		///交易ID
		TThostFtdcTIDType	TID;
		///转账交易状态
		TThostFtdcTransferStatusType	TransferStatus;
		///长客户姓名
		TThostFtdcLongIndividualNameType	LongCustomerName;
	};

	///银行发起银行资金转期货响应
	struct CThostFtdcRspTransferField
	{
		///业务功能码
		TThostFtdcTradeCodeType	TradeCode;
		///银行代码
		TThostFtdcBankIDType	BankID;
		///银行分支机构代码
		TThostFtdcBankBrchIDType	BankBranchID;
		///期商代码
		TThostFtdcBrokerIDType	BrokerID;
		///期商分支机构代码
		TThostFtdcFutureBranchIDType	BrokerBranchID;
		///交易日期
		TThostFtdcTradeDateType	TradeDate;
		///交易时间
		TThostFtdcTradeTimeType	TradeTime;
		///银行流水号
		TThostFtdcBankSerialType	BankSerial;
		///交易系统日期 
		TThostFtdcTradeDateType	TradingDay;
		///银期平台消息流水号
		TThostFtdcSerialType	PlateSerial;
		///最后分片标志
		TThostFtdcLastFragmentType	LastFragment;
		///会话号
		TThostFtdcSessionIDType	SessionID;
		///客户姓名
		TThostFtdcIndividualNameType	CustomerName;
		///证件类型
		TThostFtdcIdCardTypeType	IdCardType;
		///证件号码
		TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
		///客户类型
		TThostFtdcCustTypeType	CustType;
		///银行帐号
		TThostFtdcBankAccountType	BankAccount;
		///银行密码
		TThostFtdcPasswordType	BankPassWord;
		///投资者帐号
		TThostFtdcAccountIDType	AccountID;
		///期货密码
		TThostFtdcPasswordType	Password;
		///安装编号
		TThostFtdcInstallIDType	InstallID;
		///期货公司流水号
		TThostFtdcFutureSerialType	FutureSerial;
		///用户标识
		TThostFtdcUserIDType	UserID;
		///验证客户证件号码标志
		TThostFtdcYesNoIndicatorType	VerifyCertNoFlag;
		///币种代码
		TThostFtdcCurrencyIDType	CurrencyID;
		///转帐金额
		TThostFtdcTradeAmountType	TradeAmount;
		///期货可取金额
		TThostFtdcTradeAmountType	FutureFetchAmount;
		///费用支付标志
		TThostFtdcFeePayFlagType	FeePayFlag;
		///应收客户费用
		TThostFtdcCustFeeType	CustFee;
		///应收期货公司费用
		TThostFtdcFutureFeeType	BrokerFee;
		///发送方给接收方的消息
		TThostFtdcAddInfoType	Message;
		///摘要
		TThostFtdcDigestType	Digest;
		///银行帐号类型
		TThostFtdcBankAccTypeType	BankAccType;
		///渠道标志
		TThostFtdcDeviceIDType	DeviceID;
		///期货单位帐号类型
		TThostFtdcBankAccTypeType	BankSecuAccType;
		///期货公司银行编码
		TThostFtdcBankCodingForFutureType	BrokerIDByBank;
		///期货单位帐号
		TThostFtdcBankAccountType	BankSecuAcc;
		///银行密码标志
		TThostFtdcPwdFlagType	BankPwdFlag;
		///期货资金密码核对标志
		TThostFtdcPwdFlagType	SecuPwdFlag;
		///交易柜员
		TThostFtdcOperNoType	OperNo;
		///请求编号
		TThostFtdcRequestIDType	RequestID;
		///交易ID
		TThostFtdcTIDType	TID;
		///转账交易状态
		TThostFtdcTransferStatusType	TransferStatus;
		///错误代码
		TThostFtdcErrorIDType	ErrorID;
		///错误信息
		TThostFtdcErrorMsgType	ErrorMsg;
		///长客户姓名
		TThostFtdcLongIndividualNameType	LongCustomerName;
	};

	///冲正请求
	struct CThostFtdcReqRepealField
	{
		///冲正时间间隔
		TThostFtdcRepealTimeIntervalType	RepealTimeInterval;
		///已经冲正次数
		TThostFtdcRepealedTimesType	RepealedTimes;
		///银行冲正标志
		TThostFtdcBankRepealFlagType	BankRepealFlag;
		///期商冲正标志
		TThostFtdcBrokerRepealFlagType	BrokerRepealFlag;
		///被冲正平台流水号
		TThostFtdcPlateSerialType	PlateRepealSerial;
		///被冲正银行流水号
		TThostFtdcBankSerialType	BankRepealSerial;
		///被冲正期货流水号
		TThostFtdcFutureSerialType	FutureRepealSerial;
		///业务功能码
		TThostFtdcTradeCodeType	TradeCode;
		///银行代码
		TThostFtdcBankIDType	BankID;
		///银行分支机构代码
		TThostFtdcBankBrchIDType	BankBranchID;
		///期商代码
		TThostFtdcBrokerIDType	BrokerID;
		///期商分支机构代码
		TThostFtdcFutureBranchIDType	BrokerBranchID;
		///交易日期
		TThostFtdcTradeDateType	TradeDate;
		///交易时间
		TThostFtdcTradeTimeType	TradeTime;
		///银行流水号
		TThostFtdcBankSerialType	BankSerial;
		///交易系统日期 
		TThostFtdcTradeDateType	TradingDay;
		///银期平台消息流水号
		TThostFtdcSerialType	PlateSerial;
		///最后分片标志
		TThostFtdcLastFragmentType	LastFragment;
		///会话号
		TThostFtdcSessionIDType	SessionID;
		///客户姓名
		TThostFtdcIndividualNameType	CustomerName;
		///证件类型
		TThostFtdcIdCardTypeType	IdCardType;
		///证件号码
		TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
		///客户类型
		TThostFtdcCustTypeType	CustType;
		///银行帐号
		TThostFtdcBankAccountType	BankAccount;
		///银行密码
		TThostFtdcPasswordType	BankPassWord;
		///投资者帐号
		TThostFtdcAccountIDType	AccountID;
		///期货密码
		TThostFtdcPasswordType	Password;
		///安装编号
		TThostFtdcInstallIDType	InstallID;
		///期货公司流水号
		TThostFtdcFutureSerialType	FutureSerial;
		///用户标识
		TThostFtdcUserIDType	UserID;
		///验证客户证件号码标志
		TThostFtdcYesNoIndicatorType	VerifyCertNoFlag;
		///币种代码
		TThostFtdcCurrencyIDType	CurrencyID;
		///转帐金额
		TThostFtdcTradeAmountType	TradeAmount;
		///期货可取金额
		TThostFtdcTradeAmountType	FutureFetchAmount;
		///费用支付标志
		TThostFtdcFeePayFlagType	FeePayFlag;
		///应收客户费用
		TThostFtdcCustFeeType	CustFee;
		///应收期货公司费用
		TThostFtdcFutureFeeType	BrokerFee;
		///发送方给接收方的消息
		TThostFtdcAddInfoType	Message;
		///摘要
		TThostFtdcDigestType	Digest;
		///银行帐号类型
		TThostFtdcBankAccTypeType	BankAccType;
		///渠道标志
		TThostFtdcDeviceIDType	DeviceID;
		///期货单位帐号类型
		TThostFtdcBankAccTypeType	BankSecuAccType;
		///期货公司银行编码
		TThostFtdcBankCodingForFutureType	BrokerIDByBank;
		///期货单位帐号
		TThostFtdcBankAccountType	BankSecuAcc;
		///银行密码标志
		TThostFtdcPwdFlagType	BankPwdFlag;
		///期货资金密码核对标志
		TThostFtdcPwdFlagType	SecuPwdFlag;
		///交易柜员
		TThostFtdcOperNoType	OperNo;
		///请求编号
		TThostFtdcRequestIDType	RequestID;
		///交易ID
		TThostFtdcTIDType	TID;
		///转账交易状态
		TThostFtdcTransferStatusType	TransferStatus;
		///长客户姓名
		TThostFtdcLongIndividualNameType	LongCustomerName;
	};

	///冲正响应
	struct CThostFtdcRspRepealField
	{
		///冲正时间间隔
		TThostFtdcRepealTimeIntervalType	RepealTimeInterval;
		///已经冲正次数
		TThostFtdcRepealedTimesType	RepealedTimes;
		///银行冲正标志
		TThostFtdcBankRepealFlagType	BankRepealFlag;
		///期商冲正标志
		TThostFtdcBrokerRepealFlagType	BrokerRepealFlag;
		///被冲正平台流水号
		TThostFtdcPlateSerialType	PlateRepealSerial;
		///被冲正银行流水号
		TThostFtdcBankSerialType	BankRepealSerial;
		///被冲正期货流水号
		TThostFtdcFutureSerialType	FutureRepealSerial;
		///业务功能码
		TThostFtdcTradeCodeType	TradeCode;
		///银行代码
		TThostFtdcBankIDType	BankID;
		///银行分支机构代码
		TThostFtdcBankBrchIDType	BankBranchID;
		///期商代码
		TThostFtdcBrokerIDType	BrokerID;
		///期商分支机构代码
		TThostFtdcFutureBranchIDType	BrokerBranchID;
		///交易日期
		TThostFtdcTradeDateType	TradeDate;
		///交易时间
		TThostFtdcTradeTimeType	TradeTime;
		///银行流水号
		TThostFtdcBankSerialType	BankSerial;
		///交易系统日期 
		TThostFtdcTradeDateType	TradingDay;
		///银期平台消息流水号
		TThostFtdcSerialType	PlateSerial;
		///最后分片标志
		TThostFtdcLastFragmentType	LastFragment;
		///会话号
		TThostFtdcSessionIDType	SessionID;
		///客户姓名
		TThostFtdcIndividualNameType	CustomerName;
		///证件类型
		TThostFtdcIdCardTypeType	IdCardType;
		///证件号码
		TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
		///客户类型
		TThostFtdcCustTypeType	CustType;
		///银行帐号
		TThostFtdcBankAccountType	BankAccount;
		///银行密码
		TThostFtdcPasswordType	BankPassWord;
		///投资者帐号
		TThostFtdcAccountIDType	AccountID;
		///期货密码
		TThostFtdcPasswordType	Password;
		///安装编号
		TThostFtdcInstallIDType	InstallID;
		///期货公司流水号
		TThostFtdcFutureSerialType	FutureSerial;
		///用户标识
		TThostFtdcUserIDType	UserID;
		///验证客户证件号码标志
		TThostFtdcYesNoIndicatorType	VerifyCertNoFlag;
		///币种代码
		TThostFtdcCurrencyIDType	CurrencyID;
		///转帐金额
		TThostFtdcTradeAmountType	TradeAmount;
		///期货可取金额
		TThostFtdcTradeAmountType	FutureFetchAmount;
		///费用支付标志
		TThostFtdcFeePayFlagType	FeePayFlag;
		///应收客户费用
		TThostFtdcCustFeeType	CustFee;
		///应收期货公司费用
		TThostFtdcFutureFeeType	BrokerFee;
		///发送方给接收方的消息
		TThostFtdcAddInfoType	Message;
		///摘要
		TThostFtdcDigestType	Digest;
		///银行帐号类型
		TThostFtdcBankAccTypeType	BankAccType;
		///渠道标志
		TThostFtdcDeviceIDType	DeviceID;
		///期货单位帐号类型
		TThostFtdcBankAccTypeType	BankSecuAccType;
		///期货公司银行编码
		TThostFtdcBankCodingForFutureType	BrokerIDByBank;
		///期货单位帐号
		TThostFtdcBankAccountType	BankSecuAcc;
		///银行密码标志
		TThostFtdcPwdFlagType	BankPwdFlag;
		///期货资金密码核对标志
		TThostFtdcPwdFlagType	SecuPwdFlag;
		///交易柜员
		TThostFtdcOperNoType	OperNo;
		///请求编号
		TThostFtdcRequestIDType	RequestID;
		///交易ID
		TThostFtdcTIDType	TID;
		///转账交易状态
		TThostFtdcTransferStatusType	TransferStatus;
		///错误代码
		TThostFtdcErrorIDType	ErrorID;
		///错误信息
		TThostFtdcErrorMsgType	ErrorMsg;
		///长客户姓名
		TThostFtdcLongIndividualNameType	LongCustomerName;
	};

	///查询账户信息请求
	struct CThostFtdcReqQueryAccountField
	{
		///业务功能码
		TThostFtdcTradeCodeType	TradeCode;
		///银行代码
		TThostFtdcBankIDType	BankID;
		///银行分支机构代码
		TThostFtdcBankBrchIDType	BankBranchID;
		///期商代码
		TThostFtdcBrokerIDType	BrokerID;
		///期商分支机构代码
		TThostFtdcFutureBranchIDType	BrokerBranchID;
		///交易日期
		TThostFtdcTradeDateType	TradeDate;
		///交易时间
		TThostFtdcTradeTimeType	TradeTime;
		///银行流水号
		TThostFtdcBankSerialType	BankSerial;
		///交易系统日期 
		TThostFtdcTradeDateType	TradingDay;
		///银期平台消息流水号
		TThostFtdcSerialType	PlateSerial;
		///最后分片标志
		TThostFtdcLastFragmentType	LastFragment;
		///会话号
		TThostFtdcSessionIDType	SessionID;
		///客户姓名
		TThostFtdcIndividualNameType	CustomerName;
		///证件类型
		TThostFtdcIdCardTypeType	IdCardType;
		///证件号码
		TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
		///客户类型
		TThostFtdcCustTypeType	CustType;
		///银行帐号
		TThostFtdcBankAccountType	BankAccount;
		///银行密码
		TThostFtdcPasswordType	BankPassWord;
		///投资者帐号
		TThostFtdcAccountIDType	AccountID;
		///期货密码
		TThostFtdcPasswordType	Password;
		///期货公司流水号
		TThostFtdcFutureSerialType	FutureSerial;
		///安装编号
		TThostFtdcInstallIDType	InstallID;
		///用户标识
		TThostFtdcUserIDType	UserID;
		///验证客户证件号码标志
		TThostFtdcYesNoIndicatorType	VerifyCertNoFlag;
		///币种代码
		TThostFtdcCurrencyIDType	CurrencyID;
		///摘要
		TThostFtdcDigestType	Digest;
		///银行帐号类型
		TThostFtdcBankAccTypeType	BankAccType;
		///渠道标志
		TThostFtdcDeviceIDType	DeviceID;
		///期货单位帐号类型
		TThostFtdcBankAccTypeType	BankSecuAccType;
		///期货公司银行编码
		TThostFtdcBankCodingForFutureType	BrokerIDByBank;
		///期货单位帐号
		TThostFtdcBankAccountType	BankSecuAcc;
		///银行密码标志
		TThostFtdcPwdFlagType	BankPwdFlag;
		///期货资金密码核对标志
		TThostFtdcPwdFlagType	SecuPwdFlag;
		///交易柜员
		TThostFtdcOperNoType	OperNo;
		///请求编号
		TThostFtdcRequestIDType	RequestID;
		///交易ID
		TThostFtdcTIDType	TID;
		///长客户姓名
		TThostFtdcLongIndividualNameType	LongCustomerName;
	};

	///查询账户信息响应
	struct CThostFtdcRspQueryAccountField
	{
		///业务功能码
		TThostFtdcTradeCodeType	TradeCode;
		///银行代码
		TThostFtdcBankIDType	BankID;
		///银行分支机构代码
		TThostFtdcBankBrchIDType	BankBranchID;
		///期商代码
		TThostFtdcBrokerIDType	BrokerID;
		///期商分支机构代码
		TThostFtdcFutureBranchIDType	BrokerBranchID;
		///交易日期
		TThostFtdcTradeDateType	TradeDate;
		///交易时间
		TThostFtdcTradeTimeType	TradeTime;
		///银行流水号
		TThostFtdcBankSerialType	BankSerial;
		///交易系统日期 
		TThostFtdcTradeDateType	TradingDay;
		///银期平台消息流水号
		TThostFtdcSerialType	PlateSerial;
		///最后分片标志
		TThostFtdcLastFragmentType	LastFragment;
		///会话号
		TThostFtdcSessionIDType	SessionID;
		///客户姓名
		TThostFtdcIndividualNameType	CustomerName;
		///证件类型
		TThostFtdcIdCardTypeType	IdCardType;
		///证件号码
		TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
		///客户类型
		TThostFtdcCustTypeType	CustType;
		///银行帐号
		TThostFtdcBankAccountType	BankAccount;
		///银行密码
		TThostFtdcPasswordType	BankPassWord;
		///投资者帐号
		TThostFtdcAccountIDType	AccountID;
		///期货密码
		TThostFtdcPasswordType	Password;
		///期货公司流水号
		TThostFtdcFutureSerialType	FutureSerial;
		///安装编号
		TThostFtdcInstallIDType	InstallID;
		///用户标识
		TThostFtdcUserIDType	UserID;
		///验证客户证件号码标志
		TThostFtdcYesNoIndicatorType	VerifyCertNoFlag;
		///币种代码
		TThostFtdcCurrencyIDType	CurrencyID;
		///摘要
		TThostFtdcDigestType	Digest;
		///银行帐号类型
		TThostFtdcBankAccTypeType	BankAccType;
		///渠道标志
		TThostFtdcDeviceIDType	DeviceID;
		///期货单位帐号类型
		TThostFtdcBankAccTypeType	BankSecuAccType;
		///期货公司银行编码
		TThostFtdcBankCodingForFutureType	BrokerIDByBank;
		///期货单位帐号
		TThostFtdcBankAccountType	BankSecuAcc;
		///银行密码标志
		TThostFtdcPwdFlagType	BankPwdFlag;
		///期货资金密码核对标志
		TThostFtdcPwdFlagType	SecuPwdFlag;
		///交易柜员
		TThostFtdcOperNoType	OperNo;
		///请求编号
		TThostFtdcRequestIDType	RequestID;
		///交易ID
		TThostFtdcTIDType	TID;
		///银行可用金额
		TThostFtdcTradeAmountType	BankUseAmount;
		///银行可取金额
		TThostFtdcTradeAmountType	BankFetchAmount;
		///长客户姓名
		TThostFtdcLongIndividualNameType	LongCustomerName;
	};

	///期商签到签退
	struct CThostFtdcFutureSignIOField
	{
		///业务功能码
		TThostFtdcTradeCodeType	TradeCode;
		///银行代码
		TThostFtdcBankIDType	BankID;
		///银行分支机构代码
		TThostFtdcBankBrchIDType	BankBranchID;
		///期商代码
		TThostFtdcBrokerIDType	BrokerID;
		///期商分支机构代码
		TThostFtdcFutureBranchIDType	BrokerBranchID;
		///交易日期
		TThostFtdcTradeDateType	TradeDate;
		///交易时间
		TThostFtdcTradeTimeType	TradeTime;
		///银行流水号
		TThostFtdcBankSerialType	BankSerial;
		///交易系统日期 
		TThostFtdcTradeDateType	TradingDay;
		///银期平台消息流水号
		TThostFtdcSerialType	PlateSerial;
		///最后分片标志
		TThostFtdcLastFragmentType	LastFragment;
		///会话号
		TThostFtdcSessionIDType	SessionID;
		///安装编号
		TThostFtdcInstallIDType	InstallID;
		///用户标识
		TThostFtdcUserIDType	UserID;
		///摘要
		TThostFtdcDigestType	Digest;
		///币种代码
		TThostFtdcCurrencyIDType	CurrencyID;
		///渠道标志
		TThostFtdcDeviceIDType	DeviceID;
		///期货公司银行编码
		TThostFtdcBankCodingForFutureType	BrokerIDByBank;
		///交易柜员
		TThostFtdcOperNoType	OperNo;
		///请求编号
		TThostFtdcRequestIDType	RequestID;
		///交易ID
		TThostFtdcTIDType	TID;
	};

	///期商签到响应
	struct CThostFtdcRspFutureSignInField
	{
		///业务功能码
		TThostFtdcTradeCodeType	TradeCode;
		///银行代码
		TThostFtdcBankIDType	BankID;
		///银行分支机构代码
		TThostFtdcBankBrchIDType	BankBranchID;
		///期商代码
		TThostFtdcBrokerIDType	BrokerID;
		///期商分支机构代码
		TThostFtdcFutureBranchIDType	BrokerBranchID;
		///交易日期
		TThostFtdcTradeDateType	TradeDate;
		///交易时间
		TThostFtdcTradeTimeType	TradeTime;
		///银行流水号
		TThostFtdcBankSerialType	BankSerial;
		///交易系统日期 
		TThostFtdcTradeDateType	TradingDay;
		///银期平台消息流水号
		TThostFtdcSerialType	PlateSerial;
		///最后分片标志
		TThostFtdcLastFragmentType	LastFragment;
		///会话号
		TThostFtdcSessionIDType	SessionID;
		///安装编号
		TThostFtdcInstallIDType	InstallID;
		///用户标识
		TThostFtdcUserIDType	UserID;
		///摘要
		TThostFtdcDigestType	Digest;
		///币种代码
		TThostFtdcCurrencyIDType	CurrencyID;
		///渠道标志
		TThostFtdcDeviceIDType	DeviceID;
		///期货公司银行编码
		TThostFtdcBankCodingForFutureType	BrokerIDByBank;
		///交易柜员
		TThostFtdcOperNoType	OperNo;
		///请求编号
		TThostFtdcRequestIDType	RequestID;
		///交易ID
		TThostFtdcTIDType	TID;
		///错误代码
		TThostFtdcErrorIDType	ErrorID;
		///错误信息
		TThostFtdcErrorMsgType	ErrorMsg;
		///PIN密钥
		TThostFtdcPasswordKeyType	PinKey;
		///MAC密钥
		TThostFtdcPasswordKeyType	MacKey;
	};

	///期商签退请求
	struct CThostFtdcReqFutureSignOutField
	{
		///业务功能码
		TThostFtdcTradeCodeType	TradeCode;
		///银行代码
		TThostFtdcBankIDType	BankID;
		///银行分支机构代码
		TThostFtdcBankBrchIDType	BankBranchID;
		///期商代码
		TThostFtdcBrokerIDType	BrokerID;
		///期商分支机构代码
		TThostFtdcFutureBranchIDType	BrokerBranchID;
		///交易日期
		TThostFtdcTradeDateType	TradeDate;
		///交易时间
		TThostFtdcTradeTimeType	TradeTime;
		///银行流水号
		TThostFtdcBankSerialType	BankSerial;
		///交易系统日期 
		TThostFtdcTradeDateType	TradingDay;
		///银期平台消息流水号
		TThostFtdcSerialType	PlateSerial;
		///最后分片标志
		TThostFtdcLastFragmentType	LastFragment;
		///会话号
		TThostFtdcSessionIDType	SessionID;
		///安装编号
		TThostFtdcInstallIDType	InstallID;
		///用户标识
		TThostFtdcUserIDType	UserID;
		///摘要
		TThostFtdcDigestType	Digest;
		///币种代码
		TThostFtdcCurrencyIDType	CurrencyID;
		///渠道标志
		TThostFtdcDeviceIDType	DeviceID;
		///期货公司银行编码
		TThostFtdcBankCodingForFutureType	BrokerIDByBank;
		///交易柜员
		TThostFtdcOperNoType	OperNo;
		///请求编号
		TThostFtdcRequestIDType	RequestID;
		///交易ID
		TThostFtdcTIDType	TID;
	};

	///期商签退响应
	struct CThostFtdcRspFutureSignOutField
	{
		///业务功能码
		TThostFtdcTradeCodeType	TradeCode;
		///银行代码
		TThostFtdcBankIDType	BankID;
		///银行分支机构代码
		TThostFtdcBankBrchIDType	BankBranchID;
		///期商代码
		TThostFtdcBrokerIDType	BrokerID;
		///期商分支机构代码
		TThostFtdcFutureBranchIDType	BrokerBranchID;
		///交易日期
		TThostFtdcTradeDateType	TradeDate;
		///交易时间
		TThostFtdcTradeTimeType	TradeTime;
		///银行流水号
		TThostFtdcBankSerialType	BankSerial;
		///交易系统日期 
		TThostFtdcTradeDateType	TradingDay;
		///银期平台消息流水号
		TThostFtdcSerialType	PlateSerial;
		///最后分片标志
		TThostFtdcLastFragmentType	LastFragment;
		///会话号
		TThostFtdcSessionIDType	SessionID;
		///安装编号
		TThostFtdcInstallIDType	InstallID;
		///用户标识
		TThostFtdcUserIDType	UserID;
		///摘要
		TThostFtdcDigestType	Digest;
		///币种代码
		TThostFtdcCurrencyIDType	CurrencyID;
		///渠道标志
		TThostFtdcDeviceIDType	DeviceID;
		///期货公司银行编码
		TThostFtdcBankCodingForFutureType	BrokerIDByBank;
		///交易柜员
		TThostFtdcOperNoType	OperNo;
		///请求编号
		TThostFtdcRequestIDType	RequestID;
		///交易ID
		TThostFtdcTIDType	TID;
		///错误代码
		TThostFtdcErrorIDType	ErrorID;
		///错误信息
		TThostFtdcErrorMsgType	ErrorMsg;
	};

	///查询指定流水号的交易结果请求
	struct CThostFtdcReqQueryTradeResultBySerialField
	{
		///业务功能码
		TThostFtdcTradeCodeType	TradeCode;
		///银行代码
		TThostFtdcBankIDType	BankID;
		///银行分支机构代码
		TThostFtdcBankBrchIDType	BankBranchID;
		///期商代码
		TThostFtdcBrokerIDType	BrokerID;
		///期商分支机构代码
		TThostFtdcFutureBranchIDType	BrokerBranchID;
		///交易日期
		TThostFtdcTradeDateType	TradeDate;
		///交易时间
		TThostFtdcTradeTimeType	TradeTime;
		///银行流水号
		TThostFtdcBankSerialType	BankSerial;
		///交易系统日期 
		TThostFtdcTradeDateType	TradingDay;
		///银期平台消息流水号
		TThostFtdcSerialType	PlateSerial;
		///最后分片标志
		TThostFtdcLastFragmentType	LastFragment;
		///会话号
		TThostFtdcSessionIDType	SessionID;
		///流水号
		TThostFtdcSerialType	Reference;
		///本流水号发布者的机构类型
		TThostFtdcInstitutionTypeType	RefrenceIssureType;
		///本流水号发布者机构编码
		TThostFtdcOrganCodeType	RefrenceIssure;
		///客户姓名
		TThostFtdcIndividualNameType	CustomerName;
		///证件类型
		TThostFtdcIdCardTypeType	IdCardType;
		///证件号码
		TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
		///客户类型
		TThostFtdcCustTypeType	CustType;
		///银行帐号
		TThostFtdcBankAccountType	BankAccount;
		///银行密码
		TThostFtdcPasswordType	BankPassWord;
		///投资者帐号
		TThostFtdcAccountIDType	AccountID;
		///期货密码
		TThostFtdcPasswordType	Password;
		///币种代码
		TThostFtdcCurrencyIDType	CurrencyID;
		///转帐金额
		TThostFtdcTradeAmountType	TradeAmount;
		///摘要
		TThostFtdcDigestType	Digest;
		///长客户姓名
		TThostFtdcLongIndividualNameType	LongCustomerName;
	};

	///查询指定流水号的交易结果响应
	struct CThostFtdcRspQueryTradeResultBySerialField
	{
		///业务功能码
		TThostFtdcTradeCodeType	TradeCode;
		///银行代码
		TThostFtdcBankIDType	BankID;
		///银行分支机构代码
		TThostFtdcBankBrchIDType	BankBranchID;
		///期商代码
		TThostFtdcBrokerIDType	BrokerID;
		///期商分支机构代码
		TThostFtdcFutureBranchIDType	BrokerBranchID;
		///交易日期
		TThostFtdcTradeDateType	TradeDate;
		///交易时间
		TThostFtdcTradeTimeType	TradeTime;
		///银行流水号
		TThostFtdcBankSerialType	BankSerial;
		///交易系统日期 
		TThostFtdcTradeDateType	TradingDay;
		///银期平台消息流水号
		TThostFtdcSerialType	PlateSerial;
		///最后分片标志
		TThostFtdcLastFragmentType	LastFragment;
		///会话号
		TThostFtdcSessionIDType	SessionID;
		///错误代码
		TThostFtdcErrorIDType	ErrorID;
		///错误信息
		TThostFtdcErrorMsgType	ErrorMsg;
		///流水号
		TThostFtdcSerialType	Reference;
		///本流水号发布者的机构类型
		TThostFtdcInstitutionTypeType	RefrenceIssureType;
		///本流水号发布者机构编码
		TThostFtdcOrganCodeType	RefrenceIssure;
		///原始返回代码
		TThostFtdcReturnCodeType	OriginReturnCode;
		///原始返回码描述
		TThostFtdcDescrInfoForReturnCodeType	OriginDescrInfoForReturnCode;
		///银行帐号
		TThostFtdcBankAccountType	BankAccount;
		///银行密码
		TThostFtdcPasswordType	BankPassWord;
		///投资者帐号
		TThostFtdcAccountIDType	AccountID;
		///期货密码
		TThostFtdcPasswordType	Password;
		///币种代码
		TThostFtdcCurrencyIDType	CurrencyID;
		///转帐金额
		TThostFtdcTradeAmountType	TradeAmount;
		///摘要
		TThostFtdcDigestType	Digest;
	};

	///日终文件就绪请求
	struct CThostFtdcReqDayEndFileReadyField
	{
		///业务功能码
		TThostFtdcTradeCodeType	TradeCode;
		///银行代码
		TThostFtdcBankIDType	BankID;
		///银行分支机构代码
		TThostFtdcBankBrchIDType	BankBranchID;
		///期商代码
		TThostFtdcBrokerIDType	BrokerID;
		///期商分支机构代码
		TThostFtdcFutureBranchIDType	BrokerBranchID;
		///交易日期
		TThostFtdcTradeDateType	TradeDate;
		///交易时间
		TThostFtdcTradeTimeType	TradeTime;
		///银行流水号
		TThostFtdcBankSerialType	BankSerial;
		///交易系统日期 
		TThostFtdcTradeDateType	TradingDay;
		///银期平台消息流水号
		TThostFtdcSerialType	PlateSerial;
		///最后分片标志
		TThostFtdcLastFragmentType	LastFragment;
		///会话号
		TThostFtdcSessionIDType	SessionID;
		///文件业务功能
		TThostFtdcFileBusinessCodeType	FileBusinessCode;
		///摘要
		TThostFtdcDigestType	Digest;
	};

	///返回结果
	struct CThostFtdcReturnResultField
	{
		///返回代码
		TThostFtdcReturnCodeType	ReturnCode;
		///返回码描述
		TThostFtdcDescrInfoForReturnCodeType	DescrInfoForReturnCode;
	};

	///验证期货资金密码
	struct CThostFtdcVerifyFuturePasswordField
	{
		///业务功能码
		TThostFtdcTradeCodeType	TradeCode;
		///银行代码
		TThostFtdcBankIDType	BankID;
		///银行分支机构代码
		TThostFtdcBankBrchIDType	BankBranchID;
		///期商代码
		TThostFtdcBrokerIDType	BrokerID;
		///期商分支机构代码
		TThostFtdcFutureBranchIDType	BrokerBranchID;
		///交易日期
		TThostFtdcTradeDateType	TradeDate;
		///交易时间
		TThostFtdcTradeTimeType	TradeTime;
		///银行流水号
		TThostFtdcBankSerialType	BankSerial;
		///交易系统日期 
		TThostFtdcTradeDateType	TradingDay;
		///银期平台消息流水号
		TThostFtdcSerialType	PlateSerial;
		///最后分片标志
		TThostFtdcLastFragmentType	LastFragment;
		///会话号
		TThostFtdcSessionIDType	SessionID;
		///投资者帐号
		TThostFtdcAccountIDType	AccountID;
		///期货密码
		TThostFtdcPasswordType	Password;
		///银行帐号
		TThostFtdcBankAccountType	BankAccount;
		///银行密码
		TThostFtdcPasswordType	BankPassWord;
		///安装编号
		TThostFtdcInstallIDType	InstallID;
		///交易ID
		TThostFtdcTIDType	TID;
		///币种代码
		TThostFtdcCurrencyIDType	CurrencyID;
	};

	///验证客户信息
	struct CThostFtdcVerifyCustInfoField
	{
		///客户姓名
		TThostFtdcIndividualNameType	CustomerName;
		///证件类型
		TThostFtdcIdCardTypeType	IdCardType;
		///证件号码
		TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
		///客户类型
		TThostFtdcCustTypeType	CustType;
		///长客户姓名
		TThostFtdcLongIndividualNameType	LongCustomerName;
	};

	///验证期货资金密码和客户信息
	struct CThostFtdcVerifyFuturePasswordAndCustInfoField
	{
		///客户姓名
		TThostFtdcIndividualNameType	CustomerName;
		///证件类型
		TThostFtdcIdCardTypeType	IdCardType;
		///证件号码
		TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
		///客户类型
		TThostFtdcCustTypeType	CustType;
		///投资者帐号
		TThostFtdcAccountIDType	AccountID;
		///期货密码
		TThostFtdcPasswordType	Password;
		///币种代码
		TThostFtdcCurrencyIDType	CurrencyID;
		///长客户姓名
		TThostFtdcLongIndividualNameType	LongCustomerName;
	};

	///验证期货资金密码和客户信息
	struct CThostFtdcDepositResultInformField
	{
		///出入金流水号，该流水号为银期报盘返回的流水号
		TThostFtdcDepositSeqNoType	DepositSeqNo;
		///经纪公司代码
		TThostFtdcBrokerIDType	BrokerID;
		///投资者代码
		TThostFtdcInvestorIDType	InvestorID;
		///入金金额
		TThostFtdcMoneyType	Deposit;
		///请求编号
		TThostFtdcRequestIDType	RequestID;
		///返回代码
		TThostFtdcReturnCodeType	ReturnCode;
		///返回码描述
		TThostFtdcDescrInfoForReturnCodeType	DescrInfoForReturnCode;
	};

	///交易核心向银期报盘发出密钥同步请求
	struct CThostFtdcReqSyncKeyField
	{
		///业务功能码
		TThostFtdcTradeCodeType	TradeCode;
		///银行代码
		TThostFtdcBankIDType	BankID;
		///银行分支机构代码
		TThostFtdcBankBrchIDType	BankBranchID;
		///期商代码
		TThostFtdcBrokerIDType	BrokerID;
		///期商分支机构代码
		TThostFtdcFutureBranchIDType	BrokerBranchID;
		///交易日期
		TThostFtdcTradeDateType	TradeDate;
		///交易时间
		TThostFtdcTradeTimeType	TradeTime;
		///银行流水号
		TThostFtdcBankSerialType	BankSerial;
		///交易系统日期 
		TThostFtdcTradeDateType	TradingDay;
		///银期平台消息流水号
		TThostFtdcSerialType	PlateSerial;
		///最后分片标志
		TThostFtdcLastFragmentType	LastFragment;
		///会话号
		TThostFtdcSessionIDType	SessionID;
		///安装编号
		TThostFtdcInstallIDType	InstallID;
		///用户标识
		TThostFtdcUserIDType	UserID;
		///交易核心给银期报盘的消息
		TThostFtdcAddInfoType	Message;
		///渠道标志
		TThostFtdcDeviceIDType	DeviceID;
		///期货公司银行编码
		TThostFtdcBankCodingForFutureType	BrokerIDByBank;
		///交易柜员
		TThostFtdcOperNoType	OperNo;
		///请求编号
		TThostFtdcRequestIDType	RequestID;
		///交易ID
		TThostFtdcTIDType	TID;
	};

	///交易核心向银期报盘发出密钥同步响应
	struct CThostFtdcRspSyncKeyField
	{
		///业务功能码
		TThostFtdcTradeCodeType	TradeCode;
		///银行代码
		TThostFtdcBankIDType	BankID;
		///银行分支机构代码
		TThostFtdcBankBrchIDType	BankBranchID;
		///期商代码
		TThostFtdcBrokerIDType	BrokerID;
		///期商分支机构代码
		TThostFtdcFutureBranchIDType	BrokerBranchID;
		///交易日期
		TThostFtdcTradeDateType	TradeDate;
		///交易时间
		TThostFtdcTradeTimeType	TradeTime;
		///银行流水号
		TThostFtdcBankSerialType	BankSerial;
		///交易系统日期 
		TThostFtdcTradeDateType	TradingDay;
		///银期平台消息流水号
		TThostFtdcSerialType	PlateSerial;
		///最后分片标志
		TThostFtdcLastFragmentType	LastFragment;
		///会话号
		TThostFtdcSessionIDType	SessionID;
		///安装编号
		TThostFtdcInstallIDType	InstallID;
		///用户标识
		TThostFtdcUserIDType	UserID;
		///交易核心给银期报盘的消息
		TThostFtdcAddInfoType	Message;
		///渠道标志
		TThostFtdcDeviceIDType	DeviceID;
		///期货公司银行编码
		TThostFtdcBankCodingForFutureType	BrokerIDByBank;
		///交易柜员
		TThostFtdcOperNoType	OperNo;
		///请求编号
		TThostFtdcRequestIDType	RequestID;
		///交易ID
		TThostFtdcTIDType	TID;
		///错误代码
		TThostFtdcErrorIDType	ErrorID;
		///错误信息
		TThostFtdcErrorMsgType	ErrorMsg;
	};

	///查询账户信息通知
	struct CThostFtdcNotifyQueryAccountField
	{
		///业务功能码
		TThostFtdcTradeCodeType	TradeCode;
		///银行代码
		TThostFtdcBankIDType	BankID;
		///银行分支机构代码
		TThostFtdcBankBrchIDType	BankBranchID;
		///期商代码
		TThostFtdcBrokerIDType	BrokerID;
		///期商分支机构代码
		TThostFtdcFutureBranchIDType	BrokerBranchID;
		///交易日期
		TThostFtdcTradeDateType	TradeDate;
		///交易时间
		TThostFtdcTradeTimeType	TradeTime;
		///银行流水号
		TThostFtdcBankSerialType	BankSerial;
		///交易系统日期 
		TThostFtdcTradeDateType	TradingDay;
		///银期平台消息流水号
		TThostFtdcSerialType	PlateSerial;
		///最后分片标志
		TThostFtdcLastFragmentType	LastFragment;
		///会话号
		TThostFtdcSessionIDType	SessionID;
		///客户姓名
		TThostFtdcIndividualNameType	CustomerName;
		///证件类型
		TThostFtdcIdCardTypeType	IdCardType;
		///证件号码
		TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
		///客户类型
		TThostFtdcCustTypeType	CustType;
		///银行帐号
		TThostFtdcBankAccountType	BankAccount;
		///银行密码
		TThostFtdcPasswordType	BankPassWord;
		///投资者帐号
		TThostFtdcAccountIDType	AccountID;
		///期货密码
		TThostFtdcPasswordType	Password;
		///期货公司流水号
		TThostFtdcFutureSerialType	FutureSerial;
		///安装编号
		TThostFtdcInstallIDType	InstallID;
		///用户标识
		TThostFtdcUserIDType	UserID;
		///验证客户证件号码标志
		TThostFtdcYesNoIndicatorType	VerifyCertNoFlag;
		///币种代码
		TThostFtdcCurrencyIDType	CurrencyID;
		///摘要
		TThostFtdcDigestType	Digest;
		///银行帐号类型
		TThostFtdcBankAccTypeType	BankAccType;
		///渠道标志
		TThostFtdcDeviceIDType	DeviceID;
		///期货单位帐号类型
		TThostFtdcBankAccTypeType	BankSecuAccType;
		///期货公司银行编码
		TThostFtdcBankCodingForFutureType	BrokerIDByBank;
		///期货单位帐号
		TThostFtdcBankAccountType	BankSecuAcc;
		///银行密码标志
		TThostFtdcPwdFlagType	BankPwdFlag;
		///期货资金密码核对标志
		TThostFtdcPwdFlagType	SecuPwdFlag;
		///交易柜员
		TThostFtdcOperNoType	OperNo;
		///请求编号
		TThostFtdcRequestIDType	RequestID;
		///交易ID
		TThostFtdcTIDType	TID;
		///银行可用金额
		TThostFtdcTradeAmountType	BankUseAmount;
		///银行可取金额
		TThostFtdcTradeAmountType	BankFetchAmount;
		///错误代码
		TThostFtdcErrorIDType	ErrorID;
		///错误信息
		TThostFtdcErrorMsgType	ErrorMsg;
		///长客户姓名
		TThostFtdcLongIndividualNameType	LongCustomerName;
	};

	///银期转账交易流水表
	struct CThostFtdcTransferSerialField
	{
		///平台流水号
		TThostFtdcPlateSerialType	PlateSerial;
		///交易发起方日期
		TThostFtdcTradeDateType	TradeDate;
		///交易日期
		TThostFtdcDateType	TradingDay;
		///交易时间
		TThostFtdcTradeTimeType	TradeTime;
		///交易代码
		TThostFtdcTradeCodeType	TradeCode;
		///会话编号
		TThostFtdcSessionIDType	SessionID;
		///银行编码
		TThostFtdcBankIDType	BankID;
		///银行分支机构编码
		TThostFtdcBankBrchIDType	BankBranchID;
		///银行帐号类型
		TThostFtdcBankAccTypeType	BankAccType;
		///银行帐号
		TThostFtdcBankAccountType	BankAccount;
		///银行流水号
		TThostFtdcBankSerialType	BankSerial;
		///期货公司编码
		TThostFtdcBrokerIDType	BrokerID;
		///期商分支机构代码
		TThostFtdcFutureBranchIDType	BrokerBranchID;
		///期货公司帐号类型
		TThostFtdcFutureAccTypeType	FutureAccType;
		///投资者帐号
		TThostFtdcAccountIDType	AccountID;
		///投资者代码
		TThostFtdcInvestorIDType	InvestorID;
		///期货公司流水号
		TThostFtdcFutureSerialType	FutureSerial;
		///证件类型
		TThostFtdcIdCardTypeType	IdCardType;
		///证件号码
		TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
		///币种代码
		TThostFtdcCurrencyIDType	CurrencyID;
		///交易金额
		TThostFtdcTradeAmountType	TradeAmount;
		///应收客户费用
		TThostFtdcCustFeeType	CustFee;
		///应收期货公司费用
		TThostFtdcFutureFeeType	BrokerFee;
		///有效标志
		TThostFtdcAvailabilityFlagType	AvailabilityFlag;
		///操作员
		TThostFtdcOperatorCodeType	OperatorCode;
		///新银行帐号
		TThostFtdcBankAccountType	BankNewAccount;
		///错误代码
		TThostFtdcErrorIDType	ErrorID;
		///错误信息
		TThostFtdcErrorMsgType	ErrorMsg;
	};

	///请求查询转帐流水
	struct CThostFtdcQryTransferSerialField
	{
		///经纪公司代码
		TThostFtdcBrokerIDType	BrokerID;
		///投资者帐号
		TThostFtdcAccountIDType	AccountID;
		///银行编码
		TThostFtdcBankIDType	BankID;
		///币种代码
		TThostFtdcCurrencyIDType	CurrencyID;
	};

	///期商签到通知
	struct CThostFtdcNotifyFutureSignInField
	{
		///业务功能码
		TThostFtdcTradeCodeType	TradeCode;
		///银行代码
		TThostFtdcBankIDType	BankID;
		///银行分支机构代码
		TThostFtdcBankBrchIDType	BankBranchID;
		///期商代码
		TThostFtdcBrokerIDType	BrokerID;
		///期商分支机构代码
		TThostFtdcFutureBranchIDType	BrokerBranchID;
		///交易日期
		TThostFtdcTradeDateType	TradeDate;
		///交易时间
		TThostFtdcTradeTimeType	TradeTime;
		///银行流水号
		TThostFtdcBankSerialType	BankSerial;
		///交易系统日期 
		TThostFtdcTradeDateType	TradingDay;
		///银期平台消息流水号
		TThostFtdcSerialType	PlateSerial;
		///最后分片标志
		TThostFtdcLastFragmentType	LastFragment;
		///会话号
		TThostFtdcSessionIDType	SessionID;
		///安装编号
		TThostFtdcInstallIDType	InstallID;
		///用户标识
		TThostFtdcUserIDType	UserID;
		///摘要
		TThostFtdcDigestType	Digest;
		///币种代码
		TThostFtdcCurrencyIDType	CurrencyID;
		///渠道标志
		TThostFtdcDeviceIDType	DeviceID;
		///期货公司银行编码
		TThostFtdcBankCodingForFutureType	BrokerIDByBank;
		///交易柜员
		TThostFtdcOperNoType	OperNo;
		///请求编号
		TThostFtdcRequestIDType	RequestID;
		///交易ID
		TThostFtdcTIDType	TID;
		///错误代码
		TThostFtdcErrorIDType	ErrorID;
		///错误信息
		TThostFtdcErrorMsgType	ErrorMsg;
		///PIN密钥
		TThostFtdcPasswordKeyType	PinKey;
		///MAC密钥
		TThostFtdcPasswordKeyType	MacKey;
	};

	///期商签退通知
	struct CThostFtdcNotifyFutureSignOutField
	{
		///业务功能码
		TThostFtdcTradeCodeType	TradeCode;
		///银行代码
		TThostFtdcBankIDType	BankID;
		///银行分支机构代码
		TThostFtdcBankBrchIDType	BankBranchID;
		///期商代码
		TThostFtdcBrokerIDType	BrokerID;
		///期商分支机构代码
		TThostFtdcFutureBranchIDType	BrokerBranchID;
		///交易日期
		TThostFtdcTradeDateType	TradeDate;
		///交易时间
		TThostFtdcTradeTimeType	TradeTime;
		///银行流水号
		TThostFtdcBankSerialType	BankSerial;
		///交易系统日期 
		TThostFtdcTradeDateType	TradingDay;
		///银期平台消息流水号
		TThostFtdcSerialType	PlateSerial;
		///最后分片标志
		TThostFtdcLastFragmentType	LastFragment;
		///会话号
		TThostFtdcSessionIDType	SessionID;
		///安装编号
		TThostFtdcInstallIDType	InstallID;
		///用户标识
		TThostFtdcUserIDType	UserID;
		///摘要
		TThostFtdcDigestType	Digest;
		///币种代码
		TThostFtdcCurrencyIDType	CurrencyID;
		///渠道标志
		TThostFtdcDeviceIDType	DeviceID;
		///期货公司银行编码
		TThostFtdcBankCodingForFutureType	BrokerIDByBank;
		///交易柜员
		TThostFtdcOperNoType	OperNo;
		///请求编号
		TThostFtdcRequestIDType	RequestID;
		///交易ID
		TThostFtdcTIDType	TID;
		///错误代码
		TThostFtdcErrorIDType	ErrorID;
		///错误信息
		TThostFtdcErrorMsgType	ErrorMsg;
	};

	///交易核心向银期报盘发出密钥同步处理结果的通知
	struct CThostFtdcNotifySyncKeyField
	{
		///业务功能码
		TThostFtdcTradeCodeType	TradeCode;
		///银行代码
		TThostFtdcBankIDType	BankID;
		///银行分支机构代码
		TThostFtdcBankBrchIDType	BankBranchID;
		///期商代码
		TThostFtdcBrokerIDType	BrokerID;
		///期商分支机构代码
		TThostFtdcFutureBranchIDType	BrokerBranchID;
		///交易日期
		TThostFtdcTradeDateType	TradeDate;
		///交易时间
		TThostFtdcTradeTimeType	TradeTime;
		///银行流水号
		TThostFtdcBankSerialType	BankSerial;
		///交易系统日期 
		TThostFtdcTradeDateType	TradingDay;
		///银期平台消息流水号
		TThostFtdcSerialType	PlateSerial;
		///最后分片标志
		TThostFtdcLastFragmentType	LastFragment;
		///会话号
		TThostFtdcSessionIDType	SessionID;
		///安装编号
		TThostFtdcInstallIDType	InstallID;
		///用户标识
		TThostFtdcUserIDType	UserID;
		///交易核心给银期报盘的消息
		TThostFtdcAddInfoType	Message;
		///渠道标志
		TThostFtdcDeviceIDType	DeviceID;
		///期货公司银行编码
		TThostFtdcBankCodingForFutureType	BrokerIDByBank;
		///交易柜员
		TThostFtdcOperNoType	OperNo;
		///请求编号
		TThostFtdcRequestIDType	RequestID;
		///交易ID
		TThostFtdcTIDType	TID;
		///错误代码
		TThostFtdcErrorIDType	ErrorID;
		///错误信息
		TThostFtdcErrorMsgType	ErrorMsg;
	};

	///请求查询银期签约关系
	struct CThostFtdcQryAccountregisterField
	{
		///经纪公司代码
		TThostFtdcBrokerIDType	BrokerID;
		///投资者帐号
		TThostFtdcAccountIDType	AccountID;
		///银行编码
		TThostFtdcBankIDType	BankID;
		///银行分支机构编码
		TThostFtdcBankBrchIDType	BankBranchID;
		///币种代码
		TThostFtdcCurrencyIDType	CurrencyID;
	};

	///客户开销户信息表
	struct CThostFtdcAccountregisterField
	{
		///交易日期
		TThostFtdcTradeDateType	TradeDay;
		///银行编码
		TThostFtdcBankIDType	BankID;
		///银行分支机构编码
		TThostFtdcBankBrchIDType	BankBranchID;
		///银行帐号
		TThostFtdcBankAccountType	BankAccount;
		///期货公司编码
		TThostFtdcBrokerIDType	BrokerID;
		///期货公司分支机构编码
		TThostFtdcFutureBranchIDType	BrokerBranchID;
		///投资者帐号
		TThostFtdcAccountIDType	AccountID;
		///证件类型
		TThostFtdcIdCardTypeType	IdCardType;
		///证件号码
		TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
		///客户姓名
		TThostFtdcIndividualNameType	CustomerName;
		///币种代码
		TThostFtdcCurrencyIDType	CurrencyID;
		///开销户类别
		TThostFtdcOpenOrDestroyType	OpenOrDestroy;
		///签约日期
		TThostFtdcTradeDateType	RegDate;
		///解约日期
		TThostFtdcTradeDateType	OutDate;
		///交易ID
		TThostFtdcTIDType	TID;
		///客户类型
		TThostFtdcCustTypeType	CustType;
		///银行帐号类型
		TThostFtdcBankAccTypeType	BankAccType;
		///长客户姓名
		TThostFtdcLongIndividualNameType	LongCustomerName;
	};

	///银期开户信息
	struct CThostFtdcOpenAccountField
	{
		///业务功能码
		TThostFtdcTradeCodeType	TradeCode;
		///银行代码
		TThostFtdcBankIDType	BankID;
		///银行分支机构代码
		TThostFtdcBankBrchIDType	BankBranchID;
		///期商代码
		TThostFtdcBrokerIDType	BrokerID;
		///期商分支机构代码
		TThostFtdcFutureBranchIDType	BrokerBranchID;
		///交易日期
		TThostFtdcTradeDateType	TradeDate;
		///交易时间
		TThostFtdcTradeTimeType	TradeTime;
		///银行流水号
		TThostFtdcBankSerialType	BankSerial;
		///交易系统日期 
		TThostFtdcTradeDateType	TradingDay;
		///银期平台消息流水号
		TThostFtdcSerialType	PlateSerial;
		///最后分片标志
		TThostFtdcLastFragmentType	LastFragment;
		///会话号
		TThostFtdcSessionIDType	SessionID;
		///客户姓名
		TThostFtdcIndividualNameType	CustomerName;
		///证件类型
		TThostFtdcIdCardTypeType	IdCardType;
		///证件号码
		TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
		///性别
		TThostFtdcGenderType	Gender;
		///国家代码
		TThostFtdcCountryCodeType	CountryCode;
		///客户类型
		TThostFtdcCustTypeType	CustType;
		///地址
		TThostFtdcAddressType	Address;
		///邮编
		TThostFtdcZipCodeType	ZipCode;
		///电话号码
		TThostFtdcTelephoneType	Telephone;
		///手机
		TThostFtdcMobilePhoneType	MobilePhone;
		///传真
		TThostFtdcFaxType	Fax;
		///电子邮件
		TThostFtdcEMailType	EMail;
		///资金账户状态
		TThostFtdcMoneyAccountStatusType	MoneyAccountStatus;
		///银行帐号
		TThostFtdcBankAccountType	BankAccount;
		///银行密码
		TThostFtdcPasswordType	BankPassWord;
		///投资者帐号
		TThostFtdcAccountIDType	AccountID;
		///期货密码
		TThostFtdcPasswordType	Password;
		///安装编号
		TThostFtdcInstallIDType	InstallID;
		///验证客户证件号码标志
		TThostFtdcYesNoIndicatorType	VerifyCertNoFlag;
		///币种代码
		TThostFtdcCurrencyIDType	CurrencyID;
		///汇钞标志
		TThostFtdcCashExchangeCodeType	CashExchangeCode;
		///摘要
		TThostFtdcDigestType	Digest;
		///银行帐号类型
		TThostFtdcBankAccTypeType	BankAccType;
		///渠道标志
		TThostFtdcDeviceIDType	DeviceID;
		///期货单位帐号类型
		TThostFtdcBankAccTypeType	BankSecuAccType;
		///期货公司银行编码
		TThostFtdcBankCodingForFutureType	BrokerIDByBank;
		///期货单位帐号
		TThostFtdcBankAccountType	BankSecuAcc;
		///银行密码标志
		TThostFtdcPwdFlagType	BankPwdFlag;
		///期货资金密码核对标志
		TThostFtdcPwdFlagType	SecuPwdFlag;
		///交易柜员
		TThostFtdcOperNoType	OperNo;
		///交易ID
		TThostFtdcTIDType	TID;
		///用户标识
		TThostFtdcUserIDType	UserID;
		///错误代码
		TThostFtdcErrorIDType	ErrorID;
		///错误信息
		TThostFtdcErrorMsgType	ErrorMsg;
		///长客户姓名
		TThostFtdcLongIndividualNameType	LongCustomerName;
	};

	///银期销户信息
	struct CThostFtdcCancelAccountField
	{
		///业务功能码
		TThostFtdcTradeCodeType	TradeCode;
		///银行代码
		TThostFtdcBankIDType	BankID;
		///银行分支机构代码
		TThostFtdcBankBrchIDType	BankBranchID;
		///期商代码
		TThostFtdcBrokerIDType	BrokerID;
		///期商分支机构代码
		TThostFtdcFutureBranchIDType	BrokerBranchID;
		///交易日期
		TThostFtdcTradeDateType	TradeDate;
		///交易时间
		TThostFtdcTradeTimeType	TradeTime;
		///银行流水号
		TThostFtdcBankSerialType	BankSerial;
		///交易系统日期 
		TThostFtdcTradeDateType	TradingDay;
		///银期平台消息流水号
		TThostFtdcSerialType	PlateSerial;
		///最后分片标志
		TThostFtdcLastFragmentType	LastFragment;
		///会话号
		TThostFtdcSessionIDType	SessionID;
		///客户姓名
		TThostFtdcIndividualNameType	CustomerName;
		///证件类型
		TThostFtdcIdCardTypeType	IdCardType;
		///证件号码
		TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
		///性别
		TThostFtdcGenderType	Gender;
		///国家代码
		TThostFtdcCountryCodeType	CountryCode;
		///客户类型
		TThostFtdcCustTypeType	CustType;
		///地址
		TThostFtdcAddressType	Address;
		///邮编
		TThostFtdcZipCodeType	ZipCode;
		///电话号码
		TThostFtdcTelephoneType	Telephone;
		///手机
		TThostFtdcMobilePhoneType	MobilePhone;
		///传真
		TThostFtdcFaxType	Fax;
		///电子邮件
		TThostFtdcEMailType	EMail;
		///资金账户状态
		TThostFtdcMoneyAccountStatusType	MoneyAccountStatus;
		///银行帐号
		TThostFtdcBankAccountType	BankAccount;
		///银行密码
		TThostFtdcPasswordType	BankPassWord;
		///投资者帐号
		TThostFtdcAccountIDType	AccountID;
		///期货密码
		TThostFtdcPasswordType	Password;
		///安装编号
		TThostFtdcInstallIDType	InstallID;
		///验证客户证件号码标志
		TThostFtdcYesNoIndicatorType	VerifyCertNoFlag;
		///币种代码
		TThostFtdcCurrencyIDType	CurrencyID;
		///汇钞标志
		TThostFtdcCashExchangeCodeType	CashExchangeCode;
		///摘要
		TThostFtdcDigestType	Digest;
		///银行帐号类型
		TThostFtdcBankAccTypeType	BankAccType;
		///渠道标志
		TThostFtdcDeviceIDType	DeviceID;
		///期货单位帐号类型
		TThostFtdcBankAccTypeType	BankSecuAccType;
		///期货公司银行编码
		TThostFtdcBankCodingForFutureType	BrokerIDByBank;
		///期货单位帐号
		TThostFtdcBankAccountType	BankSecuAcc;
		///银行密码标志
		TThostFtdcPwdFlagType	BankPwdFlag;
		///期货资金密码核对标志
		TThostFtdcPwdFlagType	SecuPwdFlag;
		///交易柜员
		TThostFtdcOperNoType	OperNo;
		///交易ID
		TThostFtdcTIDType	TID;
		///用户标识
		TThostFtdcUserIDType	UserID;
		///错误代码
		TThostFtdcErrorIDType	ErrorID;
		///错误信息
		TThostFtdcErrorMsgType	ErrorMsg;
		///长客户姓名
		TThostFtdcLongIndividualNameType	LongCustomerName;
	};

	///银期变更银行账号信息
	struct CThostFtdcChangeAccountField
	{
		///业务功能码
		TThostFtdcTradeCodeType	TradeCode;
		///银行代码
		TThostFtdcBankIDType	BankID;
		///银行分支机构代码
		TThostFtdcBankBrchIDType	BankBranchID;
		///期商代码
		TThostFtdcBrokerIDType	BrokerID;
		///期商分支机构代码
		TThostFtdcFutureBranchIDType	BrokerBranchID;
		///交易日期
		TThostFtdcTradeDateType	TradeDate;
		///交易时间
		TThostFtdcTradeTimeType	TradeTime;
		///银行流水号
		TThostFtdcBankSerialType	BankSerial;
		///交易系统日期 
		TThostFtdcTradeDateType	TradingDay;
		///银期平台消息流水号
		TThostFtdcSerialType	PlateSerial;
		///最后分片标志
		TThostFtdcLastFragmentType	LastFragment;
		///会话号
		TThostFtdcSessionIDType	SessionID;
		///客户姓名
		TThostFtdcIndividualNameType	CustomerName;
		///证件类型
		TThostFtdcIdCardTypeType	IdCardType;
		///证件号码
		TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
		///性别
		TThostFtdcGenderType	Gender;
		///国家代码
		TThostFtdcCountryCodeType	CountryCode;
		///客户类型
		TThostFtdcCustTypeType	CustType;
		///地址
		TThostFtdcAddressType	Address;
		///邮编
		TThostFtdcZipCodeType	ZipCode;
		///电话号码
		TThostFtdcTelephoneType	Telephone;
		///手机
		TThostFtdcMobilePhoneType	MobilePhone;
		///传真
		TThostFtdcFaxType	Fax;
		///电子邮件
		TThostFtdcEMailType	EMail;
		///资金账户状态
		TThostFtdcMoneyAccountStatusType	MoneyAccountStatus;
		///银行帐号
		TThostFtdcBankAccountType	BankAccount;
		///银行密码
		TThostFtdcPasswordType	BankPassWord;
		///新银行帐号
		TThostFtdcBankAccountType	NewBankAccount;
		///新银行密码
		TThostFtdcPasswordType	NewBankPassWord;
		///投资者帐号
		TThostFtdcAccountIDType	AccountID;
		///期货密码
		TThostFtdcPasswordType	Password;
		///银行帐号类型
		TThostFtdcBankAccTypeType	BankAccType;
		///安装编号
		TThostFtdcInstallIDType	InstallID;
		///验证客户证件号码标志
		TThostFtdcYesNoIndicatorType	VerifyCertNoFlag;
		///币种代码
		TThostFtdcCurrencyIDType	CurrencyID;
		///期货公司银行编码
		TThostFtdcBankCodingForFutureType	BrokerIDByBank;
		///银行密码标志
		TThostFtdcPwdFlagType	BankPwdFlag;
		///期货资金密码核对标志
		TThostFtdcPwdFlagType	SecuPwdFlag;
		///交易ID
		TThostFtdcTIDType	TID;
		///摘要
		TThostFtdcDigestType	Digest;
		///错误代码
		TThostFtdcErrorIDType	ErrorID;
		///错误信息
		TThostFtdcErrorMsgType	ErrorMsg;
		///长客户姓名
		TThostFtdcLongIndividualNameType	LongCustomerName;
	};

	///二级代理操作员银期权限
	struct CThostFtdcSecAgentACIDMapField
	{
		///经纪公司代码
		TThostFtdcBrokerIDType	BrokerID;
		///用户代码
		TThostFtdcUserIDType	UserID;
		///资金账户
		TThostFtdcAccountIDType	AccountID;
		///币种
		TThostFtdcCurrencyIDType	CurrencyID;
		///境外中介机构资金帐号
		TThostFtdcAccountIDType	BrokerSecAgentID;
	};

	///二级代理操作员银期权限查询
	struct CThostFtdcQrySecAgentACIDMapField
	{
		///经纪公司代码
		TThostFtdcBrokerIDType	BrokerID;
		///用户代码
		TThostFtdcUserIDType	UserID;
		///资金账户
		TThostFtdcAccountIDType	AccountID;
		///币种
		TThostFtdcCurrencyIDType	CurrencyID;
	};

	///灾备中心交易权限
	struct CThostFtdcUserRightsAssignField
	{
		///应用单元代码
		TThostFtdcBrokerIDType	BrokerID;
		///用户代码
		TThostFtdcUserIDType	UserID;
		///交易中心代码
		TThostFtdcDRIdentityIDType	DRIdentityID;
	};

	///经济公司是否有在本标示的交易权限
	struct CThostFtdcBrokerUserRightAssignField
	{
		///应用单元代码
		TThostFtdcBrokerIDType	BrokerID;
		///交易中心代码
		TThostFtdcDRIdentityIDType	DRIdentityID;
		///能否交易
		TThostFtdcBoolType	Tradeable;
	};

	///灾备交易转换报文
	struct CThostFtdcDRTransferField
	{
		///原交易中心代码
		TThostFtdcDRIdentityIDType	OrigDRIdentityID;
		///目标交易中心代码
		TThostFtdcDRIdentityIDType	DestDRIdentityID;
		///原应用单元代码
		TThostFtdcBrokerIDType	OrigBrokerID;
		///目标易用单元代码
		TThostFtdcBrokerIDType	DestBrokerID;
	};

	///Fens用户信息
	struct CThostFtdcFensUserInfoField
	{
		///经纪公司代码
		TThostFtdcBrokerIDType	BrokerID;
		///用户代码
		TThostFtdcUserIDType	UserID;
		///登录模式
		TThostFtdcLoginModeType	LoginMode;
	};

	///当前银期所属交易中心
	struct CThostFtdcCurrTransferIdentityField
	{
		///交易中心代码
		TThostFtdcDRIdentityIDType	IdentityID;
	};

	///禁止登录用户
	struct CThostFtdcLoginForbiddenUserField
	{
		///经纪公司代码
		TThostFtdcBrokerIDType	BrokerID;
		///用户代码
		TThostFtdcUserIDType	UserID;
		///IP地址
		TThostFtdcIPAddressType	IPAddress;
	};

	///查询禁止登录用户
	struct CThostFtdcQryLoginForbiddenUserField
	{
		///经纪公司代码
		TThostFtdcBrokerIDType	BrokerID;
		///用户代码
		TThostFtdcUserIDType	UserID;
	};

	///UDP组播组信息
	struct CThostFtdcMulticastGroupInfoField
	{
		///组播组IP地址
		TThostFtdcIPAddressType	GroupIP;
		///组播组IP端口
		TThostFtdcIPPortType	GroupPort;
		///源地址
		TThostFtdcIPAddressType	SourceIP;
	};

	///资金账户基本准备金
	struct CThostFtdcTradingAccountReserveField
	{
		///经纪公司代码
		TThostFtdcBrokerIDType	BrokerID;
		///投资者帐号
		TThostFtdcAccountIDType	AccountID;
		///基本准备金
		TThostFtdcMoneyType	Reserve;
		///币种代码
		TThostFtdcCurrencyIDType	CurrencyID;
	};

	///银期预约开户确认请求
	struct CThostFtdcReserveOpenAccountConfirmField
	{
		///业务功能码
		TThostFtdcTradeCodeType	TradeCode;
		///银行代码
		TThostFtdcBankIDType	BankID;
		///银行分支机构代码
		TThostFtdcBankBrchIDType	BankBranchID;
		///期商代码
		TThostFtdcBrokerIDType	BrokerID;
		///期商分支机构代码
		TThostFtdcFutureBranchIDType	BrokerBranchID;
		///交易日期
		TThostFtdcTradeDateType	TradeDate;
		///交易时间
		TThostFtdcTradeTimeType	TradeTime;
		///银行流水号
		TThostFtdcBankSerialType	BankSerial;
		///交易系统日期 
		TThostFtdcTradeDateType	TradingDay;
		///银期平台消息流水号
		TThostFtdcSerialType	PlateSerial;
		///最后分片标志
		TThostFtdcLastFragmentType	LastFragment;
		///会话号
		TThostFtdcSessionIDType	SessionID;
		///客户姓名
		TThostFtdcLongIndividualNameType	CustomerName;
		///证件类型
		TThostFtdcIdCardTypeType	IdCardType;
		///证件号码
		TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
		///性别
		TThostFtdcGenderType	Gender;
		///国家代码
		TThostFtdcCountryCodeType	CountryCode;
		///客户类型
		TThostFtdcCustTypeType	CustType;
		///地址
		TThostFtdcAddressType	Address;
		///邮编
		TThostFtdcZipCodeType	ZipCode;
		///电话号码
		TThostFtdcTelephoneType	Telephone;
		///手机
		TThostFtdcMobilePhoneType	MobilePhone;
		///传真
		TThostFtdcFaxType	Fax;
		///电子邮件
		TThostFtdcEMailType	EMail;
		///资金账户状态
		TThostFtdcMoneyAccountStatusType	MoneyAccountStatus;
		///银行帐号
		TThostFtdcBankAccountType	BankAccount;
		///银行密码
		TThostFtdcPasswordType	BankPassWord;
		///安装编号
		TThostFtdcInstallIDType	InstallID;
		///验证客户证件号码标志
		TThostFtdcYesNoIndicatorType	VerifyCertNoFlag;
		///币种代码
		TThostFtdcCurrencyIDType	CurrencyID;
		///摘要
		TThostFtdcDigestType	Digest;
		///银行帐号类型
		TThostFtdcBankAccTypeType	BankAccType;
		///期货公司银行编码
		TThostFtdcBankCodingForFutureType	BrokerIDByBank;
		///交易ID
		TThostFtdcTIDType	TID;
		///投资者帐号
		TThostFtdcAccountIDType	AccountID;
		///期货密码
		TThostFtdcPasswordType	Password;
		///预约开户银行流水号
		TThostFtdcBankSerialType	BankReserveOpenSeq;
		///预约开户日期
		TThostFtdcTradeDateType	BookDate;
		///预约开户验证密码
		TThostFtdcPasswordType	BookPsw;
		///错误代码
		TThostFtdcErrorIDType	ErrorID;
		///错误信息
		TThostFtdcErrorMsgType	ErrorMsg;
	};

	///银期预约开户
	struct CThostFtdcReserveOpenAccountField
	{
		///业务功能码
		TThostFtdcTradeCodeType	TradeCode;
		///银行代码
		TThostFtdcBankIDType	BankID;
		///银行分支机构代码
		TThostFtdcBankBrchIDType	BankBranchID;
		///期商代码
		TThostFtdcBrokerIDType	BrokerID;
		///期商分支机构代码
		TThostFtdcFutureBranchIDType	BrokerBranchID;
		///交易日期
		TThostFtdcTradeDateType	TradeDate;
		///交易时间
		TThostFtdcTradeTimeType	TradeTime;
		///银行流水号
		TThostFtdcBankSerialType	BankSerial;
		///交易系统日期 
		TThostFtdcTradeDateType	TradingDay;
		///银期平台消息流水号
		TThostFtdcSerialType	PlateSerial;
		///最后分片标志
		TThostFtdcLastFragmentType	LastFragment;
		///会话号
		TThostFtdcSessionIDType	SessionID;
		///客户姓名
		TThostFtdcLongIndividualNameType	CustomerName;
		///证件类型
		TThostFtdcIdCardTypeType	IdCardType;
		///证件号码
		TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
		///性别
		TThostFtdcGenderType	Gender;
		///国家代码
		TThostFtdcCountryCodeType	CountryCode;
		///客户类型
		TThostFtdcCustTypeType	CustType;
		///地址
		TThostFtdcAddressType	Address;
		///邮编
		TThostFtdcZipCodeType	ZipCode;
		///电话号码
		TThostFtdcTelephoneType	Telephone;
		///手机
		TThostFtdcMobilePhoneType	MobilePhone;
		///传真
		TThostFtdcFaxType	Fax;
		///电子邮件
		TThostFtdcEMailType	EMail;
		///资金账户状态
		TThostFtdcMoneyAccountStatusType	MoneyAccountStatus;
		///银行帐号
		TThostFtdcBankAccountType	BankAccount;
		///银行密码
		TThostFtdcPasswordType	BankPassWord;
		///安装编号
		TThostFtdcInstallIDType	InstallID;
		///验证客户证件号码标志
		TThostFtdcYesNoIndicatorType	VerifyCertNoFlag;
		///币种代码
		TThostFtdcCurrencyIDType	CurrencyID;
		///摘要
		TThostFtdcDigestType	Digest;
		///银行帐号类型
		TThostFtdcBankAccTypeType	BankAccType;
		///期货公司银行编码
		TThostFtdcBankCodingForFutureType	BrokerIDByBank;
		///交易ID
		TThostFtdcTIDType	TID;
		///预约开户状态
		TThostFtdcReserveOpenAccStasType	ReserveOpenAccStas;
		///错误代码
		TThostFtdcErrorIDType	ErrorID;
		///错误信息
		TThostFtdcErrorMsgType	ErrorMsg;
	};

}