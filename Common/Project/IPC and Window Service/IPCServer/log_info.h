#ifndef FRAMEWORK_LOGINFO_H
#define FRAMEWORK_LOGINFO_H

//#include "std.h"
#include <string>

using namespace std;

namespace VadeApp
{
	// ��־������
	struct TLogInfo
	{
	public:
		// ��־�ȼ�
		enum TLogLevel
		{
			lglvFatal = 0, 		// ��������
			lglvError,			// ��ͨ����
			lglvWarning,		// ������Ϣ
			lglvInfo,			// ��ͨ��Ϣ
			lglvDebug			// ������Ϣ
		};








		string m_info;			// ��־��Ϣ
		string m_place;			// ���õ�λ��
		TLogLevel m_level;		// ��־�ĵȼ�
		string m_otner;			// ������־��Ϣ

		// �쳣��Ϣ
		string m_excpType;		// �쳣������
		int m_excpID;			// �쳣���

		// �̶�����Ϣ
		int m_LogType;			// �������ͣ�0�����־��1ģ����־��2������־��3������־
		//string m_bundleName;	// ģ������ƣ���Ŀ¼����
		//string m_bundleGUID;	// ģ���GUID
		//string m_serviceName;	// ��������ƣ�������
		//string m_serviceGUID;	// �����GUID
		//long m_refID;			// �������õı��
	};

   //	extern TLogInfo::TLogLevel g_log_level;

	bool WriteLog(TLogInfo log);

}

#endif
