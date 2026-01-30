#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_UNETModule::UnityEngine::Networking { struct ConnectionSimulatorConfig; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };

namespace UnityEngine_UNETModule::UnityEngine::Networking
{
	struct ConnectionSimulatorConfigInternal : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		intptr_t m_Ptr;
		void _ctor(UnityEngine_UNETModule::UnityEngine::Networking::ConnectionSimulatorConfig* config);
		void Dispose(bool disposing);
		void Finalize();
		void Dispose();
		static intptr_t InternalCreate(int32_t outMinDelay, int32_t outAvgDelay, int32_t inMinDelay, int32_t inAvgDelay, float packetLossPercentage);
		static void InternalDestroy(intptr_t ptr);
	};
}

