#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_Rendering_DebugUI_EnumField.h"
#include "UnityEngine_Rendering_DebugUI.h"
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering { struct DebugUI; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { template <typename TResult> struct Func_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering
{
	struct DebugUI_HistoryEnumField : Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DebugUI_EnumField
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<mscorlib::System::Func_1<mscorlib::System::Int32>*>* _historyIndexGetter_k__BackingField;
		IL2CPP::Array<mscorlib::System::Func_1<mscorlib::System::Int32>*>* get_historyIndexGetter();
		void set_historyIndexGetter(IL2CPP::Array<mscorlib::System::Func_1<mscorlib::System::Int32>*>* value);
		int32_t get_historyDepth();
		int32_t GetHistoryValue(int32_t historyIndex);
		void _ctor();
	};
}

