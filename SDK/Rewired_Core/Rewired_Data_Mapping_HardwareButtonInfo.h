#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };

namespace Rewired_Core::Rewired::Data::Mapping
{
	struct HardwareButtonInfo : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool _excludeFromPolling;
		bool _isPressureSensitive;
		bool get_excludeFromPolling();
		bool get_isPressureSensitive();
		void _ctor();
		void _ctor(bool excludeFromPolling, bool isPressureSensitive);
		mscorlib::System::Object* DeepClone();
	};
}

