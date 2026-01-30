#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Reflection_MethodInfo.h"
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
namespace mscorlib::System { struct String; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
namespace UnityEngine_CoreModule::UnityEngine { struct RectTransform; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rect.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Rect; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_UI::UnityEngine::UI { struct Selectable; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace Assembly_CSharp::Rewired::UI::ControlMapper
{
	struct UITools : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		template <typename T> static UnityEngine_CoreModule::UnityEngine::GameObject* InstantiateGUIObject(UnityEngine_CoreModule::UnityEngine::GameObject* prefab, UnityEngine_CoreModule::UnityEngine::Transform* parent, mscorlib::System::String* name)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InstantiateGUIObject", std::vector<std::string> { "UnityEngine.GameObject", "UnityEngine.Transform", "System.String" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[3];
			params[0] = (intptr_t)prefab;
			params[1] = (intptr_t)parent;
			params[2] = (intptr_t)name;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return (UnityEngine_CoreModule::UnityEngine::GameObject*)returnValue;
		}
		template <typename T> static UnityEngine_CoreModule::UnityEngine::GameObject* InstantiateGUIObject(UnityEngine_CoreModule::UnityEngine::GameObject* prefab, UnityEngine_CoreModule::UnityEngine::Transform* parent, mscorlib::System::String* name, UnityEngine_CoreModule::UnityEngine::Vector2 pivot, UnityEngine_CoreModule::UnityEngine::Vector2 anchorMin, UnityEngine_CoreModule::UnityEngine::Vector2 anchorMax, UnityEngine_CoreModule::UnityEngine::Vector2 anchoredPosition)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InstantiateGUIObject", std::vector<std::string> { "UnityEngine.GameObject", "UnityEngine.Transform", "System.String", "UnityEngine.Vector2", "UnityEngine.Vector2", "UnityEngine.Vector2", "UnityEngine.Vector2" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[7];
			params[0] = (intptr_t)prefab;
			params[1] = (intptr_t)parent;
			params[2] = (intptr_t)name;
			params[3] = (intptr_t)&pivot;
			params[4] = (intptr_t)&anchorMin;
			params[5] = (intptr_t)&anchorMax;
			params[6] = (intptr_t)&anchoredPosition;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return (UnityEngine_CoreModule::UnityEngine::GameObject*)returnValue;
		}
		template <typename T> static UnityEngine_CoreModule::UnityEngine::GameObject* InstantiateGUIObject_Pre(UnityEngine_CoreModule::UnityEngine::GameObject* prefab, UnityEngine_CoreModule::UnityEngine::Transform* parent, mscorlib::System::String* name)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InstantiateGUIObject_Pre", std::vector<std::string> { "UnityEngine.GameObject", "UnityEngine.Transform", "System.String" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[3];
			params[0] = (intptr_t)prefab;
			params[1] = (intptr_t)parent;
			params[2] = (intptr_t)name;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return (UnityEngine_CoreModule::UnityEngine::GameObject*)returnValue;
		}
		static UnityEngine_CoreModule::UnityEngine::Vector3 GetPointOnRectEdge(UnityEngine_CoreModule::UnityEngine::RectTransform* rectTransform, UnityEngine_CoreModule::UnityEngine::Vector2 dir);
		static UnityEngine_CoreModule::UnityEngine::Rect GetWorldSpaceRect(UnityEngine_CoreModule::UnityEngine::RectTransform* rt);
		static UnityEngine_CoreModule::UnityEngine::Rect TransformRectTo(UnityEngine_CoreModule::UnityEngine::Transform* from, UnityEngine_CoreModule::UnityEngine::Transform* to, UnityEngine_CoreModule::UnityEngine::Rect rect);
		static UnityEngine_CoreModule::UnityEngine::Rect InvertY(UnityEngine_CoreModule::UnityEngine::Rect rect);
		static void SetInteractable(UnityEngine_UI::UnityEngine::UI::Selectable* selectable, bool state, bool playTransition);
	};
}

