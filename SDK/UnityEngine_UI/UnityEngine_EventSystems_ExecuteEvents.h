#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace UnityEngine_UI::UnityEngine::EventSystems { struct IPointerEnterHandler; };
namespace UnityEngine_UI::UnityEngine::EventSystems { template <typename T1> struct ExecuteEvents_EventFunction_1; };
namespace UnityEngine_UI::UnityEngine::EventSystems { struct IPointerExitHandler; };
namespace UnityEngine_UI::UnityEngine::EventSystems { struct IPointerDownHandler; };
namespace UnityEngine_UI::UnityEngine::EventSystems { struct IPointerUpHandler; };
namespace UnityEngine_UI::UnityEngine::EventSystems { struct IPointerClickHandler; };
namespace UnityEngine_UI::UnityEngine::EventSystems { struct IInitializePotentialDragHandler; };
namespace UnityEngine_UI::UnityEngine::EventSystems { struct IBeginDragHandler; };
namespace UnityEngine_UI::UnityEngine::EventSystems { struct IDragHandler; };
namespace UnityEngine_UI::UnityEngine::EventSystems { struct IEndDragHandler; };
namespace UnityEngine_UI::UnityEngine::EventSystems { struct IDropHandler; };
namespace UnityEngine_UI::UnityEngine::EventSystems { struct IScrollHandler; };
namespace UnityEngine_UI::UnityEngine::EventSystems { struct IUpdateSelectedHandler; };
namespace UnityEngine_UI::UnityEngine::EventSystems { struct ISelectHandler; };
namespace UnityEngine_UI::UnityEngine::EventSystems { struct IDeselectHandler; };
namespace UnityEngine_UI::UnityEngine::EventSystems { struct IMoveHandler; };
namespace UnityEngine_UI::UnityEngine::EventSystems { struct ISubmitHandler; };
namespace UnityEngine_UI::UnityEngine::EventSystems { struct ICancelHandler; };
namespace UnityEngine_UI::UnityEngine::EventSystems { struct IEventSystemHandler; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace UnityEngine_UI::UnityEngine::UI { template <typename T> struct ObjectPool_1; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
#include "..\mscorlib\System_Reflection_MethodInfo.h"
namespace UnityEngine_UI::UnityEngine::EventSystems { struct BaseEventData; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IList_1; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace UnityEngine_CoreModule::UnityEngine { struct Component; };

namespace UnityEngine_UI::UnityEngine::EventSystems
{
	struct ExecuteEvents : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			UnityEngine_UI::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<UnityEngine_UI::UnityEngine::EventSystems::IPointerEnterHandler>* s_PointerEnterHandler;
			UnityEngine_UI::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<UnityEngine_UI::UnityEngine::EventSystems::IPointerExitHandler>* s_PointerExitHandler;
			UnityEngine_UI::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<UnityEngine_UI::UnityEngine::EventSystems::IPointerDownHandler>* s_PointerDownHandler;
			UnityEngine_UI::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<UnityEngine_UI::UnityEngine::EventSystems::IPointerUpHandler>* s_PointerUpHandler;
			UnityEngine_UI::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<UnityEngine_UI::UnityEngine::EventSystems::IPointerClickHandler>* s_PointerClickHandler;
			UnityEngine_UI::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<UnityEngine_UI::UnityEngine::EventSystems::IInitializePotentialDragHandler>* s_InitializePotentialDragHandler;
			UnityEngine_UI::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<UnityEngine_UI::UnityEngine::EventSystems::IBeginDragHandler>* s_BeginDragHandler;
			UnityEngine_UI::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<UnityEngine_UI::UnityEngine::EventSystems::IDragHandler>* s_DragHandler;
			UnityEngine_UI::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<UnityEngine_UI::UnityEngine::EventSystems::IEndDragHandler>* s_EndDragHandler;
			UnityEngine_UI::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<UnityEngine_UI::UnityEngine::EventSystems::IDropHandler>* s_DropHandler;
			UnityEngine_UI::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<UnityEngine_UI::UnityEngine::EventSystems::IScrollHandler>* s_ScrollHandler;
			UnityEngine_UI::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<UnityEngine_UI::UnityEngine::EventSystems::IUpdateSelectedHandler>* s_UpdateSelectedHandler;
			UnityEngine_UI::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<UnityEngine_UI::UnityEngine::EventSystems::ISelectHandler>* s_SelectHandler;
			UnityEngine_UI::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<UnityEngine_UI::UnityEngine::EventSystems::IDeselectHandler>* s_DeselectHandler;
			UnityEngine_UI::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<UnityEngine_UI::UnityEngine::EventSystems::IMoveHandler>* s_MoveHandler;
			UnityEngine_UI::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<UnityEngine_UI::UnityEngine::EventSystems::ISubmitHandler>* s_SubmitHandler;
			UnityEngine_UI::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<UnityEngine_UI::UnityEngine::EventSystems::ICancelHandler>* s_CancelHandler;
			UnityEngine_UI::UnityEngine::UI::ObjectPool_1<mscorlib::System::Collections::Generic::List_1<UnityEngine_UI::UnityEngine::EventSystems::IEventSystemHandler>>* s_HandlerListPool;
			mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Transform>* s_InternalTransformList;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		template <typename T> static T* ValidateEventData(UnityEngine_UI::UnityEngine::EventSystems::BaseEventData* data)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ValidateEventData", std::vector<std::string> { "UnityEngine.EventSystems.BaseEventData" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)data;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return GetGenericValue<T>(returnValue);;
		}
		static void Execute(UnityEngine_UI::UnityEngine::EventSystems::IPointerEnterHandler* handler, UnityEngine_UI::UnityEngine::EventSystems::BaseEventData* eventData);
		static void Execute(UnityEngine_UI::UnityEngine::EventSystems::IPointerExitHandler* handler, UnityEngine_UI::UnityEngine::EventSystems::BaseEventData* eventData);
		static void Execute(UnityEngine_UI::UnityEngine::EventSystems::IPointerDownHandler* handler, UnityEngine_UI::UnityEngine::EventSystems::BaseEventData* eventData);
		static void Execute(UnityEngine_UI::UnityEngine::EventSystems::IPointerUpHandler* handler, UnityEngine_UI::UnityEngine::EventSystems::BaseEventData* eventData);
		static void Execute(UnityEngine_UI::UnityEngine::EventSystems::IPointerClickHandler* handler, UnityEngine_UI::UnityEngine::EventSystems::BaseEventData* eventData);
		static void Execute(UnityEngine_UI::UnityEngine::EventSystems::IInitializePotentialDragHandler* handler, UnityEngine_UI::UnityEngine::EventSystems::BaseEventData* eventData);
		static void Execute(UnityEngine_UI::UnityEngine::EventSystems::IBeginDragHandler* handler, UnityEngine_UI::UnityEngine::EventSystems::BaseEventData* eventData);
		static void Execute(UnityEngine_UI::UnityEngine::EventSystems::IDragHandler* handler, UnityEngine_UI::UnityEngine::EventSystems::BaseEventData* eventData);
		static void Execute(UnityEngine_UI::UnityEngine::EventSystems::IEndDragHandler* handler, UnityEngine_UI::UnityEngine::EventSystems::BaseEventData* eventData);
		static void Execute(UnityEngine_UI::UnityEngine::EventSystems::IDropHandler* handler, UnityEngine_UI::UnityEngine::EventSystems::BaseEventData* eventData);
		static void Execute(UnityEngine_UI::UnityEngine::EventSystems::IScrollHandler* handler, UnityEngine_UI::UnityEngine::EventSystems::BaseEventData* eventData);
		static void Execute(UnityEngine_UI::UnityEngine::EventSystems::IUpdateSelectedHandler* handler, UnityEngine_UI::UnityEngine::EventSystems::BaseEventData* eventData);
		static void Execute(UnityEngine_UI::UnityEngine::EventSystems::ISelectHandler* handler, UnityEngine_UI::UnityEngine::EventSystems::BaseEventData* eventData);
		static void Execute(UnityEngine_UI::UnityEngine::EventSystems::IDeselectHandler* handler, UnityEngine_UI::UnityEngine::EventSystems::BaseEventData* eventData);
		static void Execute(UnityEngine_UI::UnityEngine::EventSystems::IMoveHandler* handler, UnityEngine_UI::UnityEngine::EventSystems::BaseEventData* eventData);
		static void Execute(UnityEngine_UI::UnityEngine::EventSystems::ISubmitHandler* handler, UnityEngine_UI::UnityEngine::EventSystems::BaseEventData* eventData);
		static void Execute(UnityEngine_UI::UnityEngine::EventSystems::ICancelHandler* handler, UnityEngine_UI::UnityEngine::EventSystems::BaseEventData* eventData);
		static UnityEngine_UI::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<UnityEngine_UI::UnityEngine::EventSystems::IPointerEnterHandler>* get_pointerEnterHandler();
		static UnityEngine_UI::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<UnityEngine_UI::UnityEngine::EventSystems::IPointerExitHandler>* get_pointerExitHandler();
		static UnityEngine_UI::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<UnityEngine_UI::UnityEngine::EventSystems::IPointerDownHandler>* get_pointerDownHandler();
		static UnityEngine_UI::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<UnityEngine_UI::UnityEngine::EventSystems::IPointerUpHandler>* get_pointerUpHandler();
		static UnityEngine_UI::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<UnityEngine_UI::UnityEngine::EventSystems::IPointerClickHandler>* get_pointerClickHandler();
		static UnityEngine_UI::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<UnityEngine_UI::UnityEngine::EventSystems::IInitializePotentialDragHandler>* get_initializePotentialDrag();
		static UnityEngine_UI::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<UnityEngine_UI::UnityEngine::EventSystems::IBeginDragHandler>* get_beginDragHandler();
		static UnityEngine_UI::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<UnityEngine_UI::UnityEngine::EventSystems::IDragHandler>* get_dragHandler();
		static UnityEngine_UI::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<UnityEngine_UI::UnityEngine::EventSystems::IEndDragHandler>* get_endDragHandler();
		static UnityEngine_UI::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<UnityEngine_UI::UnityEngine::EventSystems::IDropHandler>* get_dropHandler();
		static UnityEngine_UI::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<UnityEngine_UI::UnityEngine::EventSystems::IScrollHandler>* get_scrollHandler();
		static UnityEngine_UI::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<UnityEngine_UI::UnityEngine::EventSystems::IUpdateSelectedHandler>* get_updateSelectedHandler();
		static UnityEngine_UI::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<UnityEngine_UI::UnityEngine::EventSystems::ISelectHandler>* get_selectHandler();
		static UnityEngine_UI::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<UnityEngine_UI::UnityEngine::EventSystems::IDeselectHandler>* get_deselectHandler();
		static UnityEngine_UI::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<UnityEngine_UI::UnityEngine::EventSystems::IMoveHandler>* get_moveHandler();
		static UnityEngine_UI::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<UnityEngine_UI::UnityEngine::EventSystems::ISubmitHandler>* get_submitHandler();
		static UnityEngine_UI::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<UnityEngine_UI::UnityEngine::EventSystems::ICancelHandler>* get_cancelHandler();
		static void GetEventChain(UnityEngine_CoreModule::UnityEngine::GameObject* root, mscorlib::System::Collections::Generic::IList_1<UnityEngine_CoreModule::UnityEngine::Transform>* eventChain);
		template <typename T> static bool Execute(UnityEngine_CoreModule::UnityEngine::GameObject* target, UnityEngine_UI::UnityEngine::EventSystems::BaseEventData* eventData, UnityEngine_UI::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<T>* functor)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Execute", std::vector<std::string> { "UnityEngine.GameObject", "UnityEngine.EventSystems.BaseEventData", "UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<T>" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[3];
			params[0] = (intptr_t)target;
			params[1] = (intptr_t)eventData;
			params[2] = (intptr_t)functor;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			if (returnValue == nullptr)
			{
				bool ret;
				std::memset(&ret, 0, sizeof(bool));
				return ret;
			}
			return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
		}
		template <typename T> static UnityEngine_CoreModule::UnityEngine::GameObject* ExecuteHierarchy(UnityEngine_CoreModule::UnityEngine::GameObject* root, UnityEngine_UI::UnityEngine::EventSystems::BaseEventData* eventData, UnityEngine_UI::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<T>* callbackFunction)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ExecuteHierarchy", std::vector<std::string> { "UnityEngine.GameObject", "UnityEngine.EventSystems.BaseEventData", "UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<T>" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[3];
			params[0] = (intptr_t)root;
			params[1] = (intptr_t)eventData;
			params[2] = (intptr_t)callbackFunction;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return (UnityEngine_CoreModule::UnityEngine::GameObject*)returnValue;
		}
		template <typename T> static bool ShouldSendToComponent(UnityEngine_CoreModule::UnityEngine::Component* component)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ShouldSendToComponent", std::vector<std::string> { "UnityEngine.Component" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)component;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			if (returnValue == nullptr)
			{
				bool ret;
				std::memset(&ret, 0, sizeof(bool));
				return ret;
			}
			return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
		}
		template <typename T> static void GetEventList(UnityEngine_CoreModule::UnityEngine::GameObject* go, mscorlib::System::Collections::Generic::IList_1<UnityEngine_UI::UnityEngine::EventSystems::IEventSystemHandler>* results)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetEventList", std::vector<std::string> { "UnityEngine.GameObject", "System.Collections.Generic.IList`1<UnityEngine.EventSystems.IEventSystemHandler>" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)go;
			params[1] = (intptr_t)results;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(genericAddress, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		template <typename T> static bool CanHandleEvent(UnityEngine_CoreModule::UnityEngine::GameObject* go)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CanHandleEvent", std::vector<std::string> { "UnityEngine.GameObject" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)go;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			if (returnValue == nullptr)
			{
				bool ret;
				std::memset(&ret, 0, sizeof(bool));
				return ret;
			}
			return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
		}
		template <typename T> static UnityEngine_CoreModule::UnityEngine::GameObject* GetEventHandler(UnityEngine_CoreModule::UnityEngine::GameObject* root)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetEventHandler", std::vector<std::string> { "UnityEngine.GameObject" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)root;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return (UnityEngine_CoreModule::UnityEngine::GameObject*)returnValue;
		}
		static void _cctor();
	};
}

