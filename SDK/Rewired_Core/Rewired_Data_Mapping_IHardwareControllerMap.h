#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace Rewired_Core::Rewired::Data::Mapping
{
	struct IHardwareControllerMap
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<mscorlib::System::String*>* GetElementIdentifierNames();
		IL2CPP::Array<int32_t>* GetElementIdentifierIds();
		bool ContainsElementIdentifier(int32_t id);
		int32_t GetMappableElementIdentifierInfo(IL2CPP::Array<mscorlib::System::String*>& names, IL2CPP::Array<int32_t>& ids);
	};
}

