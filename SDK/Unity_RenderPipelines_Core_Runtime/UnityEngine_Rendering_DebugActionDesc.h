#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\UnityEngine_CoreModule\UnityEngine_KeyCode.h"
#include "UnityEngine_Rendering_DebugActionRepeatMode.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering
{
	struct DebugActionDesc : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* axisTrigger;
		mscorlib::System::Collections::Generic::List_1<IL2CPP::Array<mscorlib::System::String*>>* buttonTriggerList;
		mscorlib::System::Collections::Generic::List_1<IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::KeyCode>>* keyTriggerList;
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DebugActionRepeatMode repeatMode;
		float repeatDelay;
		void _ctor();
	};
}

