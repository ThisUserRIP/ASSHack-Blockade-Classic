#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "UnityEngine_Rendering_DebugUI_Field_1.h"
#include "UnityEngine_Rendering_DebugUI.h"
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering { struct DebugUI; };
namespace UnityEngine_IMGUIModule::UnityEngine { struct GUIContent; };
namespace mscorlib::System { template <typename TResult> struct Func_1; };
namespace mscorlib::System { template <typename T> struct Action_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering
{
	struct DebugUI_EnumField : Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DebugUI_Field_1<mscorlib::System::Int32>
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUIContent*>* enumNames;
		IL2CPP::Array<int32_t>* enumValues;
		IL2CPP::Array<int32_t>* quickSeparators;
		IL2CPP::Array<int32_t>* indexes;
		mscorlib::System::Func_1<mscorlib::System::Int32>* _getIndex_k__BackingField;
		mscorlib::System::Action_1<mscorlib::System::Int32>* _setIndex_k__BackingField;
		mscorlib::System::Func_1<mscorlib::System::Int32>* get_getIndex();
		void set_getIndex(mscorlib::System::Func_1<mscorlib::System::Int32>* value);
		mscorlib::System::Action_1<mscorlib::System::Int32>* get_setIndex();
		void set_setIndex(mscorlib::System::Action_1<mscorlib::System::Int32>* value);
		int32_t get_currentIndex();
		void set_currentIndex(int32_t value);
		void set_autoEnum(mscorlib::System::Type* value);
		void InitQuickSeparators();
		void InitIndexes();
		void _ctor();
	};
}

