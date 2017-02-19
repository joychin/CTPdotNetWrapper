/////////////////////////////////////////////////////////////////////////
/// ���ڼ��� CTP C++ ==> .Net Framework Adapter
/// Author:	shawn666.liu@gmail.com
/// Date: 20120420
/////////////////////////////////////////////////////////////////////////

#pragma once
#include "Util.h"

using namespace Native;

namespace  Native {
	class CMdSpi;
};


namespace CTP {

	/// <summary>
	/// �й���,Marcket Data Adapter
	/// </summary>
	public ref class CTPMDAdapter
	{
	public:
		/// <summary>
		///����CTPMDAdapter
		///����������Ϣ�ļ���Ŀ¼��Ĭ��Ϊ��ǰĿ¼
		/// </summary>
		CTPMDAdapter(void);
		/// <summary>
		///����CTPMDAdapter
		/// </summary>
		/// <param name="pszFlowPath">����������Ϣ�ļ���Ŀ¼��Ĭ��Ϊ��ǰĿ¼</param>
		/// <param name="bIsUsingUdp">�Ƿ�ʹ��UDPЭ��</param>
		CTPMDAdapter(String^ pszFlowPath, bool bIsUsingUdp);
	private:
		~CTPMDAdapter(void);
		CThostFtdcMdApi* m_pApi;
		CMdSpi* m_pSpi;
	public:
		/// <summary>
		///ɾ���ӿڶ�����
		///@remark ����ʹ�ñ��ӿڶ���ʱ,���øú���ɾ���ӿڶ���
		/// </summary>
		void Release(void);
		/// <summary>
		///��ʼ��
		///@remark ��ʼ�����л���,ֻ�е��ú�,�ӿڲſ�ʼ����
		/// </summary>
		void Init(void);
		/// <summary>
		///�ȴ��ӿ��߳̽�������
		///@return �߳��˳�����
		/// </summary>
		void Join(void);
		/// <summary>
		///��ȡ��ǰ������
		///@remark ֻ�е�¼�ɹ���,���ܵõ���ȷ�Ľ�����
		/// </summary>
		/// <returns>��ȡ���Ľ�����</returns>
		String^ GetTradingDay();
		/// <summary>
		///ע��ǰ�û������ַ
		/// </summary>
		/// <param name="pszFrontAddress">
		/// ǰ�û������ַ
		/// �����ַ�ĸ�ʽΪ����protocol://ipaddress:port�����磺��tcp://127.0.0.1:17001����
		/// ��tcp��������Э�飬��127.0.0.1�������������ַ����17001������������˿ںš�
		/// </param>
		void RegisterFront(String^  pszFrontAddress);
		/// <summary>
		///ע�����ַ����������ַ
		/// </summary>
		/// <param name="pszNsAddress">���ַ����������ַ��
		///@remark �����ַ�ĸ�ʽΪ����protocol://ipaddress:port�����磺��tcp://127.0.0.1:12001���� 
		///@remark ��tcp��������Э�飬��127.0.0.1�������������ַ����12001������������˿ںš�
		///@remark RegisterNameServer������RegisterFront
		/// </param>
		void RegisterNameServer(String^ pszNsAddress);
		/// <summary>
		///�������顣
		/// </summary>
		/// <param name="ppInstrumentID">��ԼID</param>
		int SubscribeMarketData(array<String^>^ ppInstrumentID);
		/// <summary>
		///	�˶����顣
		/// </summary>
		/// <param name="ppInstrumentID">��ԼID</param>
		int UnSubscribeMarketData(array<String^>^ ppInstrumentID);
		/// <summary>
		/// �û���¼����
		/// </summary>
		int ReqUserLogin(ThostFtdcReqUserLoginField^ pReqUserLoginField, int nRequestID);
		/// <summary>
		/// �ǳ�����
		/// </summary>
		int ReqUserLogout(ThostFtdcUserLogoutField^ pUserLogout, int nRequestID);

		// Events
	public:
		/// <summary>
		/// ���ͻ����뽻�׺�̨������ͨ������ʱ����δ��¼ǰ�����÷��������á�
		/// </summary>
		event FrontConnected^ OnFrontConnected {
			void add(FrontConnected^ handler) {
				OnFrontConnected_delegate += handler;
			}
			void remove(FrontConnected^ handler) {
				OnFrontConnected_delegate -= handler;
			}
			void raise() {
				if (OnFrontConnected_delegate)
					OnFrontConnected_delegate();
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
			void add(FrontDisconnected^ handler) {
				OnFrontDisconnected_delegate += handler;
			}
			void remove(FrontDisconnected^ handler) {
				OnFrontDisconnected_delegate -= handler;
			}
			void raise(int nReason) {
				if (OnFrontDisconnected_delegate)
					OnFrontDisconnected_delegate(nReason);
			}
		}

		/// <summary>
		///������ʱ���档����ʱ��δ�յ�����ʱ���÷��������á�
		///@param nTimeLapse �����ϴν��ձ��ĵ�ʱ��
		/// </summary>
		event HeartBeatWarning^ OnHeartBeatWarning {
			void add(HeartBeatWarning^ handler) {
				OnHeartBeatWarning_delegate += handler;
			}
			void remove(HeartBeatWarning^ handler) {
				OnHeartBeatWarning_delegate -= handler;
			}
			void raise(int nTimeLapse) {
				if (OnHeartBeatWarning_delegate)
					OnHeartBeatWarning_delegate(nTimeLapse);
			}
		}

		/// <summary>
		/// ��¼������Ӧ
		/// </summary>
		event RspUserLogin^ OnRspUserLogin {
			void add(RspUserLogin^ handler) {
				OnRspUserLogin_delegate += handler;
			}
			void remove(RspUserLogin^ handler) {
				OnRspUserLogin_delegate -= handler;
			}
			void raise(ThostFtdcRspUserLoginField^ pRspUserLogin, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast) {
				if (OnRspUserLogin_delegate)
					OnRspUserLogin_delegate(pRspUserLogin, pRspInfo, nRequestID, bIsLast);
			}
		}

		/// <summary>
		/// �ǳ�������Ӧ
		/// </summary>
		event RspUserLogout^ OnRspUserLogout {
			void add(RspUserLogout^ handler) {
				OnRspUserLogout_delegate += handler;
			}
			void remove(RspUserLogout^ handler) {
				OnRspUserLogout_delegate -= handler;
			}
			void raise(ThostFtdcUserLogoutField^ pUserLogout, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast) {
				if (OnRspUserLogout_delegate)
					OnRspUserLogout_delegate(pUserLogout, pRspInfo, nRequestID, bIsLast);
			}
		}

		/// <summary>
		/// ����Ӧ��
		/// </summary>
		event RspError^ OnRspError {
			void add(RspError^ handler) {
				OnRspError_delegate += handler;
			}
			void remove(RspError^ handler) {
				OnRspError_delegate -= handler;
			}
			void raise(ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast) {
				if (OnRspError_delegate)
					OnRspError_delegate(pRspInfo, nRequestID, bIsLast);
			}
		}

		/// <summary>
		/// ��������Ӧ��
		/// </summary>
		event RspSubMarketData^ OnRspSubMarketData {
			void add(RspSubMarketData^ handler) {
				OnRspSubMarketData_delegate += handler;
			}
			void remove(RspSubMarketData^ handler) {
				OnRspSubMarketData_delegate -= handler;
			}
			void raise(ThostFtdcSpecificInstrumentField^ pSpecificInstrument, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast) {
				if (OnRspSubMarketData_delegate)
					OnRspSubMarketData_delegate(pSpecificInstrument, pRspInfo, nRequestID, bIsLast);
			}
		}
		/// <summary>
		/// ȡ����������Ӧ��
		/// </summary>
		event RspUnSubMarketData^ OnRspUnSubMarketData {
			void add(RspUnSubMarketData^ handler) {
				OnRspUnSubMarketData_delegate += handler;
			}
			void remove(RspUnSubMarketData^ handler) {
				OnRspUnSubMarketData_delegate -= handler;
			}
			void raise(ThostFtdcSpecificInstrumentField^ pSpecificInstrument, ThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast) {
				if (OnRspUnSubMarketData_delegate)
					OnRspUnSubMarketData_delegate(pSpecificInstrument, pRspInfo, nRequestID, bIsLast);
			}
		}
		/// <summary>
		/// �������֪ͨ
		/// </summary>
		event RtnDepthMarketData^ OnRtnDepthMarketData {
			void add(RtnDepthMarketData^ handler) {
				OnRtnDepthMarketData_delegate += handler;
			}
			void remove(RtnDepthMarketData^ handler) {
				OnRtnDepthMarketData_delegate -= handler;
			}
			void raise(ThostFtdcDepthMarketDataField^ pDepthMarketData) {
				if (OnRtnDepthMarketData_delegate)
					OnRtnDepthMarketData_delegate(pDepthMarketData);
			}
		}

		// delegates
	private:
		FrontConnected^ OnFrontConnected_delegate;
		FrontDisconnected^ OnFrontDisconnected_delegate;
		HeartBeatWarning^ OnHeartBeatWarning_delegate;
		RspUserLogin^  OnRspUserLogin_delegate;
		RspUserLogout^ OnRspUserLogout_delegate;
		RspError^ OnRspError_delegate;
		RspSubMarketData^ OnRspSubMarketData_delegate;
		RspUnSubMarketData^ OnRspUnSubMarketData_delegate;
		RtnDepthMarketData^ OnRtnDepthMarketData_delegate;

#ifdef __CTP_MA__
		// Callbacks for MA
	private:
		void cbk_OnFrontConnected();
		void cbk_OnFrontDisconnected(int nReason);
		void cbk_OnHeartBeatWarning(int nTimeLapse);
		void cbk_OnRspUserLogin(CThostFtdcRspUserLoginField *pRspUserLogin, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
		void cbk_OnRspUserLogout(CThostFtdcUserLogoutField *pUserLogout, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
		void cbk_OnRspError(CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
		void cbk_OnRspSubMarketData(CThostFtdcSpecificInstrumentField *pSpecificInstrument, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
		void cbk_OnRspUnSubMarketData(CThostFtdcSpecificInstrumentField *pSpecificInstrument, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
		void cbk_OnRtnDepthMarketData(CThostFtdcDepthMarketDataField *pDepthMarketData);
		// �����лص�������ַ���ݸ�SPI
		void RegisterCallbacks();
#endif

	};
}