#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_MulticastDelegate.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "UnityEngineInternal_Input_NativeInputUpdateType.h"
namespace UnityEngine_InputModule::UnityEngineInternal::Input { struct NativeInputEventBuffer; };
namespace UnityEngine_InputModule::UnityEngineInternal::Input { struct NativeInputEventBuffer; };
namespace mscorlib::System { struct IAsyncResult; };
namespace mscorlib::System { struct AsyncCallback; };

namespace UnityEngine_InputModule::UnityEngineInternal::Input
{
	struct NativeUpdateCallback : mscorlib::System::MulticastDelegate
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor(mscorlib::System::Object* object, intptr_t method);
		void Invoke(UnityEngine_InputModule::UnityEngineInternal::Input::NativeInputUpdateType updateType, UnityEngine_InputModule::UnityEngineInternal::Input::NativeInputEventBuffer* buffer);
		mscorlib::System::IAsyncResult* BeginInvoke(UnityEngine_InputModule::UnityEngineInternal::Input::NativeInputUpdateType updateType, UnityEngine_InputModule::UnityEngineInternal::Input::NativeInputEventBuffer* buffer, mscorlib::System::AsyncCallback* callback, mscorlib::System::Object* object);
		void EndInvoke(mscorlib::System::IAsyncResult* result);
	};
}

