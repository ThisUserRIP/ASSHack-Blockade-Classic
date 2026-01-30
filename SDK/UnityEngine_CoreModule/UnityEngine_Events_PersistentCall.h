#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Object; };
namespace mscorlib::System { struct String; };
#include "UnityEngine_Events_PersistentListenerMode.h"
namespace UnityEngine_CoreModule::UnityEngine::Events { struct ArgumentCache; };
#include "UnityEngine_Events_UnityEventCallState.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace UnityEngine_CoreModule::UnityEngine::Events { struct BaseInvokableCall; };
namespace UnityEngine_CoreModule::UnityEngine::Events { struct UnityEventBase; };
namespace mscorlib::System::Reflection { struct MethodInfo; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace UnityEngine_CoreModule::UnityEngine::Events
{
	struct PersistentCall : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Object* m_Target;
		mscorlib::System::String* m_TargetAssemblyTypeName;
		mscorlib::System::String* m_MethodName;
		UnityEngine_CoreModule::UnityEngine::Events::PersistentListenerMode m_Mode;
		UnityEngine_CoreModule::UnityEngine::Events::ArgumentCache* m_Arguments;
		UnityEngine_CoreModule::UnityEngine::Events::UnityEventCallState m_CallState;
		UnityEngine_CoreModule::UnityEngine::Object* get_target();
		mscorlib::System::String* get_targetAssemblyTypeName();
		mscorlib::System::String* get_methodName();
		UnityEngine_CoreModule::UnityEngine::Events::PersistentListenerMode get_mode();
		UnityEngine_CoreModule::UnityEngine::Events::ArgumentCache* get_arguments();
		bool IsValid();
		UnityEngine_CoreModule::UnityEngine::Events::BaseInvokableCall* GetRuntimeCall(UnityEngine_CoreModule::UnityEngine::Events::UnityEventBase* theEvent);
		static UnityEngine_CoreModule::UnityEngine::Events::BaseInvokableCall* GetObjectCall(UnityEngine_CoreModule::UnityEngine::Object* target, mscorlib::System::Reflection::MethodInfo* method, UnityEngine_CoreModule::UnityEngine::Events::ArgumentCache* arguments);
		void OnBeforeSerialize();
		void OnAfterDeserialize();
		void _ctor();
	};
}

