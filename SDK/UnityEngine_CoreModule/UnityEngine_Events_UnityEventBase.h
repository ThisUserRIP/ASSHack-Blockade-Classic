#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace UnityEngine_CoreModule::UnityEngine::Events { struct InvokableCallList; };
namespace UnityEngine_CoreModule::UnityEngine::Events { struct PersistentCallGroup; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Reflection { struct MethodInfo; };
namespace mscorlib::System { struct String; };
namespace UnityEngine_CoreModule::UnityEngine::Events { struct BaseInvokableCall; };
namespace mscorlib::System { struct Object; };
namespace UnityEngine_CoreModule::UnityEngine::Events { struct PersistentCall; };
#include "UnityEngine_Events_PersistentListenerMode.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };

namespace UnityEngine_CoreModule::UnityEngine::Events
{
	struct UnityEventBase : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Events::InvokableCallList* m_Calls;
		UnityEngine_CoreModule::UnityEngine::Events::PersistentCallGroup* m_PersistentCalls;
		bool m_CallsDirty;
		void _ctor();
		void UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize();
		void UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize();
		mscorlib::System::Reflection::MethodInfo* FindMethod_Impl(mscorlib::System::String* name, mscorlib::System::Type* targetObjType);
		UnityEngine_CoreModule::UnityEngine::Events::BaseInvokableCall* GetDelegate(mscorlib::System::Object* target, mscorlib::System::Reflection::MethodInfo* theFunction);
		mscorlib::System::Reflection::MethodInfo* FindMethod(UnityEngine_CoreModule::UnityEngine::Events::PersistentCall* call);
		mscorlib::System::Reflection::MethodInfo* FindMethod(mscorlib::System::String* name, mscorlib::System::Type* listenerType, UnityEngine_CoreModule::UnityEngine::Events::PersistentListenerMode mode, mscorlib::System::Type* argumentType);
		int32_t GetPersistentEventCount();
		void DirtyPersistentCalls();
		void RebuildPersistentCallsIfNeeded();
		void AddCall(UnityEngine_CoreModule::UnityEngine::Events::BaseInvokableCall* call);
		void RemoveListener(mscorlib::System::Object* targetObj, mscorlib::System::Reflection::MethodInfo* method);
		void RemoveAllListeners();
		mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Events::BaseInvokableCall>* PrepareInvoke();
		mscorlib::System::String* ToString();
		static mscorlib::System::Reflection::MethodInfo* GetValidMethodInfo(mscorlib::System::Type* objectType, mscorlib::System::String* functionName, IL2CPP::Array<mscorlib::System::Type*>* argumentTypes);
	};
}

