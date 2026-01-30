#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
namespace mscorlib::System { struct String; };
namespace UnityEngine_CoreModule::UnityEngine { struct Object; };
namespace UnityEngine_CoreModule::UnityEngine::Playables { struct PlayableBinding_CreateOutputMethod; };
#include "UnityEngine_Playables_PlayableBinding.h"
namespace UnityEngine_CoreModule::UnityEngine::Playables { struct PlayableBinding; };
#include "..\mscorlib\System_Double.h"
namespace mscorlib::System { struct Double; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace UnityEngine_CoreModule::UnityEngine::Playables
{
	struct PlayableBinding
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* m_StreamName;
		UnityEngine_CoreModule::UnityEngine::Object* m_SourceObject;
		mscorlib::System::Type* m_SourceBindingType;
		UnityEngine_CoreModule::UnityEngine::Playables::PlayableBinding_CreateOutputMethod* m_CreateOutputMethod;
		static void _cctor();
	};
}

