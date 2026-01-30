#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_Events_BaseInvokableCall.h"
namespace UnityEngine_CoreModule::UnityEngine::Events { struct UnityAction; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Reflection { struct MethodInfo; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace UnityEngine_CoreModule::UnityEngine::Events
{
	struct InvokableCall : UnityEngine_CoreModule::UnityEngine::Events::BaseInvokableCall
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Events::UnityAction* Delegate;
		void add_Delegate(UnityEngine_CoreModule::UnityEngine::Events::UnityAction* value);
		void remove_Delegate(UnityEngine_CoreModule::UnityEngine::Events::UnityAction* value);
		void _ctor(mscorlib::System::Object* target, mscorlib::System::Reflection::MethodInfo* theFunction);
		void _ctor(UnityEngine_CoreModule::UnityEngine::Events::UnityAction* action);
		void Invoke(IL2CPP::Array<mscorlib::System::Object*>* args);
		void Invoke();
		bool Find(mscorlib::System::Object* targetObj, mscorlib::System::Reflection::MethodInfo* method);
	};
}

