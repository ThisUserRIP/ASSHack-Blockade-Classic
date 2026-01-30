#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_Events_UnityEventBase.h"
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_CoreModule::UnityEngine::Events { struct UnityAction; };
namespace mscorlib::System::Reflection { struct MethodInfo; };
namespace mscorlib::System { struct String; };
namespace UnityEngine_CoreModule::UnityEngine::Events { struct BaseInvokableCall; };

namespace UnityEngine_CoreModule::UnityEngine::Events
{
	struct UnityEvent : UnityEngine_CoreModule::UnityEngine::Events::UnityEventBase
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<mscorlib::System::Object*>* m_InvokeArray;
		void _ctor();
		void AddListener(UnityEngine_CoreModule::UnityEngine::Events::UnityAction* call);
		void RemoveListener(UnityEngine_CoreModule::UnityEngine::Events::UnityAction* call);
		mscorlib::System::Reflection::MethodInfo* FindMethod_Impl(mscorlib::System::String* name, mscorlib::System::Type* targetObjType);
		UnityEngine_CoreModule::UnityEngine::Events::BaseInvokableCall* GetDelegate(mscorlib::System::Object* target, mscorlib::System::Reflection::MethodInfo* theFunction);
		static UnityEngine_CoreModule::UnityEngine::Events::BaseInvokableCall* GetDelegate(UnityEngine_CoreModule::UnityEngine::Events::UnityAction* action);
		void Invoke();
	};
}

