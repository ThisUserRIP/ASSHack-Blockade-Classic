#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Action; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
namespace mscorlib::System::Collections { struct IEnumerator; };

namespace Facebook_Unity::Facebook::Unity
{
	struct FacebookScheduler : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void Schedule(mscorlib::System::Action* action, int64_t delay);
		mscorlib::System::Collections::IEnumerator* DelayEvent(mscorlib::System::Action* action, int64_t delay);
		void _ctor();
	};
}

