#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_Rendering_DebugUI_Container.h"
#include "UnityEngine_Rendering_DebugUI.h"
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering { struct DebugUI; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering { struct DebugUI_Widget; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering { template <typename T> struct ObservableList_1; };
namespace mscorlib::System { struct Object; };

namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering
{
	struct DebugUI_Foldout : Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DebugUI_Container
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool opened;
		IL2CPP::Array<mscorlib::System::String*>* _columnLabels_k__BackingField;
		bool get_isReadOnly();
		IL2CPP::Array<mscorlib::System::String*>* get_columnLabels();
		void set_columnLabels(IL2CPP::Array<mscorlib::System::String*>* value);
		void _ctor();
		void _ctor(mscorlib::System::String* displayName, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ObservableList_1<Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DebugUI_Widget>* children, IL2CPP::Array<mscorlib::System::String*>* columnLabels);
		bool GetValue();
		mscorlib::System::Object* UnityEngine_Rendering_DebugUI_IValueField_GetValue();
		void SetValue(mscorlib::System::Object* value);
		mscorlib::System::Object* ValidateValue(mscorlib::System::Object* value);
		void SetValue(bool value);
	};
}

