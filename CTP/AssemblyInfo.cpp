#include "stdafx.h"

using namespace System;
using namespace System::Reflection;
using namespace System::Runtime::CompilerServices;
using namespace System::Runtime::InteropServices;
using namespace System::Security::Permissions;

//
// �йس��򼯵ĳ�����Ϣͨ���������Լ�
// ���ơ�������Щ����ֵ���޸�
// ����򼯹�������Ϣ��
//

#ifdef __CTP_MA__
[assembly:AssemblyTitleAttribute("CTP  MA��")];
[assembly:AssemblyDescriptionAttribute("CTP C++ ==> .Net Adapter MA���лshawn666.liu@gmail.com 2012")];
[assembly:AssemblyConfigurationAttribute("")];
[assembly:AssemblyCompanyAttribute("")];
[assembly:AssemblyProductAttribute("CTP  MA��")];
[assembly:AssemblyCopyrightAttribute("Copyright (c) chenzhuo9302@gmail.com2")];
[assembly:AssemblyTrademarkAttribute("")];
[assembly:AssemblyCultureAttribute("")];
#else
[assembly:AssemblyTitleAttribute("CTP")];
[assembly:AssemblyDescriptionAttribute("CTP C++ ==> .Net Adapter ��лshawn666.liu@gmail.com 2012")];
[assembly:AssemblyConfigurationAttribute("")];
[assembly:AssemblyCompanyAttribute("")];
[assembly:AssemblyProductAttribute("CTP")];
[assembly:AssemblyCopyrightAttribute("Copyright (c) chenzhuo9302@gmail.com")];
[assembly:AssemblyTrademarkAttribute("")];
[assembly:AssemblyCultureAttribute("")];
#endif


//
// ���򼯵İ汾��Ϣ�������ĸ�ֵ���:
//
//      ���汾
//      �ΰ汾
//      �ڲ��汾��
//      �޶���
//
// ������ָ������ֵ��Ҳ��ʹ�á��޶��š��͡��ڲ��汾�š���Ĭ��ֵ��
// �����ǰ�������ʾʹ�á�*��:

[assembly:AssemblyVersionAttribute("1.0.*")];

[assembly:ComVisible(false)];

[assembly:CLSCompliantAttribute(true)];

//[assembly:SecurityPermission(SecurityAction::RequestMinimum, UnmanagedCode = true)];
