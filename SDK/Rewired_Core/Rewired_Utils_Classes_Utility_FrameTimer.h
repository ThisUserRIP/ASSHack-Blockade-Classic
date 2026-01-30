#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Double.h"
namespace mscorlib::System { struct Double; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Rewired_Core::Rewired::Utils::Classes::Utility
{
	struct FrameTimer : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool running;
		double timeRemaining;
		double length;
		double overrunBuffer;
		void _ctor();
		void _ctor(double inLength);
		void kuVkVtmjAtGgvPHxoaDdAlMeprIY();
		void kuVkVtmjAtGgvPHxoaDdAlMeprIY(double A_1);
		bool rzxcwQaQDJsOGhoApWnDOXVkvyqu(double A_1, double A_2);
		void YKZBMWjnxRgiKHTlqTUxBHLfkvNW();
		void pVfcWanQoHDQHBwHZhIyUOAoBnB(double A_1);
		Rewired_Core::Rewired::Utils::Classes::Utility::FrameTimer* rWYvcGEJCUIWpburfJiHEPzmhpX();
	};
}

