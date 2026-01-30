#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace UnityEngine_InputModule::UnityEngineInternal::Input { struct NativeUpdateCallback; };
#include "UnityEngineInternal_Input_NativeInputUpdateType.h"
namespace mscorlib::System { template <typename T> struct Action_1; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { template <typename T, typename TResult> struct Func_2; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System { template <typename T1, typename T2> struct Action_2; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };

namespace UnityEngine_InputModule::UnityEngineInternal::Input
{
	struct NativeInputSystem : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			UnityEngine_InputModule::UnityEngineInternal::Input::NativeUpdateCallback* onUpdate;
			mscorlib::System::Action_1<UnityEngine_InputModule::UnityEngineInternal::Input::NativeInputUpdateType>* onBeforeUpdate;
			mscorlib::System::Func_2<UnityEngine_InputModule::UnityEngineInternal::Input::NativeInputUpdateType, mscorlib::System::Boolean>* onShouldRunUpdate;
			mscorlib::System::Action_2<mscorlib::System::Int32, mscorlib::System::String>* s_OnDeviceDiscoveredCallback;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		static void NotifyBeforeUpdate(UnityEngine_InputModule::UnityEngineInternal::Input::NativeInputUpdateType updateType);
		static void NotifyUpdate(UnityEngine_InputModule::UnityEngineInternal::Input::NativeInputUpdateType updateType, intptr_t eventBuffer);
		static void NotifyDeviceDiscovered(int32_t deviceId, mscorlib::System::String* deviceDescriptor);
		static void ShouldRunUpdate(UnityEngine_InputModule::UnityEngineInternal::Input::NativeInputUpdateType updateType, bool& retval);
		static void set_hasDeviceDiscoveredCallback(bool value);
	};
}

