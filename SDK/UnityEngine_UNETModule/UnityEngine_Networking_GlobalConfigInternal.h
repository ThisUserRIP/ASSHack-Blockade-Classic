#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_UNETModule::UnityEngine::Networking { struct GlobalConfig; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_UInt16.h"
namespace mscorlib::System { struct UInt16; };

namespace UnityEngine_UNETModule::UnityEngine::Networking
{
	struct GlobalConfigInternal : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		intptr_t m_Ptr;
		void _ctor(UnityEngine_UNETModule::UnityEngine::Networking::GlobalConfig* config);
		void Dispose(bool disposing);
		void Finalize();
		void Dispose();
		static intptr_t InternalCreate();
		static void InternalDestroy(intptr_t ptr);
		void set_ThreadAwakeTimeout(uint32_t value);
		void set_ReactorModel(uint8_t value);
		void set_ReactorMaximumReceivedMessages(uint16_t value);
		void set_ReactorMaximumSentMessages(uint16_t value);
		void set_MaxPacketSize(uint16_t value);
		void set_MaxHosts(uint16_t value);
		void set_ThreadPoolSize(uint8_t value);
		void set_MinTimerTimeout(uint32_t value);
		void set_MaxTimerTimeout(uint32_t value);
		void set_MinNetSimulatorTimeout(uint32_t value);
		void set_MaxNetSimulatorTimeout(uint32_t value);
	};
}

