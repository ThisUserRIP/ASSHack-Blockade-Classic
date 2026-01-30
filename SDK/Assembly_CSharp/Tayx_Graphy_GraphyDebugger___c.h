#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Tayx_Graphy_GraphyDebugger.h"
namespace Assembly_CSharp::Tayx::Graphy { struct GraphyDebugger; };
namespace Assembly_CSharp::Tayx::Graphy { struct GraphyDebugger_DebugPacket; };
namespace mscorlib::System { template <typename T> struct Predicate_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace Assembly_CSharp::Tayx::Graphy
{
	struct GraphyDebugger___c : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			Assembly_CSharp::Tayx::Graphy::GraphyDebugger___c* __9;
			mscorlib::System::Predicate_1<Assembly_CSharp::Tayx::Graphy::GraphyDebugger_DebugPacket>* __9__24_0;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		void _ctor();
		bool _CheckDebugPackets_b__24_0(Assembly_CSharp::Tayx::Graphy::GraphyDebugger_DebugPacket* packet);
	};
}

