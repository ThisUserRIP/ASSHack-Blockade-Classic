#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_UNETModule::UnityEngine::Networking { struct HostTopology; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace UnityEngine_UNETModule::UnityEngine::Networking { struct ConnectionConfigInternal; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_UInt16.h"
namespace mscorlib::System { struct UInt16; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };

namespace UnityEngine_UNETModule::UnityEngine::Networking
{
	struct HostTopologyInternal : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		intptr_t m_Ptr;
		void _ctor(UnityEngine_UNETModule::UnityEngine::Networking::HostTopology* topology);
		void Dispose(bool disposing);
		void Finalize();
		void Dispose();
		static intptr_t InternalCreate(UnityEngine_UNETModule::UnityEngine::Networking::ConnectionConfigInternal* config, int32_t maxDefaultConnections);
		static void InternalDestroy(intptr_t ptr);
		uint16_t AddSpecialConnectionConfig(UnityEngine_UNETModule::UnityEngine::Networking::ConnectionConfigInternal* config);
		void set_ReceivedMessagePoolSize(uint16_t value);
		void set_SentMessagePoolSize(uint16_t value);
		void set_MessagePoolSizeGrowthFactor(float value);
	};
}

