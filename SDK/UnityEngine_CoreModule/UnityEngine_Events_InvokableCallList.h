#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace UnityEngine_CoreModule::UnityEngine::Events { struct BaseInvokableCall; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Reflection { struct MethodInfo; };

namespace UnityEngine_CoreModule::UnityEngine::Events
{
	struct InvokableCallList : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Events::BaseInvokableCall>* m_PersistentCalls;
		mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Events::BaseInvokableCall>* m_RuntimeCalls;
		mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Events::BaseInvokableCall>* m_ExecutingCalls;
		bool m_NeedsUpdate;
		void AddPersistentInvokableCall(UnityEngine_CoreModule::UnityEngine::Events::BaseInvokableCall* call);
		void AddListener(UnityEngine_CoreModule::UnityEngine::Events::BaseInvokableCall* call);
		void RemoveListener(mscorlib::System::Object* targetObj, mscorlib::System::Reflection::MethodInfo* method);
		void Clear();
		void ClearPersistent();
		mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Events::BaseInvokableCall>* PrepareInvoke();
		void _ctor();
	};
}

