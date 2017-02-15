/////////////////////////////////////////////////////////////////////////
/// 上期技术 CTP C++ => .Net Framework Adapter
/// 本文件修改自海风版C#接口struct.cs文件，十分感谢 
/// http://www.oceantribe.org/vb/showthread.php?t=26711
/////////////////////////////////////////////////////////////////////////

#pragma once

#include "DataType.h"

using namespace System;
using namespace System::Runtime::InteropServices;

namespace CTP
{
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
		/// 发起方流水号
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
		/// 操作员
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
		String^ OperNo;
		/// <summary>
		/// 交易设备类型
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 3)]
		String^ DeviceID;
		/// <summary>
		/// 记录数
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 7)]
		String^ RecordNum;
		/// <summary>
		/// 会话编号
		/// </summary>
		int SessionID;
		/// <summary>
		/// 请求编号
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
		EnumValueMethodType	ValueMethod;
		/// <summary>
		///是否跟随交易所收取
		/// </summary>
		int	IsRelative;
	};
	/// <summary>
	///当前期权合约保证金调整系数	
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct CThostFtdcOptionInstrMarginAdjustField
	{
		/// <summary>
		///合约代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^	InstrumentID;
		/// <summary>
		///投资者范围
		/// </summary>
		EnumInvestorRangeTypeType	InvestorRange;
		/// <summary>
		///经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		/// <summary>
		///投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^	InvestorID;
		/// <summary>
		///投机空头保证金调整系数
		/// </summary>
		double	SShortMarginRatioByMoney;
		/// <summary>
		///投机空头保证金调整系数
		/// </summary>
		double	SShortMarginRatioByVolume;
		/// <summary>
		///保值空头保证金调整系数
		/// </summary>
		double	HShortMarginRatioByMoney;
		/// <summary>
		///保值空头保证金调整系数
		/// </summary>
		double	HShortMarginRatioByVolume;
		/// <summary>
		///套利空头保证金调整系数
		/// </summary>
		double	AShortMarginRatioByMoney;
		/// <summary>
		///套利空头保证金调整系数
		/// </summary>
		double	AShortMarginRatioByVolume;
		/// <summary>
		///是否跟随交易所收取
		/// </summary>
		int	IsRelative;
		/// <summary>
		///做市商空头保证金调整系数
		/// </summary>
		double	MShortMarginRatioByMoney;
		/// <summary>
		///做市商空头保证金调整系数
		/// </summary>
		double	MShortMarginRatioByVolume;
	};
	/// <summary>
	///当前期权合约手续费的详细内容
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct CThostFtdcOptionInstrCommRateField
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
		/// <summary>
		///执行手续费率
		/// </summary>
		double	StrikeRatioByMoney;
		/// <summary>
		///执行手续费
		/// </summary>
		double	StrikeRatioByVolume;
	};
	/// <summary>
	///期权交易成本
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct CThostFtdcOptionInstrTradeCostField
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
		/// 投机套保标志
		/// </summary>
		EnumHedgeFlagType HedgeFlag;
		/// <summary>
		///期权合约保证金不变部分
		/// </summary>
		double	FixedMargin;
		/// <summary>
		///期权合约最小保证金
		/// </summary>
		double	MiniMargin;
		/// <summary>
		///期权合约权利金
		/// </summary>
		double	Royalty;
		/// <summary>
		///交易所期权合约保证金不变部分
		/// </summary>
		double	ExchFixedMargin;
		/// <summary>
		///交易所期权合约最小保证金
		/// </summary>
		double	ExchMiniMargin;
	};
	/// <summary>
	///期权交易成本查询
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct CThostFtdcQryOptionInstrTradeCostField
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
		/// 投机套保标志
		/// </summary>
		EnumHedgeFlagType HedgeFlag;
		/// <summary>
		///期权合约报价
		/// </summary>
		double	InputPrice;
		/// <summary>
		///标的价格,填0则用昨结算价
		/// </summary>
		double	UnderlyingPrice;
	};
	/// <summary>
	///期权手续费率查询
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct CThostFtdcQryOptionInstrCommRateField
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
	};
	/// <summary>
	///股指现货指数
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct CThostFtdcIndexPriceField
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
		///指数现货收盘价
		/// </summary>
		double	ClosePrice;
	};
	/// <summary>
	///输入的执行宣告
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct CThostFtdcInputExecOrderField
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
		///执行宣告引用
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^	ExecOrderRef;
		/// <summary>
		/// 用户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		///数量
		/// </summary>
		int	Volume;
		int SessionID;
		/// <summary>
		/// 请求编号
		/// </summary>
		int RequestID;
		/// <summary>
		/// 业务单元
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ BusinessUnit;
		/// <summary>
		///开平标志
		/// </summary>
		EnumOffsetFlagType	OffsetFlag;
		/// <summary>
		///投机套保标志
		/// </summary>
		EnumHedgeFlagType	HedgeFlag;
		/// <summary>
		///执行类型
		/// </summary>
		EnumActionTypeType	ActionType;
		/// <summary>
		///保留头寸申请的持仓方向
		/// </summary>
		EnumPosiDirectionType	PosiDirection;
		/// <summary>
		///期权行权后是否保留期货头寸的标记
		/// </summary>
		EnumExecOrderPositionFlagType	ReservePositionFlag;
		/// <summary>
		///期权行权后生成的头寸是否自动平仓
		/// </summary>
		EnumExecOrderCloseFlagType	CloseFlag;
		/// <summary>
		/// 交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
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
	///输入执行宣告操作
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct CThostFtdcInputExecOrderActionField
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
		///执行宣告操作引用
		/// </summary>
		int	ExecOrderActionRef;
		/// <summary>
		///执行宣告引用
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^	ExecOrderRef;
		/// <summary>
		/// 会话编号
		/// </summary>
		int SessionID;
		/// <summary>
		/// 请求编号
		/// </summary>
		int RequestID;
		/// <summary>
		///前置编号
		/// </summary>
		int	FrontID;
		/// <summary>
		///交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	ExchangeID;
		/// <summary>
		///执行宣告操作编号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^	ExecOrderSysID;
		/// <summary>
		///操作标志
		/// </summary>
		EnumActionFlagType	ActionFlag;
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
	///执行宣告
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct CThostFtdcExecOrderField
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
		///执行宣告引用
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^	ExecOrderRef;
		/// <summary>
		/// 用户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// 数量
		/// </summary>
		int VolumeTotalOriginal;
		/// <summary>
		/// 请求编号
		/// </summary>
		int RequestID;
		/// <summary>
		/// 业务单元
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ BusinessUnit;
		/// <summary>
		/// 开平标志
		/// </summary>
		EnumOffsetFlagType OffsetFlag;
		/// <summary>
		/// 投机套保标志
		/// </summary>
		EnumHedgeFlagType HedgeFlag;
		/// <summary>
		///执行类型
		/// </summary>
		EnumActionTypeType	ActionType;
		/// <summary>
		///保留头寸申请的持仓方向
		/// </summary>
		EnumPosiDirectionType	PosiDirection;
		/// <summary>
		///期权行权后是否保留期货头寸的标记
		/// </summary>
		EnumExecOrderPositionFlagType	ReservePositionFlag;
		/// <summary>
		///期权行权后生成的头寸是否自动平仓
		/// </summary>
		EnumExecOrderCloseFlagType	CloseFlag;
		/// <summary>
		///本地执行宣告编号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^	ExecOrderLocalID;
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
		///安装编号
		/// </summary>
		int	InstallID;
		/// <summary>
		///执行宣告提交状态
		/// </summary>
		EnumOrderSubmitStatusType OrderSubmitStatus;
		/// <summary>
		///报单提示序号
		/// </summary>
		int OrderSubmitStatus;
		/// <summary>
		///报单提示序号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ OrderSubmitStatus;
		/// <summary>
		///结算编号
		/// </summary>
		int SettlementID;
		/// <summary>
		///执行宣告编号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ ExecOrderSysID;
		/// <summary>
		///报单日期
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ InsertDate;
		/// <summary>
		///插入时间
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ InsertTime;
		/// <summary>
		///撤销时间
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ CancelTime;
		/// <summary>
		///执行结果
		/// </summary>
		EnumExecResultType ExecResult;
		/// <summary>
		///结算会员编号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ClearingPartID;
		/// <summary>
		///序号
		/// </summary>
		int SequenceNo;
		/// <summary>
		///前置编号
		/// </summary>
		int FrontID;
		/// <summary>
		///会话编号
		/// </summary>
		int SessionID;
		/// <summary>
		///用户端产品信息
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ UserProductInfo;
		/// <summary>
		///状态信息
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^ StatusMsg;
		/// <summary>
		///操作用户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ ActiveUserID;
		///经纪公司报单编号
		TThostFtdcSequenceNoType	BrokerExecOrderSeq;
		/// <summary>
		///营业部编号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ BranchID;
		/// <summary>
		///投资单元代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
		String^ InvestUnitID;
		/// <summary>
		///资金账号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ AccountID;
		/// <summary>
		///币种代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ CurrencyID;
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
	///执行宣告操作
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct CThostFtdcExecOrderActionField
	{
		/// <summary>
		///经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		///投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		///执行宣告操作引用
		/// </summary>
		int ExecOrderActionRef;
		/// <summary>
		///执行宣告引用
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ ExecOrderRef;
		/// <summary>
		///请求编号
		/// </summary>
		int RequestID;
		/// <summary>
		///前置编号
		/// </summary>
		int FrontID;
		/// <summary>
		///会话编号
		/// </summary>
		int SessionID;
		/// <summary>
		///交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		///执行宣告操作编号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ ExecOrderSysID;
		/// <summary>
		///操作标志
		/// </summary>
		EnumActionFlagType ActionFlag;
		/// <summary>
		///操作日期
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ActionDate;
		/// <summary>
		///操作时间
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ActionTime;
		/// <summary>
		/// 交易所交易员代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ TraderID;
		/// <summary>
		///安装编号
		/// </summary>
		int	InstallID;
		/// <summary>
		///本地执行宣告编号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ ExecOrderLocalID;
		/// <summary>
		///操作本地编号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ ActionLocalID;
		/// <summary>
		///会员代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ParticipantID;
		/// <summary>
		///客户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ClientID;
		/// <summary>
		///业务单元
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ BusinessUnit;
		/// <summary>
		///报单操作状态
		/// </summary>
		EnumOrderActionStatusType OrderActionStatus;
		/// <summary>
		///用户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		///执行类型
		/// </summary>
		EnumActionTypeType ActionType;
		/// <summary>
		///状态信息
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^ StatusMsg;
		/// <summary>
		///合约代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		///营业部编号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ BranchID;
		/// <summary>
		///投资单元代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
		String^ InvestUnitID;
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
	///执行宣告查询
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct CThostFtdcQryExecOrderField
	{
		/// <summary>
		///经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		///投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		///合约代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		///交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
///执行宣告编号
/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ ExecOrderSysID;
		/// <summary>
		///开始时间
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ InsertTimeStart;
		/// <summary>
		///结束时间
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ InsertTimeEnd;
	};
	/// <summary>
	///交易所执行宣告信息
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct CThostFtdcExchangeExecOrderField
	{
		/// <summary>
		///数量
		/// </summary>
		int Volume;
		/// <summary>
		///请求编号
		/// </summary>
		int RequestID;
		/// <summary>
		///业务单元
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ BusinessUnit;
		/// <summary>
		///开平标志
		/// </summary>
		EnumOffsetFlagEnType OffsetFlag;
		/// <summary>
		///投机套保标志
		/// </summary>
		EnumHedgeFlagType HedgeFlag;
		/// <summary>
		///执行类型
		/// </summary>
		EnumActionTypeType ActionType;
		/// <summary>
		///保留头寸申请的持仓方向
		/// </summary>
		EnumPosiDirectionType PosiDirection;
		/// <summary>
		///期权行权后是否保留期货头寸的标记
		/// </summary>
		EnumExecOrderPositionFlagType ReservePositionFlag;
		/// <summary>
		///期权行权后生成的头寸是否自动平仓
		/// </summary>
		EnumExecOrderCloseFlagType CloseFlag;
		/// <summary>
		///本地执行宣告编号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ ExecOrderLocalID;
		/// <summary>
		///交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		///会员代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ParticipantID;
		/// <summary>
		///客户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ClientID;
		/// <summary>
		///合约在交易所的代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ ExchangeInstID;
		/// <summary>
		/// 交易所交易员代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ TraderID;
		/// <summary>
		///安装编号
		/// </summary>
		int	InstallID;
		/// <summary>
		///执行宣告提交状态
		/// </summary>
		EnumOrderSubmitStatusType OrderSubmitStatus;
		/// <summary>
		///报单提示序号
		/// </summary>
		int OrderSubmitStatus;
		/// <summary>
		///报单提示序号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ OrderSubmitStatus;
		/// <summary>
		///结算编号
		/// </summary>
		int SettlementID;
		/// <summary>
		///执行宣告编号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ ExecOrderSysID;
		/// <summary>
		///报单日期
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ InsertDate;
		/// <summary>
		///插入时间
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ InsertTime;
		/// <summary>
		///撤销时间
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ CancelTime;
		/// <summary>
		///执行结果
		/// </summary>
		EnumExecResultType ExecResult;
		/// <summary>
		///结算会员编号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ClearingPartID;
		/// <summary>
		///序号
		/// </summary>
		int SequenceNo;
		/// <summary>
		///营业部编号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ BranchID;
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
	///交易所执行宣告查询
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct  CThostFtdcQryExchangeExecOrderField
	{
		/// <summary>
		///会员代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ParticipantID;
		/// <summary>
		///客户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ClientID;
		/// <summary>
		///合约在交易所的代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ ExchangeInstID;
		/// <summary>
		///交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// 交易所交易员代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ TraderID;
	};
	/// <summary>
	///执行宣告操作查询
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct  CThostFtdcQryExecOrderActionField
	{
		/// <summary>
		///经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		///投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		///交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
	};
	/// <summary>
	///交易所执行宣告操作
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct  CThostFtdcExchangeExecOrderActionField
	{
		/// <summary>
		///交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		///执行宣告操作编号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ ExecOrderSysID;
		/// <summary>
		///操作标志
		/// </summary>
		EnumActionFlagType ActionFlag;
		/// <summary>
		///操作日期
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ActionDate;
		/// <summary>
		///操作时间
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ActionTime;
		/// <summary>
		/// 交易所交易员代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ TraderID;
		/// <summary>
		///安装编号
		/// </summary>
		int	InstallID;
		/// <summary>
		///本地执行宣告编号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ ExecOrderLocalID;
		/// <summary>
		///操作本地编号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ ActionLocalID;
		/// <summary>
		///会员代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ParticipantID;
		/// <summary>
		///客户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ClientID;
		/// <summary>
		///业务单元
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ BusinessUnit;
		/// <summary>
		///报单操作状态
		/// </summary>
		EnumOrderActionStatusType OrderActionStatus;
		/// <summary>
		///用户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		///执行类型
		/// </summary>
		EnumActionTypeType ActionType;
		/// <summary>
		///营业部编号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ BranchID;
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
	///交易所执行宣告操作查询
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct  CThostFtdcQryExchangeExecOrderActionField
	{
		/// <summary>
		///会员代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ParticipantID;
		/// <summary>
		///客户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ClientID;
		/// <summary>
		///交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// 交易所交易员代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ TraderID;
	};
	/// <summary>
	///错误执行宣告
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct  CThostFtdcErrExecOrderField
	{
		/// <summary>
		///经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		///投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		///合约代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		///执行宣告引用
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ ExecOrderRef;
		/// <summary>
		///用户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		///数量
		/// </summary>
		int Volume;
		/// <summary>
		///请求编号
		/// </summary>
		int RequestID;
		/// <summary>
		///业务单元
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ BusinessUnit;
		/// <summary>
		///开平标志
		/// </summary>
		EnumOffsetFlagEnType OffsetFlag;
		/// <summary>
		///投机套保标志
		/// </summary>
		EnumHedgeFlagType HedgeFlag;
		/// <summary>
		///执行类型
		/// </summary>
		EnumActionTypeType ActionType;
		/// <summary>
		///保留头寸申请的持仓方向
		/// </summary>
		EnumPosiDirectionType PosiDirection;
		/// <summary>
		///期权行权后是否保留期货头寸的标记
		/// </summary>
		EnumExecOrderPositionFlagType ReservePositionFlag;
		/// <summary>
		///期权行权后生成的头寸是否自动平仓
		/// </summary>
		EnumExecOrderCloseFlagType CloseFlag;
		/// <summary>
		///交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		///投资单元代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
		String^ InvestUnitID;
		/// <summary>
		///资金账号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ AccountID;
		/// <summary>
		///币种代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ CurrencyID;
		///交易编码
		TThostFtdcClientIDType	ClientID;
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
		/// <summary>
		///错误代码
		/// </summary>
		int ErrorID;
		/// <summary>
		///错误信息
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^ ErrorMsg;
	};
	/// <summary>
	///查询错误执行宣告
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct  CThostFtdcQryErrExecOrderField
	{
		/// <summary>
		///经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		///投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
	};

	/// <summary>
	///错误执行宣告操作
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct  CThostFtdcErrExecOrderActionField
	{
		/// <summary>
		///经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		///投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		///执行宣告操作引用
		/// </summary>
		int ExecOrderActionRef;
		/// <summary>
		///执行宣告引用
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ ExecOrderRef;
		/// <summary>
		///请求编号
		/// </summary>
		int RequestID;
		/// <summary>
		///前置编号
		/// </summary>
		int FrontID;
		/// <summary>
		///会话编号
		/// </summary>
		int SessionID;
		/// <summary>
		///交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		///执行宣告操作编号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ ExecOrderSysID;
		/// <summary>
		///操作标志
		/// </summary>
		EnumActionFlagType ActionFlag;
		/// <summary>
		///用户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		///合约代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		///投资单元代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
		String^ InvestUnitID;
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
		/// <summary>
		///错误代码
		/// </summary>
		int ErrorID;
		/// <summary>
		///错误信息
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^ ErrorMsg;
	};

	/// <summary>
	///查询错误执行宣告操作
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct  CThostFtdcQryErrExecOrderActionField
	{
		/// <summary>
		///经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		///投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
	};

	/// <summary>
	///投资者期权合约交易权限
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct  CThostFtdcOptionInstrTradingRightField
	{
		/// <summary>
		///合约代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		///投资者范围
		TThostFtdcInvestorRangeType	InvestorRange;
		/// <summary>
		///经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		///投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		///买卖方向
		/// </summary>
		EnumDirectionType Direction;
		/// <summary>
		///交易权限
		/// </summary>
		EnumTradingRightType TradingRight;
	};

	/// <summary>
	///查询期权合约交易权限
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct  CThostFtdcQryOptionInstrTradingRightField
	{
		/// <summary>
		///经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		///投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		///合约代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		///买卖方向
		/// </summary>
		EnumDirectionType Direction;
	};

	/// <summary>
	///输入的询价
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct  CThostFtdcInputForQuoteField
	{
		/// <summary>
		///经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		///投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		///合约代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		///询价引用
		TThostFtdcOrderRefType	ForQuoteRef;
		/// <summary>
		///用户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		///交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		///投资单元代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
		String^ InvestUnitID;
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
	///询价
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct  CThostFtdcForQuoteField
	{
		/// <summary>
		///经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		///投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		///合约代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		///询价引用
		TThostFtdcOrderRefType	ForQuoteRef;
		/// <summary>
		///用户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		///本地询价编号
		TThostFtdcOrderLocalIDType	ForQuoteLocalID;
		/// <summary>
		///交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		///会员代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ParticipantID;
		/// <summary>
		///客户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ClientID;
		/// <summary>
		///合约在交易所的代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ ExchangeInstID;
		/// <summary>
		/// 交易所交易员代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ TraderID;
		/// <summary>
		///安装编号
		/// </summary>
		int	InstallID;
		/// <summary>
		///报单日期
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ InsertDate;
		/// <summary>
		///插入时间
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ InsertTime;
		/// <summary>
		///询价状态
		/// </summary>
		EnumForQuoteStatusType ForQuoteStatus;
		/// <summary>
		///前置编号
		/// </summary>
		int FrontID;
		/// <summary>
		///会话编号
		/// </summary>
		int SessionID;
		/// <summary>
		///状态信息
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^ StatusMsg;
		/// <summary>
		///操作用户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ ActiveUserID;
		/// <summary>
		///经纪公司询价编号
		/// </summary>
		int BrokerForQutoSeq;
		/// <summary>
		///投资单元代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
		String^ InvestUnitID;
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
	///询价查询
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct  CThostFtdcQryForQuoteField
	{
		/// <summary>
		///经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		///投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		///合约代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		///交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		///开始时间
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ InsertTimeStart;
		/// <summary>
		///结束时间
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ InsertTimeEnd;
	};

	/// <summary>
	///交易所询价信息
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct  CThostFtdcExchangeForQuoteField
	{
		///本地询价编号
		TThostFtdcOrderLocalIDType	ForQuoteLocalID;
		/// <summary>
		///交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		///会员代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ParticipantID;
		/// <summary>
		///客户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ClientID;
		/// <summary>
		///合约在交易所的代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ ExchangeInstID;
		/// <summary>
		/// 交易所交易员代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ TraderID;
		/// <summary>
		///安装编号
		/// </summary>
		int	InstallID;
		/// <summary>
		///报单日期
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ InsertDate;
		/// <summary>
		///插入时间
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ InsertTime;
		/// <summary>
		///询价状态
		/// </summary>
		EnumForQuoteStatusType ForQuoteStatus;
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
	///交易所询价查询
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct  CThostFtdcQryExchangeForQuoteField
	{
		/// <summary>
		///会员代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ParticipantID;
		/// <summary>
		///客户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ClientID;
		/// <summary>
		///合约在交易所的代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ ExchangeInstID;
		/// <summary>
		///交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// 交易所交易员代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ TraderID;
	};

	/// <summary>
	///输入的报价
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct  CThostFtdcInputQuoteField
	{
		/// <summary>
		///经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		///投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		///合约代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		///报价引用
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ QuoteRef;
		/// <summary>
		///用户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		///卖价格
		/// </summary>
		double AskPrice;
		/// <summary>
		///买价格
		/// </summary>
		double BidPrice;
		/// <summary>
		///卖数量
		/// </summary>
		int AskVolume;
		/// <summary>
		///买数量
		/// </summary>
		int BidVolume;
		/// <summary>
		///请求编号
		/// </summary>
		int RequestID;
		/// <summary>
		///业务单元
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ BusinessUnit;
		/// <summary>
		///卖开平标志
		/// </summary>
		EnumOffsetFlagType AskOffsetFlag;
		/// <summary>
		///买开平标志
		/// </summary>
		EnumOffsetFlagType BidOffsetFlag;
		/// <summary>
		///卖投机套保标志
		/// </summary>
		EnumHedgeFlagType AskHedgeFlag;
		/// <summary>
		///买投机套保标志
		/// </summary>
		EnumHedgeFlagType BidHedgeFlag;
		/// <summary>
		///衍生卖报单引用
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ AskOrderRef;
		/// <summary>
		///衍生买报单引用
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ BidOrderRef;
		/// <summary>
		///应价编号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ ForQuoteSysID;
		/// <summary>
		///交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		///投资单元代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
		String^ InvestUnitID;
		///交易编码
		TThostFtdcClientIDType	ClientID;
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
	///输入报价操作
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct CThostFtdcInputQuoteActionField
	{
		/// <summary>
		///经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		///投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		///报价操作引用
		TThostFtdcOrderActionRefType	QuoteActionRef;
		/// <summary>
		///报价引用
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ QuoteRef;
		/// <summary>
		///请求编号
		/// </summary>
		int RequestID;
		/// <summary>
		///前置编号
		/// </summary>
		int FrontID;
		/// <summary>
		///会话编号
		/// </summary>
		int SessionID;
		/// <summary>
		///交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		///报价操作编号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ QuoteSysID;
		/// <summary>
		///操作标志
		/// </summary>
		EnumActionFlagType ActionFlag;
		/// <summary>
		///用户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		///合约代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		///投资单元代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
		String^ InvestUnitID;
		///交易编码
		TThostFtdcClientIDType	ClientID;
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
	///报价
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct CThostFtdcQuoteField
	{
		/// <summary>
		///经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		///投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		///合约代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		///报价引用
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ QuoteRef;
		/// <summary>
		///用户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		///卖价格
		/// </summary>
		double AskPrice;
		/// <summary>
		///买价格
		/// </summary>
		double BidPrice;
		/// <summary>
		///卖数量
		/// </summary>
		int AskVolume;
		/// <summary>
		///买数量
		/// </summary>
		int BidVolume;
		/// <summary>
		///请求编号
		/// </summary>
		int RequestID;
		/// <summary>
		///业务单元
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ BusinessUnit;
		/// <summary>
		///卖开平标志
		/// </summary>
		EnumOffsetFlagType AskOffsetFlag;
		/// <summary>
		///买开平标志
		/// </summary>
		EnumOffsetFlagType BidOffsetFlag;
		/// <summary>
		///卖投机套保标志
		/// </summary>
		EnumHedgeFlagType AskHedgeFlag;
		/// <summary>
		///买投机套保标志
		/// </summary>
		EnumHedgeFlagType BidHedgeFlag;
		/// <summary>
		///本地报价编号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ QuoteLocalID;
		/// <summary>
		///交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		///会员代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ParticipantID;
		/// <summary>
		///客户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ClientID;
		/// <summary>
		///合约在交易所的代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ ExchangeInstID;
		/// <summary>
		/// 交易所交易员代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ TraderID;
		/// <summary>
		///安装编号
		/// </summary>
		int	InstallID;
		/// <summary>
		///报价提示序号
		/// </summary>
		int NotifySequence;
		/// <summary>
		///报价提交状态
		/// </summary>
		EnumOrderSubmitStatusType OrderSubmitStatus;
		/// <summary>
		///报单提示序号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ OrderSubmitStatus;
		/// <summary>
		///结算编号
		/// </summary>
		int SettlementID;
		/// <summary>
		///报价编号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ QuoteSysID;
		/// <summary>
		///报单日期
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ InsertDate;
		/// <summary>
		///插入时间
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ InsertTime;
		/// <summary>
		///撤销时间
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ CancelTime;
		///报价状态
		TThostFtdcOrderStatusType	QuoteStatus;
		/// <summary>
		///结算会员编号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ClearingPartID;
		/// <summary>
		///序号
		/// </summary>
		int SequenceNo;
		/// <summary>
		///卖方报单编号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ AskOrderSysID;
		/// <summary>
		///买方报单编号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ BidOrderSysID;
		/// <summary>
		///前置编号
		/// </summary>
		int FrontID;
		/// <summary>
		///会话编号
		/// </summary>
		int SessionID;
		/// <summary>
		///用户端产品信息
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ UserProductInfo;
		/// <summary>
		///状态信息
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^ StatusMsg;
		/// <summary>
		///操作用户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ ActiveUserID;
		/// <summary>
		///经纪公司报价编号
		/// </summary>
		int BrokerQuoteSeq;
		/// <summary>
		///衍生卖报单引用
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ AskOrderRef;
		/// <summary>
		///衍生买报单引用
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ BidOrderRef;
		/// <summary>
		///应价编号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ ForQuoteSysID;
		/// <summary>
		///营业部编号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ BranchID;
		/// <summary>
		///投资单元代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
		String^ InvestUnitID;
		/// <summary>
		///资金账号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ AccountID;
		/// <summary>
		///币种代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ CurrencyID;
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
	///报价操作
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct CThostFtdcQuoteActionField
	{
		/// <summary>
		///经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		///投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		///报价操作引用
		TThostFtdcOrderActionRefType	QuoteActionRef;
		/// <summary>
		///报价引用
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ QuoteRef;
		/// <summary>
		///请求编号
		/// </summary>
		int RequestID;
		/// <summary>
		///前置编号
		/// </summary>
		int FrontID;
		/// <summary>
		///会话编号
		/// </summary>
		int SessionID;
		/// <summary>
		///交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		///报价操作编号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ QuoteSysID;
		/// <summary>
		///操作标志
		/// </summary>
		EnumActionFlagType ActionFlag;
		/// <summary>
		///操作日期
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ActionDate;
		/// <summary>
		///操作时间
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ActionTime;
		/// <summary>
		/// 交易所交易员代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ TraderID;
		/// <summary>
		///安装编号
		/// </summary>
		int	InstallID;
		/// <summary>
		///本地报价编号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ QuoteLocalID;
		/// <summary>
		///操作本地编号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ ActionLocalID;
		/// <summary>
		///会员代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ParticipantID;
		/// <summary>
		///客户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ClientID;
		/// <summary>
		///业务单元
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ BusinessUnit;
		/// <summary>
		///报单操作状态
		/// </summary>
		EnumOrderActionStatusType OrderActionStatus;
		/// <summary>
		///用户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		///状态信息
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^ StatusMsg;
		/// <summary>
		///合约代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		///营业部编号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ BranchID;
		/// <summary>
		///投资单元代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
		String^ InvestUnitID;
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
	///报价查询
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct CThostFtdcQryQuoteField
	{
		/// <summary>
		///经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		///投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		///合约代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		///交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		///报价编号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ QuoteSysID;
		/// <summary>
		///开始时间
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ InsertTimeStart;
		/// <summary>
		///结束时间
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ InsertTimeEnd;
	};

	/// <summary>
	///交易所报价信息
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct CThostFtdcExchangeQuoteField
	{
		/// <summary>
		///卖价格
		/// </summary>
		double AskPrice;
		/// <summary>
		///买价格
		/// </summary>
		double BidPrice;
		/// <summary>
		///卖数量
		/// </summary>
		int AskVolume;
		/// <summary>
		///买数量
		/// </summary>
		int BidVolume;
		/// <summary>
		///请求编号
		/// </summary>
		int RequestID;
		/// <summary>
		///业务单元
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ BusinessUnit;
		/// <summary>
		///卖开平标志
		/// </summary>
		EnumOffsetFlagType AskOffsetFlag;
		/// <summary>
		///买开平标志
		/// </summary>
		EnumOffsetFlagType BidOffsetFlag;
		/// <summary>
		///卖投机套保标志
		/// </summary>
		EnumHedgeFlagType AskHedgeFlag;
		/// <summary>
		///买投机套保标志
		/// </summary>
		EnumHedgeFlagType BidHedgeFlag;
		/// <summary>
		///本地报价编号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ QuoteLocalID;
		/// <summary>
		///交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		///会员代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ParticipantID;
		/// <summary>
		///客户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ClientID;
		/// <summary>
		///合约在交易所的代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ ExchangeInstID;
		/// <summary>
		/// 交易所交易员代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ TraderID;
		/// <summary>
		///安装编号
		/// </summary>
		int	InstallID;
		/// <summary>
		///报价提示序号
		/// </summary>
		int NotifySequence;
		/// <summary>
		///报价提交状态
		/// </summary>
		EnumOrderSubmitStatusType OrderSubmitStatus;
		/// <summary>
		///报单提示序号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ OrderSubmitStatus;
		/// <summary>
		///结算编号
		/// </summary>
		int SettlementID;
		/// <summary>
		///报价编号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ QuoteSysID;
		/// <summary>
		///报单日期
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ InsertDate;
		/// <summary>
		///插入时间
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ InsertTime;
		/// <summary>
		///撤销时间
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ CancelTime;
		///报价状态
		TThostFtdcOrderStatusType	QuoteStatus;
		/// <summary>
		///结算会员编号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ClearingPartID;
		/// <summary>
		///序号
		/// </summary>
		int SequenceNo;
		/// <summary>
		///卖方报单编号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ AskOrderSysID;
		/// <summary>
		///买方报单编号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ BidOrderSysID;
		/// <summary>
		///应价编号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ ForQuoteSysID;
		/// <summary>
		///营业部编号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ BranchID;
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
	///交易所报价查询
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct CThostFtdcQryExchangeQuoteField
	{
		/// <summary>
		///会员代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ParticipantID;
		/// <summary>
		///客户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ClientID;
		/// <summary>
		///合约在交易所的代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ ExchangeInstID;
		/// <summary>
		///交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// 交易所交易员代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ TraderID;
	};

	///报价操作查询
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct CThostFtdcQryQuoteActionField
	{
		/// <summary>
		///经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		///投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		///交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
	};

	/// <summary>
	///交易所报价操作
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct CThostFtdcExchangeQuoteActionField
	{
		/// <summary>
		///交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		///报价操作编号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ QuoteSysID;
		/// <summary>
		///操作标志
		/// </summary>
		EnumActionFlagType ActionFlag;
		/// <summary>
		///操作日期
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ActionDate;
		/// <summary>
		///操作时间
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ActionTime;
		/// <summary>
		/// 交易所交易员代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ TraderID;
		/// <summary>
		///安装编号
		/// </summary>
		int	InstallID;
		/// <summary>
		///本地报价编号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ QuoteLocalID;
		/// <summary>
		///操作本地编号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ ActionLocalID;
		/// <summary>
		///会员代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ParticipantID;
		/// <summary>
		///客户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ClientID;
		/// <summary>
		///业务单元
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ BusinessUnit;
		/// <summary>
		///报单操作状态
		/// </summary>
		EnumOrderActionStatusType OrderActionStatus;
		/// <summary>
		///用户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
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
	///交易所报价操作查询
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct CThostFtdcQryExchangeQuoteActionField
	{
		/// <summary>
		///会员代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ParticipantID;
		/// <summary>
		///客户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ClientID;
		/// <summary>
		///交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// 交易所交易员代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ TraderID;
	};

	/// <summary>
	///期权合约delta值
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct CThostFtdcOptionInstrDeltaField
	{
		/// <summary>
		///合约代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		///投资者范围
		TThostFtdcInvestorRangeType	InvestorRange;
		/// <summary>
		///经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		///投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		///Delta值
		TThostFtdcRatioType	Delta;
	};

	///发给做市商的询价请求
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct CThostFtdcForQuoteRspField
	{
		/// <summary>
///报单提示序号
/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ OrderSubmitStatus;
		/// <summary>
		///合约代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		///询价编号
		TThostFtdcOrderSysIDType	ForQuoteSysID;
		///询价时间
		TThostFtdcTimeType	ForQuoteTime;
		///业务日期
		TThostFtdcDateType	ActionDay;
		/// <summary>
		///交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
	};

	/// <summary>
	///当前期权合约执行偏移值的详细内容
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct CThostFtdcStrikeOffsetField
	{
		/// <summary>
		///合约代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		///投资者范围
		TThostFtdcInvestorRangeType	InvestorRange;
		/// <summary>
		///经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		///投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		///执行偏移值
		TThostFtdcMoneyType	Offset;
		///执行偏移类型
		TThostFtdcStrikeOffsetTypeType	OffsetType;
	};

	/// <summary>
	///期权执行偏移值查询
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct CThostFtdcQryStrikeOffsetField
	{
		/// <summary>
		///经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		///投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		///合约代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
	};

	/// <summary>
	///输入批量报单操作
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct CThostFtdcInputBatchOrderActionField
	{
		/// <summary>
		///经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		///投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		///报单操作引用
		TThostFtdcOrderActionRefType	OrderActionRef;
		/// <summary>
		///请求编号
		/// </summary>
		int RequestID;
		/// <summary>
		///前置编号
		/// </summary>
		int FrontID;
		/// <summary>
		///会话编号
		/// </summary>
		int SessionID;
		/// <summary>
		///交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		///用户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		///投资单元代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
		String^ InvestUnitID;
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
	///批量报单操作
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct CThostFtdcBatchOrderActionField
	{
		/// <summary>
		///经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		///投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		///报单操作引用
		TThostFtdcOrderActionRefType	OrderActionRef;
		/// <summary>
		///请求编号
		/// </summary>
		int RequestID;
		/// <summary>
		///前置编号
		/// </summary>
		int FrontID;
		/// <summary>
		///会话编号
		/// </summary>
		int SessionID;
		/// <summary>
		///交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		///操作日期
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ActionDate;
		/// <summary>
		///操作时间
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ActionTime;
		/// <summary>
		/// 交易所交易员代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ TraderID;
		/// <summary>
		///安装编号
		/// </summary>
		int	InstallID;
		/// <summary>
		///操作本地编号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ ActionLocalID;
		/// <summary>
		///会员代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ParticipantID;
		/// <summary>
		///客户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ClientID;
		/// <summary>
		///业务单元
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ BusinessUnit;
		/// <summary>
		///报单操作状态
		/// </summary>
		EnumOrderActionStatusType OrderActionStatus;
		/// <summary>
		///用户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		///状态信息
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^ StatusMsg;
		/// <summary>
		///投资单元代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
		String^ InvestUnitID;
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
	///交易所批量报单操作
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct CThostFtdcExchangeBatchOrderActionField
	{
		/// <summary>
		///交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		///操作日期
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ActionDate;
		/// <summary>
		///操作时间
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ActionTime;
		/// <summary>
		/// 交易所交易员代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ TraderID;
		/// <summary>
		///安装编号
		/// </summary>
		int	InstallID;
		/// <summary>
		///操作本地编号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ ActionLocalID;
		/// <summary>
		///会员代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ParticipantID;
		/// <summary>
		///客户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ClientID;
		/// <summary>
		///业务单元
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ BusinessUnit;
		/// <summary>
		///报单操作状态
		/// </summary>
		EnumOrderActionStatusType OrderActionStatus;
		/// <summary>
		///用户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
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
	///查询批量报单操作
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct CThostFtdcQryBatchOrderActionField
	{
		/// <summary>
		///经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		///投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		///交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
	};

	/// <summary>
	///组合合约安全系数
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct CThostFtdcCombInstrumentGuardField
	{
		/// <summary>
		///经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		///合约代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		///
		TThostFtdcRatioType	GuarantRatio;
	};

	/// <summary>
	///组合合约安全系数查询
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct CThostFtdcQryCombInstrumentGuardField
	{
		/// <summary>
		///经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		///合约代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
	};

	/// <summary>
	///输入的申请组合
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct CThostFtdcInputCombActionField
	{
		/// <summary>
		///经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		///投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		///合约代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		///组合引用
		TThostFtdcOrderRefType	CombActionRef;
		/// <summary>
		///用户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		///买卖方向
		/// </summary>
		EnumDirectionType Direction;
		/// <summary>
		///数量
		/// </summary>
		int Volume;
		///组合指令方向
		TThostFtdcCombDirectionType	CombDirection;
		/// <summary>
		///投机套保标志
		/// </summary>
		EnumHedgeFlagType HedgeFlag;
		/// <summary>
		///交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
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
	///申请组合
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct CThostFtdcCombActionField
	{
		/// <summary>
		///经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		///投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		///合约代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		///组合引用
		TThostFtdcOrderRefType	CombActionRef;
		/// <summary>
		///用户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		///买卖方向
		/// </summary>
		EnumDirectionType Direction;
		/// <summary>
		///数量
		/// </summary>
		int Volume;
		///组合指令方向
		TThostFtdcCombDirectionType	CombDirection;
		/// <summary>
		///投机套保标志
		/// </summary>
		EnumHedgeFlagType HedgeFlag;
		///本地申请组合编号
		TThostFtdcOrderLocalIDType	ActionLocalID;
		/// <summary>
		///交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		///会员代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ParticipantID;
		/// <summary>
		///客户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ClientID;
		/// <summary>
		///合约在交易所的代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ ExchangeInstID;
		/// <summary>
	/// 交易所交易员代码
	/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ TraderID;
		/// <summary>
		///安装编号
		/// </summary>
		int	InstallID;
		///组合状态
		TThostFtdcOrderActionStatusType	ActionStatus;
		/// <summary>
///报单提示序号
/// </summary>
		int OrderSubmitStatus;
		/// <summary>
///报单提示序号
/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ OrderSubmitStatus;
		/// <summary>
///结算编号
/// </summary>
		int SettlementID;
		/// <summary>
		///序号
		/// </summary>
		int SequenceNo;
		/// <summary>
		///前置编号
		/// </summary>
		int FrontID;
		/// <summary>
		///会话编号
		/// </summary>
		int SessionID;
		/// <summary>
		///用户端产品信息
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ UserProductInfo;
		/// <summary>
		///状态信息
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^ StatusMsg;
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
	///申请组合查询
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct CThostFtdcQryCombActionField
	{
		/// <summary>
		///经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		///投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		///合约代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		///交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
	};

	/// <summary>
	///交易所申请组合信息
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct CThostFtdcExchangeCombActionField
	{
		/// <summary>
		///买卖方向
		/// </summary>
		EnumDirectionType Direction;
		/// <summary>
		///数量
		/// </summary>
		int Volume;
		///组合指令方向
		TThostFtdcCombDirectionType	CombDirection;
		/// <summary>
		///投机套保标志
		/// </summary>
		EnumHedgeFlagType HedgeFlag;
		///本地申请组合编号
		TThostFtdcOrderLocalIDType	ActionLocalID;
		/// <summary>
		///交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		///会员代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ParticipantID;
		/// <summary>
		///客户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ClientID;
		/// <summary>
		///合约在交易所的代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ ExchangeInstID;
		/// <summary>
		/// 交易所交易员代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ TraderID;
		/// <summary>
		///安装编号
		/// </summary>
		int	InstallID;
		///组合状态
		TThostFtdcOrderActionStatusType	ActionStatus;
		/// <summary>
///报单提示序号
/// </summary>
		int OrderSubmitStatus;
		/// <summary>
///报单提示序号
/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ OrderSubmitStatus;
		/// <summary>
///结算编号
/// </summary>
		int SettlementID;
		/// <summary>
		///序号
		/// </summary>
		int SequenceNo;
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
	///交易所申请组合查询
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct CThostFtdcQryExchangeCombActionField
	{
		/// <summary>
		///会员代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ParticipantID;
		/// <summary>
		///客户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ClientID;
		/// <summary>
		///合约在交易所的代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ ExchangeInstID;
		/// <summary>
		///交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// 交易所交易员代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ TraderID;
	};

	/// <summary>
	///产品报价汇率
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct CThostFtdcProductExchRateField
	{
		///产品代码
		TThostFtdcInstrumentIDType	ProductID;
		///报价币种类型
		TThostFtdcCurrencyIDType	QuoteCurrencyID;
		///汇率
		TThostFtdcExchangeRateType	ExchangeRate;
	};

	/// <summary>
	///产品报价汇率查询
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct CThostFtdcQryProductExchRateField
	{
		///产品代码
		TThostFtdcInstrumentIDType	ProductID;
	};

	///查询询价价差参数
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct CThostFtdcQryForQuoteParamField
	{
		/// <summary>
		///经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		///合约代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		///交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
	};

	///询价价差参数
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct CThostFtdcForQuoteParamField
	{
		/// <summary>
		///经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		///合约代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		///交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		///最新价
		TThostFtdcPriceType	LastPrice;
		///价差
		TThostFtdcPriceType	PriceInterval;
	};

	/// <summary>
	///当前做市商期权合约手续费的详细内容
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct CThostFtdcMMOptionInstrCommRateField
	{
		/// <summary>
		///合约代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		///投资者范围
		TThostFtdcInvestorRangeType	InvestorRange;
		/// <summary>
		///经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		///投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		///开仓手续费率
		/// </summary>
		double OpenRatioByMoney;
		/// <summary>
		///开仓手续费
		/// </summary>
		double OpenRatioByVolume;
		/// <summary>
		///平仓手续费率
		/// </summary>
		double CloseRatioByMoney;
		/// <summary>
		///平仓手续费
		/// </summary>
		double CloseRatioByVolume;
		/// <summary>
		///平今手续费率
		/// </summary>
		double CloseTodayRatioByMoney;
		/// <summary>
		///平今手续费
		/// </summary>
		double CloseTodayRatioByVolume;
		///执行手续费率
		TThostFtdcRatioType	StrikeRatioByMoney;
		///执行手续费
		TThostFtdcRatioType	StrikeRatioByVolume;
	};

	/// <summary>
	///做市商期权手续费率查询
	/// </summary>
	[StructLay
	/// <summary>out(LayoutKind::Sequential)]
	public ref struct CThostFtdcQryMMOptionInstrCommRateField
	{
		/// <summary>
		///经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		///投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		///合约代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
	};

	/// <summary>
	///做市商合约手续费率
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct CThostFtdcMMInstrumentCommissionRateField
	{
		/// <summary>
		///合约代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		///投资者范围
		TThostFtdcInvestorRangeType	InvestorRange;
		/// <summary>
		///经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		///投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		///开仓手续费率
		/// </summary>
		double OpenRatioByMoney;
		/// <summary>
		///开仓手续费
		/// </summary>
		double OpenRatioByVolume;
		/// <summary>
		///平仓手续费率
		/// </summary>
		double CloseRatioByMoney;
		/// <summary>
		///平仓手续费
		/// </summary>
		double CloseRatioByVolume;
		/// <summary>
		///平今手续费率
		/// </summary>
		double CloseTodayRatioByMoney;
		/// <summary>
		///平今手续费
		/// </summary>
		double CloseTodayRatioByVolume;
	};

	/// <summary>
	///查询做市商合约手续费率
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct CThostFtdcQryMMInstrumentCommissionRateField
	{
		/// <summary>
		///经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		///投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		///合约代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
	};

	/// <summary>
	///当前报单手续费的详细内容
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct CThostFtdcInstrumentOrderCommRateField
	{
		/// <summary>
		///合约代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		///投资者范围
		TThostFtdcInvestorRangeType	InvestorRange;
		/// <summary>
		///经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		///投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		///投机套保标志
		/// </summary>
		EnumHedgeFlagType HedgeFlag;
		///报单手续费
		TThostFtdcRatioType	OrderCommByVolume;
		///撤单手续费
		TThostFtdcRatioType	OrderActionCommByVolume;
	};

	/// <summary>
	///报单手续费率查询
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct CThostFtdcQryInstrumentOrderCommRateField
	{
		/// <summary>
		///经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		///投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		///合约代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
	};

	/// <summary>
	///市场行情
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct CThostFtdcMarketDataField
	{
		/// <summary>
		///报单提示序号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ OrderSubmitStatus;
		/// <summary>
		///合约代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		///交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		///合约在交易所的代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ ExchangeInstID;
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
		/// <summary>
		///数量
		/// </summary>
		int Volume;
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

	/// <summary>
	///行情基础属性
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct CThostFtdcMarketDataBaseField
	{
		/// <summary>
		///报单提示序号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ OrderSubmitStatus;
		///上次结算价
		TThostFtdcPriceType	PreSettlementPrice;
		///昨收盘
		TThostFtdcPriceType	PreClosePrice;
		///昨持仓量
		TThostFtdcLargeVolumeType	PreOpenInterest;
		///昨虚实度
		TThostFtdcRatioType	PreDelta;
	};

	/// <summary>
	///行情静态属性
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct CThostFtdcMarketDataStaticField
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

	/// <summary>
	///行情最新成交属性
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct CThostFtdcMarketDataLastMatchField
	{
		///最新价
		TThostFtdcPriceType	LastPrice;
		/// <summary>
		///数量
		/// </summary>
		int Volume;
		///成交金额
		TThostFtdcMoneyType	Turnover;
		///持仓量
		TThostFtdcLargeVolumeType	OpenInterest;
	};

	/// <summary>
	///行情最优价属性
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct CThostFtdcMarketDataBestPriceField
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

	/// <summary>
	///行情申买二、三属性
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct CThostFtdcMarketDataBid23Field
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

	/// <summary>
	///行情申卖二、三属性
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct CThostFtdcMarketDataAsk23Field
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

	/// <summary>
	///行情申买四、五属性
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct CThostFtdcMarketDataBid45Field
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

	/// <summary>
	///行情申卖四、五属性
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct CThostFtdcMarketDataAsk45Field
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

	/// <summary>
	///行情更新时间属性
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct CThostFtdcMarketDataUpdateTimeField
	{
		/// <summary>
		///合约代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		///最后修改时间
		TThostFtdcTimeType	UpdateTime;
		///最后修改毫秒
		TThostFtdcMillisecType	UpdateMillisec;
		///业务日期
		TThostFtdcDateType	ActionDay;
	};

	/// <summary>
	///行情交易所代码属性
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct CThostFtdcMarketDataExchangeField
	{
		/// <summary>
		///交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
	};

	/// <summary>
	///指定的合约
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct CThostFtdcSpecificInstrumentField
	{
		/// <summary>
		///合约代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
	};

	/// <summary>
	///合约状态
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct CThostFtdcInstrumentStatusField
	{
		/// <summary>
		///交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		///合约在交易所的代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ ExchangeInstID;
		///结算组代码
		TThostFtdcSettlementGroupIDType	SettlementGroupID;
		/// <summary>
		///合约代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		///合约交易状态
		TThostFtdcInstrumentStatusType	InstrumentStatus;
		///交易阶段编号
		TThostFtdcTradingSegmentSNType	TradingSegmentSN;
		///进入本状态时间
		TThostFtdcTimeType	EnterTime;
		///进入本状态原因
		TThostFtdcInstStatusEnterReasonType	EnterReason;
	};

	/// <summary>
	///查询合约状态
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct CThostFtdcQryInstrumentStatusField
	{
		/// <summary>
		///交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		///合约在交易所的代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ ExchangeInstID;
	};

	/// <summary>
	///投资者账户
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct CThostFtdcInvestorAccountField
	{
		/// <summary>
		///经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		///投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		///投资者帐号
		TThostFtdcAccountIDType	AccountID;
		/// <summary>
		///币种代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ CurrencyID;
	};

	/// <summary>
	///浮动盈亏算法
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct CThostFtdcPositionProfitAlgorithmField
	{
		/// <summary>
		///经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		///投资者帐号
		TThostFtdcAccountIDType	AccountID;
		///盈亏算法
		TThostFtdcAlgorithmType	Algorithm;
		///备注
		TThostFtdcMemoType	Memo;
		/// <summary>
		///币种代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ CurrencyID;
	};

	/// <summary>
	///会员资金折扣
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct CThostFtdcDiscountField
	{
		/// <summary>
		///经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		///投资者范围
		TThostFtdcInvestorRangeType	InvestorRange;
		/// <summary>
		///投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		///资金折扣比例
		TThostFtdcRatioType	Discount;
	};

	/// <summary>
	///查询转帐银行
	/// </summary>
	struct CThostFtdcQryTransferBankField
	{
		///银行代码
		TThostFtdcBankIDType	BankID;
		///银行分中心代码
		TThostFtdcBankBrchIDType	BankBrchID;
	};

	/// <summary>
	///转帐银行
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct CThostFtdcTransferBankField
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

	/// <summary>
	///查询投资者持仓明细
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct CThostFtdcQryInvestorPositionDetailField
	{
		/// <summary>
		///经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		///投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		///合约代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
	};

	/// <summary>
	///投资者持仓明细
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct CThostFtdcInvestorPositionDetailField
	{
		/// <summary>
		///合约代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		///经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		///投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		///投机套保标志
		/// </summary>
		EnumHedgeFlagType HedgeFlag;
		///买卖
		TThostFtdcDirectionType	Direction;
		///开仓日期
		TThostFtdcDateType	OpenDate;
		///成交编号
		TThostFtdcTradeIDType	TradeID;
		/// <summary>
		///数量
		/// </summary>
		int Volume;
		///开仓价
		TThostFtdcPriceType	OpenPrice;
		/// <summary>
///报单提示序号
/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ OrderSubmitStatus;
		/// <summary>
///结算编号
/// </summary>
		int SettlementID;
		///成交类型
		TThostFtdcTradeTypeType	TradeType;
		///组合合约代码
		TThostFtdcInstrumentIDType	CombInstrumentID;
		/// <summary>
		///交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
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

	/// <summary>
	///资金账户口令域
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct CThostFtdcTradingAccountPasswordField
	{
		/// <summary>
		///经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		///投资者帐号
		TThostFtdcAccountIDType	AccountID;
		///密码
		TThostFtdcPasswordType	Password;
		/// <summary>
		///币种代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ CurrencyID;
	};

	/// <summary>
	///交易所行情报盘机
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct CThostFtdcMDTraderOfferField
	{
		/// <summary>
		///交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// 交易所交易员代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ TraderID;
		/// <summary>
		///会员代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ParticipantID;
		///密码
		TThostFtdcPasswordType	Password;
		/// <summary>
		///安装编号
		/// </summary>
		int	InstallID;
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
		/// <summary>
///报单提示序号
/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ OrderSubmitStatus;
		/// <summary>
		///经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		///本席位最大成交编号
		TThostFtdcTradeIDType	MaxTradeID;
		///本席位最大报单备拷
		TThostFtdcReturnCodeType	MaxOrderMessageReference;
	};

	/// <summary>
	///查询行情报盘机
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct CThostFtdcQryMDTraderOfferField
	{
		/// <summary>
		///交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		///会员代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ParticipantID;
		/// <summary>
		/// 交易所交易员代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ TraderID;
	};

	/// <summary>
	///查询客户通知
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct CThostFtdcQryNoticeField
	{
		/// <summary>
		///经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
	};

	/// <summary>
	///客户通知
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct CThostFtdcNoticeField
	{
		/// <summary>
		///经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		///消息正文
		TThostFtdcContentType	Content;
		///经纪公司通知内容序列号
		TThostFtdcSequenceLabelType	SequenceLabel;
	};

	///用户权限
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct CThostFtdcUserRightField
	{
		/// <summary>
		///经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		///用户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		///客户权限类型
		TThostFtdcUserRightTypeType	UserRightType;
		///是否禁止
		TThostFtdcBoolType	IsForbidden;
	};

	/// <summary>
	///查询结算信息确认域
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct  CThostFtdcQrySettlementInfoConfirmField
	{
		/// <summary>
		///经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		///投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
	};

	/// <summary>
	///装载结算信息
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct  CThostFtdcLoadSettlementInfoField
	{
		/// <summary>
		///经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
	};

	/// <summary>
	///经纪公司可提资金算法表
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct  CThostFtdcBrokerWithdrawAlgorithmField
	{
		/// <summary>
		///经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
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
		/// <summary>
		///币种代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ CurrencyID;
		///货币质押比率
		TThostFtdcRatioType	FundMortgageRatio;
		///权益算法
		TThostFtdcBalanceAlgorithmType	BalanceAlgorithm;
	};

	/// <summary>
	///资金账户口令变更域
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct  CThostFtdcTradingAccountPasswordUpdateV1Field
	{
		/// <summary>
		///经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		///投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		///原来的口令
		TThostFtdcPasswordType	OldPassword;
		///新的口令
		TThostFtdcPasswordType	NewPassword;
	};

	/// <summary>
	///资金账户口令变更域
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct  CThostFtdcTradingAccountPasswordUpdateField
	{
		/// <summary>
		///经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		///投资者帐号
		TThostFtdcAccountIDType	AccountID;
		///原来的口令
		TThostFtdcPasswordType	OldPassword;
		///新的口令
		TThostFtdcPasswordType	NewPassword;
		/// <summary>
		///币种代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ CurrencyID;
	};

	/// <summary>
	///查询组合合约分腿
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct  CThostFtdcQryCombinationLegField
	{
		///组合合约代码
		TThostFtdcInstrumentIDType	CombInstrumentID;
		///单腿编号
		TThostFtdcLegIDType	LegID;
		///单腿合约代码
		TThostFtdcInstrumentIDType	LegInstrumentID;
	};

	/// <summary>
	///查询组合合约分腿
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct  CThostFtdcQrySyncStatusField
	{
		/// <summary>
///报单提示序号
/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ OrderSubmitStatus;
	};

	/// <summary>
	///组合交易合约的单腿
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct  CThostFtdcCombinationLegField
	{
		///组合合约代码
		TThostFtdcInstrumentIDType	CombInstrumentID;
		///单腿编号
		TThostFtdcLegIDType	LegID;
		///单腿合约代码
		TThostFtdcInstrumentIDType	LegInstrumentID;
		/// <summary>
		///买卖方向
		/// </summary>
		EnumDirectionType Direction;
		///单腿乘数
		TThostFtdcLegMultipleType	LegMultiple;
		///派生层数
		TThostFtdcImplyLevelType	ImplyLevel;
	};

	/// <summary>
	///数据同步状态
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct  CThostFtdcSyncStatusField
	{
		/// <summary>
///报单提示序号
/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ OrderSubmitStatus;
		///数据同步状态
		TThostFtdcDataSyncStatusType	DataSyncStatus;
	};

	/// <summary>
	///查询联系人
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct  CThostFtdcQryLinkManField
	{
		/// <summary>
		///经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		///投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
	};

	/// <summary>
	///联系人
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct  CThostFtdcLinkManField
	{
		/// <summary>
		///经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		///投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
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

	/// <summary>
	///查询经纪公司用户事件
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct  CThostFtdcQryBrokerUserEventField
	{
		/// <summary>
		///经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		///用户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		///用户事件类型
		TThostFtdcUserEventTypeType	UserEventType;
	};

	/// <summary>
	///查询经纪公司用户事件
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct  CThostFtdcBrokerUserEventField
	{
		/// <summary>
		///经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		///用户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
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
		/// <summary>
		///投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		///合约代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
	};

	/// <summary>
	///查询签约银行请求
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct  CThostFtdcQryContractBankField
	{
		/// <summary>
		///经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		///银行代码
		TThostFtdcBankIDType	BankID;
		///银行分中心代码
		TThostFtdcBankBrchIDType	BankBrchID;
	};

	/// <summary>
	///查询签约银行响应
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct  CThostFtdcContractBankField
	{
		/// <summary>
		///经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		///银行代码
		TThostFtdcBankIDType	BankID;
		///银行分中心代码
		TThostFtdcBankBrchIDType	BankBrchID;
		///银行名称
		TThostFtdcBankNameType	BankName;
	};

	/// <summary>
	///投资者组合持仓明细
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct  CThostFtdcInvestorPositionCombineDetailField
	{
		/// <summary>
///报单提示序号
/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ OrderSubmitStatus;
		///开仓日期
		TThostFtdcDateType	OpenDate;
		/// <summary>
		///交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
///结算编号
/// </summary>
		int SettlementID;
		/// <summary>
		///经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		///投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		///组合编号
		TThostFtdcTradeIDType	ComTradeID;
		///撮合编号
		TThostFtdcTradeIDType	TradeID;
		/// <summary>
		///合约代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		///投机套保标志
		/// </summary>
		EnumHedgeFlagType HedgeFlag;
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

	/// <summary>
	///预埋单
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct  CThostFtdcParkedOrderField
	{
		/// <summary>
		///经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		///投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		///合约代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		///报单引用
		TThostFtdcOrderRefType	OrderRef;
		/// <summary>
		///用户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		///报单价格条件
		TThostFtdcOrderPriceTypeType	OrderPriceType;
		/// <summary>
		///买卖方向
		/// </summary>
		EnumDirectionType Direction;
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
		/// <summary>
		///业务单元
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ BusinessUnit;
		/// <summary>
		///请求编号
		/// </summary>
		int RequestID;
		///用户强评标志
		TThostFtdcBoolType	UserForceClose;
		/// <summary>
		///交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		///预埋报单编号
		TThostFtdcParkedOrderIDType	ParkedOrderID;
		///用户类型
		TThostFtdcUserTypeType	UserType;
		///预埋单状态
		TThostFtdcParkedOrderStatusType	Status;
		/// <summary>
		///错误代码
		/// </summary>
		int ErrorID;
		/// <summary>
		///错误信息
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^ ErrorMsg;
		///互换单标志
		TThostFtdcBoolType	IsSwapOrder;
		/// <summary>
		///资金账号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ AccountID;
		/// <summary>
		///币种代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ CurrencyID;
		///交易编码
		TThostFtdcClientIDType	ClientID;
		/// <summary>
		///投资单元代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
		String^ InvestUnitID;
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
	///输入预埋单操作
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct  CThostFtdcParkedOrderActionField
	{
		/// <summary>
		///经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		///投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		///报单操作引用
		TThostFtdcOrderActionRefType	OrderActionRef;
		///报单引用
		TThostFtdcOrderRefType	OrderRef;
		/// <summary>
		///请求编号
		/// </summary>
		int RequestID;
		/// <summary>
		///前置编号
		/// </summary>
		int FrontID;
		/// <summary>
		///会话编号
		/// </summary>
		int SessionID;
		/// <summary>
		///交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		///报单编号
		TThostFtdcOrderSysIDType	OrderSysID;
		/// <summary>
		///操作标志
		/// </summary>
		EnumActionFlagType ActionFlag;
		///价格
		TThostFtdcPriceType	LimitPrice;
		///数量变化
		TThostFtdcVolumeType	VolumeChange;
		/// <summary>
		///用户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		///合约代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		///预埋撤单单编号
		TThostFtdcParkedOrderActionIDType	ParkedOrderActionID;
		///用户类型
		TThostFtdcUserTypeType	UserType;
		///预埋撤单状态
		TThostFtdcParkedOrderStatusType	Status;
		/// <summary>
		///错误代码
		/// </summary>
		int ErrorID;
		/// <summary>
		///错误信息
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^ ErrorMsg;
		/// <summary>
		///投资单元代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
		String^ InvestUnitID;
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
	///查询预埋单
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct  CThostFtdcQryParkedOrderField
	{
		/// <summary>
		///经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		///投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		///合约代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		///交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
	};

	/// <summary>
	///查询预埋撤单
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct  CThostFtdcQryParkedOrderActionField
	{
		/// <summary>
		///经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		///投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		///合约代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		///交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
	};

	/// <summary>
	///删除预埋单
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct  CThostFtdcRemoveParkedOrderField
	{
		/// <summary>
		///经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		///投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		///预埋报单编号
		TThostFtdcParkedOrderIDType	ParkedOrderID;
	};

	/// <summary>
	///删除预埋撤单
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct  CThostFtdcRemoveParkedOrderActionField
	{
		/// <summary>
		///经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		///投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		///预埋撤单编号
		TThostFtdcParkedOrderActionIDType	ParkedOrderActionID;
	};

	/// <summary>
	///经纪公司可提资金算法表
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct  CThostFtdcInvestorWithdrawAlgorithmField
	{
		/// <summary>
		///经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		///投资者范围
		TThostFtdcInvestorRangeType	InvestorRange;
		/// <summary>
		///投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		///可提资金比例
		TThostFtdcRatioType	UsingRatio;
		/// <summary>
		///币种代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ CurrencyID;
		///货币质押比率
		TThostFtdcRatioType	FundMortgageRatio;
	};

	/// <summary>
	///查询组合持仓明细
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct  CThostFtdcQryInvestorPositionCombineDetailField
	{
		/// <summary>
		///经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		///投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		///组合持仓合约编码
		TThostFtdcInstrumentIDType	CombInstrumentID;
	};

	/// <summary>
	///成交均价
	/// </summary>
	[Str
	public ref struct  CThostFtdcMarketDataAveragePriceField
	{
		///当日均价
		TThostFtdcPriceType	AveragePrice;
	};

	/// <summary>
	///校验投资者密码
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct  CThostFtdcVerifyInvestorPasswordField
	{
		/// <summary>
		///经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		///投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		///密码
		TThostFtdcPasswordType	Password;
	};

	/// <summary>
	///用户IP
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct  CThostFtdcUserIPField
	{
		/// <summary>
		///经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		///用户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
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
		///IP地址掩码
		TThostFtdcIPAddressType	IPMask;
	};

	/// <summary>
	///用户事件通知信息
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct  CThostFtdcTradingNoticeInfoField
	{
		/// <summary>
		///经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		///投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		///发送时间
		TThostFtdcTimeType	SendTime;
		///消息正文
		TThostFtdcContentType	FieldContent;
		///序列系列号
		TThostFtdcSequenceSeriesType	SequenceSeries;
		///序列号
		TThostFtdcSequenceNoType	SequenceNo;
	};

	/// <summary>
	///用户事件通知
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct  CThostFtdcTradingNoticeField
	{
		/// <summary>
		///经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		///投资者范围
		TThostFtdcInvestorRangeType	InvestorRange;
		/// <summary>
		///投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		///序列系列号
		TThostFtdcSequenceSeriesType	SequenceSeries;
		/// <summary>
		///用户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		///发送时间
		TThostFtdcTimeType	SendTime;
		///序列号
		TThostFtdcSequenceNoType	SequenceNo;
		///消息正文
		TThostFtdcContentType	FieldContent;
	};

	/// <summary>
	///查询交易事件通知
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct  CThostFtdcQryTradingNoticeField
	{
		/// <summary>
		///经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		///投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
	};

	/// <summary>
	///查询错误报单
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct  CThostFtdcQryErrOrderField
	{
		/// <summary>
		///经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		///投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
	};

	/// <summary>
	///错误报单
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct  CThostFtdcErrOrderField
	{
		/// <summary>
		///经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		///投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		///合约代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		///报单引用
		TThostFtdcOrderRefType	OrderRef;
		/// <summary>
		///用户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		///报单价格条件
		TThostFtdcOrderPriceTypeType	OrderPriceType;
		/// <summary>
		///买卖方向
		/// </summary>
		EnumDirectionType Direction;
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
		/// <summary>
		///业务单元
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ BusinessUnit;
		/// <summary>
		///请求编号
		/// </summary>
		int RequestID;
		///用户强评标志
		TThostFtdcBoolType	UserForceClose;
		/// <summary>
		///错误代码
		/// </summary>
		int ErrorID;
		/// <summary>
		///错误信息
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^ ErrorMsg;
		///互换单标志
		TThostFtdcBoolType	IsSwapOrder;
		/// <summary>
		///交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		///投资单元代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
		String^ InvestUnitID;
		/// <summary>
		///资金账号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ AccountID;
		/// <summary>
		///币种代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ CurrencyID;
		///交易编码
		TThostFtdcClientIDType	ClientID;
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
	///查询错误报单操作
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct  CThostFtdcErrorConditionalOrderField
	{
		/// <summary>
		///经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		///投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		///合约代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		///报单引用
		TThostFtdcOrderRefType	OrderRef;
		/// <summary>
		///用户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		///报单价格条件
		TThostFtdcOrderPriceTypeType	OrderPriceType;
		/// <summary>
		///买卖方向
		/// </summary>
		EnumDirectionType Direction;
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
		/// <summary>
		///业务单元
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ BusinessUnit;
		/// <summary>
		///请求编号
		/// </summary>
		int RequestID;
		///本地报单编号
		TThostFtdcOrderLocalIDType	OrderLocalID;
		/// <summary>
		///交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		///会员代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ParticipantID;
		/// <summary>
		///客户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ClientID;
		/// <summary>
		///合约在交易所的代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ ExchangeInstID;
		/// <summary>
		/// 交易所交易员代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ TraderID;
		/// <summary>
		///安装编号
		/// </summary>
		int	InstallID;
		///报单提交状态
		TThostFtdcOrderSubmitStatusType	OrderSubmitStatus;
		/// <summary>
///报单提示序号
/// </summary>
		int OrderSubmitStatus;
		/// <summary>
///报单提示序号
/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ OrderSubmitStatus;
		/// <summary>
///结算编号
/// </summary>
		int SettlementID;
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
		/// <summary>
		///报单日期
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ InsertDate;
		///委托时间
		TThostFtdcTimeType	InsertTime;
		///激活时间
		TThostFtdcTimeType	ActiveTime;
		///挂起时间
		TThostFtdcTimeType	SuspendTime;
		///最后修改时间
		TThostFtdcTimeType	UpdateTime;
		/// <summary>
		///撤销时间
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ CancelTime;
		///最后修改交易所交易员代码
		TThostFtdcTraderIDType	ActiveTraderID;
		/// <summary>
		///结算会员编号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ClearingPartID;
		/// <summary>
		///序号
		/// </summary>
		int SequenceNo;
		/// <summary>
		///前置编号
		/// </summary>
		int FrontID;
		/// <summary>
		///会话编号
		/// </summary>
		int SessionID;
		/// <summary>
		///用户端产品信息
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ UserProductInfo;
		/// <summary>
		///状态信息
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^ StatusMsg;
		///用户强评标志
		TThostFtdcBoolType	UserForceClose;
		/// <summary>
		///操作用户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ ActiveUserID;
		///经纪公司报单编号
		TThostFtdcSequenceNoType	BrokerOrderSeq;
		///相关报单
		TThostFtdcOrderSysIDType	RelativeOrderSysID;
		///郑商所成交数量
		TThostFtdcVolumeType	ZCETotalTradedVolume;
		/// <summary>
		///错误代码
		/// </summary>
		int ErrorID;
		/// <summary>
		///错误信息
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^ ErrorMsg;
		///互换单标志
		TThostFtdcBoolType	IsSwapOrder;
		/// <summary>
		///营业部编号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ BranchID;
		/// <summary>
		///投资单元代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
		String^ InvestUnitID;
		/// <summary>
		///资金账号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ AccountID;
		/// <summary>
		///币种代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ CurrencyID;
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
	///查询错误报单操作
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct  CThostFtdcQryErrOrderActionField
	{
		/// <summary>
		///经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		///投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
	};

	/// <summary>
	///错误报单操作
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct  CThostFtdcErrOrderActionField
	{
		/// <summary>
		///经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		///投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		///报单操作引用
		TThostFtdcOrderActionRefType	OrderActionRef;
		///报单引用
		TThostFtdcOrderRefType	OrderRef;
		/// <summary>
		///请求编号
		/// </summary>
		int RequestID;
		/// <summary>
		///前置编号
		/// </summary>
		int FrontID;
		/// <summary>
		///会话编号
		/// </summary>
		int SessionID;
		/// <summary>
		///交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		///报单编号
		TThostFtdcOrderSysIDType	OrderSysID;
		/// <summary>
		///操作标志
		/// </summary>
		EnumActionFlagType ActionFlag;
		///价格
		TThostFtdcPriceType	LimitPrice;
		///数量变化
		TThostFtdcVolumeType	VolumeChange;
		/// <summary>
		///操作日期
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ActionDate;
		/// <summary>
		///操作时间
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ActionTime;
		/// <summary>
		/// 交易所交易员代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ TraderID;
		/// <summary>
		///安装编号
		/// </summary>
		int	InstallID;
		///本地报单编号
		TThostFtdcOrderLocalIDType	OrderLocalID;
		/// <summary>
		///操作本地编号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ ActionLocalID;
		/// <summary>
		///会员代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ParticipantID;
		/// <summary>
		///客户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ClientID;
		/// <summary>
		///业务单元
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ BusinessUnit;
		/// <summary>
		///报单操作状态
		/// </summary>
		EnumOrderActionStatusType OrderActionStatus;
		/// <summary>
		///用户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		///状态信息
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^ StatusMsg;
		/// <summary>
		///合约代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		///营业部编号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ BranchID;
		/// <summary>
		///投资单元代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
		String^ InvestUnitID;
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
		/// <summary>
		///错误代码
		/// </summary>
		int ErrorID;
		/// <summary>
		///错误信息
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^ ErrorMsg;
	};

	/// <summary>
	///查询交易所状态
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct  CThostFtdcQryExchangeSequenceField
	{
		/// <summary>
		///交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
	};

	/// <summary>
	///交易所状态
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct  CThostFtdcExchangeSequenceField
	{
		/// <summary>
		///交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		///序号
		/// </summary>
		int SequenceNo;
		///合约交易状态
		TThostFtdcInstrumentStatusType	MarketStatus;
	};

	/// <summary>
	///根据价格查询最大报单数量
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct  CThostFtdcQueryMaxOrderVolumeWithPriceField
	{
		/// <summary>
		///经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		///投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		///合约代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		///买卖方向
		/// </summary>
		EnumDirectionType Direction;
		/// <summary>
		///开平标志
		/// </summary>
		EnumOffsetFlagEnType OffsetFlag;
		/// <summary>
		///投机套保标志
		/// </summary>
		EnumHedgeFlagType HedgeFlag;
		///最大允许报单数量
		TThostFtdcVolumeType	MaxVolume;
		///报单价格
		TThostFtdcPriceType	Price;
	};

	/// <summary>
	///查询经纪公司交易参数
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct  CThostFtdcQryBrokerTradingParamsField
	{
		/// <summary>
		///经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		///投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		///币种代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ CurrencyID;
	};

	/// <summary>
	///经纪公司交易参数
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct  CThostFtdcBrokerTradingParamsField
	{
		/// <summary>
		///经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		///投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		///保证金价格类型
		TThostFtdcMarginPriceTypeType	MarginPriceType;
		///盈亏算法
		TThostFtdcAlgorithmType	Algorithm;
		///可用是否包含平仓盈利
		TThostFtdcIncludeCloseProfitType	AvailIncludeCloseProfit;
		/// <summary>
		///币种代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ CurrencyID;
		///期权权利金价格类型
		TThostFtdcOptionRoyaltyPriceTypeType	OptionRoyaltyPriceType;
	};

	/// <summary>
	///查询经纪公司交易算法
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct  CThostFtdcQryBrokerTradingAlgosField
	{
		/// <summary>
		///经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		///交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		///合约代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
	};

	/// <summary>
	///经纪公司交易算法
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct  CThostFtdcBrokerTradingAlgosField
	{
		/// <summary>
		///经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		///交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		///合约代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		///持仓处理算法编号
		TThostFtdcHandlePositionAlgoIDType	HandlePositionAlgoID;
		///寻找保证金率算法编号
		TThostFtdcFindMarginRateAlgoIDType	FindMarginRateAlgoID;
		///资金处理算法编号
		TThostFtdcHandleTradingAccountAlgoIDType	HandleTradingAccountAlgoID;
	};

	/// <summary>
	///查询经纪公司资金
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct  CThostFtdcQueryBrokerDepositField
	{
		/// <summary>
		///经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		///交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
	};

	/// <summary>
	///经纪公司资金
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct  CThostFtdcBrokerDepositField
	{
		///交易日期
		TThostFtdcTradeDateType	TradingDay;
		/// <summary>
		///经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		///会员代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ParticipantID;
		/// <summary>
		///交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
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

	/// <summary>
	///查询保证金监管系统经纪公司密钥
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct  CThostFtdcQryCFMMCBrokerKeyField
	{
		/// <summary>
		///经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
	};

	/// <summary>
	///保证金监管系统经纪公司密钥
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct  CThostFtdcCFMMCBrokerKeyField
	{
		/// <summary>
		///经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
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

	/// <summary>
	///保证金监管系统经纪公司资金账户密钥
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct  CThostFtdcCFMMCTradingAccountKeyField
	{
		/// <summary>
		///经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		///经纪公司统一编码
		TThostFtdcParticipantIDType	ParticipantID;
		///投资者帐号
		TThostFtdcAccountIDType	AccountID;
		///密钥编号
		TThostFtdcSequenceNoType	KeyID;
		///动态密钥
		TThostFtdcCFMMCKeyType	CurrentKey;
	};

	/// <summary>
	///请求查询保证金监管系统经纪公司资金账户密钥
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct CThostFtdcQryCFMMCTradingAccountKeyField
	{
		/// <summary>
		///经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		///投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
	};

	///用户动态令牌参数
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct  CThostFtdcBrokerUserOTPParamField
	{
		/// <summary>
		///经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		///用户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
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

	/// <summary>
	///手工同步用户动态令牌
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct  CThostFtdcManualSyncBrokerUserOTPField
	{
		/// <summary>
		///经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		///用户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		///动态令牌类型
		TThostFtdcOTPTypeType	OTPType;
		///第一个动态密码
		TThostFtdcPasswordType	FirstOTP;
		///第二个动态密码
		TThostFtdcPasswordType	SecondOTP;
	};

	///投资者手续费率模板
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct  CThostFtdcCommRateModelField
	{
		/// <summary>
		///经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		///手续费率模板代码
		TThostFtdcInvestorIDType	CommModelID;
		///模板名称
		TThostFtdcCommModelNameType	CommModelName;
	};

	/// <summary>
	///请求查询投资者手续费率模板
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct  CThostFtdcQryCommRateModelField
	{
		/// <summary>
		///经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		///手续费率模板代码
		TThostFtdcInvestorIDType	CommModelID;
	};

	/// <summary>
	///投资者保证金率模板
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct  CThostFtdcMarginModelField
	{
		/// <summary>
		///经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		///保证金率模板代码
		TThostFtdcInvestorIDType	MarginModelID;
		///模板名称
		TThostFtdcCommModelNameType	MarginModelName;
	};

	/// <summary>
	///请求查询投资者保证金率模板
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct  CThostFtdcQryMarginModelField
	{
		/// <summary>
		///经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		///保证金率模板代码
		TThostFtdcInvestorIDType	MarginModelID;
	};

	/// <summary>
	///仓单折抵信息
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct  CThostFtdcEWarrantOffsetField
	{
		///交易日期
		TThostFtdcTradeDateType	TradingDay;
		/// <summary>
		///经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		///投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		///交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		///合约代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		///买卖方向
		/// </summary>
		EnumDirectionType Direction;
		/// <summary>
		///投机套保标志
		/// </summary>
		EnumHedgeFlagType HedgeFlag;
		/// <summary>
		///数量
		/// </summary>
		int Volume;
	};

	/// <summary>
	///查询仓单折抵信息
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct  CThostFtdcQryEWarrantOffsetField
	{
		/// <summary>
		///经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		///投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		///交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		///合约代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
	};

	///查询投资者品种/跨品种保证金
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct  CThostFtdcQryInvestorProductGroupMarginField
	{
		/// <summary>
		///经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		///投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		///品种/跨品种标示
		TThostFtdcInstrumentIDType	ProductGroupID;
		/// <summary>
		///投机套保标志
		/// </summary>
		EnumHedgeFlagType HedgeFlag;
	};

	/// <summary>
	///投资者品种/跨品种保证金
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct  CThostFtdcInvestorProductGroupMarginField
	{
		///品种/跨品种标示
		TThostFtdcInstrumentIDType	ProductGroupID;
		/// <summary>
		///经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		///投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		/// <summary>
		///报单提示序号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ OrderSubmitStatus;
		/// <summary>
		///结算编号
		/// </summary>
		int SettlementID;
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
		/// <summary>
		///投机套保标志
		/// </summary>
		EnumHedgeFlagType HedgeFlag;
	};

	/// <summary>
	///查询监控中心用户令牌
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct  CThostFtdcQueryCFMMCTradingAccountTokenField
	{
		/// <summary>
		///经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		///投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
	};

	///监控中心用户令牌
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct  CThostFtdcCFMMCTradingAccountTokenField
	{
		/// <summary>
		///经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		///经纪公司统一编码
		TThostFtdcParticipantIDType	ParticipantID;
		///投资者帐号
		TThostFtdcAccountIDType	AccountID;
		///密钥编号
		TThostFtdcSequenceNoType	KeyID;
		///动态令牌
		TThostFtdcCFMMCTokenType	Token;
	};

	/// <summary>
	///查询产品组
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct  CThostFtdcQryProductGroupField
	{
		///产品代码
		TThostFtdcInstrumentIDType	ProductID;
		/// <summary>
		///交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
	};

	/// <summary>
	///投资者品种/跨品种保证金产品组
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct  CThostFtdcProductGroupField
	{
		///产品代码
		TThostFtdcInstrumentIDType	ProductID;
		/// <summary>
		///交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		///产品组代码
		TThostFtdcInstrumentIDType	ProductGroupID;
	};

	///交易所公告
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct  CThostFtdcBulletinField
	{
		/// <summary>
		///交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		///报单提示序号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ OrderSubmitStatus;
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

	/// <summary>
	///查询交易所公告
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct CThostFtdcQryBulletinField
	{
		/// <summary>
		///交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		///公告编号
		TThostFtdcBulletinIDType	BulletinID;
		///序列号
		TThostFtdcSequenceNoType	SequenceNo;
		///公告类型
		TThostFtdcNewsTypeType	NewsType;
		///紧急程度
		TThostFtdcNewsUrgencyType	NewsUrgency;
	};

	/// <summary>
	///转帐开户请求
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct  CThostFtdcReqOpenAccountField
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
		/// <summary>
		///安装编号
		/// </summary>
		int	InstallID;
		///验证客户证件号码标志
		TThostFtdcYesNoIndicatorType	VerifyCertNoFlag;
		/// <summary>
		///币种代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ CurrencyID;
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

	/// <summary>
	///转帐销户请求
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct  CThostFtdcReqCancelAccountField
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
		/// <summary>
		///安装编号
		/// </summary>
		int	InstallID;
		///验证客户证件号码标志
		TThostFtdcYesNoIndicatorType	VerifyCertNoFlag;
		/// <summary>
		///币种代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ CurrencyID;
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

	/// <summary>
	///变更银行账户请求
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct  CThostFtdcReqChangeAccountField
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
		/// <summary>
		///安装编号
		/// </summary>
		int	InstallID;
		///验证客户证件号码标志
		TThostFtdcYesNoIndicatorType	VerifyCertNoFlag;
		/// <summary>
		///币种代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ CurrencyID;
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

	/// <summary>
	///转账请求
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct  CThostFtdcReqTransferField
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
		/// <summary>
		///安装编号
		/// </summary>
		int	InstallID;
		///期货公司流水号
		TThostFtdcFutureSerialType	FutureSerial;
		///用户标识
		TThostFtdcUserIDType	UserID;
		///验证客户证件号码标志
		TThostFtdcYesNoIndicatorType	VerifyCertNoFlag;
		/// <summary>
		///币种代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ CurrencyID;
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
		/// <summary>
		///请求编号
		/// </summary>
		int RequestID;
		///交易ID
		TThostFtdcTIDType	TID;
		///转账交易状态
		TThostFtdcTransferStatusType	TransferStatus;
		///长客户姓名
		TThostFtdcLongIndividualNameType	LongCustomerName;
	};

	/// <summary>
	///银行发起银行资金转期货响应
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct  CThostFtdcRspTransferField
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
		/// <summary>
		///安装编号
		/// </summary>
		int	InstallID;
		///期货公司流水号
		TThostFtdcFutureSerialType	FutureSerial;
		///用户标识
		TThostFtdcUserIDType	UserID;
		///验证客户证件号码标志
		TThostFtdcYesNoIndicatorType	VerifyCertNoFlag;
		/// <summary>
		///币种代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ CurrencyID;
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
		/// <summary>
		///请求编号
		/// </summary>
		int RequestID;
		///交易ID
		TThostFtdcTIDType	TID;
		///转账交易状态
		TThostFtdcTransferStatusType	TransferStatus;
		/// <summary>
		///错误代码
		/// </summary>
		int ErrorID;
		/// <summary>
		///错误信息
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^ ErrorMsg;
		///长客户姓名
		TThostFtdcLongIndividualNameType	LongCustomerName;
	};

	/// <summary>
	///冲正请求
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct  CThostFtdcReqRepealField
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
		/// <summary>
		///安装编号
		/// </summary>
		int	InstallID;
		///期货公司流水号
		TThostFtdcFutureSerialType	FutureSerial;
		///用户标识
		TThostFtdcUserIDType	UserID;
		///验证客户证件号码标志
		TThostFtdcYesNoIndicatorType	VerifyCertNoFlag;
		/// <summary>
		///币种代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ CurrencyID;
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
		/// <summary>
		///请求编号
		/// </summary>
		int RequestID;
		///交易ID
		TThostFtdcTIDType	TID;
		///转账交易状态
		TThostFtdcTransferStatusType	TransferStatus;
		///长客户姓名
		TThostFtdcLongIndividualNameType	LongCustomerName;
	};

	/// <summary>
	///冲正响应
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct  CThostFtdcRspRepealField
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
		/// <summary>
		///安装编号
		/// </summary>
		int	InstallID;
		///期货公司流水号
		TThostFtdcFutureSerialType	FutureSerial;
		///用户标识
		TThostFtdcUserIDType	UserID;
		///验证客户证件号码标志
		TThostFtdcYesNoIndicatorType	VerifyCertNoFlag;
		/// <summary>
		///币种代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ CurrencyID;
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
		/// <summary>
		///请求编号
		/// </summary>
		int RequestID;
		///交易ID
		TThostFtdcTIDType	TID;
		///转账交易状态
		TThostFtdcTransferStatusType	TransferStatus;
		/// <summary>
		///错误代码
		/// </summary>
		int ErrorID;
		/// <summary>
		///错误信息
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^ ErrorMsg;
		///长客户姓名
		TThostFtdcLongIndividualNameType	LongCustomerName;
	};

	/// <summary>
	///查询账户信息请求
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct  CThostFtdcReqQueryAccountField
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
		/// <summary>
		///安装编号
		/// </summary>
		int	InstallID;
		///用户标识
		TThostFtdcUserIDType	UserID;
		///验证客户证件号码标志
		TThostFtdcYesNoIndicatorType	VerifyCertNoFlag;
		/// <summary>
		///币种代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ CurrencyID;
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
		/// <summary>
		///请求编号
		/// </summary>
		int RequestID;
		///交易ID
		TThostFtdcTIDType	TID;
		///长客户姓名
		TThostFtdcLongIndividualNameType	LongCustomerName;
	};

	/// <summary>
	///查询账户信息响应
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct  CThostFtdcRspQueryAccountField
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
		/// <summary>
		///安装编号
		/// </summary>
		int	InstallID;
		///用户标识
		TThostFtdcUserIDType	UserID;
		///验证客户证件号码标志
		TThostFtdcYesNoIndicatorType	VerifyCertNoFlag;
		/// <summary>
		///币种代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ CurrencyID;
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
		/// <summary>
		///请求编号
		/// </summary>
		int RequestID;
		///交易ID
		TThostFtdcTIDType	TID;
		///银行可用金额
		TThostFtdcTradeAmountType	BankUseAmount;
		///银行可取金额
		TThostFtdcTradeAmountType	BankFetchAmount;
		///长客户姓名
		TThostFtdcLongIndividualNameType	LongCustomerName;
	};

	/// <summary>
	///期商签到签退
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct  CThostFtdcFutureSignIOField
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
		/// <summary>
		///安装编号
		/// </summary>
		int	InstallID;
		///用户标识
		TThostFtdcUserIDType	UserID;
		///摘要
		TThostFtdcDigestType	Digest;
		/// <summary>
		///币种代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ CurrencyID;
		///渠道标志
		TThostFtdcDeviceIDType	DeviceID;
		///期货公司银行编码
		TThostFtdcBankCodingForFutureType	BrokerIDByBank;
		///交易柜员
		TThostFtdcOperNoType	OperNo;
		/// <summary>
		///请求编号
		/// </summary>
		int RequestID;
		///交易ID
		TThostFtdcTIDType	TID;
	};

	/// <summary>
	///期商签到响应
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct  CThostFtdcRspFutureSignInField
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
		/// <summary>
		///安装编号
		/// </summary>
		int	InstallID;
		///用户标识
		TThostFtdcUserIDType	UserID;
		///摘要
		TThostFtdcDigestType	Digest;
		/// <summary>
		///币种代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ CurrencyID;
		///渠道标志
		TThostFtdcDeviceIDType	DeviceID;
		///期货公司银行编码
		TThostFtdcBankCodingForFutureType	BrokerIDByBank;
		///交易柜员
		TThostFtdcOperNoType	OperNo;
		/// <summary>
		///请求编号
		/// </summary>
		int RequestID;
		///交易ID
		TThostFtdcTIDType	TID;
		/// <summary>
		///错误代码
		/// </summary>
		int ErrorID;
		/// <summary>
		///错误信息
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^ ErrorMsg;
		///PIN密钥
		TThostFtdcPasswordKeyType	PinKey;
		///MAC密钥
		TThostFtdcPasswordKeyType	MacKey;
	};

	/// <summary>
	///期商签退请求
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct  CThostFtdcReqFutureSignOutField
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
		/// <summary>
		///安装编号
		/// </summary>
		int	InstallID;
		///用户标识
		TThostFtdcUserIDType	UserID;
		///摘要
		TThostFtdcDigestType	Digest;
		/// <summary>
		///币种代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ CurrencyID;
		///渠道标志
		TThostFtdcDeviceIDType	DeviceID;
		///期货公司银行编码
		TThostFtdcBankCodingForFutureType	BrokerIDByBank;
		///交易柜员
		TThostFtdcOperNoType	OperNo;
		/// <summary>
		///请求编号
		/// </summary>
		int RequestID;
		///交易ID
		TThostFtdcTIDType	TID;
	};

	/// <summary>
	///期商签退响应
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct  CThostFtdcRspFutureSignOutField
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
		/// <summary>
		///安装编号
		/// </summary>
		int	InstallID;
		///用户标识
		TThostFtdcUserIDType	UserID;
		///摘要
		TThostFtdcDigestType	Digest;
		/// <summary>
		///币种代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ CurrencyID;
		///渠道标志
		TThostFtdcDeviceIDType	DeviceID;
		///期货公司银行编码
		TThostFtdcBankCodingForFutureType	BrokerIDByBank;
		///交易柜员
		TThostFtdcOperNoType	OperNo;
		/// <summary>
		///请求编号
		/// </summary>
		int RequestID;
		///交易ID
		TThostFtdcTIDType	TID;
		/// <summary>
		///错误代码
		/// </summary>
		int ErrorID;
		/// <summary>
		///错误信息
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^ ErrorMsg;
	};

	/// <summary>
	///查询指定流水号的交易结果请求
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct  CThostFtdcReqQueryTradeResultBySerialField
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
		/// <summary>
		///币种代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ CurrencyID;
		///转帐金额
		TThostFtdcTradeAmountType	TradeAmount;
		///摘要
		TThostFtdcDigestType	Digest;
		///长客户姓名
		TThostFtdcLongIndividualNameType	LongCustomerName;
	};

	/// <summary>
	///查询指定流水号的交易结果响应
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct  CThostFtdcRspQueryTradeResultBySerialField
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
		/// <summary>
		///错误代码
		/// </summary>
		int ErrorID;
		/// <summary>
		///错误信息
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^ ErrorMsg;
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
		/// <summary>
		///币种代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ CurrencyID;
		///转帐金额
		TThostFtdcTradeAmountType	TradeAmount;
		///摘要
		TThostFtdcDigestType	Digest;
	};

	/// <summary>
	///日终文件就绪请求
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct  CThostFtdcReqDayEndFileReadyField
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

	/// <summary>
	///返回结果
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct  CThostFtdcReturnResultField
	{
		///返回代码
		TThostFtdcReturnCodeType	ReturnCode;
		///返回码描述
		TThostFtdcDescrInfoForReturnCodeType	DescrInfoForReturnCode;
	};

	/// <summary>
	///验证期货资金密码
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct  CThostFtdcVerifyFuturePasswordField
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
		/// <summary>
		///安装编号
		/// </summary>
		int	InstallID;
		///交易ID
		TThostFtdcTIDType	TID;
		/// <summary>
		///币种代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ CurrencyID;
	};

	/// <summary>
	///验证客户信息
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct  CThostFtdcVerifyCustInfoField
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

	/// <summary>
	///验证期货资金密码和客户信息
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct  CThostFtdcVerifyFuturePasswordAndCustInfoField
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
		/// <summary>
		///币种代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ CurrencyID;
		///长客户姓名
		TThostFtdcLongIndividualNameType	LongCustomerName;
	};

	/// <summary>
	///验证期货资金密码和客户信息
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct  CThostFtdcDepositResultInformField
	{
		///出入金流水号，该流水号为银期报盘返回的流水号
		TThostFtdcDepositSeqNoType	DepositSeqNo;
		/// <summary>
		///经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		///投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		///入金金额
		TThostFtdcMoneyType	Deposit;
		/// <summary>
		///请求编号
		/// </summary>
		int RequestID;
		///返回代码
		TThostFtdcReturnCodeType	ReturnCode;
		///返回码描述
		TThostFtdcDescrInfoForReturnCodeType	DescrInfoForReturnCode;
	};

	/// <summary>
	///交易核心向银期报盘发出密钥同步请求
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct  CThostFtdcReqSyncKeyField
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
		/// <summary>
		///安装编号
		/// </summary>
		int	InstallID;
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
		/// <summary>
		///请求编号
		/// </summary>
		int RequestID;
		///交易ID
		TThostFtdcTIDType	TID;
	};

	/// <summary>
	///交易核心向银期报盘发出密钥同步响应
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct  CThostFtdcRspSyncKeyField
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
		/// <summary>
		///安装编号
		/// </summary>
		int	InstallID;
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
		/// <summary>
		///请求编号
		/// </summary>
		int RequestID;
		///交易ID
		TThostFtdcTIDType	TID;
		/// <summary>
		///错误代码
		/// </summary>
		int ErrorID;
		/// <summary>
		///错误信息
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^ ErrorMsg;
	};

	/// <summary>
	///查询账户信息通知
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct  CThostFtdcNotifyQueryAccountField
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
		/// <summary>
		///安装编号
		/// </summary>
		int	InstallID;
		///用户标识
		TThostFtdcUserIDType	UserID;
		///验证客户证件号码标志
		TThostFtdcYesNoIndicatorType	VerifyCertNoFlag;
		/// <summary>
		///币种代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ CurrencyID;
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
		/// <summary>
		///请求编号
		/// </summary>
		int RequestID;
		///交易ID
		TThostFtdcTIDType	TID;
		///银行可用金额
		TThostFtdcTradeAmountType	BankUseAmount;
		///银行可取金额
		TThostFtdcTradeAmountType	BankFetchAmount;
		/// <summary>
		///错误代码
		/// </summary>
		int ErrorID;
		/// <summary>
		///错误信息
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^ ErrorMsg;
		///长客户姓名
		TThostFtdcLongIndividualNameType	LongCustomerName;
	};

	/// <summary>
	///银期转账交易流水表
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct  CThostFtdcTransferSerialField
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
		/// <summary>
		///会话编号
		/// </summary>
		int SessionID;
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
		/// <summary>
		///投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ InvestorID;
		///期货公司流水号
		TThostFtdcFutureSerialType	FutureSerial;
		///证件类型
		TThostFtdcIdCardTypeType	IdCardType;
		///证件号码
		TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
		/// <summary>
		///币种代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ CurrencyID;
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
		/// <summary>
		///错误代码
		/// </summary>
		int ErrorID;
		/// <summary>
		///错误信息
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^ ErrorMsg;
	};

	/// <summary>
	///请求查询转帐流水
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct CThostFtdcQryTransferSerialField
	{
		/// <summary>
		///经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		///投资者帐号
		TThostFtdcAccountIDType	AccountID;
		///银行编码
		TThostFtdcBankIDType	BankID;
		/// <summary>
		///币种代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ CurrencyID;
	};

	/// <summary>
	///期商签到通知
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct CThostFtdcNotifyFutureSignInField
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
		/// <summary>
		///安装编号
		/// </summary>
		int	InstallID;
		///用户标识
		TThostFtdcUserIDType	UserID;
		///摘要
		TThostFtdcDigestType	Digest;
		/// <summary>
		///币种代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ CurrencyID;
		///渠道标志
		TThostFtdcDeviceIDType	DeviceID;
		///期货公司银行编码
		TThostFtdcBankCodingForFutureType	BrokerIDByBank;
		///交易柜员
		TThostFtdcOperNoType	OperNo;
		/// <summary>
		///请求编号
		/// </summary>
		int RequestID;
		///交易ID
		TThostFtdcTIDType	TID;
		/// <summary>
		///错误代码
		/// </summary>
		int ErrorID;
		/// <summary>
		///错误信息
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^ ErrorMsg;
		///PIN密钥
		TThostFtdcPasswordKeyType	PinKey;
		///MAC密钥
		TThostFtdcPasswordKeyType	MacKey;
	};

	/// <summary>
	///期商签退通知
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct  CThostFtdcNotifyFutureSignOutField
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
		/// <summary>
		///安装编号
		/// </summary>
		int	InstallID;
		///用户标识
		TThostFtdcUserIDType	UserID;
		///摘要
		TThostFtdcDigestType	Digest;
		/// <summary>
		///币种代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ CurrencyID;
		///渠道标志
		TThostFtdcDeviceIDType	DeviceID;
		///期货公司银行编码
		TThostFtdcBankCodingForFutureType	BrokerIDByBank;
		///交易柜员
		TThostFtdcOperNoType	OperNo;
		/// <summary>
		///请求编号
		/// </summary>
		int RequestID;
		///交易ID
		TThostFtdcTIDType	TID;
		/// <summary>
		///错误代码
		/// </summary>
		int ErrorID;
		/// <summary>
		///错误信息
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^ ErrorMsg;
	};

	/// <summary>
	///交易核心向银期报盘发出密钥同步处理结果的通知
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct  CThostFtdcNotifySyncKeyField
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
		/// <summary>
		///安装编号
		/// </summary>
		int	InstallID;
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
		/// <summary>
		///请求编号
		/// </summary>
		int RequestID;
		///交易ID
		TThostFtdcTIDType	TID;
		/// <summary>
		///错误代码
		/// </summary>
		int ErrorID;
		/// <summary>
		///错误信息
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^ ErrorMsg;
	};

	/// <summary>
	///请求查询银期签约关系
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct  CThostFtdcQryAccountregisterField
	{
		/// <summary>
		///经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		///投资者帐号
		TThostFtdcAccountIDType	AccountID;
		///银行编码
		TThostFtdcBankIDType	BankID;
		///银行分支机构编码
		TThostFtdcBankBrchIDType	BankBranchID;
		/// <summary>
		///币种代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ CurrencyID;
	};

	/// <summary>
	///客户开销户信息表
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct  CThostFtdcAccountregisterField
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
		/// <summary>
		///币种代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ CurrencyID;
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

	/// <summary>
	///银期开户信息
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct  CThostFtdcOpenAccountField
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
		/// <summary>
		///安装编号
		/// </summary>
		int	InstallID;
		///验证客户证件号码标志
		TThostFtdcYesNoIndicatorType	VerifyCertNoFlag;
		/// <summary>
		///币种代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ CurrencyID;
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
		/// <summary>
		///错误代码
		/// </summary>
		int ErrorID;
		/// <summary>
		///错误信息
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^ ErrorMsg;
		///长客户姓名
		TThostFtdcLongIndividualNameType	LongCustomerName;
	};

	/// <summary>
	///银期销户信息
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct  CThostFtdcCancelAccountField
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
		/// <summary>
		///安装编号
		/// </summary>
		int	InstallID;
		///验证客户证件号码标志
		TThostFtdcYesNoIndicatorType	VerifyCertNoFlag;
		/// <summary>
		///币种代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ CurrencyID;
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
		/// <summary>
		///错误代码
		/// </summary>
		int ErrorID;
		/// <summary>
		///错误信息
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^ ErrorMsg;
		///长客户姓名
		TThostFtdcLongIndividualNameType	LongCustomerName;
	};

	/// <summary>
	///银期变更银行账号信息
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct  CThostFtdcChangeAccountField
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
		/// <summary>
		///安装编号
		/// </summary>
		int	InstallID;
		///验证客户证件号码标志
		TThostFtdcYesNoIndicatorType	VerifyCertNoFlag;
		/// <summary>
		///币种代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ CurrencyID;
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
		/// <summary>
		///错误代码
		/// </summary>
		int ErrorID;
		/// <summary>
		///错误信息
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^ ErrorMsg;
		///长客户姓名
		TThostFtdcLongIndividualNameType	LongCustomerName;
	};

	/// <summary>
	///二级代理操作员银期权限
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct  CThostFtdcSecAgentACIDMapField
	{
		/// <summary>
		///经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		///用户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		///资金账户
		TThostFtdcAccountIDType	AccountID;
		///币种
		TThostFtdcCurrencyIDType	CurrencyID;
		///境外中介机构资金帐号
		TThostFtdcAccountIDType	BrokerSecAgentID;
	};

	/// <summary>
	///二级代理操作员银期权限查询
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct  CThostFtdcQrySecAgentACIDMapField
	{
		/// <summary>
		///经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		///用户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		///资金账户
		TThostFtdcAccountIDType	AccountID;
		///币种
		TThostFtdcCurrencyIDType	CurrencyID;
	};

	/// <summary>
	///灾备中心交易权限
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct  CThostFtdcUserRightsAssignField
	{
		///应用单元代码
		TThostFtdcBrokerIDType	BrokerID;
		/// <summary>
		///用户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		///交易中心代码
		TThostFtdcDRIdentityIDType	DRIdentityID;
	};

	/// <summary>
	///经济公司是否有在本标示的交易权限
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct  CThostFtdcBrokerUserRightAssignField
	{
		///应用单元代码
		TThostFtdcBrokerIDType	BrokerID;
		///交易中心代码
		TThostFtdcDRIdentityIDType	DRIdentityID;
		///能否交易
		TThostFtdcBoolType	Tradeable;
	};

	/// <summary>
	///灾备交易转换报文
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct  CThostFtdcDRTransferField
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

	/// <summary>
	///Fens用户信息
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct  CThostFtdcFensUserInfoField
	{
		/// <summary>
		///经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		///用户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		///登录模式
		TThostFtdcLoginModeType	LoginMode;
	};

	/// <summary>
	///当前银期所属交易中心
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct  CThostFtdcCurrTransferIdentityField
	{
		///交易中心代码
		TThostFtdcDRIdentityIDType	IdentityID;
	};

	/// <summary>
	///禁止登录用户
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct  CThostFtdcLoginForbiddenUserField
	{
		/// <summary>
		///经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		///用户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		///IP地址
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	IPAddress;
	};

	/// <summary>
	///查询禁止登录用户
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct  CThostFtdcQryLoginForbiddenUserField
	{
		/// <summary>
		///经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		///用户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
	};

	/// <summary>
	///UDP组播组信息
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct  CThostFtdcMulticastGroupInfoField
	{
		///组播组IP地址
		TThostFtdcIPAddressType	GroupIP;
		///组播组IP端口
		TThostFtdcIPPortType	GroupPort;
		///源地址
		TThostFtdcIPAddressType	SourceIP;
	};

	/// <summary>
	///资金账户基本准备金
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct  CThostFtdcTradingAccountReserveField
	{
		/// <summary>
		///经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		///投资者帐号
		TThostFtdcAccountIDType	AccountID;
		///基本准备金
		TThostFtdcMoneyType	Reserve;
		/// <summary>
		///币种代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ CurrencyID;
	};

	/// <summary>
	///银期预约开户确认请求
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct  CThostFtdcReserveOpenAccountConfirmField
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
		/// <summary>
		///安装编号
		/// </summary>
		int	InstallID;
		///验证客户证件号码标志
		TThostFtdcYesNoIndicatorType	VerifyCertNoFlag;
		/// <summary>
		///币种代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ CurrencyID;
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
		/// <summary>
		///错误代码
		/// </summary>
		int ErrorID;
		/// <summary>
		///错误信息
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^ ErrorMsg;
	};

	/// <summary>
	///银期预约开户
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct  CThostFtdcReserveOpenAccountField
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
		/// <summary>
		///安装编号
		/// </summary>
		int	InstallID;
		///验证客户证件号码标志
		TThostFtdcYesNoIndicatorType	VerifyCertNoFlag;
		/// <summary>
		///币种代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ CurrencyID;
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
		/// <summary>
		///错误代码
		/// </summary>
		int ErrorID;
		/// <summary>
		///错误信息
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^ ErrorMsg;
	};

}