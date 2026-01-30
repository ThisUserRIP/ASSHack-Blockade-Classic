#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_Rendering_DebugUI_BoolField.h"
#include "UnityEngine_Rendering_DebugUI.h"
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering { struct DebugUI; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { template <typename TResult> struct Func_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering
{
	struct DebugUI_HistoryBoolField : Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DebugUI_BoolField
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<mscorlib::System::Func_1<mscorlib::System::Boolean>*>* _historyGetter_k__BackingField;
		IL2CPP::Array<mscorlib::System::Func_1<mscorlib::System::Boolean>*>* get_historyGetter();
		void set_historyGetter(IL2CPP::Array<mscorlib::System::Func_1<mscorlib::System::Boolean>*>* value);
		int32_t get_historyDepth();
		bool GetHistoryValue(int32_t historyIndex);
		void _ctor();
	};
}

