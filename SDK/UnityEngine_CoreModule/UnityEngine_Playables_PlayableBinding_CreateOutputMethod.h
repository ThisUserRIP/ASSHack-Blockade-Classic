#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_MulticastDelegate.h"
#include "UnityEngine_Playables_PlayableBinding.h"
namespace UnityEngine_CoreModule::UnityEngine::Playables { struct PlayableBinding; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "UnityEngine_Playables_PlayableOutput.h"
namespace UnityEngine_CoreModule::UnityEngine::Playables { struct PlayableOutput; };
#include "UnityEngine_Playables_PlayableGraph.h"
namespace UnityEngine_CoreModule::UnityEngine::Playables { struct PlayableGraph; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct IAsyncResult; };
namespace mscorlib::System { struct AsyncCallback; };

namespace UnityEngine_CoreModule::UnityEngine::Playables
{
	struct PlayableBinding_CreateOutputMethod : mscorlib::System::MulticastDelegate
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor(mscorlib::System::Object* object, intptr_t method);
		UnityEngine_CoreModule::UnityEngine::Playables::PlayableOutput Invoke(UnityEngine_CoreModule::UnityEngine::Playables::PlayableGraph graph, mscorlib::System::String* name);
		mscorlib::System::IAsyncResult* BeginInvoke(UnityEngine_CoreModule::UnityEngine::Playables::PlayableGraph graph, mscorlib::System::String* name, mscorlib::System::AsyncCallback* callback, mscorlib::System::Object* object);
		UnityEngine_CoreModule::UnityEngine::Playables::PlayableOutput EndInvoke(mscorlib::System::IAsyncResult* result);
	};
}

