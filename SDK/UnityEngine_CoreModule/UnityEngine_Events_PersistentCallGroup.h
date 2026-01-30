#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace UnityEngine_CoreModule::UnityEngine::Events { struct PersistentCall; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace UnityEngine_CoreModule::UnityEngine::Events { struct InvokableCallList; };
namespace UnityEngine_CoreModule::UnityEngine::Events { struct UnityEventBase; };

namespace UnityEngine_CoreModule::UnityEngine::Events
{
	struct PersistentCallGroup : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Events::PersistentCall>* m_Calls;
		void _ctor();
		int32_t get_Count();
		void Initialize(UnityEngine_CoreModule::UnityEngine::Events::InvokableCallList* invokableList, UnityEngine_CoreModule::UnityEngine::Events::UnityEventBase* unityEventBase);
	};
}

