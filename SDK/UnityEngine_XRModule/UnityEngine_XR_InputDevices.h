#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "UnityEngine_XR_InputDevice.h"
namespace UnityEngine_XRModule::UnityEngine::XR { struct InputDevice; };
namespace mscorlib::System { template <typename T> struct Action_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
#include "UnityEngine_XR_ConnectionChangeType.h"

namespace UnityEngine_XRModule::UnityEngine::XR
{
	struct InputDevices : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::Action_1<UnityEngine_XRModule::UnityEngine::XR::InputDevice>* deviceConnected;
			mscorlib::System::Action_1<UnityEngine_XRModule::UnityEngine::XR::InputDevice>* deviceDisconnected;
			mscorlib::System::Action_1<UnityEngine_XRModule::UnityEngine::XR::InputDevice>* deviceConfigChanged;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void InvokeConnectionEvent(uint64_t deviceId, UnityEngine_XRModule::UnityEngine::XR::ConnectionChangeType change);
	};
}

