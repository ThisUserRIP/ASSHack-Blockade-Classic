#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Assembly_CSharp::Rewired::Demos { struct PressStartToJoinExample_Assigner_PlayerMap; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace Rewired_Core::Rewired { struct Player; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::Rewired::Demos
{
	struct PressStartToJoinExample_Assigner : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t maxPlayers;
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Rewired::Demos::PressStartToJoinExample_Assigner_PlayerMap>* playerMap;
		int32_t gamePlayerIdCounter;
		struct StaticFields
		{
			Assembly_CSharp::Rewired::Demos::PressStartToJoinExample_Assigner* instance;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static Rewired_Core::Rewired::Player* GetRewiredPlayer(int32_t gamePlayerId);
		void Awake();
		void Update();
		void AssignNextPlayer(int32_t rewiredPlayerId);
		int32_t GetNextGamePlayerId();
		void _ctor();
	};
}

