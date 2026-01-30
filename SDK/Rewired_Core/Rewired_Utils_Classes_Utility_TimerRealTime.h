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
namespace Rewired_Core::Rewired::Utils::Classes::Utility { struct TimerAbs; };

namespace Rewired_Core::Rewired::Utils::Classes::Utility
{
	struct TimerRealTime : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool running;
		double pAHebWGJIxWXduKcKExXlqrkEcoi;
		double length;
		void _ctor();
		void _ctor(double inLength);
		void Start();
		void Start(double inLength);
		bool Update();
		void Clear();
		void SetLength(double inLength);
		Rewired_Core::Rewired::Utils::Classes::Utility::TimerAbs* Clone();
	};
}

