#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering { struct DebugUI_Widget; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Reflection_MethodInfo.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::UI
{
	struct DebugUIHandlerWidget : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Color colorDefault;
		UnityEngine_CoreModule::UnityEngine::Color colorSelected;
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::UI::DebugUIHandlerWidget* _parentUIHandler_k__BackingField;
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::UI::DebugUIHandlerWidget* _previousUIHandler_k__BackingField;
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::UI::DebugUIHandlerWidget* _nextUIHandler_k__BackingField;
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DebugUI_Widget* m_Widget;
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::UI::DebugUIHandlerWidget* get_parentUIHandler();
		void set_parentUIHandler(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::UI::DebugUIHandlerWidget* value);
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::UI::DebugUIHandlerWidget* get_previousUIHandler();
		void set_previousUIHandler(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::UI::DebugUIHandlerWidget* value);
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::UI::DebugUIHandlerWidget* get_nextUIHandler();
		void set_nextUIHandler(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::UI::DebugUIHandlerWidget* value);
		void OnEnable();
		void SetWidget(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DebugUI_Widget* widget);
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DebugUI_Widget* GetWidget();
		template <typename T> T* CastWidget()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CastWidget");
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, this, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
			return GetGenericValue<T>(returnValue);;
		}
		bool OnSelection(bool fromNext, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::UI::DebugUIHandlerWidget* previous);
		void OnDeselection();
		void OnAction();
		void OnIncrement(bool fast);
		void OnDecrement(bool fast);
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::UI::DebugUIHandlerWidget* Previous();
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::UI::DebugUIHandlerWidget* Next();
		void _ctor();
	};
}

