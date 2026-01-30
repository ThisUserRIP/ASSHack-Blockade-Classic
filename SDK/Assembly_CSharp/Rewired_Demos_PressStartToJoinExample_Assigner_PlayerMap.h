#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_Demos_PressStartToJoinExample_Assigner.h"
namespace Assembly_CSharp::Rewired::Demos { struct PressStartToJoinExample_Assigner; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::Rewired::Demos
{
	struct PressStartToJoinExample_Assigner_PlayerMap : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t rewiredPlayerId;
		int32_t gamePlayerId;
		void _ctor(int32_t rewiredPlayerId, int32_t gamePlayerId);
	};
}

