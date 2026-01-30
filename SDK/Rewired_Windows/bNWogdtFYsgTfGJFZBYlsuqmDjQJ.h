#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Rewired_Core::Rewired::Utils::Classes::Utility { struct ThreadHelper; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\Rewired_Core\Rewired_UpdateLoopType.h"

namespace Rewired_Windows
{
	struct bNWogdtFYsgTfGJFZBYlsuqmDjQJ : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			int32_t jHUgOyFSNDMOdFGxadlumSQiYspX;
			Rewired_Core::Rewired::Utils::Classes::Utility::ThreadHelper* sjdItMTCbKBFdGaktzqBOwwshKJQ;
			Rewired_Core::Rewired::Utils::Classes::Utility::ThreadHelper* WBCgQtacYnupSNNKjdpgEtaVyJz;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static int32_t get_joystickRefreshRate();
		static Rewired_Core::Rewired::Utils::Classes::Utility::ThreadHelper* get_joystickInputThread();
		static Rewired_Core::Rewired::Utils::Classes::Utility::ThreadHelper* get_joystickOutputThread();
		static void ABJfLoQtDVzrFdzdTPXKgPvavfW();
		static void stRBNWBmJzdUiVOiBCPkxcNDeQN(Rewired_Core::Rewired::UpdateLoopType A_0);
		static void PXrZGIGSLLCROHddMrTCJytIVa();
	};
}

