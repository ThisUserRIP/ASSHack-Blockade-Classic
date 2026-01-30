#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
namespace Rewired_Core::Rewired::Interfaces { struct IControllerElementIdentifierCommon_Internal; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IEnumerable_1; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace Rewired_Core::Rewired::Data::Mapping
{
	struct IHardwareControllerMap_Internal
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::Interfaces::IControllerElementIdentifierCommon_Internal>* get_ElementIdentifiers();
		Rewired_Core::Rewired::Interfaces::IControllerElementIdentifierCommon_Internal* GetElementIdentifier(int32_t id);
	};
}

