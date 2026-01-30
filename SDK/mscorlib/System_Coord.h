#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Int16.h"
namespace mscorlib::System { struct Int16; };

namespace mscorlib::System
{
	struct Coord
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int16_t X;
		int16_t Y;
	};
}

