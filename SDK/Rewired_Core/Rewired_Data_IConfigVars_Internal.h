#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
namespace mscorlib::System { struct String; };
namespace Rewired_Core::Rewired::Utils::Classes::Data { template <typename TKey> struct KeyedGetSetValueStore_1; };

namespace Rewired_Core::Rewired::Data
{
	struct IConfigVars_Internal
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::Rewired::Utils::Classes::Data::KeyedGetSetValueStore_1<mscorlib::System::String>* get_values();
	};
}

