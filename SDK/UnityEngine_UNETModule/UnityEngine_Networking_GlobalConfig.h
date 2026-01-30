#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "..\mscorlib\System_UInt16.h"
namespace mscorlib::System { struct UInt16; };
#include "UnityEngine_Networking_ReactorModel.h"
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { template <typename T1, typename T2> struct Action_2; };
namespace mscorlib::System { template <typename T> struct Action_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace UnityEngine_UNETModule::UnityEngine::Networking
{
	struct GlobalConfig : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		uint32_t m_ThreadAwakeTimeout;
		UnityEngine_UNETModule::UnityEngine::Networking::ReactorModel m_ReactorModel;
		uint16_t m_ReactorMaximumReceivedMessages;
		uint16_t m_ReactorMaximumSentMessages;
		uint16_t m_MaxPacketSize;
		uint16_t m_MaxHosts;
		uint8_t m_ThreadPoolSize;
		uint32_t m_MinTimerTimeout;
		uint32_t m_MaxTimerTimeout;
		uint32_t m_MinNetSimulatorTimeout;
		uint32_t m_MaxNetSimulatorTimeout;
		mscorlib::System::Action_2<mscorlib::System::Int32, mscorlib::System::Int32>* m_ConnectionReadyForSend;
		mscorlib::System::Action_1<mscorlib::System::Int32>* m_NetworkEventAvailable;
		struct StaticFields
		{
			uint32_t g_MaxTimerTimeout;
			uint32_t g_MaxNetSimulatorTimeout;
			uint16_t g_MaxHosts;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		uint32_t get_ThreadAwakeTimeout();
		void set_ThreadAwakeTimeout(uint32_t value);
		UnityEngine_UNETModule::UnityEngine::Networking::ReactorModel get_ReactorModel();
		uint16_t get_ReactorMaximumReceivedMessages();
		uint16_t get_ReactorMaximumSentMessages();
		uint16_t get_MaxPacketSize();
		uint16_t get_MaxHosts();
		uint8_t get_ThreadPoolSize();
		uint32_t get_MinTimerTimeout();
		uint32_t get_MaxTimerTimeout();
		uint32_t get_MinNetSimulatorTimeout();
		uint32_t get_MaxNetSimulatorTimeout();
		mscorlib::System::Action_1<mscorlib::System::Int32>* get_NetworkEventAvailable();
		mscorlib::System::Action_2<mscorlib::System::Int32, mscorlib::System::Int32>* get_ConnectionReadyForSend();
	};
}

