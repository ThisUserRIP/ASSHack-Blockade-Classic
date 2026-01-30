#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Tayx_Graphy_GraphyDebugger.h"
namespace Assembly_CSharp::Tayx::Graphy { struct GraphyDebugger; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Assembly_CSharp::Tayx::Graphy { struct GraphyDebugger_DebugPacket; };

namespace Assembly_CSharp::Tayx::Graphy
{
	struct GraphyDebugger___c__DisplayClass21_0 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t packetId;
		void _ctor();
		bool _RemoveAllDebugPacketsWithId_b__0(Assembly_CSharp::Tayx::Graphy::GraphyDebugger_DebugPacket* x);
	};
}

