#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace Assembly_CSharp::AssemblyCSharp { struct BotData; };
namespace UnityEngine_CoreModule::UnityEngine { struct Renderer; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace Assembly_CSharp
{
	struct TeamColor : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::AssemblyCSharp::BotData* BotData;
		mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Renderer>* _r;
		void SetTeam(int32_t team, int32_t skin);
		void _ctor();
	};
}

