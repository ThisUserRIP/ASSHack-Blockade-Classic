#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Tayx_Graphy_GraphyDebugger.h"
namespace Assembly_CSharp::Tayx::Graphy { struct GraphyDebugger; };
#include "Tayx_Graphy_GraphyDebugger_DebugVariable.h"
#include "Tayx_Graphy_GraphyDebugger_DebugComparer.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };

namespace Assembly_CSharp::Tayx::Graphy
{
	struct GraphyDebugger_DebugCondition
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::Tayx::Graphy::GraphyDebugger_DebugVariable Variable;
		Assembly_CSharp::Tayx::Graphy::GraphyDebugger_DebugComparer Comparer;
		float Value;
	};
}

