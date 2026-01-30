#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_YieldInstruction.h"
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
namespace mscorlib::System { template <typename T> struct Action_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };

namespace UnityEngine_CoreModule::UnityEngine
{
	struct AsyncOperation : UnityEngine_CoreModule::UnityEngine::YieldInstruction
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		intptr_t m_Ptr;
		mscorlib::System::Action_1<UnityEngine_CoreModule::UnityEngine::AsyncOperation>* m_completeCallback;
		static void InternalDestroy(intptr_t ptr);
		bool get_isDone();
		float get_progress();
		void set_allowSceneActivation(bool value);
		void Finalize();
		void InvokeCompletionEvent();
		void _ctor();
	};
}

