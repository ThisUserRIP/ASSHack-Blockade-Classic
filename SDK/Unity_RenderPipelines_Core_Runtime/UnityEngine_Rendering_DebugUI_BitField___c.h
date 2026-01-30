#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "UnityEngine_Rendering_DebugUI_BitField.h"
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering { struct DebugUI_BitField; };
namespace mscorlib::System { struct String; };
namespace UnityEngine_IMGUIModule::UnityEngine { struct GUIContent; };
namespace mscorlib::System { template <typename T, typename TResult> struct Func_2; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering
{
	struct DebugUI_BitField___c : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DebugUI_BitField___c* __9;
			mscorlib::System::Func_2<mscorlib::System::String, UnityEngine_IMGUIModule::UnityEngine::GUIContent>* __9__10_0;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		void _ctor();
		UnityEngine_IMGUIModule::UnityEngine::GUIContent* _set_enumType_b__10_0(mscorlib::System::String* x);
	};
}

