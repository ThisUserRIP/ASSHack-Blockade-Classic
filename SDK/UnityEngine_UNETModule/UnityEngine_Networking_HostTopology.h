#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace UnityEngine_UNETModule::UnityEngine::Networking { struct ConnectionConfig; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_UInt16.h"
namespace mscorlib::System { struct UInt16; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace UnityEngine_UNETModule::UnityEngine::Networking
{
	struct HostTopology : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_UNETModule::UnityEngine::Networking::ConnectionConfig* m_DefConfig;
		int32_t m_MaxDefConnections;
		mscorlib::System::Collections::Generic::List_1<UnityEngine_UNETModule::UnityEngine::Networking::ConnectionConfig>* m_SpecialConnections;
		uint16_t m_ReceivedMessagePoolSize;
		uint16_t m_SentMessagePoolSize;
		float m_MessagePoolSizeGrowthFactor;
		void _ctor(UnityEngine_UNETModule::UnityEngine::Networking::ConnectionConfig* defaultConfig, int32_t maxDefaultConnections);
		void _ctor();
		UnityEngine_UNETModule::UnityEngine::Networking::ConnectionConfig* get_DefaultConfig();
		int32_t get_MaxDefaultConnections();
		int32_t get_SpecialConnectionConfigsCount();
		mscorlib::System::Collections::Generic::List_1<UnityEngine_UNETModule::UnityEngine::Networking::ConnectionConfig>* get_SpecialConnectionConfigs();
		UnityEngine_UNETModule::UnityEngine::Networking::ConnectionConfig* GetSpecialConnectionConfig(int32_t i);
		uint16_t get_ReceivedMessagePoolSize();
		uint16_t get_SentMessagePoolSize();
		float get_MessagePoolSizeGrowthFactor();
	};
}

